void deco16_device::brk_16_imp_full()
{

	// The 6502 bug when a nmi occurs in a brk is reproduced (case !irq_taken && nmi_state)

	if(irq_taken) {

	if(icount == 0) { inst_substate = 1; return; }
		read_pc_noinc();
	icount--;

	} else {

	if(icount == 0) { inst_substate = 2; return; }
		read_pc();
	icount--;

	}

	if(icount == 0) { inst_substate = 3; return; }
	write(SP, PC >> 8);
	icount--;

	dec_SP();

	if(icount == 0) { inst_substate = 4; return; }
	write(SP, PC);
	icount--;

	dec_SP();

	if(icount == 0) { inst_substate = 5; return; }
	write(SP, irq_taken ? P & ~F_B : P);
	icount--;

	dec_SP();

	if(nmi_state) {

	if(icount == 0) { inst_substate = 6; return; }
		PC = read_arg(0xfff7);
	icount--;

	if(icount == 0) { inst_substate = 7; return; }
		PC = set_h(PC, read_arg(0xfff6));
	icount--;

		nmi_state = false;

		standard_irq_callback(NMI_LINE);

	} else {

	if(icount == 0) { inst_substate = 8; return; }
		PC = read_arg(0xfff3);
	icount--;

	if(icount == 0) { inst_substate = 9; return; }
		PC = set_h(PC, read_arg(0xfff2));
	icount--;

		if(irq_taken)

			standard_irq_callback(IRQ_LINE);

	}

	irq_taken = false;

	P |= F_I; // Do *not* move after the prefetch

	if(icount == 0) { inst_substate = 10; return; }
	prefetch();
	icount--;

	inst_state = -1;

}

void deco16_device::brk_16_imp_partial()
{
switch(inst_substate) {
case 0:

	// The 6502 bug when a nmi occurs in a brk is reproduced (case !irq_taken && nmi_state)

	if(irq_taken) {

	if(icount == 0) { inst_substate = 1; return; }
case 1:
		read_pc_noinc();
	icount--;

	} else {

	if(icount == 0) { inst_substate = 2; return; }
case 2:
		read_pc();
	icount--;

	}

	if(icount == 0) { inst_substate = 3; return; }
case 3:
	write(SP, PC >> 8);
	icount--;

	dec_SP();

	if(icount == 0) { inst_substate = 4; return; }
case 4:
	write(SP, PC);
	icount--;

	dec_SP();

	if(icount == 0) { inst_substate = 5; return; }
case 5:
	write(SP, irq_taken ? P & ~F_B : P);
	icount--;

	dec_SP();

	if(nmi_state) {

	if(icount == 0) { inst_substate = 6; return; }
case 6:
		PC = read_arg(0xfff7);
	icount--;

	if(icount == 0) { inst_substate = 7; return; }
case 7:
		PC = set_h(PC, read_arg(0xfff6));
	icount--;

		nmi_state = false;

		standard_irq_callback(NMI_LINE);

	} else {

	if(icount == 0) { inst_substate = 8; return; }
case 8:
		PC = read_arg(0xfff3);
	icount--;

	if(icount == 0) { inst_substate = 9; return; }
case 9:
		PC = set_h(PC, read_arg(0xfff2));
	icount--;

		if(irq_taken)

			standard_irq_callback(IRQ_LINE);

	}

	irq_taken = false;

	P |= F_I; // Do *not* move after the prefetch

	if(icount == 0) { inst_substate = 10; return; }
case 10:
	prefetch();
	icount--;

	inst_state = -1;

}
	inst_substate = 0;
}


void deco16_device::ill_non_full()
{

	logerror("%s: Unimplemented instruction %02x\n", tag(), inst_state);

	if(icount == 0) { inst_substate = 1; return; }
	prefetch();
	icount--;

}

void deco16_device::ill_non_partial()
{
switch(inst_substate) {
case 0:

	logerror("%s: Unimplemented instruction %02x\n", tag(), inst_state);

	if(icount == 0) { inst_substate = 1; return; }
case 1:
	prefetch();
	icount--;

}
	inst_substate = 0;
}


void deco16_device::u0B_zpg_full()
{

	if(icount == 0) { inst_substate = 1; return; }
	TMP2 = read_pc();
	icount--;

	if(DECO16_VERBOSE)

		logerror("%s: OP0B %02x (%04x)\n", tag(), NPC, TMP2);

	if(icount == 0) { inst_substate = 2; return; }
	prefetch();
	icount--;

}

void deco16_device::u0B_zpg_partial()
{
switch(inst_substate) {
case 0:

	if(icount == 0) { inst_substate = 1; return; }
case 1:
	TMP2 = read_pc();
	icount--;

	if(DECO16_VERBOSE)

		logerror("%s: OP0B %02x (%04x)\n", tag(), NPC, TMP2);

	if(icount == 0) { inst_substate = 2; return; }
case 2:
	prefetch();
	icount--;

}
	inst_substate = 0;
}


void deco16_device::u13_zpg_full()
{

	if(icount == 0) { inst_substate = 1; return; }
	TMP2 = read_pc();
	icount--;

	if(DECO16_VERBOSE)

		logerror("%s: OP13 %02x (%04x)\n", tag(), NPC, TMP2);

	if(icount == 0) { inst_substate = 2; return; }
	prefetch();
	icount--;

}

void deco16_device::u13_zpg_partial()
{
switch(inst_substate) {
case 0:

	if(icount == 0) { inst_substate = 1; return; }
case 1:
	TMP2 = read_pc();
	icount--;

	if(DECO16_VERBOSE)

		logerror("%s: OP13 %02x (%04x)\n", tag(), NPC, TMP2);

	if(icount == 0) { inst_substate = 2; return; }
case 2:
	prefetch();
	icount--;

}
	inst_substate = 0;
}


void deco16_device::u23_zpg_full()
{

	if(icount == 0) { inst_substate = 1; return; }
	TMP2 = read_pc();
	icount--;

	if(DECO16_VERBOSE)

		logerror("%s: OP23 %02x (%04x)\n", tag(), NPC, TMP2);

	if(icount == 0) { inst_substate = 2; return; }
	prefetch();
	icount--;

}

void deco16_device::u23_zpg_partial()
{
switch(inst_substate) {
case 0:

	if(icount == 0) { inst_substate = 1; return; }
case 1:
	TMP2 = read_pc();
	icount--;

	if(DECO16_VERBOSE)

		logerror("%s: OP23 %02x (%04x)\n", tag(), NPC, TMP2);

	if(icount == 0) { inst_substate = 2; return; }
case 2:
	prefetch();
	icount--;

}
	inst_substate = 0;
}


