// license:BSD-3-Clause
// copyright-holders:Juergen Buchmueller,Ernesto Corvi
#pragma once

#ifndef __Z8000_H__
#define __Z8000_H__

#include "cpu/z80/z80daisy.h"


enum
{
	Z8000_PC=1,
	Z8000_PPC, Z8000_NSPSEG, Z8000_NSPOFF, Z8000_FCW,
	Z8000_PSAPSEG, Z8000_PSAPOFF, Z8000_REFRESH,
	Z8000_IRQ_REQ, Z8000_IRQ_SRV, Z8000_IRQ_VEC,
	Z8000_R0, Z8000_R1, Z8000_R2, Z8000_R3,
	Z8000_R4, Z8000_R5, Z8000_R6, Z8000_R7,
	Z8000_R8, Z8000_R9, Z8000_R10, Z8000_R11,
	Z8000_R12, Z8000_R13, Z8000_R14, Z8000_R15
};

/* Interrupt Types that can be generated by outside sources */
#define Z8000_EPU       0x8000  /* extended instruction trap */
#define Z8000_TRAP      0x4000  /* privileged instruction trap */
#define Z8000_NMI       0x2000  /* non maskable interrupt */
#define Z8000_SEGTRAP   0x1000  /* segment trap (Z8001) */
#define Z8000_NVI       0x0800  /* non vectored interrupt */
#define Z8000_VI        0x0400  /* vectored interrupt (LSB is vector)  */
#define Z8000_SYSCALL   0x0200  /* system call (lsb is vector) */
#define Z8000_HALT      0x0100  /* halted flag  */

