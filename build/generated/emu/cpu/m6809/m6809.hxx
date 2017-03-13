	case 0:	goto MAIN;
	case 1:	goto state_1;
	case 2:	goto NEG8;
	case 3:	goto COM8;
	case 4:	goto LSR8;
	case 5:	goto ROR8;
	case 6:	goto ASR8;
	case 7:	goto ASL8;
	case 8:	goto ROL8;
	case 9:	goto DEC8;
	case 10:	goto INC8;
	case 11:	goto TST8;
	case 12:	goto JMP;
	case 13:	goto CLR8;
	case 14:	goto LEA_xy;
	case 15:	goto LEA_us;
	case 16:	goto SUB8;
	case 17:	goto CMP8;
	case 18:	goto SBC8;
	case 19:	goto SUB16;
	case 20:	goto AND8;
	case 21:	goto BIT8;
	case 22:	goto LD8;
	case 23:	goto ST8;
	case 24:	goto EOR8;
	case 25:	goto ADC8;
	case 26:	goto OR8;
	case 27:	goto ADD8;
	case 28:	goto CMP16;
	case 29:	goto JSR;
	case 30:	goto LD16;
	case 31:	goto ST16;
	case 32:	goto ADD16;
	case 33:	goto state_33;
	case 34:	goto state_34;
	case 35:	goto state_35;
	case 36:	goto state_36;
	case 37:	goto state_37;
	case 38:	goto state_38;
	case 39:	goto state_39;
	case 40:	goto state_40;
	case 41:	goto state_41;
	case 42:	goto state_42;
	case 43:	goto state_43;
	case 44:	goto state_44;
	case 45:	goto state_45;
	case 46:	goto state_46;
	case 47:	goto state_47;
	case 48:	goto state_48;
	case 49:	goto state_49;
	case 50:	goto state_50;
	case 51:	goto state_51;
	case 52:	goto state_52;
	case 53:	goto state_53;
	case 54:	goto state_54;
	case 55:	goto state_55;
	case 56:	goto state_56;
	case 57:	goto state_57;
	case 58:	goto state_58;
	case 59:	goto state_59;
	case 60:	goto state_60;
	case 61:	goto state_61;
	case 62:	goto state_62;
	case 63:	goto state_63;
	case 64:	goto state_64;
	case 65:	goto state_65;
	case 66:	goto state_66;
	case 67:	goto state_67;
	case 68:	goto state_68;
	case 69:	goto state_69;
	case 70:	goto state_70;
	case 71:	goto state_71;
	case 72:	goto state_72;
	case 73:	goto state_73;
	case 74:	goto state_74;
	case 75:	goto state_75;
	case 76:	goto state_76;
	case 77:	goto state_77;
	case 78:	goto state_78;
	case 79:	goto state_79;
	case 80:	goto state_80;
	case 81:	goto state_81;
	case 82:	goto state_82;
	case 83:	goto state_83;
	case 84:	goto state_84;
	case 85:	goto state_85;
	case 86:	goto state_86;
	case 87:	goto state_87;
	case 88:	goto state_88;
	case 89:	goto state_89;
	case 90:	goto state_90;
	case 91:	goto state_91;
	case 92:	goto state_92;
	case 93:	goto state_93;
	case 94:	goto state_94;
	case 95:	goto state_95;
	case 96:	goto state_96;
	case 97:	goto state_97;
	case 98:	goto state_98;
	case 99:	goto state_99;
	case 100:	goto state_100;
	case 101:	goto state_101;
	case 102:	goto state_102;
	case 103:	goto state_103;
	case 104:	goto state_104;
	case 105:	goto state_105;
	case 106:	goto state_106;
	case 107:	goto state_107;
	case 108:	goto state_108;
	case 109:	goto state_109;
	case 110:	goto state_110;
	case 111:	goto state_111;
	case 112:	goto state_112;
	case 113:	goto state_113;
	case 114:	goto state_114;
	case 115:	goto state_115;
	case 116:	goto state_116;
	case 117:	goto state_117;
	case 118:	goto state_118;
	case 119:	goto state_119;
	case 120:	goto state_120;
	case 121:	goto state_121;
	case 122:	goto state_122;
	case 123:	goto state_123;
	case 124:	goto state_124;
	case 125:	goto state_125;
	case 126:	goto state_126;
	case 127:	goto state_127;
	case 128:	goto state_128;
	case 129:	goto state_129;
	case 130:	goto state_130;
	case 131:	goto state_131;
	case 132:	goto state_132;
	case 133:	goto state_133;
	case 134:	goto state_134;
	case 135:	goto state_135;
	case 136:	goto state_136;
	case 137:	goto state_137;
	case 138:	goto state_138;
	case 139:	goto state_139;
	case 140:	goto state_140;
	case 141:	goto state_141;
	case 142:	goto state_142;
	case 143:	goto state_143;
	case 144:	goto state_144;
	case 145:	goto state_145;
	case 146:	goto state_146;
	case 147:	goto state_147;
	case 148:	goto state_148;
	case 149:	goto state_149;
	case 150:	goto state_150;
	case 151:	goto state_151;
	case 152:	goto state_152;
	case 153:	goto state_153;
	case 154:	goto state_154;
	case 155:	goto state_155;
	case 156:	goto state_156;
	default:
		fatalerror("Unexpected state");
		break;

// license:BSD-3-Clause
// copyright-holders:Nathan Woods
MAIN:
	// check interrupt lines
	switch(get_pending_interrupt())
	{
		case VECTOR_NMI:	goto NMI;
		case VECTOR_FIRQ:	goto FIRQ;
		case VECTOR_IRQ:	goto IRQ;
	}

	// debugger hook
	m_ppc = m_pc;
	debugger_instruction_hook(this, m_pc.w);

	// opcode fetch
	m_lic_func(ASSERT_LINE);
	m_opcode = read_opcode();
	if (UNEXPECTED(m_icount <= 0)) { push_state(1); return; }