void deco16_device::u3F_zpg_full()
{

	if(icount == 0) { inst_substate = 1; return; }
	TMP2 = read_pc();
	icount--;

	if(DECO16_VERBOSE)

		logerror("%s: OPBB %02x (%04x)\n", tag(), NPC, TMP2);

	if(icount == 0) { inst_substate = 2; return; }
	prefetch();
	icount--;

}

void deco16_device::u3F_zpg_partial()
{
switch(inst_substate) {
case 0:

	if(icount == 0) { inst_substate = 1; return; }
case 1:
	TMP2 = read_pc();
	icount--;

	if(DECO16_VERBOSE)

		logerror("%s: OPBB %02x (%04x)\n", tag(), NPC, TMP2);

	if(icount == 0) { inst_substate = 2; return; }
case 2:
	prefetch();
	icount--;

}
	inst_substate = 0;
}


void deco16_device::u4B_zpg_full()
{

	if(icount == 0) { inst_substate = 1; return; }
	TMP2 = read_pc();
	icount--;

	if(icount == 0) { inst_substate = 2; return; }
	A = io->read_byte(1);
	icount--;

	if(icount == 0) { inst_substate = 3; return; }
	prefetch();
	icount--;

}

void deco16_device::u4B_zpg_partial()
{
switch(inst_substate) {
case 0:

	if(icount == 0) { inst_substate = 1; return; }
case 1:
	TMP2 = read_pc();
	icount--;

	if(icount == 0) { inst_substate = 2; return; }
case 2:
	A = io->read_byte(1);
	icount--;

	if(icount == 0) { inst_substate = 3; return; }
case 3:
	prefetch();
	icount--;

}
	inst_substate = 0;
}


void deco16_device::u87_zpg_full()
{

	if(icount == 0) { inst_substate = 1; return; }
	TMP2 = read_pc();
	icount--;

	if(DECO16_VERBOSE)

		logerror("%s: OP87 %02x (%04x)\n", tag(), NPC, TMP2);

	if(icount == 0) { inst_substate = 2; return; }
	prefetch();
	icount--;

}

void deco16_device::u87_zpg_partial()
{
switch(inst_substate) {
case 0:

	if(icount == 0) { inst_substate = 1; return; }
case 1:
	TMP2 = read_pc();
	icount--;

	if(DECO16_VERBOSE)

		logerror("%s: OP87 %02x (%04x)\n", tag(), NPC, TMP2);

	if(icount == 0) { inst_substate = 2; return; }
case 2:
	prefetch();
	icount--;

}
	inst_substate = 0;
}


void deco16_device::u8F_zpg_full()
{

	if(icount == 0) { inst_substate = 1; return; }
	TMP2 = read_pc();
	icount--;

	if(DECO16_VERBOSE)

		logerror("%s: OP8F (BANK) %02x (%04x)\n", tag(), NPC, TMP2);

	if(icount == 0) { inst_substate = 2; return; }
	io->write_byte(0, TMP2);
	icount--;

	if(icount == 0) { inst_substate = 3; return; }
	prefetch();
	icount--;

}

void deco16_device::u8F_zpg_partial()
{
switch(inst_substate) {
case 0:

	if(icount == 0) { inst_substate = 1; return; }
case 1:
	TMP2 = read_pc();
	icount--;

	if(DECO16_VERBOSE)

		logerror("%s: OP8F (BANK) %02x (%04x)\n", tag(), NPC, TMP2);

	if(icount == 0) { inst_substate = 2; return; }
case 2:
	io->write_byte(0, TMP2);
	icount--;

	if(icount == 0) { inst_substate = 3; return; }
case 3:
	prefetch();
	icount--;

}
	inst_substate = 0;
}


void deco16_device::uA3_zpg_full()
{

	if(icount == 0) { inst_substate = 1; return; }
	TMP2 = read_pc();
	icount--;

	if(DECO16_VERBOSE)

		logerror("%s: OPA3 %02x (%04x)\n", tag(), NPC, TMP2);

	if(icount == 0) { inst_substate = 2; return; }
	prefetch();
	icount--;

}

void deco16_device::uA3_zpg_partial()
{
switch(inst_substate) {
case 0:

	if(icount == 0) { inst_substate = 1; return; }
case 1:
	TMP2 = read_pc();
	icount--;

	if(DECO16_VERBOSE)

		logerror("%s: OPA3 %02x (%04x)\n", tag(), NPC, TMP2);

	if(icount == 0) { inst_substate = 2; return; }
case 2:
	prefetch();
	icount--;

}
	inst_substate = 0;
}


void deco16_device::uBB_zpg_full()
{

	if(icount == 0) { inst_substate = 1; return; }
	TMP2 = read_pc();
	icount--;

	if(DECO16_VERBOSE)

		logerror("%s: OPBB %02x (%04x)\n", tag(), NPC, TMP2);

	if(icount == 0) { inst_substate = 2; return; }
	prefetch();
	icount--;

}

void deco16_device::uBB_zpg_partial()
{
switch(inst_substate) {
case 0:

	if(icount == 0) { inst_substate = 1; return; }
case 1:
	TMP2 = read_pc();
	icount--;

	if(DECO16_VERBOSE)

		logerror("%s: OPBB %02x (%04x)\n", tag(), NPC, TMP2);

	if(icount == 0) { inst_substate = 2; return; }
case 2:
	prefetch();
	icount--;

}
	inst_substate = 0;
}


void deco16_device::vbl_zpg_full()
{

	if(icount == 0) { inst_substate = 1; return; }
	TMP2 = read_pc();
	icount--;

	if(icount == 0) { inst_substate = 2; return; }
	A = io->read_byte(0);
	icount--;

	//if(DECO16_VERBOSE)

	//  logerror("%s: VBL %02x (%04x)\n", tag(), NPC, TMP2);

	if(icount == 0) { inst_substate = 3; return; }
	prefetch();
	icount--;

}

void deco16_device::vbl_zpg_partial()
{
switch(inst_substate) {
case 0:

	if(icount == 0) { inst_substate = 1; return; }
case 1:
	TMP2 = read_pc();
	icount--;

	if(icount == 0) { inst_substate = 2; return; }
case 2:
	A = io->read_byte(0);
	icount--;

	//if(DECO16_VERBOSE)

	//  logerror("%s: VBL %02x (%04x)\n", tag(), NPC, TMP2);

	if(icount == 0) { inst_substate = 3; return; }
case 3:
	prefetch();
	icount--;

}
	inst_substate = 0;
}