#define MCFG_Z8000_MO(_devcb) \
	devcb = &z8002_device::set_mo_callback(*device, DEVCB_##_devcb);

class z8002_device : public cpu_device, public z80_daisy_chain_interface
{
public:
	// construction/destruction
	z8002_device(const machine_config &mconfig, const char *tag, device_t *owner, UINT32 clock);
	z8002_device(const machine_config &mconfig, device_type type, const char *name, const char *tag, device_t *owner, UINT32 clock, const char *shortname, const char *source);
	~z8002_device();

	template<class _Object> static devcb_base &set_mo_callback(device_t &device, _Object object) { return downcast<z8002_device &>(device).m_mo_out.set_callback(object); }
	DECLARE_WRITE_LINE_MEMBER(mi_w) { m_mi = state; } // XXX: this has to apply in the middle of an insn for now

protected:
	// device-level overrides
	virtual void device_start() override;
	virtual void device_reset() override;

	// device_execute_interface overrides
	virtual UINT32 execute_min_cycles() const override { return 2; }
	virtual UINT32 execute_max_cycles() const override { return 744; }
	virtual UINT32 execute_input_lines() const override { return 2; }
	virtual UINT32 execute_default_irq_vector() const override { return 0xff; }
	virtual void execute_run() override;
	virtual void execute_set_input(int inputnum, int state) override;

	// device_memory_interface overrides
	virtual const address_space_config *memory_space_config(address_spacenum spacenum = AS_0) const override
	{
		switch (spacenum)
		{
			case AS_PROGRAM: return &m_program_config;
			case AS_IO:      return &m_io_config;
			default:         return nullptr;
		}
	}

	// device_state_interface overrides
	virtual void state_string_export(const device_state_entry &entry, std::string &str) const override;

	// device_disasm_interface overrides
	virtual UINT32 disasm_min_opcode_bytes() const override { return 2; }
	virtual UINT32 disasm_max_opcode_bytes() const override { return 6; }
	virtual offs_t disasm_disassemble(char *buffer, offs_t pc, const UINT8 *oprom, const UINT8 *opram, UINT32 options) override;

	address_space_config m_program_config;
	address_space_config m_io_config;
	devcb_write_line m_mo_out;

	UINT32  m_op[4];      /* opcodes/data of current instruction */
	UINT32  m_ppc;        /* previous program counter */
	UINT32  m_pc;         /* program counter */
	UINT16  m_psapseg;    /* program status pointer, segment (Z8001 only) */
	UINT16  m_psapoff;    /* program status pointer, offset */
	UINT16  m_fcw;        /* flags and control word */
	UINT16  m_refresh;    /* refresh timer/counter */
	UINT16  m_nspseg;     /* system stack pointer, segment (Z8001 only) */
	UINT16  m_nspoff;     /* system stack pointer, offset */
	UINT16  m_irq_req;    /* CPU is halted, interrupt or trap request */
	UINT16  m_irq_vec;    /* interrupt vector */
	UINT32  m_op_valid;   /* bit field indicating if given op[] field is already initialized */
	union
	{
		UINT8   B[16]; /* RL0,RH0,RL1,RH1...RL7,RH7 */
		UINT16  W[16]; /* R0,R1,R2...R15 */
		UINT32  L[8];  /* RR0,RR2,RR4..RR14 */
		UINT64  Q[4];  /* RQ0,RQ4,..RQ12 */
	} m_regs;             /* registers */
	int m_nmi_state;      /* NMI line state */
	int m_irq_state[2];   /* IRQ line states (NVI, VI) */
	int m_mi;
	address_space *m_program;
	address_space *m_data;
	direct_read_data *m_direct;
	address_space *m_io;
	int m_icount;
	int m_vector_mult;

	void clear_internal_state();
	void register_debug_state();
	virtual int segmented_mode();
	static inline UINT32 addr_add(UINT32 addr, UINT32 addend);
	static inline UINT32 addr_sub(UINT32 addr, UINT32 subtrahend);
	inline UINT16 RDOP();
	inline UINT32 get_operand(int opnum);
	inline UINT32 get_addr_operand(int opnum);
	inline UINT32 get_raw_addr_operand(int opnum);
	virtual UINT32 adjust_addr_for_nonseg_mode(UINT32 addr);
	inline UINT8 RDMEM_B(address_spacenum spacenum, UINT32 addr);
	inline UINT16 RDMEM_W(address_spacenum spacenum, UINT32 addr);
	inline UINT32 RDMEM_L(address_spacenum spacenum, UINT32 addr);
	inline void WRMEM_B(address_spacenum spacenum, UINT32 addr, UINT8 value);
	inline void WRMEM_W(address_spacenum spacenum, UINT32 addr, UINT16 value);
	inline void WRMEM_L(address_spacenum spacenum, UINT32 addr, UINT32 value);
	inline UINT8 RDPORT_B(int mode, UINT16 addr);
	virtual UINT16 RDPORT_W(int mode, UINT16 addr);
	inline void WRPORT_B(int mode, UINT16 addr, UINT8 value);
	virtual void WRPORT_W(int mode, UINT16 addr, UINT16 value);
	inline void cycles(int cycles);
	inline void set_irq(int type);
	virtual void PUSH_PC();
	virtual void CHANGE_FCW(UINT16 fcw);
	static inline UINT32 make_segmented_addr(UINT32 addr);
	static inline UINT32 segmented_addr(UINT32 addr);
	inline UINT32 addr_from_reg(int regno);
	inline void addr_to_reg(int regno, UINT32 addr);
	inline void add_to_addr_reg(int regno, UINT16 addend);
	inline void sub_from_addr_reg(int regno, UINT16 subtrahend);
	inline void set_pc(UINT32 addr);
	inline void PUSHW(UINT8 dst, UINT16 value);
	inline UINT16 POPW(UINT8 src);
	inline void PUSHL(UINT8 dst, UINT32 value);
	inline UINT32 POPL(UINT8 src);
	inline UINT8 ADDB(UINT8 dest, UINT8 value);
	inline UINT16 ADDW(UINT16 dest, UINT16 value);
	inline UINT32 ADDL(UINT32 dest, UINT32 value);
	inline UINT8 ADCB(UINT8 dest, UINT8 value);
	inline UINT16 ADCW(UINT16 dest, UINT16 value);
	inline UINT8 SUBB(UINT8 dest, UINT8 value);
	inline UINT16 SUBW(UINT16 dest, UINT16 value);
	inline UINT32 SUBL(UINT32 dest, UINT32 value);
	inline UINT8 SBCB(UINT8 dest, UINT8 value);
	inline UINT16 SBCW(UINT16 dest, UINT16 value);
	inline UINT8 ORB(UINT8 dest, UINT8 value);
	inline UINT16 ORW(UINT16 dest, UINT16 value);
	inline UINT8 ANDB(UINT8 dest, UINT8 value);
	inline UINT16 ANDW(UINT16 dest, UINT16 value);
	inline UINT8 XORB(UINT8 dest, UINT8 value);
	inline UINT16 XORW(UINT16 dest, UINT16 value);
	inline void CPB(UINT8 dest, UINT8 value);
	inline void CPW(UINT16 dest, UINT16 value);
	inline void CPL(UINT32 dest, UINT32 value);
	inline UINT8 COMB(UINT8 dest);
	inline UINT16 COMW(UINT16 dest);
	inline UINT8 NEGB(UINT8 dest);
	inline UINT16 NEGW(UINT16 dest);
	inline void TESTB(UINT8 result);
	inline void TESTW(UINT16 dest);
	inline void TESTL(UINT32 dest);
	inline UINT8 INCB(UINT8 dest, UINT8 value);
	inline UINT16 INCW(UINT16 dest, UINT16 value);
	inline UINT8 DECB(UINT8 dest, UINT8 value);
	inline UINT16 DECW(UINT16 dest, UINT16 value);
	inline UINT32 MULTW(UINT16 dest, UINT16 value);
	inline UINT64 MULTL(UINT32 dest, UINT32 value);
	inline UINT32 DIVW(UINT32 dest, UINT16 value);
	inline UINT64 DIVL(UINT64 dest, UINT32 value);
	inline UINT8 RLB(UINT8 dest, UINT8 twice);
	inline UINT16 RLW(UINT16 dest, UINT8 twice);
	inline UINT8 RLCB(UINT8 dest, UINT8 twice);
	inline UINT16 RLCW(UINT16 dest, UINT8 twice);
	inline UINT8 RRB(UINT8 dest, UINT8 twice);
	inline UINT16 RRW(UINT16 dest, UINT8 twice);
	inline UINT8 RRCB(UINT8 dest, UINT8 twice);
	inline UINT16 RRCW(UINT16 dest, UINT8 twice);
	inline UINT8 SDAB(UINT8 dest, INT8 count);
	inline UINT16 SDAW(UINT16 dest, INT8 count);
	inline UINT32 SDAL(UINT32 dest, INT8 count);
	inline UINT8 SDLB(UINT8 dest, INT8 count);
	inline UINT16 SDLW(UINT16 dest, INT8 count);
	inline UINT32 SDLL(UINT32 dest, INT8 count);
	inline UINT8 SLAB(UINT8 dest, UINT8 count);
	inline UINT16 SLAW(UINT16 dest, UINT8 count);
	inline UINT32 SLAL(UINT32 dest, UINT8 count);
	inline UINT8 SLLB(UINT8 dest, UINT8 count);
	inline UINT16 SLLW(UINT16 dest, UINT8 count);
	inline UINT32 SLLL(UINT32 dest, UINT8 count);
	inline UINT8 SRAB(UINT8 dest, UINT8 count);
	inline UINT16 SRAW(UINT16 dest, UINT8 count);
	inline UINT32 SRAL(UINT32 dest, UINT8 count);
	inline UINT8 SRLB(UINT8 dest, UINT8 count);
	inline UINT16 SRLW(UINT16 dest, UINT8 count);
	inline UINT32 SRLL(UINT32 dest, UINT8 count);
	inline void Interrupt();
	virtual UINT32 GET_PC(UINT32 VEC);
	virtual UINT16 GET_FCW(UINT32 VEC);
	virtual UINT32 F_SEG_Z8001();
	virtual UINT32 PSA_ADDR();
	virtual UINT32 read_irq_vector();

public:
	void zinvalid();
	void Z00_0000_dddd_imm8();
	void Z00_ssN0_dddd();
	void Z01_0000_dddd_imm16();
	void Z01_ssN0_dddd();
	void Z02_0000_dddd_imm8();
	void Z02_ssN0_dddd();
	void Z03_0000_dddd_imm16();
	void Z03_ssN0_dddd();
	void Z04_0000_dddd_imm8();
	void Z04_ssN0_dddd();
	void Z05_0000_dddd_imm16();
	void Z05_ssN0_dddd();
	void Z06_0000_dddd_imm8();
	void Z06_ssN0_dddd();
	void Z07_0000_dddd_imm16();
	void Z07_ssN0_dddd();
	void Z08_0000_dddd_imm8();
	void Z08_ssN0_dddd();
	void Z09_0000_dddd_imm16();
	void Z09_ssN0_dddd();
	void Z0A_0000_dddd_imm8();
	void Z0A_ssN0_dddd();
	void Z0B_0000_dddd_imm16();
	void Z0B_ssN0_dddd();
	void Z0C_ddN0_0000();
	void Z0C_ddN0_0001_imm8();
	void Z0C_ddN0_0010();
	void Z0C_ddN0_0100();
	void Z0C_ddN0_0101_imm8();
	void Z0C_ddN0_0110();
	void Z0C_ddN0_1000();
	void Z0D_ddN0_0000();
	void Z0D_ddN0_0001_imm16();
	void Z0D_ddN0_0010();
	void Z0D_ddN0_0100();
	void Z0D_ddN0_0101_imm16();
	void Z0D_ddN0_0110();
	void Z0D_ddN0_1000();
	void Z0D_ddN0_1001_imm16();
	void Z0E_imm8();
	void Z0F_imm8();
	void Z10_0000_dddd_imm32();
	void Z10_ssN0_dddd();
	void Z11_ddN0_ssN0();
	void Z12_0000_dddd_imm32();
	void Z12_ssN0_dddd();
	void Z13_ddN0_ssN0();
	void Z14_0000_dddd_imm32();
	void Z14_ssN0_dddd();
	void Z15_ssN0_ddN0();
	void Z16_0000_dddd_imm32();
	void Z16_ssN0_dddd();
	void Z17_ssN0_ddN0();
	void Z18_00N0_dddd_imm32();
	void Z18_ssN0_dddd();
	void Z19_0000_dddd_imm16();
	void Z19_ssN0_dddd();
	void Z1A_0000_dddd_imm32();
	void Z1A_ssN0_dddd();
	void Z1B_0000_dddd_imm16();
	void Z1B_ssN0_dddd();
	void Z1C_ddN0_1000();
	void Z1C_ddN0_1001_0000_ssss_0000_nmin1();
	void Z1C_ssN0_0001_0000_dddd_0000_nmin1();
	void Z1D_ddN0_ssss();
	void Z1E_ddN0_cccc();
	void Z1F_ddN0_0000();
	void Z20_ssN0_dddd();
	void Z21_0000_dddd_imm16();
	void Z21_ssN0_dddd();
	void Z22_0000_ssss_0000_dddd_0000_0000();
	void Z22_ddN0_imm4();
	void Z23_0000_ssss_0000_dddd_0000_0000();
	void Z23_ddN0_imm4();
	void Z24_0000_ssss_0000_dddd_0000_0000();
	void Z24_ddN0_imm4();
	void Z25_0000_ssss_0000_dddd_0000_0000();
	void Z25_ddN0_imm4();
	void Z26_0000_ssss_0000_dddd_0000_0000();
	void Z26_ddN0_imm4();
	void Z27_0000_ssss_0000_dddd_0000_0000();
	void Z27_ddN0_imm4();
	void Z28_ddN0_imm4m1();
	void Z29_ddN0_imm4m1();
	void Z2A_ddN0_imm4m1();
	void Z2B_ddN0_imm4m1();
	void Z2C_ssN0_dddd();
	void Z2D_ssN0_dddd();
	void Z2E_ddN0_ssss();
	void Z2F_ddN0_ssss();
	void Z30_0000_dddd_dsp16();
	void Z30_ssN0_dddd_imm16();
	void Z31_0000_dddd_dsp16();
	void Z31_ssN0_dddd_imm16();
	void Z32_0000_ssss_dsp16();
	void Z32_ddN0_ssss_imm16();
	void Z33_0000_ssss_dsp16();
	void Z33_ddN0_ssss_imm16();
	void Z34_0000_dddd_dsp16();
	void Z34_ssN0_dddd_imm16();
	void Z35_0000_dddd_dsp16();
	void Z35_ssN0_dddd_imm16();
	void Z36_0000_0000();
	void Z36_imm8();
	void Z37_0000_ssss_dsp16();
	void Z37_ddN0_ssss_imm16();
	void Z38_imm8();
	void Z39_ssN0_0000();
	void Z3A_ssss_0000_0000_aaaa_dddd_x000();
	void Z3A_ssss_0001_0000_aaaa_dddd_x000();
	void Z3A_ssss_0010_0000_aaaa_dddd_x000();
	void Z3A_ssss_0011_0000_aaaa_dddd_x000();
	void Z3A_dddd_0100_imm16();
	void Z3A_dddd_0101_imm16();
	void Z3A_ssss_0110_imm16();
	void Z3A_ssss_0111_imm16();
	void Z3A_ssss_1000_0000_aaaa_dddd_x000();
	void Z3A_ssss_1001_0000_aaaa_dddd_x000();
	void Z3A_ssss_1010_0000_aaaa_dddd_x000();
	void Z3A_ssss_1011_0000_aaaa_dddd_x000();
	void Z3B_ssss_0000_0000_aaaa_dddd_x000();
	void Z3B_ssss_0001_0000_aaaa_dddd_x000();
	void Z3B_ssss_0010_0000_aaaa_dddd_x000();
	void Z3B_ssss_0011_0000_aaaa_dddd_x000();
	void Z3B_dddd_0100_imm16();
	void Z3B_dddd_0101_imm16();
	void Z3B_ssss_0110_imm16();
	void Z3B_ssss_0111_imm16();
	void Z3B_ssss_1000_0000_aaaa_dddd_x000();
	void Z3B_ssss_1001_0000_aaaa_dddd_x000();
	void Z3B_ssss_1010_0000_aaaa_dddd_x000();
	void Z3B_ssss_1011_0000_aaaa_dddd_x000();
	void Z3C_ssss_dddd();
	void Z3D_ssss_dddd();
	void Z3E_dddd_ssss();
	void Z3F_dddd_ssss();
	void Z40_0000_dddd_addr();
	void Z40_ssN0_dddd_addr();
	void Z41_0000_dddd_addr();
	void Z41_ssN0_dddd_addr();
	void Z42_0000_dddd_addr();
	void Z42_ssN0_dddd_addr();
	void Z43_0000_dddd_addr();
	void Z43_ssN0_dddd_addr();
	void Z44_0000_dddd_addr();
	void Z44_ssN0_dddd_addr();
	void Z45_0000_dddd_addr();
	void Z45_ssN0_dddd_addr();
	void Z46_0000_dddd_addr();
	void Z46_ssN0_dddd_addr();
	void Z47_0000_dddd_addr();
	void Z47_ssN0_dddd_addr();
	void Z48_0000_dddd_addr();
	void Z48_ssN0_dddd_addr();
	void Z49_0000_dddd_addr();
	void Z49_ssN0_dddd_addr();
	void Z4A_0000_dddd_addr();
	void Z4A_ssN0_dddd_addr();
	void Z4B_0000_dddd_addr();
	void Z4B_ssN0_dddd_addr();
	void Z4C_0000_0000_addr();
	void Z4C_0000_0001_addr_imm8();
	void Z4C_0000_0010_addr();
	void Z4C_0000_0100_addr();
	void Z4C_0000_0101_addr_imm8();
	void Z4C_0000_0110_addr();
	void Z4C_0000_1000_addr();
	void Z4C_ddN0_0000_addr();
	void Z4C_ddN0_0001_addr_imm8();
	void Z4C_ddN0_0010_addr();
	void Z4C_ddN0_0100_addr();
	void Z4C_ddN0_0101_addr_imm8();
	void Z4C_ddN0_0110_addr();
	void Z4C_ddN0_1000_addr();
	void Z4D_0000_0000_addr();
	void Z4D_0000_0001_addr_imm16();
	void Z4D_0000_0010_addr();
	void Z4D_0000_0100_addr();
	void Z4D_0000_0101_addr_imm16();
	void Z4D_0000_0110_addr();
	void Z4D_0000_1000_addr();
	void Z4D_ddN0_0000_addr();
	void Z4D_ddN0_0001_addr_imm16();
	void Z4D_ddN0_0010_addr();
	void Z4D_ddN0_0100_addr();
	void Z4D_ddN0_0101_addr_imm16();
	void Z4D_ddN0_0110_addr();
	void Z4D_ddN0_1000_addr();
	void Z4E_ddN0_ssN0_addr();
	void Z50_0000_dddd_addr();
	void Z50_ssN0_dddd_addr();
	void Z51_ddN0_0000_addr();
	void Z51_ddN0_ssN0_addr();
	void Z52_0000_dddd_addr();
	void Z52_ssN0_dddd_addr();
	void Z53_ddN0_0000_addr();
	void Z53_ddN0_ssN0_addr();
	void Z54_0000_dddd_addr();
	void Z54_ssN0_dddd_addr();
	void Z55_ssN0_0000_addr();
	void Z55_ssN0_ddN0_addr();
	void Z56_0000_dddd_addr();
	void Z56_ssN0_dddd_addr();
	void Z57_ssN0_0000_addr();
	void Z57_ssN0_ddN0_addr();
	void Z58_0000_dddd_addr();
	void Z58_ssN0_dddd_addr();
	void Z59_0000_dddd_addr();
	void Z59_ssN0_dddd_addr();
	void Z5A_0000_dddd_addr();
	void Z5A_ssN0_dddd_addr();
	void Z5B_0000_dddd_addr();
	void Z5B_ssN0_dddd_addr();
	void Z5C_0000_0001_0000_dddd_0000_nmin1_addr();
	void Z5C_0000_1000_addr();
	void Z5C_0000_1001_0000_ssss_0000_nmin1_addr();
	void Z5C_ddN0_1000_addr();
	void Z5C_ddN0_1001_0000_ssN0_0000_nmin1_addr();
	void Z5C_ssN0_0001_0000_dddd_0000_nmin1_addr();
	void Z5D_0000_ssss_addr();
	void Z5D_ddN0_ssss_addr();
	void Z5E_0000_cccc_addr();
	void Z5E_ddN0_cccc_addr();
	void Z5F_0000_0000_addr();
	void Z5F_ddN0_0000_addr();
	void Z60_0000_dddd_addr();
	void Z60_ssN0_dddd_addr();
	void Z61_0000_dddd_addr();
	void Z61_ssN0_dddd_addr();
	void Z62_0000_imm4_addr();
	void Z62_ddN0_imm4_addr();
	void Z63_0000_imm4_addr();
	void Z63_ddN0_imm4_addr();
	void Z64_0000_imm4_addr();
	void Z64_ddN0_imm4_addr();
	void Z65_0000_imm4_addr();
	void Z65_ddN0_imm4_addr();
	void Z66_0000_imm4_addr();
	void Z66_ddN0_imm4_addr();
	void Z67_0000_imm4_addr();
	void Z67_ddN0_imm4_addr();
	void Z68_0000_imm4m1_addr();
	void Z68_ddN0_imm4m1_addr();
	void Z69_0000_imm4m1_addr();
	void Z69_ddN0_imm4m1_addr();
	void Z6A_0000_imm4m1_addr();
	void Z6A_ddN0_imm4m1_addr();
	void Z6B_0000_imm4m1_addr();
	void Z6B_ddN0_imm4m1_addr();
	void Z6C_0000_dddd_addr();
	void Z6C_ssN0_dddd_addr();
	void Z6D_0000_dddd_addr();
	void Z6D_ssN0_dddd_addr();
	void Z6E_0000_ssss_addr();
	void Z6E_ddN0_ssss_addr();
	void Z6F_0000_ssss_addr();
	void Z6F_ddN0_ssss_addr();
	void Z70_ssN0_dddd_0000_xxxx_0000_0000();
	void Z71_ssN0_dddd_0000_xxxx_0000_0000();
	void Z72_ddN0_ssss_0000_xxxx_0000_0000();
	void Z73_ddN0_ssss_0000_xxxx_0000_0000();
	void Z74_ssN0_dddd_0000_xxxx_0000_0000();
	void Z75_ssN0_dddd_0000_xxxx_0000_0000();
	void Z76_0000_dddd_addr();
	void Z76_ssN0_dddd_addr();
	void Z77_ddN0_ssss_0000_xxxx_0000_0000();
	void Z78_imm8();
	void Z79_0000_0000_addr();
	void Z79_ssN0_0000_addr();
	void Z7A_0000_0000();
	void Z7B_0000_0000();
	void Z7B_0000_1000();
	void Z7B_0000_1001();
	void Z7B_0000_1010();
	void Z7B_dddd_1101();
	void Z7C_0000_00ii();
	void Z7C_0000_01ii();
	void Z7D_dddd_0ccc();
	void Z7D_ssss_1ccc();
	void Z7E_imm8();
	void Z7F_imm8();
	void Z80_ssss_dddd();
	void Z81_ssss_dddd();
	void Z82_ssss_dddd();
	void Z83_ssss_dddd();
	void Z84_ssss_dddd();
	void Z85_ssss_dddd();
	void Z86_ssss_dddd();
	void Z87_ssss_dddd();
	void Z88_ssss_dddd();
	void Z89_ssss_dddd();
	void Z8A_ssss_dddd();
	void Z8B_ssss_dddd();
	void Z8C_dddd_0000();
	void Z8C_dddd_0010();
	void Z8C_dddd_0100();
	void Z8C_dddd_0110();
	void Z8C_dddd_0001();
	void Z8C_dddd_1000();
	void Z8C_dddd_1001();
	void Z8D_0000_0111();
	void Z8D_dddd_0000();
	void Z8D_dddd_0010();
	void Z8D_dddd_0100();
	void Z8D_dddd_0110();
	void Z8D_dddd_1000();
	void Z8D_imm4_0001();
	void Z8D_imm4_0011();
	void Z8D_imm4_0101();
	void Z8E_imm8();
	void Z8F_imm8();
	void Z90_ssss_dddd();
	void Z91_ddN0_ssss();
	void Z92_ssss_dddd();
	void Z93_ddN0_ssss();
	void Z94_ssss_dddd();
	void Z95_ssN0_dddd();
	void Z96_ssss_dddd();
	void Z97_ssN0_dddd();
	void Z98_ssss_dddd();
	void Z99_ssss_dddd();
	void Z9A_ssss_dddd();
	void Z9B_ssss_dddd();
	void Z9C_dddd_1000();
	void Z9D_imm8();
	void Z9E_0000_cccc();
	void Z9F_imm8();
	void ZA0_ssss_dddd();
	void ZA1_ssss_dddd();
	void ZA2_dddd_imm4();
	void ZA3_dddd_imm4();
	void ZA4_dddd_imm4();
	void ZA5_dddd_imm4();
	void ZA6_dddd_imm4();
	void ZA7_dddd_imm4();
	void ZA8_dddd_imm4m1();
	void ZA9_dddd_imm4m1();
	void ZAA_dddd_imm4m1();
	void ZAB_dddd_imm4m1();
	void ZAC_ssss_dddd();
	void ZAD_ssss_dddd();
	void ZAE_dddd_cccc();
	void ZAF_dddd_cccc();
	void ZB0_dddd_0000();
	void ZB1_dddd_0000();
	void ZB1_dddd_0111();
	void ZB1_dddd_1010();
	void ZB2_dddd_0001_imm8();
	void ZB2_dddd_0011_0000_ssss_0000_0000();
	void ZB2_dddd_00I0();
	void ZB2_dddd_01I0();
	void ZB2_dddd_1001_imm8();
	void ZB2_dddd_1011_0000_ssss_0000_0000();
	void ZB2_dddd_10I0();
	void ZB2_dddd_11I0();
	void ZB3_dddd_0001_imm8();
	void ZB3_dddd_0011_0000_ssss_0000_0000();
	void ZB3_dddd_00I0();
	void ZB3_dddd_0101_imm8();
	void ZB3_dddd_0111_0000_ssss_0000_0000();
	void ZB3_dddd_01I0();
	void ZB3_dddd_1001_imm8();
	void ZB3_dddd_1011_0000_ssss_0000_0000();
	void ZB3_dddd_10I0();
	void ZB3_dddd_1101_imm8();
	void ZB3_dddd_1111_0000_ssss_0000_0000();
	void ZB3_dddd_11I0();
	void ZB4_ssss_dddd();
	void ZB5_ssss_dddd();
	void ZB6_ssss_dddd();
	void ZB7_ssss_dddd();
	void ZB8_ddN0_0010_0000_rrrr_ssN0_0000();
	void ZB8_ddN0_0110_0000_rrrr_ssN0_1110();
	void ZB8_ddN0_1010_0000_rrrr_ssN0_0000();
	void ZB8_ddN0_1110_0000_rrrr_ssN0_1110();
	void ZB8_ddN0_0000_0000_rrrr_ssN0_0000();
	void ZB8_ddN0_0100_0000_rrrr_ssN0_0000();
	void ZB8_ddN0_1000_0000_rrrr_ssN0_0000();
	void ZB8_ddN0_1100_0000_rrrr_ssN0_0000();
	void ZB9_imm8();
	void ZBA_ssN0_0000_0000_rrrr_dddd_cccc();
	void ZBA_ssN0_0001_0000_rrrr_ddN0_x000();
	void ZBA_ssN0_0010_0000_rrrr_ddN0_cccc();
	void ZBA_ssN0_0100_0000_rrrr_dddd_cccc();
	void ZBA_ssN0_0110_0000_rrrr_ddN0_cccc();
	void ZBA_ssN0_1000_0000_rrrr_dddd_cccc();
	void ZBA_ssN0_1001_0000_rrrr_ddN0_x000();
	void ZBA_ssN0_1010_0000_rrrr_ddN0_cccc();
	void ZBA_ssN0_1100_0000_rrrr_dddd_cccc();
	void ZBA_ssN0_1110_0000_rrrr_ddN0_cccc();
	void ZBB_ssN0_0000_0000_rrrr_dddd_cccc();
	void ZBB_ssN0_0001_0000_rrrr_ddN0_x000();
	void ZBB_ssN0_0010_0000_rrrr_ddN0_cccc();
	void ZBB_ssN0_0100_0000_rrrr_dddd_cccc();
	void ZBB_ssN0_0110_0000_rrrr_ddN0_cccc();
	void ZBB_ssN0_1000_0000_rrrr_dddd_cccc();
	void ZBB_ssN0_1001_0000_rrrr_ddN0_x000();
	void ZBB_ssN0_1010_0000_rrrr_ddN0_cccc();
	void ZBB_ssN0_1100_0000_rrrr_dddd_cccc();
	void ZBB_ssN0_1110_0000_rrrr_ddN0_cccc();
	void ZBC_aaaa_bbbb();
	void ZBD_dddd_imm4();
	void ZBE_aaaa_bbbb();
	void ZBF_imm8();
	void Z20_0000_dddd_imm8();
	void ZC_dddd_imm8();
	void ZD_dsp12();
	void ZE_cccc_dsp8();
	void ZF_dddd_0dsp7();
	void ZF_dddd_1dsp7();
};


class z8001_device : public z8002_device
{
public:
	// construction/destruction
	z8001_device(const machine_config &mconfig, const char *tag, device_t *owner, UINT32 clock);

protected:
	// device-level overrides
	virtual void device_start() override;
	virtual void device_reset() override;

	// device_memory_interface overrides
	virtual const address_space_config *memory_space_config(address_spacenum spacenum = AS_0) const override
	{
		switch (spacenum)
		{
			case AS_PROGRAM: return &m_program_config;
			case AS_DATA:    return &m_data_config;
			case AS_IO:      return &m_io_config;
			default:         return nullptr;
		}
	}

	// device_disasm_interface overrides
	virtual UINT32 disasm_max_opcode_bytes() const override { return 8; }

	address_space_config m_data_config;

	virtual int segmented_mode() override;
	virtual UINT32 adjust_addr_for_nonseg_mode(UINT32 addr) override;
	virtual UINT16 RDPORT_W(int mode, UINT16 addr) override;
	virtual void WRPORT_W(int mode, UINT16 addr, UINT16 value) override;
	virtual void PUSH_PC() override;
	virtual void CHANGE_FCW(UINT16 fcw) override;
	virtual UINT32 GET_PC(UINT32 VEC) override;
	virtual UINT16 GET_FCW(UINT32 VEC) override;
	virtual UINT32 F_SEG_Z8001() override;
	virtual UINT32 PSA_ADDR() override;
	virtual UINT32 read_irq_vector() override;

private:
	void z8k_disass_mode(int ref, int params, const char *param[]);
};


extern const device_type Z8001;
extern const device_type Z8002;


/* possible values for z8k_segm_mode */
#define Z8K_SEGM_MODE_NONSEG 0
#define Z8K_SEGM_MODE_SEG    1
#define Z8K_SEGM_MODE_AUTO   2

#endif /* __Z8000_H__ */