state_1:
	m_lic_func(CLEAR_LINE);

	// dispatch opcode
	switch(m_opcode)
	{
		case 0x00:	case 0x01:
			push_state(2);	// NEG8
			goto DIRECT;
		case 0x03:	case 0x02:
			push_state(3);	// COM8
			goto DIRECT;
		case 0x04:	case 0x05:
			push_state(4);	// LSR8
			goto DIRECT;
		case 0x06:
			push_state(5);	// ROR8
			goto DIRECT;
		case 0x07:
			push_state(6);	// ASR8
			goto DIRECT;
		case 0x08:
			push_state(7);	// ASL8
			goto DIRECT;
		case 0x09:
			push_state(8);	// ROL8
			goto DIRECT;
		case 0x0A:	case 0x0B:
			push_state(9);	// DEC8
			goto DIRECT;
		case 0x0C:
			push_state(10);	// INC8
			goto DIRECT;
		case 0x0D:
			push_state(11);	// TST8
			goto DIRECT;
		case 0x0E:
			push_state(12);	// JMP
			goto DIRECT;
		case 0x0F:
			push_state(13);	// CLR8
			goto DIRECT;

		case 0x10:
			goto DISPATCH10;
		case 0x11:
			goto DISPATCH11;
		case 0x12:
			goto NOP;
		case 0x13:
			goto SYNC;
		case 0x16:				set_cond(true);	goto LBRANCH;
		case 0x17:
			goto LBSR;
		case 0x19:
			goto DAA;
		case 0x1A:				set_imm();		goto ORCC;
		case 0x1C:				set_imm();		goto ANDCC;
		case 0x1D:
			goto SEX;
		case 0x1E:
			goto EXG;
		case 0x1F:
			goto TFR;

		case 0x20:				set_cond(true);			goto BRANCH;
		case 0x21:				set_cond(false);		goto BRANCH;
		case 0x22:				set_cond(cond_hi());	goto BRANCH;
		case 0x23:				set_cond(!cond_hi());	goto BRANCH;
		case 0x24:				set_cond(cond_cc());	goto BRANCH;
		case 0x25:				set_cond(!cond_cc());	goto BRANCH;
		case 0x26:				set_cond(cond_ne());	goto BRANCH;
		case 0x27:				set_cond(!cond_ne());	goto BRANCH;
		case 0x28:				set_cond(cond_vc());	goto BRANCH;
		case 0x29:				set_cond(!cond_vc());	goto BRANCH;
		case 0x2A:				set_cond(cond_pl());	goto BRANCH;
		case 0x2B:				set_cond(!cond_pl());	goto BRANCH;
		case 0x2C:				set_cond(cond_ge());	goto BRANCH;
		case 0x2D:				set_cond(!cond_ge());	goto BRANCH;
		case 0x2E:				set_cond(cond_gt());	goto BRANCH;
		case 0x2F:				set_cond(!cond_gt());	goto BRANCH;

		case 0x30:				set_regop16(m_x);		push_state(14);	// LEA_xy
		goto INDEXED;
		case 0x31:				set_regop16(m_y);		push_state(14);	// LEA_xy
		goto INDEXED;
		case 0x32:				set_regop16(m_s);		push_state(15);	// LEA_us
		goto INDEXED;
		case 0x33:				set_regop16(m_u);		push_state(15);	// LEA_us
		goto INDEXED;
		case 0x34:
			goto PSHS;
		case 0x35:
			goto PULS;
		case 0x36:
			goto PSHU;
		case 0x37:
			goto PULU;
		case 0x39:
			goto RTS;
		case 0x3A:
			goto ABX;
		case 0x3B:
			goto RTI;
		case 0x3C:
			goto CWAI;
		case 0x3D:
			goto MUL;
		case 0x3F:
			goto SWI;

		case 0x40:	case 0x41:							set_a();	goto NEG8;
		case 0x43:	case 0x42:							set_a();	goto COM8;
		case 0x44:	case 0x45:							set_a();	goto LSR8;
		case 0x46:										set_a();	goto ROR8;
		case 0x47:										set_a();	goto ASR8;
		case 0x48:										set_a();	goto ASL8;
		case 0x49:										set_a();	goto ROL8;
		case 0x4A:	case 0x4B:							set_a();	goto DEC8;
		case 0x4C:										set_a();	goto INC8;
		case 0x4D:										set_a();	goto TST8;
		case 0x4E:										set_a();	goto JMP;
		case 0x4F:										set_a();	goto CLR8;

		case 0x50:	case 0x51:							set_b();	goto NEG8;
		case 0x53:	case 0x52:							set_b();	goto COM8;
		case 0x54:	case 0x55:							set_b();	goto LSR8;
		case 0x56:										set_b();	goto ROR8;
		case 0x57:										set_b();	goto ASR8;
		case 0x58:										set_b();	goto ASL8;
		case 0x59:										set_b();	goto ROL8;
		case 0x5A:	case 0x5B:							set_b();	goto DEC8;
		case 0x5C:										set_b();	goto INC8;
		case 0x5D:										set_b();	goto TST8;
		case 0x5E:										set_b();	goto JMP;
		case 0x5F:										set_b();	goto CLR8;

		case 0x60:	case 0x61:
			push_state(2);	// NEG8
			goto INDEXED;
		case 0x63:	case 0x62:
			push_state(3);	// COM8
			goto INDEXED;
		case 0x64:	case 0x65:
			push_state(4);	// LSR8
			goto INDEXED;
		case 0x66:
			push_state(5);	// ROR8
			goto INDEXED;
		case 0x67:
			push_state(6);	// ASR8
			goto INDEXED;
		case 0x68:
			push_state(7);	// ASL8
			goto INDEXED;
		case 0x69:
			push_state(8);	// ROL8
			goto INDEXED;
		case 0x6A:	case 0x6B:
			push_state(9);	// DEC8
			goto INDEXED;
		case 0x6C:
			push_state(10);	// INC8
			goto INDEXED;
		case 0x6D:
			push_state(11);	// TST8
			goto INDEXED;
		case 0x6E:
			push_state(12);	// JMP
			goto INDEXED;
		case 0x6F:
			push_state(13);	// CLR8
			goto INDEXED;

		case 0x70:	case 0x71:
			push_state(2);	// NEG8
			goto EXTENDED;
		case 0x73:	case 0x72:
			push_state(3);	// COM8
			goto EXTENDED;
		case 0x74:	case 0x75:
			push_state(4);	// LSR8
			goto EXTENDED;
		case 0x76:
			push_state(5);	// ROR8
			goto EXTENDED;
		case 0x77:
			push_state(6);	// ASR8
			goto EXTENDED;
		case 0x78:
			push_state(7);	// ASL8
			goto EXTENDED;
		case 0x79:
			push_state(8);	// ROL8
			goto EXTENDED;
		case 0x7A:	case 0x7B:
			push_state(9);	// DEC8
			goto EXTENDED;
		case 0x7C:
			push_state(10);	// INC8
			goto EXTENDED;
		case 0x7D:
			push_state(11);	// TST8
			goto EXTENDED;
		case 0x7E:
			push_state(12);	// JMP
			goto EXTENDED;
		case 0x7F:
			push_state(13);	// CLR8
			goto EXTENDED;

		case 0x80:				set_regop8(m_q.r.a);	set_imm();	goto SUB8;
		case 0x81:				set_regop8(m_q.r.a);	set_imm();	goto CMP8;
		case 0x82:				set_regop8(m_q.r.a);	set_imm();	goto SBC8;
		case 0x83:				set_regop16(m_q.p.d);	set_imm();	goto SUB16;
		case 0x84:				set_regop8(m_q.r.a);	set_imm();	goto AND8;
		case 0x85:				set_regop8(m_q.r.a);	set_imm();	goto BIT8;
		case 0x86:				set_regop8(m_q.r.a);	set_imm();	goto LD8;
		case 0x87:				set_regop8(m_q.r.a);	set_imm();	goto ST8;
		case 0x88:				set_regop8(m_q.r.a);	set_imm();	goto EOR8;
		case 0x89:				set_regop8(m_q.r.a);	set_imm();	goto ADC8;
		case 0x8A:				set_regop8(m_q.r.a);	set_imm();	goto OR8;
		case 0x8B:				set_regop8(m_q.r.a);	set_imm();	goto ADD8;
		case 0x8C:				set_regop16(m_x);		set_imm();	goto CMP16;
		case 0x8D:
			goto BSR;
		case 0x8E:				set_regop16(m_x);		set_imm();	goto LD16;
		case 0x8F:				set_regop16(m_x);		set_imm();	goto ST16;

		case 0x90:				set_regop8(m_q.r.a);	push_state(16);	// SUB8
	goto DIRECT;
		case 0x91:				set_regop8(m_q.r.a);	push_state(17);	// CMP8
	goto DIRECT;
		case 0x92:				set_regop8(m_q.r.a);	push_state(18);	// SBC8
	goto DIRECT;
		case 0x93:				set_regop16(m_q.p.d);	push_state(19);	// SUB16
	goto DIRECT;
		case 0x94:				set_regop8(m_q.r.a);	push_state(20);	// AND8
	goto DIRECT;
		case 0x95:				set_regop8(m_q.r.a);	push_state(21);	// BIT8
	goto DIRECT;
		case 0x96:				set_regop8(m_q.r.a);	push_state(22);	// LD8
	goto DIRECT;
		case 0x97:				set_regop8(m_q.r.a);	push_state(23);	// ST8
	goto DIRECT;
		case 0x98:				set_regop8(m_q.r.a);	push_state(24);	// EOR8
	goto DIRECT;
		case 0x99:				set_regop8(m_q.r.a);	push_state(25);	// ADC8
	goto DIRECT;
		case 0x9A:				set_regop8(m_q.r.a);	push_state(26);	// OR8
	goto DIRECT;
		case 0x9B:				set_regop8(m_q.r.a);	push_state(27);	// ADD8
	goto DIRECT;
		case 0x9C:				set_regop16(m_x);		push_state(28);	// CMP16
		goto DIRECT;
		case 0x9D:
			push_state(29);	// JSR
			goto DIRECT;
		case 0x9E:				set_regop16(m_x);		push_state(30);	// LD16
		goto DIRECT;
		case 0x9F:				set_regop16(m_x);		push_state(31);	// ST16
		goto DIRECT;

		case 0xA0:				set_regop8(m_q.r.a);	push_state(16);	// SUB8
	goto INDEXED;
		case 0xA1:				set_regop8(m_q.r.a);	push_state(17);	// CMP8
	goto INDEXED;
		case 0xA2:				set_regop8(m_q.r.a);	push_state(18);	// SBC8
	goto INDEXED;
		case 0xA3:				set_regop16(m_q.p.d);	push_state(19);	// SUB16
	goto INDEXED;
		case 0xA4:				set_regop8(m_q.r.a);	push_state(20);	// AND8
	goto INDEXED;
		case 0xA5:				set_regop8(m_q.r.a);	push_state(21);	// BIT8
	goto INDEXED;
		case 0xA6:				set_regop8(m_q.r.a);	push_state(22);	// LD8
	goto INDEXED;
		case 0xA7:				set_regop8(m_q.r.a);	push_state(23);	// ST8
	goto INDEXED;
		case 0xA8:				set_regop8(m_q.r.a);	push_state(24);	// EOR8
	goto INDEXED;
		case 0xA9:				set_regop8(m_q.r.a);	push_state(25);	// ADC8
	goto INDEXED;
		case 0xAA:				set_regop8(m_q.r.a);	push_state(26);	// OR8
	goto INDEXED;
		case 0xAB:				set_regop8(m_q.r.a);	push_state(27);	// ADD8
	goto INDEXED;
		case 0xAC:				set_regop16(m_x);		push_state(28);	// CMP16
		goto INDEXED;
		case 0xAD:
			push_state(29);	// JSR
			goto INDEXED;
		case 0xAE:				set_regop16(m_x);		push_state(30);	// LD16
		goto INDEXED;
		case 0xAF:				set_regop16(m_x);		push_state(31);	// ST16
		goto INDEXED;

		case 0xB0:				set_regop8(m_q.r.a);	push_state(16);	// SUB8
	goto EXTENDED;
		case 0xB1:				set_regop8(m_q.r.a);	push_state(17);	// CMP8
	goto EXTENDED;
		case 0xB2:				set_regop8(m_q.r.a);	push_state(18);	// SBC8
	goto EXTENDED;
		case 0xB3:				set_regop16(m_q.p.d);	push_state(19);	// SUB16
	goto EXTENDED;
		case 0xB4:				set_regop8(m_q.r.a);	push_state(20);	// AND8
	goto EXTENDED;
		case 0xB5:				set_regop8(m_q.r.a);	push_state(21);	// BIT8
	goto EXTENDED;
		case 0xB6:				set_regop8(m_q.r.a);	push_state(22);	// LD8
	goto EXTENDED;
		case 0xB7:				set_regop8(m_q.r.a);	push_state(23);	// ST8
	goto EXTENDED;
		case 0xB8:				set_regop8(m_q.r.a);	push_state(24);	// EOR8
	goto EXTENDED;
		case 0xB9:				set_regop8(m_q.r.a);	push_state(25);	// ADC8
	goto EXTENDED;
		case 0xBA:				set_regop8(m_q.r.a);	push_state(26);	// OR8
	goto EXTENDED;
		case 0xBB:				set_regop8(m_q.r.a);	push_state(27);	// ADD8
	goto EXTENDED;
		case 0xBC:				set_regop16(m_x);		push_state(28);	// CMP16
		goto EXTENDED;
		case 0xBD:
			push_state(29);	// JSR
			goto EXTENDED;
		case 0xBE:				set_regop16(m_x);		push_state(30);	// LD16
		goto EXTENDED;
		case 0xBF:				set_regop16(m_x);		push_state(31);	// ST16
		goto EXTENDED;

		case 0xC0:				set_regop8(m_q.r.b);	set_imm();	goto SUB8;
		case 0xC1:				set_regop8(m_q.r.b);	set_imm();	goto CMP8;
		case 0xC2:				set_regop8(m_q.r.b);	set_imm();	goto SBC8;
		case 0xC3:				set_regop16(m_q.p.d);	set_imm();	goto ADD16;
		case 0xC4:				set_regop8(m_q.r.b);	set_imm();	goto AND8;
		case 0xC5:				set_regop8(m_q.r.b);	set_imm();	goto BIT8;
		case 0xC6:				set_regop8(m_q.r.b);	set_imm();	goto LD8;
		case 0xC7:				set_regop8(m_q.r.b);	set_imm();	goto ST8;
		case 0xC8:				set_regop8(m_q.r.b);	set_imm();	goto EOR8;
		case 0xC9:				set_regop8(m_q.r.b);	set_imm();	goto ADC8;
		case 0xCA:				set_regop8(m_q.r.b);	set_imm();	goto OR8;
		case 0xCB:				set_regop8(m_q.r.b);	set_imm();	goto ADD8;
		case 0xCC:				set_regop16(m_q.p.d);	set_imm();	goto LD16;
		case 0xCD:				set_regop16(m_q.p.d);	set_imm();	goto ST16;
		case 0xCE:				set_regop16(m_u);		set_imm();	goto LD16;
		case 0xCF:				set_regop16(m_u);		set_imm();	goto ST16;

		case 0xD0:				set_regop8(m_q.r.b);	push_state(16);	// SUB8
	goto DIRECT;
		case 0xD1:				set_regop8(m_q.r.b);	push_state(17);	// CMP8
	goto DIRECT;
		case 0xD2:				set_regop8(m_q.r.b);	push_state(18);	// SBC8
	goto DIRECT;
		case 0xD3:				set_regop16(m_q.p.d);	push_state(32);	// ADD16
	goto DIRECT;
		case 0xD4:				set_regop8(m_q.r.b);	push_state(20);	// AND8
	goto DIRECT;
		case 0xD5:				set_regop8(m_q.r.b);	push_state(21);	// BIT8
	goto DIRECT;
		case 0xD6:				set_regop8(m_q.r.b);	push_state(22);	// LD8
	goto DIRECT;
		case 0xD7:				set_regop8(m_q.r.b);	push_state(23);	// ST8
	goto DIRECT;
		case 0xD8:				set_regop8(m_q.r.b);	push_state(24);	// EOR8
	goto DIRECT;
		case 0xD9:				set_regop8(m_q.r.b);	push_state(25);	// ADC8
	goto DIRECT;
		case 0xDA:				set_regop8(m_q.r.b);	push_state(26);	// OR8
	goto DIRECT;
		case 0xDB:				set_regop8(m_q.r.b);	push_state(27);	// ADD8
	goto DIRECT;
		case 0xDC:				set_regop16(m_q.p.d);	push_state(30);	// LD16
	goto DIRECT;
		case 0xDD:				set_regop16(m_q.p.d);	push_state(31);	// ST16
	goto DIRECT;
		case 0xDE:				set_regop16(m_u);		push_state(30);	// LD16
		goto DIRECT;
		case 0xDF:				set_regop16(m_u);		push_state(31);	// ST16
		goto DIRECT;

		case 0xE0:				set_regop8(m_q.r.b);	push_state(16);	// SUB8
	goto INDEXED;
		case 0xE1:				set_regop8(m_q.r.b);	push_state(17);	// CMP8
	goto INDEXED;
		case 0xE2:				set_regop8(m_q.r.b);	push_state(18);	// SBC8
	goto INDEXED;
		case 0xE3:				set_regop16(m_q.p.d);	push_state(32);	// ADD16
	goto INDEXED;
		case 0xE4:				set_regop8(m_q.r.b);	push_state(20);	// AND8
	goto INDEXED;
		case 0xE5:				set_regop8(m_q.r.b);	push_state(21);	// BIT8
	goto INDEXED;
		case 0xE6:				set_regop8(m_q.r.b);	push_state(22);	// LD8
	goto INDEXED;
		case 0xE7:				set_regop8(m_q.r.b);	push_state(23);	// ST8
	goto INDEXED;
		case 0xE8:				set_regop8(m_q.r.b);	push_state(24);	// EOR8
	goto INDEXED;
		case 0xE9:				set_regop8(m_q.r.b);	push_state(25);	// ADC8
	goto INDEXED;
		case 0xEA:				set_regop8(m_q.r.b);	push_state(26);	// OR8
	goto INDEXED;
		case 0xEB:				set_regop8(m_q.r.b);	push_state(27);	// ADD8
	goto INDEXED;
		case 0xEC:				set_regop16(m_q.p.d);	push_state(30);	// LD16
	goto INDEXED;
		case 0xED:				set_regop16(m_q.p.d);	push_state(31);	// ST16
	goto INDEXED;
		case 0xEE:				set_regop16(m_u);		push_state(30);	// LD16
		goto INDEXED;
		case 0xEF:				set_regop16(m_u);		push_state(31);	// ST16
		goto INDEXED;

		case 0xF0:				set_regop8(m_q.r.b);	push_state(16);	// SUB8
	goto EXTENDED;
		case 0xF1:				set_regop8(m_q.r.b);	push_state(17);	// CMP8
	goto EXTENDED;
		case 0xF2:				set_regop8(m_q.r.b);	push_state(18);	// SBC8
	goto EXTENDED;
		case 0xF3:				set_regop16(m_q.p.d);	push_state(32);	// ADD16
	goto EXTENDED;
		case 0xF4:				set_regop8(m_q.r.b);	push_state(20);	// AND8
	goto EXTENDED;
		case 0xF5:				set_regop8(m_q.r.b);	push_state(21);	// BIT8
	goto EXTENDED;
		case 0xF6:				set_regop8(m_q.r.b);	push_state(22);	// LD8
	goto EXTENDED;
		case 0xF7:				set_regop8(m_q.r.b);	push_state(23);	// ST8
	goto EXTENDED;
		case 0xF8:				set_regop8(m_q.r.b);	push_state(24);	// EOR8
	goto EXTENDED;
		case 0xF9:				set_regop8(m_q.r.b);	push_state(25);	// ADC8
	goto EXTENDED;
		case 0xFA:				set_regop8(m_q.r.b);	push_state(26);	// OR8
	goto EXTENDED;
		case 0xFB:				set_regop8(m_q.r.b);	push_state(27);	// ADD8
	goto EXTENDED;
		case 0xFC:				set_regop16(m_q.p.d);	push_state(30);	// LD16
	goto EXTENDED;
		case 0xFD:				set_regop16(m_q.p.d);	push_state(31);	// ST16
	goto EXTENDED;
		case 0xFE:				set_regop16(m_u);		push_state(30);	// LD16
		goto EXTENDED;
		case 0xFF:				set_regop16(m_u);		push_state(31);	// ST16
		goto EXTENDED;
		default:
			goto ILLEGAL;
			
	}
	return;