void deco16_device::reset_16_full()
{

	if(icount == 0) { inst_substate = 1; return; }
	PC = read_arg(0xfff1);
	icount--;

	if(icount == 0) { inst_substate = 2; return; }
	PC = set_h(PC, read_arg(0xfff0));
	icount--;

	if(icount == 0) { inst_substate = 3; return; }
	prefetch();
	icount--;

	inst_state = -1;

}

void deco16_device::reset_16_partial()
{
switch(inst_substate) {
case 0:

	if(icount == 0) { inst_substate = 1; return; }
case 1:
	PC = read_arg(0xfff1);
	icount--;

	if(icount == 0) { inst_substate = 2; return; }
case 2:
	PC = set_h(PC, read_arg(0xfff0));
	icount--;

	if(icount == 0) { inst_substate = 3; return; }
case 3:
	prefetch();
	icount--;

	inst_state = -1;

}
	inst_substate = 0;
}




void deco16_device::do_exec_full()
{
	switch(inst_state) {

	case 0x00: brk_16_imp_full(); break;

	case 0x01: ora_idx_full(); break;

	case 0x02: ill_non_full(); break;

	case 0x03: ill_non_full(); break;

	case 0x04: ill_non_full(); break;

	case 0x05: ora_zpg_full(); break;

	case 0x06: asl_zpg_full(); break;

	case 0x07: ill_non_full(); break;

	case 0x08: php_imp_full(); break;

	case 0x09: ora_imm_full(); break;

	case 0x0a: asl_acc_full(); break;

	case 0x0b: u0B_zpg_full(); break;

	case 0x0c: ill_non_full(); break;

	case 0x0d: ora_aba_full(); break;

	case 0x0e: asl_aba_full(); break;

	case 0x0f: ill_non_full(); break;

	case 0x10: bpl_rel_full(); break;

	case 0x11: ora_idy_full(); break;

	case 0x12: ill_non_full(); break;

	case 0x13: u13_zpg_full(); break;

	case 0x14: ill_non_full(); break;

	case 0x15: ora_zpx_full(); break;

	case 0x16: asl_zpx_full(); break;

	case 0x17: ill_non_full(); break;

	case 0x18: clc_imp_full(); break;

	case 0x19: ora_aby_full(); break;

	case 0x1a: ill_non_full(); break;

	case 0x1b: ill_non_full(); break;

	case 0x1c: ill_non_full(); break;

	case 0x1d: ora_abx_full(); break;

	case 0x1e: asl_abx_full(); break;

	case 0x1f: ill_non_full(); break;

	case 0x20: jsr_adr_full(); break;

	case 0x21: and_idx_full(); break;

	case 0x22: ill_non_full(); break;

	case 0x23: u23_zpg_full(); break;

	case 0x24: bit_zpg_full(); break;

	case 0x25: and_zpg_full(); break;

	case 0x26: rol_zpg_full(); break;

	case 0x27: ill_non_full(); break;

	case 0x28: plp_imp_full(); break;

	case 0x29: and_imm_full(); break;

	case 0x2a: rol_acc_full(); break;

	case 0x2b: ill_non_full(); break;

	case 0x2c: bit_aba_full(); break;

	case 0x2d: and_aba_full(); break;

	case 0x2e: rol_aba_full(); break;

	case 0x2f: ill_non_full(); break;

	case 0x30: bmi_rel_full(); break;

	case 0x31: and_idy_full(); break;

	case 0x32: ill_non_full(); break;

	case 0x33: ill_non_full(); break;

	case 0x34: ill_non_full(); break;

	case 0x35: and_zpx_full(); break;

	case 0x36: rol_zpx_full(); break;

	case 0x37: ill_non_full(); break;

	case 0x38: sec_imp_full(); break;

	case 0x39: and_aby_full(); break;

	case 0x3a: ill_non_full(); break;

	case 0x3b: ill_non_full(); break;

	case 0x3c: ill_non_full(); break;

	case 0x3d: and_abx_full(); break;

	case 0x3e: rol_abx_full(); break;

	case 0x3f: u3F_zpg_full(); break;

	case 0x40: rti_imp_full(); break;

	case 0x41: eor_idx_full(); break;

	case 0x42: ill_non_full(); break;

	case 0x43: ill_non_full(); break;

	case 0x44: ill_non_full(); break;

	case 0x45: eor_zpg_full(); break;

	case 0x46: lsr_zpg_full(); break;

	case 0x47: ill_non_full(); break;

	case 0x48: pha_imp_full(); break;

	case 0x49: eor_imm_full(); break;

	case 0x4a: lsr_acc_full(); break;

	case 0x4b: u4B_zpg_full(); break;

	case 0x4c: jmp_adr_full(); break;

	case 0x4d: eor_aba_full(); break;

	case 0x4e: lsr_aba_full(); break;

	case 0x4f: ill_non_full(); break;

	case 0x50: bvc_rel_full(); break;

	case 0x51: eor_idy_full(); break;

	case 0x52: ill_non_full(); break;

	case 0x53: ill_non_full(); break;

	case 0x54: ill_non_full(); break;

	case 0x55: eor_zpx_full(); break;

	case 0x56: lsr_zpx_full(); break;

	case 0x57: ill_non_full(); break;

	case 0x58: cli_imp_full(); break;

	case 0x59: eor_aby_full(); break;

	case 0x5a: ill_non_full(); break;

	case 0x5b: ill_non_full(); break;

	case 0x5c: ill_non_full(); break;

	case 0x5d: eor_abx_full(); break;

	case 0x5e: lsr_abx_full(); break;

	case 0x5f: ill_non_full(); break;

	case 0x60: rts_imp_full(); break;

	case 0x61: adc_idx_full(); break;

	case 0x62: ill_non_full(); break;

	case 0x63: ill_non_full(); break;

	case 0x64: ill_non_full(); break;

	case 0x65: adc_zpg_full(); break;

	case 0x66: ror_zpg_full(); break;

	case 0x67: vbl_zpg_full(); break;

	case 0x68: pla_imp_full(); break;

	case 0x69: adc_imm_full(); break;

	case 0x6a: ror_acc_full(); break;

	case 0x6b: ill_non_full(); break;

	case 0x6c: jmp_ind_full(); break;

	case 0x6d: adc_aba_full(); break;

	case 0x6e: ror_aba_full(); break;

	case 0x6f: ill_non_full(); break;

	case 0x70: bvs_rel_full(); break;

	case 0x71: adc_idy_full(); break;

	case 0x72: ill_non_full(); break;

	case 0x73: ill_non_full(); break;

	case 0x74: ill_non_full(); break;

	case 0x75: adc_zpx_full(); break;

	case 0x76: ror_zpx_full(); break;

	case 0x77: ill_non_full(); break;

	case 0x78: sei_imp_full(); break;

	case 0x79: adc_aby_full(); break;

	case 0x7a: ill_non_full(); break;

	case 0x7b: ill_non_full(); break;

	case 0x7c: ill_non_full(); break;

	case 0x7d: adc_abx_full(); break;

	case 0x7e: ror_abx_full(); break;

	case 0x7f: ill_non_full(); break;

	case 0x80: ill_non_full(); break;

	case 0x81: sta_idx_full(); break;

	case 0x82: ill_non_full(); break;

	case 0x83: ill_non_full(); break;

	case 0x84: sty_zpg_full(); break;

	case 0x85: sta_zpg_full(); break;

	case 0x86: stx_zpg_full(); break;

	case 0x87: u87_zpg_full(); break;

	case 0x88: dey_imp_full(); break;

	case 0x89: ill_non_full(); break;

	case 0x8a: txa_imp_full(); break;

	case 0x8b: ill_non_full(); break;

	case 0x8c: sty_aba_full(); break;

	case 0x8d: sta_aba_full(); break;

	case 0x8e: stx_aba_full(); break;

	case 0x8f: u8F_zpg_full(); break;

	case 0x90: bcc_rel_full(); break;

	case 0x91: sta_idy_full(); break;

	case 0x92: ill_non_full(); break;

	case 0x93: ill_non_full(); break;

	case 0x94: sty_zpx_full(); break;

	case 0x95: sta_zpx_full(); break;

	case 0x96: stx_zpy_full(); break;

	case 0x97: ill_non_full(); break;

	case 0x98: tya_imp_full(); break;

	case 0x99: sta_aby_full(); break;

	case 0x9a: txs_imp_full(); break;

	case 0x9b: ill_non_full(); break;

	case 0x9c: ill_non_full(); break;

	case 0x9d: sta_abx_full(); break;

	case 0x9e: ill_non_full(); break;

	case 0x9f: ill_non_full(); break;

	case 0xa0: ldy_imm_full(); break;

	case 0xa1: lda_idx_full(); break;

	case 0xa2: ldx_imm_full(); break;

	case 0xa3: uA3_zpg_full(); break;

	case 0xa4: ldy_zpg_full(); break;

	case 0xa5: lda_zpg_full(); break;

	case 0xa6: ldx_zpg_full(); break;

	case 0xa7: ill_non_full(); break;

	case 0xa8: tay_imp_full(); break;

	case 0xa9: lda_imm_full(); break;

	case 0xaa: tax_imp_full(); break;

	case 0xab: ill_non_full(); break;

	case 0xac: ldy_aba_full(); break;

	case 0xad: lda_aba_full(); break;

	case 0xae: ldx_aba_full(); break;

	case 0xaf: ill_non_full(); break;

	case 0xb0: bcs_rel_full(); break;

	case 0xb1: lda_idy_full(); break;

	case 0xb2: ill_non_full(); break;

	case 0xb3: ill_non_full(); break;

	case 0xb4: ldy_zpx_full(); break;

	case 0xb5: lda_zpx_full(); break;

	case 0xb6: ldx_zpy_full(); break;

	case 0xb7: ill_non_full(); break;

	case 0xb8: clv_imp_full(); break;

	case 0xb9: lda_aby_full(); break;

	case 0xba: tsx_imp_full(); break;

	case 0xbb: uBB_zpg_full(); break;

	case 0xbc: ldy_abx_full(); break;

	case 0xbd: lda_abx_full(); break;

	case 0xbe: ldx_aby_full(); break;

	case 0xbf: ill_non_full(); break;

	case 0xc0: cpy_imm_full(); break;

	case 0xc1: cmp_idx_full(); break;

	case 0xc2: ill_non_full(); break;

	case 0xc3: ill_non_full(); break;

	case 0xc4: cpy_zpg_full(); break;

	case 0xc5: cmp_zpg_full(); break;

	case 0xc6: dec_zpg_full(); break;

	case 0xc7: ill_non_full(); break;

	case 0xc8: iny_imp_full(); break;

	case 0xc9: cmp_imm_full(); break;

	case 0xca: dex_imp_full(); break;

	case 0xcb: ill_non_full(); break;

	case 0xcc: cpy_aba_full(); break;

	case 0xcd: cmp_aba_full(); break;

	case 0xce: dec_aba_full(); break;

	case 0xcf: ill_non_full(); break;

	case 0xd0: bne_rel_full(); break;

	case 0xd1: cmp_idy_full(); break;

	case 0xd2: ill_non_full(); break;

	case 0xd3: ill_non_full(); break;

	case 0xd4: ill_non_full(); break;

	case 0xd5: cmp_zpx_full(); break;

	case 0xd6: dec_zpx_full(); break;

	case 0xd7: ill_non_full(); break;

	case 0xd8: cld_imp_full(); break;

	case 0xd9: cmp_aby_full(); break;

	case 0xda: ill_non_full(); break;

	case 0xdb: ill_non_full(); break;

	case 0xdc: ill_non_full(); break;

	case 0xdd: cmp_abx_full(); break;

	case 0xde: dec_abx_full(); break;

	case 0xdf: ill_non_full(); break;

	case 0xe0: cpx_imm_full(); break;

	case 0xe1: sbc_idx_full(); break;

	case 0xe2: ill_non_full(); break;

	case 0xe3: ill_non_full(); break;

	case 0xe4: cpx_zpg_full(); break;

	case 0xe5: sbc_zpg_full(); break;

	case 0xe6: inc_zpg_full(); break;

	case 0xe7: ill_non_full(); break;

	case 0xe8: inx_imp_full(); break;

	case 0xe9: sbc_imm_full(); break;

	case 0xea: nop_imp_full(); break;

	case 0xeb: ill_non_full(); break;

	case 0xec: cpx_aba_full(); break;

	case 0xed: sbc_aba_full(); break;

	case 0xee: inc_aba_full(); break;

	case 0xef: ill_non_full(); break;

	case 0xf0: beq_rel_full(); break;

	case 0xf1: sbc_idy_full(); break;

	case 0xf2: ill_non_full(); break;

	case 0xf3: ill_non_full(); break;

	case 0xf4: ill_non_full(); break;

	case 0xf5: sbc_zpx_full(); break;

	case 0xf6: inc_zpx_full(); break;

	case 0xf7: ill_non_full(); break;

	case 0xf8: sed_imp_full(); break;

	case 0xf9: sbc_aby_full(); break;

	case 0xfa: ill_non_full(); break;

	case 0xfb: ill_non_full(); break;

	case 0xfc: ill_non_full(); break;

	case 0xfd: sbc_abx_full(); break;

	case 0xfe: inc_abx_full(); break;

	case 0xff: ill_non_full(); break;

	case STATE_RESET: reset_16_full(); break;

	}
}