DISPATCH10:
	m_opcode = read_opcode();
	if (UNEXPECTED(m_icount <= 0)) { push_state(33); return; }
state_33:
	switch(m_opcode)
	{
		case 0x20:				set_cond(true);						goto LBRANCH;
		case 0x21:				set_cond(false);					goto LBRANCH;
		case 0x22:				set_cond(cond_hi());				goto LBRANCH;
		case 0x23:				set_cond(!cond_hi());				goto LBRANCH;
		case 0x24:				set_cond(cond_cc());				goto LBRANCH;
		case 0x25:				set_cond(!cond_cc());				goto LBRANCH;
		case 0x26:				set_cond(cond_ne());				goto LBRANCH;
		case 0x27:				set_cond(!cond_ne());				goto LBRANCH;
		case 0x28:				set_cond(cond_vc());				goto LBRANCH;
		case 0x29:				set_cond(!cond_vc());				goto LBRANCH;
		case 0x2A:				set_cond(cond_pl());				goto LBRANCH;
		case 0x2B:				set_cond(!cond_pl());				goto LBRANCH;
		case 0x2C:				set_cond(cond_ge());				goto LBRANCH;
		case 0x2D:				set_cond(!cond_ge());				goto LBRANCH;
		case 0x2E:				set_cond(cond_gt());				goto LBRANCH;
		case 0x2F:				set_cond(!cond_gt());				goto LBRANCH;

		case 0x3F:
			goto SWI2;

		case 0x83:				set_regop16(m_q.p.d);	set_imm();		goto CMP16;
		case 0x8C:				set_regop16(m_y);	set_imm();		goto CMP16;
		case 0x8E:				set_regop16(m_y);	set_imm();		goto LD16;
		case 0x8F:				set_regop16(m_y);	set_imm();		goto ST16;
		case 0x93:				set_regop16(m_q.p.d);	push_state(28);	// CMP16
	goto DIRECT;
		case 0x9C:				set_regop16(m_y);	push_state(28);	// CMP16
	goto DIRECT;
		case 0x9E:				set_regop16(m_y);	push_state(30);	// LD16
	goto DIRECT;
		case 0x9F:				set_regop16(m_y);	push_state(31);	// ST16
	goto DIRECT;
		case 0xA3:				set_regop16(m_q.p.d);	push_state(28);	// CMP16
	goto INDEXED;
		case 0xAC:				set_regop16(m_y);	push_state(28);	// CMP16
	goto INDEXED;
		case 0xAE:				set_regop16(m_y);	push_state(30);	// LD16
	goto INDEXED;
		case 0xAF:				set_regop16(m_y);	push_state(31);	// ST16
	goto INDEXED;
		case 0xB3:				set_regop16(m_q.p.d);	push_state(28);	// CMP16
	goto EXTENDED;
		case 0xBC:				set_regop16(m_y);	push_state(28);	// CMP16
	goto EXTENDED;
		case 0xBE:				set_regop16(m_y);	push_state(30);	// LD16
	goto EXTENDED;
		case 0xBF:				set_regop16(m_y);	push_state(31);	// ST16
	goto EXTENDED;

		case 0xCE:				set_regop16(m_s);	set_imm();		goto LD16;
		case 0xCF:				set_regop16(m_s);	set_imm();		goto ST16;
		case 0xDE:				set_regop16(m_s);	push_state(30);	// LD16
	goto DIRECT;
		case 0xDF:				set_regop16(m_s);	push_state(31);	// ST16
	goto DIRECT;
		case 0xEE:				set_regop16(m_s);	push_state(30);	// LD16
	goto INDEXED;
		case 0xEF:				set_regop16(m_s);	push_state(31);	// ST16
	goto INDEXED;
		case 0xFE:				set_regop16(m_s);	push_state(30);	// LD16
	goto EXTENDED;
		case 0xFF:				set_regop16(m_s);	push_state(31);	// ST16
	goto EXTENDED;

		default:
			goto ILLEGAL;
			
	}
	return;

DISPATCH11:
	m_opcode = read_opcode();
	if (UNEXPECTED(m_icount <= 0)) { push_state(34); return; }
state_34:
	switch(m_opcode)
	{
		case 0x3F:
			goto SWI3;
		case 0x83:				set_regop16(m_u);	set_imm();		goto CMP16;
		case 0x8C:				set_regop16(m_s);	set_imm();		goto CMP16;
		case 0x93:				set_regop16(m_u);	push_state(28);	// CMP16
	goto DIRECT;
		case 0x9C:				set_regop16(m_s);	push_state(28);	// CMP16
	goto DIRECT;
		case 0xA3:				set_regop16(m_u);	push_state(28);	// CMP16
	goto INDEXED;
		case 0xAC:				set_regop16(m_s);	push_state(28);	// CMP16
	goto INDEXED;
		case 0xB3:				set_regop16(m_u);	push_state(28);	// CMP16
	goto EXTENDED;
		case 0xBC:				set_regop16(m_s);	push_state(28);	// CMP16
	goto EXTENDED;
		default:
			goto ILLEGAL;
			
	}
	return;
	
// license:BSD-3-Clause
// copyright-holders:Nathan Woods
NMI:
	m_nmi_asserted = false;
	m_cc |= CC_E;
	set_regop16(m_s);
	m_temp.w = entire_state_registers();
	push_state(35);
	goto PUSH_REGISTERS;
state_35:
	m_cc |= CC_I | CC_F;
	set_ea(VECTOR_NMI);
	eat(1);
	standard_irq_callback(INPUT_LINE_NMI);
	goto INTERRUPT_VECTOR;

FIRQ:
	if (firq_saves_entire_state())
	{
		m_cc |= CC_E;
		m_temp.w = entire_state_registers();
	}
	else
	{
		m_cc &= ~CC_E;
		m_temp.w = partial_state_registers();
	}
	set_regop16(m_s);
	push_state(36);
	goto PUSH_REGISTERS;
state_36:
	m_cc |= CC_I | CC_F;
	set_ea(VECTOR_FIRQ);
	eat(1);
	standard_irq_callback(M6809_FIRQ_LINE);
	goto INTERRUPT_VECTOR;

IRQ:
	m_cc |= CC_E;
	set_regop16(m_s);
	m_temp.w = entire_state_registers();
	push_state(37);
	goto PUSH_REGISTERS;
state_37:
	m_cc |= CC_I;
	set_ea(VECTOR_IRQ);
	eat(1);
	standard_irq_callback(M6809_IRQ_LINE);
	goto INTERRUPT_VECTOR;

INTERRUPT_VECTOR:
	eat(4);
	if (UNEXPECTED(m_icount <= 0)) { push_state(38); return; }
state_38:
	m_pc.b.h = read_operand(0);	if (UNEXPECTED(m_icount <= 0)) { push_state(39); return; }
state_39:
	// Not sure if this is cycle exact
	m_pc.b.l = read_operand(1);	if (UNEXPECTED(m_icount <= 0)) { push_state(40); return; }
state_40:
	// Not sure if this is cycle exact
	return;

NEG8:
	m_temp.b.l = read_operand();
	if (UNEXPECTED(m_icount <= 0)) { push_state(41); return; }
state_41:
	m_temp.b.l = set_flags(CC_NZVC, (uint8_t)0, m_temp.b.l, -m_temp.b.l);
	eat(hd6309_native_mode() ? 0 : 1);
	if (UNEXPECTED(m_icount <= 0)) { push_state(42); return; }
state_42:
	write_operand(m_temp.b.l);
	return;