void deco16_device::do_exec_partial()
{
	switch(inst_state) {

	case 0x00: brk_16_imp_partial(); break;

	case 0x01: ora_idx_partial(); break;

	case 0x02: ill_non_partial(); break;

	case 0x03: ill_non_partial(); break;

	case 0x04: ill_non_partial(); break;

	case 0x05: ora_zpg_partial(); break;

	case 0x06: asl_zpg_partial(); break;

	case 0x07: ill_non_partial(); break;

	case 0x08: php_imp_partial(); break;

	case 0x09: ora_imm_partial(); break;

	case 0x0a: asl_acc_partial(); break;

	case 0x0b: u0B_zpg_partial(); break;

	case 0x0c: ill_non_partial(); break;

	case 0x0d: ora_aba_partial(); break;

	case 0x0e: asl_aba_partial(); break;

	case 0x0f: ill_non_partial(); break;

	case 0x10: bpl_rel_partial(); break;

	case 0x11: ora_idy_partial(); break;

	case 0x12: ill_non_partial(); break;

	case 0x13: u13_zpg_partial(); break;

	case 0x14: ill_non_partial(); break;

	case 0x15: ora_zpx_partial(); break;

	case 0x16: asl_zpx_partial(); break;

	case 0x17: ill_non_partial(); break;

	case 0x18: clc_imp_partial(); break;

	case 0x19: ora_aby_partial(); break;

	case 0x1a: ill_non_partial(); break;

	case 0x1b: ill_non_partial(); break;

	case 0x1c: ill_non_partial(); break;

	case 0x1d: ora_abx_partial(); break;

	case 0x1e: asl_abx_partial(); break;

	case 0x1f: ill_non_partial(); break;

	case 0x20: jsr_adr_partial(); break;

	case 0x21: and_idx_partial(); break;

	case 0x22: ill_non_partial(); break;

	case 0x23: u23_zpg_partial(); break;

	case 0x24: bit_zpg_partial(); break;

	case 0x25: and_zpg_partial(); break;

	case 0x26: rol_zpg_partial(); break;

	case 0x27: ill_non_partial(); break;

	case 0x28: plp_imp_partial(); break;

	case 0x29: and_imm_partial(); break;

	case 0x2a: rol_acc_partial(); break;

	case 0x2b: ill_non_partial(); break;

	case 0x2c: bit_aba_partial(); break;

	case 0x2d: and_aba_partial(); break;

	case 0x2e: rol_aba_partial(); break;

	case 0x2f: ill_non_partial(); break;

	case 0x30: bmi_rel_partial(); break;

	case 0x31: and_idy_partial(); break;

	case 0x32: ill_non_partial(); break;

	case 0x33: ill_non_partial(); break;

	case 0x34: ill_non_partial(); break;

	case 0x35: and_zpx_partial(); break;

	case 0x36: rol_zpx_partial(); break;

	case 0x37: ill_non_partial(); break;

	case 0x38: sec_imp_partial(); break;

	case 0x39: and_aby_partial(); break;

	case 0x3a: ill_non_partial(); break;

	case 0x3b: ill_non_partial(); break;

	case 0x3c: ill_non_partial(); break;

	case 0x3d: and_abx_partial(); break;

	case 0x3e: rol_abx_partial(); break;

	case 0x3f: u3F_zpg_partial(); break;

	case 0x40: rti_imp_partial(); break;

	case 0x41: eor_idx_partial(); break;

	case 0x42: ill_non_partial(); break;

	case 0x43: ill_non_partial(); break;

	case 0x44: ill_non_partial(); break;

	case 0x45: eor_zpg_partial(); break;

	case 0x46: lsr_zpg_partial(); break;

	case 0x47: ill_non_partial(); break;

	case 0x48: pha_imp_partial(); break;

	case 0x49: eor_imm_partial(); break;

	case 0x4a: lsr_acc_partial(); break;

	case 0x4b: u4B_zpg_partial(); break;

	case 0x4c: jmp_adr_partial(); break;

	case 0x4d: eor_aba_partial(); break;

	case 0x4e: lsr_aba_partial(); break;

	case 0x4f: ill_non_partial(); break;

	case 0x50: bvc_rel_partial(); break;

	case 0x51: eor_idy_partial(); break;

	case 0x52: ill_non_partial(); break;

	case 0x53: ill_non_partial(); break;

	case 0x54: ill_non_partial(); break;

	case 0x55: eor_zpx_partial(); break;

	case 0x56: lsr_zpx_partial(); break;

	case 0x57: ill_non_partial(); break;

	case 0x58: cli_imp_partial(); break;

	case 0x59: eor_aby_partial(); break;

	case 0x5a: ill_non_partial(); break;

	case 0x5b: ill_non_partial(); break;

	case 0x5c: ill_non_partial(); break;

	case 0x5d: eor_abx_partial(); break;

	case 0x5e: lsr_abx_partial(); break;

	case 0x5f: ill_non_partial(); break;

	case 0x60: rts_imp_partial(); break;

	case 0x61: adc_idx_partial(); break;

	case 0x62: ill_non_partial(); break;

	case 0x63: ill_non_partial(); break;

	case 0x64: ill_non_partial(); break;

	case 0x65: adc_zpg_partial(); break;

	case 0x66: ror_zpg_partial(); break;

	case 0x67: vbl_zpg_partial(); break;

	case 0x68: pla_imp_partial(); break;

	case 0x69: adc_imm_partial(); break;

	case 0x6a: ror_acc_partial(); break;

	case 0x6b: ill_non_partial(); break;

	case 0x6c: jmp_ind_partial(); break;

	case 0x6d: adc_aba_partial(); break;

	case 0x6e: ror_aba_partial(); break;

	case 0x6f: ill_non_partial(); break;

	case 0x70: bvs_rel_partial(); break;

	case 0x71: adc_idy_partial(); break;

	case 0x72: ill_non_partial(); break;

	case 0x73: ill_non_partial(); break;

	case 0x74: ill_non_partial(); break;

	case 0x75: adc_zpx_partial(); break;

	case 0x76: ror_zpx_partial(); break;

	case 0x77: ill_non_partial(); break;

	case 0x78: sei_imp_partial(); break;

	case 0x79: adc_aby_partial(); break;

	case 0x7a: ill_non_partial(); break;

	case 0x7b: ill_non_partial(); break;

	case 0x7c: ill_non_partial(); break;

	case 0x7d: adc_abx_partial(); break;

	case 0x7e: ror_abx_partial(); break;

	case 0x7f: ill_non_partial(); break;

	case 0x80: ill_non_partial(); break;

	case 0x81: sta_idx_partial(); break;

	case 0x82: ill_non_partial(); break;

	case 0x83: ill_non_partial(); break;

	case 0x84: sty_zpg_partial(); break;

	case 0x85: sta_zpg_partial(); break;

	case 0x86: stx_zpg_partial(); break;

	case 0x87: u87_zpg_partial(); break;

	case 0x88: dey_imp_partial(); break;

	case 0x89: ill_non_partial(); break;

	case 0x8a: txa_imp_partial(); break;

	case 0x8b: ill_non_partial(); break;

	case 0x8c: sty_aba_partial(); break;

	case 0x8d: sta_aba_partial(); break;

	case 0x8e: stx_aba_partial(); break;

	case 0x8f: u8F_zpg_partial(); break;

	case 0x90: bcc_rel_partial(); break;

	case 0x91: sta_idy_partial(); break;

	case 0x92: ill_non_partial(); break;

	case 0x93: ill_non_partial(); break;

	case 0x94: sty_zpx_partial(); break;

	case 0x95: sta_zpx_partial(); break;

	case 0x96: stx_zpy_partial(); break;

	case 0x97: ill_non_partial(); break;

	case 0x98: tya_imp_partial(); break;

	case 0x99: sta_aby_partial(); break;

	case 0x9a: txs_imp_partial(); break;

	case 0x9b: ill_non_partial(); break;

	case 0x9c: ill_non_partial(); break;

	case 0x9d: sta_abx_partial(); break;

	case 0x9e: ill_non_partial(); break;

	case 0x9f: ill_non_partial(); break;

	case 0xa0: ldy_imm_partial(); break;

	case 0xa1: lda_idx_partial(); break;

	case 0xa2: ldx_imm_partial(); break;

	case 0xa3: uA3_zpg_partial(); break;

	case 0xa4: ldy_zpg_partial(); break;

	case 0xa5: lda_zpg_partial(); break;

	case 0xa6: ldx_zpg_partial(); break;

	case 0xa7: ill_non_partial(); break;

	case 0xa8: tay_imp_partial(); break;

	case 0xa9: lda_imm_partial(); break;

	case 0xaa: tax_imp_partial(); break;

	case 0xab: ill_non_partial(); break;

	case 0xac: ldy_aba_partial(); break;

	case 0xad: lda_aba_partial(); break;

	case 0xae: ldx_aba_partial(); break;

	case 0xaf: ill_non_partial(); break;

	case 0xb0: bcs_rel_partial(); break;

	case 0xb1: lda_idy_partial(); break;

	case 0xb2: ill_non_partial(); break;

	case 0xb3: ill_non_partial(); break;

	case 0xb4: ldy_zpx_partial(); break;

	case 0xb5: lda_zpx_partial(); break;

	case 0xb6: ldx_zpy_partial(); break;

	case 0xb7: ill_non_partial(); break;

	case 0xb8: clv_imp_partial(); break;

	case 0xb9: lda_aby_partial(); break;

	case 0xba: tsx_imp_partial(); break;

	case 0xbb: uBB_zpg_partial(); break;

	case 0xbc: ldy_abx_partial(); break;

	case 0xbd: lda_abx_partial(); break;

	case 0xbe: ldx_aby_partial(); break;

	case 0xbf: ill_non_partial(); break;

	case 0xc0: cpy_imm_partial(); break;

	case 0xc1: cmp_idx_partial(); break;

	case 0xc2: ill_non_partial(); break;

	case 0xc3: ill_non_partial(); break;

	case 0xc4: cpy_zpg_partial(); break;

	case 0xc5: cmp_zpg_partial(); break;

	case 0xc6: dec_zpg_partial(); break;

	case 0xc7: ill_non_partial(); break;

	case 0xc8: iny_imp_partial(); break;

	case 0xc9: cmp_imm_partial(); break;

	case 0xca: dex_imp_partial(); break;

	case 0xcb: ill_non_partial(); break;

	case 0xcc: cpy_aba_partial(); break;

	case 0xcd: cmp_aba_partial(); break;

	case 0xce: dec_aba_partial(); break;

	case 0xcf: ill_non_partial(); break;

	case 0xd0: bne_rel_partial(); break;

	case 0xd1: cmp_idy_partial(); break;

	case 0xd2: ill_non_partial(); break;

	case 0xd3: ill_non_partial(); break;

	case 0xd4: ill_non_partial(); break;

	case 0xd5: cmp_zpx_partial(); break;

	case 0xd6: dec_zpx_partial(); break;

	case 0xd7: ill_non_partial(); break;

	case 0xd8: cld_imp_partial(); break;

	case 0xd9: cmp_aby_partial(); break;

	case 0xda: ill_non_partial(); break;

	case 0xdb: ill_non_partial(); break;

	case 0xdc: ill_non_partial(); break;

	case 0xdd: cmp_abx_partial(); break;

	case 0xde: dec_abx_partial(); break;

	case 0xdf: ill_non_partial(); break;

	case 0xe0: cpx_imm_partial(); break;

	case 0xe1: sbc_idx_partial(); break;

	case 0xe2: ill_non_partial(); break;

	case 0xe3: ill_non_partial(); break;

	case 0xe4: cpx_zpg_partial(); break;

	case 0xe5: sbc_zpg_partial(); break;

	case 0xe6: inc_zpg_partial(); break;

	case 0xe7: ill_non_partial(); break;

	case 0xe8: inx_imp_partial(); break;

	case 0xe9: sbc_imm_partial(); break;

	case 0xea: nop_imp_partial(); break;

	case 0xeb: ill_non_partial(); break;

	case 0xec: cpx_aba_partial(); break;

	case 0xed: sbc_aba_partial(); break;

	case 0xee: inc_aba_partial(); break;

	case 0xef: ill_non_partial(); break;

	case 0xf0: beq_rel_partial(); break;

	case 0xf1: sbc_idy_partial(); break;

	case 0xf2: ill_non_partial(); break;

	case 0xf3: ill_non_partial(); break;

	case 0xf4: ill_non_partial(); break;

	case 0xf5: sbc_zpx_partial(); break;

	case 0xf6: inc_zpx_partial(); break;

	case 0xf7: ill_non_partial(); break;

	case 0xf8: sed_imp_partial(); break;

	case 0xf9: sbc_aby_partial(); break;

	case 0xfa: ill_non_partial(); break;

	case 0xfb: ill_non_partial(); break;

	case 0xfc: ill_non_partial(); break;

	case 0xfd: sbc_abx_partial(); break;

	case 0xfe: inc_abx_partial(); break;

	case 0xff: ill_non_partial(); break;

	case STATE_RESET: reset_16_partial(); break;

	}
}