COM8:
	m_temp.b.l = read_operand();
	if (UNEXPECTED(m_icount <= 0)) { push_state(43); return; }
state_43:
	m_cc &= ~CC_V;
	m_cc |= CC_C;
	m_temp.b.l = set_flags(CC_NZ, (uint8_t) ~m_temp.b.l);
	eat(hd6309_native_mode() ? 0 : 1);
	if (UNEXPECTED(m_icount <= 0)) { push_state(44); return; }
state_44:
	write_operand(m_temp.b.l);
	return;

LSR8:
	m_temp.b.l = read_operand();
	if (UNEXPECTED(m_icount <= 0)) { push_state(45); return; }
state_45:
	m_cc &= ~CC_C;
	m_cc |= (m_temp.b.l & 1) ? CC_C : 0;
	m_temp.b.l = set_flags<uint8_t>(CC_NZ, m_temp.b.l >> 1);
	eat(hd6309_native_mode() ? 0 : 1);
	if (UNEXPECTED(m_icount <= 0)) { push_state(46); return; }
state_46:
	write_operand(m_temp.b.l);
	return;

ROR8:
	m_temp.b.l = read_operand();
	if (UNEXPECTED(m_icount <= 0)) { push_state(47); return; }
state_47:
	m_temp.b.l = set_flags<uint8_t>(CC_NZ, rotate_right(m_temp.b.l));
	eat(hd6309_native_mode() ? 0 : 1);
	if (UNEXPECTED(m_icount <= 0)) { push_state(48); return; }
state_48:
	write_operand(m_temp.b.l);
	return;

ASR8:
	m_temp.b.l = read_operand();
	if (UNEXPECTED(m_icount <= 0)) { push_state(49); return; }
state_49:
	m_cc &= ~CC_NZC;
	m_cc |= (m_temp.b.l & 1) ? CC_C : 0;
	m_temp.b.l = set_flags<uint8_t>(CC_NZ, ((int8_t) m_temp.b.l) >> 1);
	eat(hd6309_native_mode() ? 0 : 1);
	if (UNEXPECTED(m_icount <= 0)) { push_state(50); return; }
state_50:
	write_operand(m_temp.b.l);
	return;

ASL8:
	m_temp.b.l = read_operand();
	if (UNEXPECTED(m_icount <= 0)) { push_state(51); return; }
state_51:
	m_temp.b.l = set_flags<uint8_t>(CC_NZVC, m_temp.b.l, m_temp.b.l, m_temp.b.l << 1);
	eat(hd6309_native_mode() ? 0 : 1);
	if (UNEXPECTED(m_icount <= 0)) { push_state(52); return; }
state_52:
	write_operand(m_temp.b.l);
	return;

ROL8:
	m_temp.b.l = read_operand();
	if (UNEXPECTED(m_icount <= 0)) { push_state(53); return; }
state_53:
	m_temp.b.l = set_flags<uint8_t>(CC_NZV, m_temp.b.l, m_temp.b.l, rotate_left(m_temp.b.l));
	eat(hd6309_native_mode() ? 0 : 1);
	if (UNEXPECTED(m_icount <= 0)) { push_state(54); return; }
state_54:
	write_operand(m_temp.b.l);
	return;

DEC8:
	m_temp.b.l = read_operand();
	if (UNEXPECTED(m_icount <= 0)) { push_state(55); return; }
state_55:
	m_temp.b.l = set_flags<uint8_t>(CC_NZV, m_temp.b.l, 1, m_temp.b.l - 1);
	eat(hd6309_native_mode() && is_register_addressing_mode() ? 0 : 1);
	if (UNEXPECTED(m_icount <= 0)) { push_state(56); return; }
state_56:
	write_operand(m_temp.b.l);
	return;

INC8:
	m_temp.b.l = read_operand();
	if (UNEXPECTED(m_icount <= 0)) { push_state(57); return; }
state_57:
	m_temp.b.l = set_flags<uint8_t>(CC_NZV, m_temp.b.l, 1, m_temp.b.l + 1);
	eat(hd6309_native_mode() && is_register_addressing_mode() ? 0 : 1);
	if (UNEXPECTED(m_icount <= 0)) { push_state(58); return; }
state_58:
	write_operand(m_temp.b.l);
	return;

TST8:
	m_temp.b.l = read_operand();
	if (UNEXPECTED(m_icount <= 0)) { push_state(59); return; }
state_59:
	set_flags(CC_NZV, m_temp.b.l);
	eat(hd6309_native_mode() ? 0 : 1);
	eat(is_register_addressing_mode() ? 0 : 1);
	return;

JMP:
	m_pc.w = m_ea.w;
	return;

CLR8:
	read_operand();
	if (UNEXPECTED(m_icount <= 0)) { push_state(60); return; }
state_60:
	m_cc &= ~CC_NZVC;
	m_cc |= CC_Z;
	eat(hd6309_native_mode() && is_register_addressing_mode() ? 0 : 1);
	if (UNEXPECTED(m_icount <= 0)) { push_state(61); return; }
state_61:
	write_operand(0);
	return;

NEG16:
	m_temp.b.h = read_operand(0);
	m_temp.b.l = read_operand(1);
	m_temp.w = set_flags(CC_NZVC, (uint16_t)0, m_temp.w, -m_temp.w);
	eat(hd6309_native_mode() ? 0 : 1);
	write_operand(0, m_temp.b.h);
	write_operand(1, m_temp.b.l);
	return;

LSR16:
	m_temp.b.h = read_operand(0);
	if (UNEXPECTED(m_icount <= 0)) { push_state(62); return; }
state_62:
	m_temp.b.l = read_operand(1);
	if (UNEXPECTED(m_icount <= 0)) { push_state(63); return; }
state_63:
	m_cc &= ~CC_C;
	m_cc |= (m_temp.w & 1) ? CC_C : 0;
	m_temp.w = set_flags<uint16_t>(CC_NZ, m_temp.w >> 1);
	eat(hd6309_native_mode() ? 0 : 1);
	if (UNEXPECTED(m_icount <= 0)) { push_state(64); return; }
state_64:
	write_operand(0, m_temp.b.h);
	if (UNEXPECTED(m_icount <= 0)) { push_state(65); return; }
state_65:
	write_operand(1, m_temp.b.l);
	return;

ROR16:
	m_temp.b.h = read_operand(0);
	if (UNEXPECTED(m_icount <= 0)) { push_state(66); return; }
state_66:
	m_temp.b.l = read_operand(1);
	if (UNEXPECTED(m_icount <= 0)) { push_state(67); return; }
state_67:
	m_temp.w = set_flags<uint16_t>(CC_NZ, rotate_right(m_temp.w));
	eat(hd6309_native_mode() ? 0 : 1);
	if (UNEXPECTED(m_icount <= 0)) { push_state(68); return; }
state_68:
	write_operand(0, m_temp.b.h);
	if (UNEXPECTED(m_icount <= 0)) { push_state(69); return; }
state_69:
	write_operand(1, m_temp.b.l);
	return;

ASR16:
	m_temp.b.h = read_operand(0);
	if (UNEXPECTED(m_icount <= 0)) { push_state(70); return; }
state_70:
	m_temp.b.l = read_operand(1);
	if (UNEXPECTED(m_icount <= 0)) { push_state(71); return; }
state_71:
	m_cc &= ~CC_NZC;
	m_cc |= (m_temp.w & 1) ? CC_C : 0;
	m_temp.w = set_flags<uint16_t>(CC_NZ, ((int16_t) m_temp.w) >> 1);
	eat(hd6309_native_mode() ? 0 : 1);
	if (UNEXPECTED(m_icount <= 0)) { push_state(72); return; }
state_72:
	write_operand(0, m_temp.b.h);
	if (UNEXPECTED(m_icount <= 0)) { push_state(73); return; }
state_73:
	write_operand(1, m_temp.b.l);
	return;

ASL16:
	m_temp.b.h = read_operand(0);
	if (UNEXPECTED(m_icount <= 0)) { push_state(74); return; }
state_74:
	m_temp.b.l = read_operand(1);
	if (UNEXPECTED(m_icount <= 0)) { push_state(75); return; }
state_75:
	m_temp.w = set_flags<uint16_t>(CC_NZVC, m_temp.w, m_temp.w, m_temp.w << 1);
	eat(hd6309_native_mode() ? 0 : 1);
	if (UNEXPECTED(m_icount <= 0)) { push_state(76); return; }
state_76:
	write_operand(0, m_temp.b.h);
	if (UNEXPECTED(m_icount <= 0)) { push_state(77); return; }
state_77:
	write_operand(1, m_temp.b.l);
	return;

ROL16:
	m_temp.b.h = read_operand(0);
	if (UNEXPECTED(m_icount <= 0)) { push_state(78); return; }
state_78:
	m_temp.b.l = read_operand(1);
	if (UNEXPECTED(m_icount <= 0)) { push_state(79); return; }
state_79:
	m_temp.w = set_flags<uint16_t>(CC_NZV, rotate_left(m_temp.w));
	eat(hd6309_native_mode() ? 0 : 1);
	if (UNEXPECTED(m_icount <= 0)) { push_state(80); return; }
state_80:
	write_operand(0, m_temp.b.h);
	if (UNEXPECTED(m_icount <= 0)) { push_state(81); return; }
state_81:
	write_operand(1, m_temp.b.l);
	return;

DEC16:
	m_temp.b.h = read_operand(0);
	m_temp.b.l = read_operand(1);
	m_temp.w = set_flags<uint16_t>(CC_NZVC, m_temp.w, 1, m_temp.w - 1);
	eat(hd6309_native_mode() ? 0 : 1);
	write_operand(0, m_temp.b.h);
	write_operand(1, m_temp.b.l);
	return;

INC16:
	m_temp.b.h = read_operand(0);
	m_temp.b.l = read_operand(1);
	m_temp.w = set_flags<uint16_t>(CC_NZVC, m_temp.w, 1, m_temp.w + 1);
	eat(hd6309_native_mode() ? 0 : 1);
	write_operand(0, m_temp.b.h);
	write_operand(1, m_temp.b.l);
	return;

TST16:
	m_temp.b.h = read_operand(0);
	m_temp.b.l = read_operand(1);
	set_flags(CC_NZV, m_temp.w);
	eat(hd6309_native_mode() ? 0 : 1);
	eat(is_register_addressing_mode() ? 0 : 1);
	return;

CLR16:
	eat(hd6309_native_mode() ? 0 : 1);
	m_cc &= ~CC_NZVC;
	m_cc |= CC_Z;
	write_operand(0, 0x00);
	write_operand(1, 0x00);
	return;

SUB8:
	m_temp.b.l = read_operand();
	regop8() = set_flags(CC_NZVC, regop8(), m_temp.b.l, regop8() - m_temp.b.l);
	return;

CMP8:
	m_temp.b.l = read_operand();
	set_flags(CC_NZVC, regop8(), m_temp.b.l, regop8() - m_temp.b.l);
	return;

SBC8:
	m_temp.w = (uint16_t)read_operand() + (m_cc & CC_C ? 1 : 0);
	regop8() = set_flags(CC_NZVC, regop8(), m_temp.b.l, regop8() - m_temp.w);
	return;

AND8:
	m_cc &= ~CC_V;
	regop8() = set_flags(CC_NZ, (uint8_t)0, regop8(), regop8() & read_operand());
	return;

BIT8:
	m_cc &= ~CC_V;
	set_flags(CC_NZ, (uint8_t)0, regop8(), regop8() & read_operand());
	return;

EOR8:
	m_cc &= ~CC_V;
	regop8() = set_flags(CC_NZ, (uint8_t)0, regop8(), regop8() ^ read_operand());
	return;

ADC8:
	m_temp.w = (uint16_t)read_operand() + (m_cc & CC_C ? 1 : 0);
	regop8() = set_flags(add8_sets_h() ? CC_HNZVC : CC_NZVC, regop8(), m_temp.b.l, regop8() + m_temp.w);
	return;

OR8:
	m_cc &= ~CC_V;
	regop8() = set_flags(CC_NZ, (uint8_t)0, regop8(), regop8() | read_operand());
	return;

ADD8:
	m_temp.b.l = read_operand();
	regop8() = set_flags(add8_sets_h() ? CC_HNZVC : CC_NZVC, regop8(), m_temp.b.l, regop8() + m_temp.b.l);
	return;

ADD16:
	m_temp.b.h = read_operand(0);
	if (UNEXPECTED(m_icount <= 0)) { push_state(82); return; }
state_82:
	m_temp.b.l = read_operand(1);
	if (UNEXPECTED(m_icount <= 0)) { push_state(83); return; }
state_83:
	regop16().w = set_flags(CC_NZVC, regop16().w, m_temp.w, regop16().w + m_temp.w);
	eat(hd6309_native_mode() ? 0 : 1);
	return;

SUB16:
	m_temp.b.h = read_operand(0);
	if (UNEXPECTED(m_icount <= 0)) { push_state(84); return; }
state_84:
	m_temp.b.l = read_operand(1);
	if (UNEXPECTED(m_icount <= 0)) { push_state(85); return; }
state_85:
	regop16().w = set_flags(CC_NZVC, regop16().w, m_temp.w, regop16().w - m_temp.w);
	eat(hd6309_native_mode() ? 0 : 1);
	return;

CMP16:
	m_temp.b.h = read_operand(0);
	if (UNEXPECTED(m_icount <= 0)) { push_state(86); return; }
state_86:
	m_temp.b.l = read_operand(1);
	if (UNEXPECTED(m_icount <= 0)) { push_state(87); return; }
state_87:
	set_flags(CC_NZVC, regop16().w, m_temp.w, regop16().w - m_temp.w);
	eat(hd6309_native_mode() ? 0 : 1);
	return;

LD8:
	regop8() = read_operand();
	set_flags(CC_NZV, regop8());
	return;

LD16:
	regop16().b.h = read_operand(0);
	if (UNEXPECTED(m_icount <= 0)) { push_state(88); return; }
state_88:
	regop16().b.l = read_operand(1);
	if (UNEXPECTED(m_icount <= 0)) { push_state(89); return; }
state_89:
	set_flags(CC_NZV, regop16().w);
	if (&regop16() == &m_s)
		m_lds_encountered = true;
	return;

ST8:
	write_ea(set_flags(CC_NZV, regop8()));
	return;

ST16:
	write_operand(0, regop16().b.h);
	if (UNEXPECTED(m_icount <= 0)) { push_state(90); return; }
state_90:
	write_operand(1, regop16().b.l);
	if (UNEXPECTED(m_icount <= 0)) { push_state(91); return; }
state_91:
	set_flags(CC_NZV, regop16().w);
	return;

NOP:
	eat(hd6309_native_mode() ? 0 : 1);
	return;

SYNC:
	// SYNC stops processing instructions until an interrupt request happens.
	// This doesn't require the corresponding interrupt to be enabled: if it
	// is disabled, execution continues with the next instruction.
	eat(3);

	while(!m_nmi_asserted && !m_firq_line && !m_irq_line)
	{
		// massaging the PC this way makes the debugger's behavior more
		// intuitive
		m_pc.w--;
		
		eat_remaining();
		if (UNEXPECTED(m_icount <= 0)) { push_state(92); return; }
state_92:
		
		// unmassage...
		m_pc.w++;
	}
	return;

DAA:
	daa();
	eat(hd6309_native_mode() ? 0 : 1);
	return;

ORCC:
	m_cc |= read_operand();
	eat(hd6309_native_mode() ? 0 : 1);
	return;

ANDCC:
	m_cc &= read_operand();
	eat(1);
	return;

SEX:
	m_q.r.d = set_flags<uint16_t>(CC_NZ, (int8_t) m_q.r.b);
	eat(hd6309_native_mode() ? 0 : 1);
	return;

BRANCH:
	m_temp.b.l = read_opcode_arg();
	if (UNEXPECTED(m_icount <= 0)) { push_state(93); return; }
state_93:
	eat(1);
	if (branch_taken())
	{
		m_pc.w += (int8_t) m_temp.b.l;
	}
	return;

LBRANCH:
	m_temp.b.h = read_opcode_arg();
	if (UNEXPECTED(m_icount <= 0)) { push_state(94); return; }
state_94:
	m_temp.b.l = read_opcode_arg();
	if (UNEXPECTED(m_icount <= 0)) { push_state(95); return; }
state_95:
	eat(1);
	if (branch_taken())
	{
		m_pc.w += m_temp.w;
		eat(hd6309_native_mode() ? 0 : 1);
	}
	return;

BSR:
	m_temp.b.l = read_opcode_arg();
	if (UNEXPECTED(m_icount <= 0)) { push_state(96); return; }
state_96:
	m_ea.w = m_pc.w + (int8_t) m_temp.b.l;
	eat(hd6309_native_mode() ? 2 : 3);
	if (UNEXPECTED(m_icount <= 0)) { push_state(97); return; }
state_97:
	goto GOTO_SUBROUTINE;

LBSR:
	m_temp.b.h = read_opcode_arg();
	if (UNEXPECTED(m_icount <= 0)) { push_state(98); return; }