const deco16_device::disasm_entry deco16_device::disasm_entries[0x100] = {

	{ "brk", DASM_imp, 0 },

	{ "ora", DASM_idx, 0 },

	{ "ill", DASM_non, 0 },

	{ "ill", DASM_non, 0 },

	{ "ill", DASM_non, 0 },

	{ "ora", DASM_zpg, 0 },

	{ "asl", DASM_zpg, 0 },

	{ "ill", DASM_non, 0 },

	{ "php", DASM_imp, 0 },

	{ "ora", DASM_imm, 0 },

	{ "asl", DASM_acc, 0 },

	{ "u0B", DASM_zpg, 0 },

	{ "ill", DASM_non, 0 },

	{ "ora", DASM_aba, 0 },

	{ "asl", DASM_aba, 0 },

	{ "ill", DASM_non, 0 },

	{ "bpl", DASM_rel, 0 },

	{ "ora", DASM_idy, 0 },

	{ "ill", DASM_non, 0 },

	{ "u13", DASM_zpg, 0 },

	{ "ill", DASM_non, 0 },

	{ "ora", DASM_zpx, 0 },

	{ "asl", DASM_zpx, 0 },

	{ "ill", DASM_non, 0 },

	{ "clc", DASM_imp, 0 },

	{ "ora", DASM_aby, 0 },

	{ "ill", DASM_non, 0 },

	{ "ill", DASM_non, 0 },

	{ "ill", DASM_non, 0 },

	{ "ora", DASM_abx, 0 },

	{ "asl", DASM_abx, 0 },

	{ "ill", DASM_non, 0 },

	{ "jsr", DASM_adr, DASMFLAG_STEP_OVER },

	{ "and", DASM_idx, 0 },

	{ "ill", DASM_non, 0 },

	{ "u23", DASM_zpg, 0 },

	{ "bit", DASM_zpg, 0 },

	{ "and", DASM_zpg, 0 },

	{ "rol", DASM_zpg, 0 },

	{ "ill", DASM_non, 0 },

	{ "plp", DASM_imp, 0 },

	{ "and", DASM_imm, 0 },

	{ "rol", DASM_acc, 0 },

	{ "ill", DASM_non, 0 },

	{ "bit", DASM_aba, 0 },

	{ "and", DASM_aba, 0 },

	{ "rol", DASM_aba, 0 },

	{ "ill", DASM_non, 0 },

	{ "bmi", DASM_rel, 0 },

	{ "and", DASM_idy, 0 },

	{ "ill", DASM_non, 0 },

	{ "ill", DASM_non, 0 },

	{ "ill", DASM_non, 0 },

	{ "and", DASM_zpx, 0 },

	{ "rol", DASM_zpx, 0 },

	{ "ill", DASM_non, 0 },

	{ "sec", DASM_imp, 0 },

	{ "and", DASM_aby, 0 },

	{ "ill", DASM_non, 0 },

	{ "ill", DASM_non, 0 },

	{ "ill", DASM_non, 0 },

	{ "and", DASM_abx, 0 },

	{ "rol", DASM_abx, 0 },

	{ "u3F", DASM_zpg, 0 },

	{ "rti", DASM_imp, DASMFLAG_STEP_OUT },

	{ "eor", DASM_idx, 0 },

	{ "ill", DASM_non, 0 },

	{ "ill", DASM_non, 0 },

	{ "ill", DASM_non, 0 },

	{ "eor", DASM_zpg, 0 },

	{ "lsr", DASM_zpg, 0 },

	{ "ill", DASM_non, 0 },

	{ "pha", DASM_imp, 0 },

	{ "eor", DASM_imm, 0 },

	{ "lsr", DASM_acc, 0 },

	{ "u4B", DASM_zpg, 0 },

	{ "jmp", DASM_adr, 0 },

	{ "eor", DASM_aba, 0 },

	{ "lsr", DASM_aba, 0 },

	{ "ill", DASM_non, 0 },

	{ "bvc", DASM_rel, 0 },

	{ "eor", DASM_idy, 0 },

	{ "ill", DASM_non, 0 },

	{ "ill", DASM_non, 0 },

	{ "ill", DASM_non, 0 },

	{ "eor", DASM_zpx, 0 },

	{ "lsr", DASM_zpx, 0 },

	{ "ill", DASM_non, 0 },

	{ "cli", DASM_imp, 0 },

	{ "eor", DASM_aby, 0 },

	{ "ill", DASM_non, 0 },

	{ "ill", DASM_non, 0 },

	{ "ill", DASM_non, 0 },

	{ "eor", DASM_abx, 0 },

	{ "lsr", DASM_abx, 0 },

	{ "ill", DASM_non, 0 },

	{ "rts", DASM_imp, DASMFLAG_STEP_OUT },

	{ "adc", DASM_idx, 0 },

	{ "ill", DASM_non, 0 },

	{ "ill", DASM_non, 0 },

	{ "ill", DASM_non, 0 },

	{ "adc", DASM_zpg, 0 },

	{ "ror", DASM_zpg, 0 },

	{ "vbl", DASM_zpg, 0 },

	{ "pla", DASM_imp, 0 },

	{ "adc", DASM_imm, 0 },

	{ "ror", DASM_acc, 0 },

	{ "ill", DASM_non, 0 },

	{ "jmp", DASM_ind, 0 },

	{ "adc", DASM_aba, 0 },

	{ "ror", DASM_aba, 0 },

	{ "ill", DASM_non, 0 },

	{ "bvs", DASM_rel, 0 },

	{ "adc", DASM_idy, 0 },

	{ "ill", DASM_non, 0 },

	{ "ill", DASM_non, 0 },

	{ "ill", DASM_non, 0 },

	{ "adc", DASM_zpx, 0 },

	{ "ror", DASM_zpx, 0 },

	{ "ill", DASM_non, 0 },

	{ "sei", DASM_imp, 0 },

	{ "adc", DASM_aby, 0 },

	{ "ill", DASM_non, 0 },

	{ "ill", DASM_non, 0 },

	{ "ill", DASM_non, 0 },

	{ "adc", DASM_abx, 0 },

	{ "ror", DASM_abx, 0 },

	{ "ill", DASM_non, 0 },

	{ "ill", DASM_non, 0 },

	{ "sta", DASM_idx, 0 },

	{ "ill", DASM_non, 0 },

	{ "ill", DASM_non, 0 },

	{ "sty", DASM_zpg, 0 },

	{ "sta", DASM_zpg, 0 },

	{ "stx", DASM_zpg, 0 },

	{ "u87", DASM_zpg, 0 },

	{ "dey", DASM_imp, 0 },

	{ "ill", DASM_non, 0 },

	{ "txa", DASM_imp, 0 },

	{ "ill", DASM_non, 0 },

	{ "sty", DASM_aba, 0 },

	{ "sta", DASM_aba, 0 },

	{ "stx", DASM_aba, 0 },

	{ "u8F", DASM_zpg, 0 },

	{ "bcc", DASM_rel, 0 },

	{ "sta", DASM_idy, 0 },

	{ "ill", DASM_non, 0 },

	{ "ill", DASM_non, 0 },

	{ "sty", DASM_zpx, 0 },

	{ "sta", DASM_zpx, 0 },

	{ "stx", DASM_zpy, 0 },

	{ "ill", DASM_non, 0 },

	{ "tya", DASM_imp, 0 },

	{ "sta", DASM_aby, 0 },

	{ "txs", DASM_imp, 0 },

	{ "ill", DASM_non, 0 },

	{ "ill", DASM_non, 0 },

	{ "sta", DASM_abx, 0 },

	{ "ill", DASM_non, 0 },

	{ "ill", DASM_non, 0 },

	{ "ldy", DASM_imm, 0 },

	{ "lda", DASM_idx, 0 },

	{ "ldx", DASM_imm, 0 },

	{ "uA3", DASM_zpg, 0 },

	{ "ldy", DASM_zpg, 0 },

	{ "lda", DASM_zpg, 0 },

	{ "ldx", DASM_zpg, 0 },

	{ "ill", DASM_non, 0 },

	{ "tay", DASM_imp, 0 },

	{ "lda", DASM_imm, 0 },

	{ "tax", DASM_imp, 0 },

	{ "ill", DASM_non, 0 },

	{ "ldy", DASM_aba, 0 },

	{ "lda", DASM_aba, 0 },

	{ "ldx", DASM_aba, 0 },

	{ "ill", DASM_non, 0 },

	{ "bcs", DASM_rel, 0 },

	{ "lda", DASM_idy, 0 },

	{ "ill", DASM_non, 0 },

	{ "ill", DASM_non, 0 },

	{ "ldy", DASM_zpx, 0 },

	{ "lda", DASM_zpx, 0 },

	{ "ldx", DASM_zpy, 0 },

	{ "ill", DASM_non, 0 },

	{ "clv", DASM_imp, 0 },

	{ "lda", DASM_aby, 0 },

	{ "tsx", DASM_imp, 0 },

	{ "uBB", DASM_zpg, 0 },

	{ "ldy", DASM_abx, 0 },

	{ "lda", DASM_abx, 0 },

	{ "ldx", DASM_aby, 0 },

	{ "ill", DASM_non, 0 },

	{ "cpy", DASM_imm, 0 },

	{ "cmp", DASM_idx, 0 },

	{ "ill", DASM_non, 0 },

	{ "ill", DASM_non, 0 },

	{ "cpy", DASM_zpg, 0 },

	{ "cmp", DASM_zpg, 0 },

	{ "dec", DASM_zpg, 0 },

	{ "ill", DASM_non, 0 },

	{ "iny", DASM_imp, 0 },

	{ "cmp", DASM_imm, 0 },

	{ "dex", DASM_imp, 0 },

	{ "ill", DASM_non, 0 },

	{ "cpy", DASM_aba, 0 },

	{ "cmp", DASM_aba, 0 },

	{ "dec", DASM_aba, 0 },

	{ "ill", DASM_non, 0 },

	{ "bne", DASM_rel, 0 },

	{ "cmp", DASM_idy, 0 },

	{ "ill", DASM_non, 0 },

	{ "ill", DASM_non, 0 },

	{ "ill", DASM_non, 0 },

	{ "cmp", DASM_zpx, 0 },

	{ "dec", DASM_zpx, 0 },

	{ "ill", DASM_non, 0 },

	{ "cld", DASM_imp, 0 },

	{ "cmp", DASM_aby, 0 },

	{ "ill", DASM_non, 0 },

	{ "ill", DASM_non, 0 },

	{ "ill", DASM_non, 0 },

	{ "cmp", DASM_abx, 0 },

	{ "dec", DASM_abx, 0 },

	{ "ill", DASM_non, 0 },

	{ "cpx", DASM_imm, 0 },

	{ "sbc", DASM_idx, 0 },

	{ "ill", DASM_non, 0 },

	{ "ill", DASM_non, 0 },

	{ "cpx", DASM_zpg, 0 },

	{ "sbc", DASM_zpg, 0 },

	{ "inc", DASM_zpg, 0 },

	{ "ill", DASM_non, 0 },

	{ "inx", DASM_imp, 0 },

	{ "sbc", DASM_imm, 0 },

	{ "nop", DASM_imp, 0 },

	{ "ill", DASM_non, 0 },

	{ "cpx", DASM_aba, 0 },

	{ "sbc", DASM_aba, 0 },

	{ "inc", DASM_aba, 0 },

	{ "ill", DASM_non, 0 },

	{ "beq", DASM_rel, 0 },

	{ "sbc", DASM_idy, 0 },

	{ "ill", DASM_non, 0 },

	{ "ill", DASM_non, 0 },

	{ "ill", DASM_non, 0 },

	{ "sbc", DASM_zpx, 0 },

	{ "inc", DASM_zpx, 0 },

	{ "ill", DASM_non, 0 },

	{ "sed", DASM_imp, 0 },

	{ "sbc", DASM_aby, 0 },

	{ "ill", DASM_non, 0 },

	{ "ill", DASM_non, 0 },

	{ "ill", DASM_non, 0 },

	{ "sbc", DASM_abx, 0 },

	{ "inc", DASM_abx, 0 },

	{ "ill", DASM_non, 0 },

};