state_98:
	m_temp.b.l = read_opcode_arg();
	if (UNEXPECTED(m_icount <= 0)) { push_state(99); return; }
state_99:
	m_ea.w = m_pc.w + (int16_t) m_temp.w;
	eat(hd6309_native_mode() ? 2 : 4);
	if (UNEXPECTED(m_icount <= 0)) { push_state(100); return; }
state_100:
	goto GOTO_SUBROUTINE;

JSR:
	eat(2);
	if (UNEXPECTED(m_icount <= 0)) { push_state(101); return; }
state_101:
	goto GOTO_SUBROUTINE;
	
GOTO_SUBROUTINE:
	write_memory(--m_s.w, m_pc.b.l);
	if (UNEXPECTED(m_icount <= 0)) { push_state(102); return; }
state_102:
	write_memory(--m_s.w, m_pc.b.h);
	if (UNEXPECTED(m_icount <= 0)) { push_state(103); return; }
state_103:
	m_pc.w = m_ea.w;
	return;

RTS:
	m_temp.w = 0x80;	// RTS is equivalent to "PULS PC"
	eat(hd6309_native_mode() ? 0 : 1);
	set_regop16(m_s);
	goto PULL_REGISTERS;

ABX:
	m_x.w += m_q.r.b;
	eat(hd6309_native_mode() ? 0 : 2);
	return;

MUL:
	mul();
	eat(hd6309_native_mode() ? 9 : 10);
	return;

RTI:
	set_regop16(m_s);
	m_temp.w = 0x01;	// PULS CC
	push_state(104);
	goto PULL_REGISTERS;
state_104:
	m_temp.w = ((m_cc & CC_E) ? entire_state_registers() : partial_state_registers()) & ~0x01;
	goto PULL_REGISTERS;

CWAI:
	m_cc &= read_opcode_arg();
	if (UNEXPECTED(m_icount <= 0)) { push_state(105); return; }
state_105:
	eat(2);
	if (UNEXPECTED(m_icount <= 0)) { push_state(106); return; }
state_106:

	m_cc |= CC_E;
	set_regop16(m_s);
	m_temp.w = entire_state_registers();
	push_state(107);
	goto PUSH_REGISTERS;
state_107:

	while((m_ea.w = get_pending_interrupt()) == 0)
	{
		// massaging the PC this way makes the debugger's behavior more
		// intuitive
		m_pc.w -= 2;

		eat_remaining();
		if (UNEXPECTED(m_icount <= 0)) { push_state(108); return; }
state_108:
		
		// unmassage...
		m_pc.w += 2;
	}

	if (m_nmi_asserted)
		m_nmi_asserted = false;

	set_ea(m_ea.w);	// need to do this to set the addressing mode
	m_cc |= CC_I | (m_ea.w != VECTOR_IRQ ? CC_F : 0);

	// invoke standard interrupt callback for MAME core
	switch (m_ea.w)
	{
		case VECTOR_NMI:	standard_irq_callback(INPUT_LINE_NMI); break;
		case VECTOR_FIRQ:	standard_irq_callback(M6809_FIRQ_LINE); break;
		case VECTOR_IRQ:	standard_irq_callback(M6809_IRQ_LINE); break;
		default:			break;
	}

	goto INTERRUPT_VECTOR;

LEA_xy:
	regop16().w = set_flags(CC_Z, m_ea.w);
	eat(1);
	return;

LEA_us:
	if (&regop16() == &m_s)
		m_lds_encountered = true;
	regop16().w = m_ea.w;
	eat(1);
	return;

PSHS:
	m_temp.w = read_opcode_arg();
	if (UNEXPECTED(m_icount <= 0)) { push_state(109); return; }
state_109:
	eat(hd6309_native_mode() ? 2 : 3);
	if (UNEXPECTED(m_icount <= 0)) { push_state(110); return; }
state_110:
	set_regop16(m_s);
	goto PUSH_REGISTERS;

PULS:
	m_temp.w = read_opcode_arg();
	if (UNEXPECTED(m_icount <= 0)) { push_state(111); return; }
state_111:
	eat(hd6309_native_mode() ? 1 : 2);
	if (UNEXPECTED(m_icount <= 0)) { push_state(112); return; }
state_112:
	set_regop16(m_s);
	goto PULL_REGISTERS;

PSHU:
	m_temp.w = read_opcode_arg();
	if (UNEXPECTED(m_icount <= 0)) { push_state(113); return; }
state_113:
	eat(hd6309_native_mode() ? 2 : 3);
	if (UNEXPECTED(m_icount <= 0)) { push_state(114); return; }
state_114:
	set_regop16(m_u);
	goto PUSH_REGISTERS;

PULU:
	m_temp.w = read_opcode_arg();
	if (UNEXPECTED(m_icount <= 0)) { push_state(115); return; }
state_115:
	eat(hd6309_native_mode() ? 1 : 2);
	if (UNEXPECTED(m_icount <= 0)) { push_state(116); return; }
state_116:
	set_regop16(m_u);
	goto PULL_REGISTERS;

SWI:
	// doesn't use SOFTWARE_INTERRUPT label because SWI will
	// inhibit IRQ/FIRQ
	set_ea(VECTOR_SWI);
	m_cc |= CC_E;
	set_regop16(m_s);
	m_temp.w = entire_state_registers();
	push_state(117);
	goto PUSH_REGISTERS;
state_117:
	m_cc |= CC_I | CC_F;
	goto INTERRUPT_VECTOR;

SWI2:
	set_ea(VECTOR_SWI2);
	goto SOFTWARE_INTERRUPT;

SWI3:
	set_ea(VECTOR_SWI3);
	goto SOFTWARE_INTERRUPT;

SOFTWARE_INTERRUPT:
	// used for SWI2/SWI3 and illegal/div0 on 6309
	m_cc |= CC_E;
	set_regop16(m_s);
	m_temp.w = entire_state_registers();
	push_state(118);
	goto PUSH_REGISTERS;
state_118:
	goto INTERRUPT_VECTOR;
	
DIRECT:
	set_ea(((uint16_t)m_dp << 8) | read_opcode_arg());
	if (UNEXPECTED(m_icount <= 0)) { push_state(119); return; }
state_119:
	eat(hd6309_native_mode() ? 0 : 1);
	return;

EXTENDED:
	set_ea_h(read_opcode_arg());
	if (UNEXPECTED(m_icount <= 0)) { push_state(120); return; }
state_120:
	set_ea_l(read_opcode_arg());
	if (UNEXPECTED(m_icount <= 0)) { push_state(121); return; }
state_121:
	eat(hd6309_native_mode() ? 0 : 1);
	return;

PUSH_REGISTERS:
	if (m_temp.w & 0x80)
	{
		write_memory(--regop16().w, m_pc.b.l);
		if (UNEXPECTED(m_icount <= 0)) { push_state(122); return; }
state_122:
		write_memory(--regop16().w, m_pc.b.h);
		if (UNEXPECTED(m_icount <= 0)) { push_state(123); return; }
state_123:
		nop();
	}
	if (m_temp.w & 0x40)
	{
		write_memory(--regop16().w, (&regop16() == &m_s) ? m_u.b.l : m_s.b.l);
		if (UNEXPECTED(m_icount <= 0)) { push_state(124); return; }
state_124:
		write_memory(--regop16().w, (&regop16() == &m_s) ? m_u.b.h : m_s.b.h);
		if (UNEXPECTED(m_icount <= 0)) { push_state(125); return; }
state_125:
		nop();
	}
	if (m_temp.w & 0x20)
	{
		write_memory(--regop16().w, m_y.b.l);
		if (UNEXPECTED(m_icount <= 0)) { push_state(126); return; }
state_126:
		write_memory(--regop16().w, m_y.b.h);
		if (UNEXPECTED(m_icount <= 0)) { push_state(127); return; }
state_127:
		nop();
	}
	if (m_temp.w & 0x10)
	{
		write_memory(--regop16().w, m_x.b.l);
		if (UNEXPECTED(m_icount <= 0)) { push_state(128); return; }
state_128:
		write_memory(--regop16().w, m_x.b.h);
		if (UNEXPECTED(m_icount <= 0)) { push_state(129); return; }
state_129:
		nop();
	}
	if (m_temp.w & 0x08)
	{
		write_memory(--regop16().w, m_dp);
		if (UNEXPECTED(m_icount <= 0)) { push_state(130); return; }
state_130:
		nop();
	}
	if (m_temp.w & 0x04)
	{
		write_memory(--regop16().w, m_q.r.b);
		if (UNEXPECTED(m_icount <= 0)) { push_state(131); return; }
state_131:
		nop();
	}
	if (m_temp.w & 0x02)
	{
		write_memory(--regop16().w, m_q.r.a);
		if (UNEXPECTED(m_icount <= 0)) { push_state(132); return; }
state_132:
		nop();
	}
	if (m_temp.w & 0x01)
	{
		write_memory(--regop16().w, m_cc);
		if (UNEXPECTED(m_icount <= 0)) { push_state(133); return; }
state_133:
		nop();
	}
	return;

PULL_REGISTERS:
	if (m_temp.w & 0x01)
	{
		m_cc = read_memory(regop16().w++);
		if (UNEXPECTED(m_icount <= 0)) { push_state(134); return; }
state_134:
		nop();
	}
	if (m_temp.w & 0x02)
	{
		m_q.r.a = read_memory(regop16().w++);
		if (UNEXPECTED(m_icount <= 0)) { push_state(135); return; }
state_135:
		nop();
	}
	if (m_temp.w & 0x04)
	{
		m_q.r.b = read_memory(regop16().w++);
		if (UNEXPECTED(m_icount <= 0)) { push_state(136); return; }
state_136:
		nop();
	}
	if (m_temp.w & 0x08)
	{
		m_dp = read_memory(regop16().w++);
		if (UNEXPECTED(m_icount <= 0)) { push_state(137); return; }
state_137:
		nop();
	}
	if (m_temp.w & 0x10)
	{
		m_x.b.h = read_memory(regop16().w++);
		if (UNEXPECTED(m_icount <= 0)) { push_state(138); return; }
state_138:
		m_x.b.l = read_memory(regop16().w++);
		if (UNEXPECTED(m_icount <= 0)) { push_state(139); return; }
state_139:
		nop();
	}
	if (m_temp.w & 0x20)
	{
		m_y.b.h = read_memory(regop16().w++);
		if (UNEXPECTED(m_icount <= 0)) { push_state(140); return; }
state_140:
		m_y.b.l = read_memory(regop16().w++);
		if (UNEXPECTED(m_icount <= 0)) { push_state(141); return; }
state_141:
		nop();
	}
	if (m_temp.w & 0x40)
	{
		(&regop16() == &m_s ? m_u : m_s).b.h = read_memory(regop16().w++);
		if (UNEXPECTED(m_icount <= 0)) { push_state(142); return; }
state_142:
		(&regop16() == &m_s ? m_u : m_s).b.l = read_memory(regop16().w++);
		if (UNEXPECTED(m_icount <= 0)) { push_state(143); return; }
state_143:
		nop();
	}
	if (m_temp.w & 0x80)
	{
		m_pc.b.h = read_memory(regop16().w++);
		if (UNEXPECTED(m_icount <= 0)) { push_state(144); return; }
state_144:
		m_pc.b.l = read_memory(regop16().w++);
		if (UNEXPECTED(m_icount <= 0)) { push_state(145); return; }
state_145:
		nop();
	}
	eat(1);
	return;

INDEXED:
	m_opcode = read_opcode_arg();
	if (UNEXPECTED(m_icount <= 0)) { push_state(146); return; }
state_146:
	if (m_opcode & 0x80)
	{
		switch(m_opcode & 0x7F)
		{
			case 0x00: case 0x20: case 0x40: case 0x60:
			case 0x10: case 0x30: case 0x50: case 0x70:
				m_temp.w = ireg();
				ireg()++;
				eat(3);
				break;

			case 0x01: case 0x21: case 0x41: case 0x61:
			case 0x11: case 0x31: case 0x51: case 0x71:
				m_temp.w = ireg();
				ireg() += 2;
				eat(4);
				break;

			case 0x02: case 0x22: case 0x42: case 0x62:
			case 0x12: case 0x32: case 0x52: case 0x72:
				ireg()--;
				m_temp.w = ireg();
				eat(3);
				break;

			case 0x03: case 0x23: case 0x43: case 0x63:
			case 0x13: case 0x33: case 0x53: case 0x73:
				ireg() -= 2;
				m_temp.w = ireg();
				eat(4);
				break;

			case 0x04: case 0x24: case 0x44: case 0x64:
			case 0x14: case 0x34: case 0x54: case 0x74:
				m_temp.w = ireg();
				eat(1);
				break;

			case 0x05: case 0x25: case 0x45: case 0x65:
			case 0x15: case 0x35: case 0x55: case 0x75:
				m_temp.w = ireg() + (int8_t) m_q.r.b;
				eat(2);
				break;

			case 0x06: case 0x26: case 0x46: case 0x66:
			case 0x16: case 0x36: case 0x56: case 0x76:
				m_temp.w = ireg() + (int8_t) m_q.r.a;
				eat(2);
				break;

			case 0x08: case 0x28: case 0x48: case 0x68:
			case 0x18: case 0x38: case 0x58: case 0x78:
				m_temp.w = ireg() + (int8_t) read_opcode_arg();
				if (UNEXPECTED(m_icount <= 0)) { push_state(147); return; }
state_147:
				eat(1);
				break;

			case 0x09: case 0x29: case 0x49: case 0x69:
			case 0x19: case 0x39: case 0x59: case 0x79:
				m_temp.b.h = read_opcode_arg();
				if (UNEXPECTED(m_icount <= 0)) { push_state(148); return; }
state_148:
				m_temp.b.l = read_opcode_arg();
				if (UNEXPECTED(m_icount <= 0)) { push_state(149); return; }
state_149:
				m_temp.w = ireg() + m_temp.w;
				eat(3);
				break;

			case 0x0B: case 0x2B: case 0x4B: case 0x6B:
			case 0x1B: case 0x3B: case 0x5B: case 0x7B:
				m_temp.w = ireg() + m_q.r.d;
				eat(5);
				break;

			case 0x0C: case 0x2C: case 0x4C: case 0x6C:
			case 0x1C: case 0x3C: case 0x5C: case 0x7C:
				m_temp.b.l = read_opcode_arg();
				if (UNEXPECTED(m_icount <= 0)) { push_state(150); return; }
state_150:
				m_temp.w = m_pc.w + (int8_t) m_temp.b.l;
				eat(1);
				break;

			case 0x0D: case 0x2D: case 0x4D: case 0x6D:
			case 0x1D: case 0x3D: case 0x5D: case 0x7D:
				m_temp.b.h = read_opcode_arg();
				if (UNEXPECTED(m_icount <= 0)) { push_state(151); return; }
state_151:
				m_temp.b.l = read_opcode_arg();
				if (UNEXPECTED(m_icount <= 0)) { push_state(152); return; }
state_152:
				m_temp.w = m_pc.w + (int16_t) m_temp.w;
				eat(4);
				break;

			case 0x0F: case 0x2F: case 0x4F: case 0x6F:
			case 0x1F: case 0x3F: case 0x5F: case 0x7F:
				m_temp.b.h = read_opcode_arg();
				if (UNEXPECTED(m_icount <= 0)) { push_state(153); return; }
state_153:
				m_temp.b.l = read_opcode_arg();
				if (UNEXPECTED(m_icount <= 0)) { push_state(154); return; }
state_154:
				eat(1);
				break;

			default:
				m_temp.w = 0x0000;
				break;
		}

		// indirect mode
		if (m_opcode & 0x10)
		{
			set_ea(m_temp.w);
			m_temp.b.h = read_operand(0);
			if (UNEXPECTED(m_icount <= 0)) { push_state(155); return; }
state_155:
			m_temp.b.l = read_operand(1);
			if (UNEXPECTED(m_icount <= 0)) { push_state(156); return; }
state_156:
			eat(1);
		}
	}
	else
	{
		// 5-bit offset
		m_temp.w = ireg() + (int8_t) ((m_opcode & 0x0F) | (m_opcode & 0x10 ? 0xF0 : 0x00));
		eat(2);
	}
	set_ea(m_temp.w);
	return;

EXG:
	{
		uint8_t param = read_opcode_arg();
		exgtfr_register reg1 = read_exgtfr_register(param >> 4);
		exgtfr_register reg2 = read_exgtfr_register(param >> 0);
		write_exgtfr_register(param >> 4, reg2);
		write_exgtfr_register(param >> 0, reg1);
	}
	eat(hd6309_native_mode() ? 3 : 6);
	return;

TFR:
	{
		uint8_t param = read_opcode_arg();
		exgtfr_register reg = read_exgtfr_register(param >> 4);
		write_exgtfr_register(param >> 0, reg);
		if ((param & 0x0F) == 4) {
			m_lds_encountered = true;
		}
	}
	eat(hd6309_native_mode() ? 2 : 4);
	return;

ILLEGAL:
	log_illegal();
	return;

