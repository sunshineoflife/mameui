const i8x9x_device::disasm_entry i8x9x_device::disasm_entries[0x100] = {
	{ "skip", NULL, DASM_immed_1b, 0 },
	{ "clr", NULL, DASM_direct_1, 0 },
	{ "not", NULL, DASM_direct_1, 0 },
	{ "neg", NULL, DASM_direct_1, 0 },
	{ "xch", NULL, DASM_direct_2, 0 },
	{ "dec", NULL, DASM_direct_1, 0 },
	{ "ext", NULL, DASM_direct_1, 0 },
	{ "inc", NULL, DASM_direct_1, 0 },
	{ "shr", NULL, DASM_immed_or_reg_2b, 0 },
	{ "shl", NULL, DASM_immed_or_reg_2b, 0 },
	{ "shra", NULL, DASM_immed_or_reg_2b, 0 },
	{ "???", NULL, DASM_none, 0 },
	{ "shrl", NULL, DASM_immed_or_reg_2b, 0 },
	{ "shll", NULL, DASM_immed_or_reg_2b, 0 },
	{ "shral", NULL, DASM_immed_or_reg_2b, 0 },
	{ "norml", NULL, DASM_direct_2, 0 },
	{ "???", NULL, DASM_none, 0 },
	{ "clrb", NULL, DASM_direct_1, 0 },
	{ "notb", NULL, DASM_direct_1, 0 },
	{ "negb", NULL, DASM_direct_1, 0 },
	{ "xchb", NULL, DASM_direct_2, 0 },
	{ "decb", NULL, DASM_direct_1, 0 },
	{ "extb", NULL, DASM_direct_1, 0 },
	{ "incb", NULL, DASM_direct_1, 0 },
	{ "shrb", NULL, DASM_immed_or_reg_2b, 0 },
	{ "shlb", NULL, DASM_immed_or_reg_2b, 0 },
	{ "shrab", NULL, DASM_immed_or_reg_2b, 0 },
	{ "???", NULL, DASM_none, 0 },
	{ "???", NULL, DASM_none, 0 },
	{ "???", NULL, DASM_none, 0 },
	{ "???", NULL, DASM_none, 0 },
	{ "???", NULL, DASM_none, 0 },
	{ "sjmp", NULL, DASM_rel11, 0 },
	{ "sjmp", NULL, DASM_rel11, 0 },
	{ "sjmp", NULL, DASM_rel11, 0 },
	{ "sjmp", NULL, DASM_rel11, 0 },
	{ "sjmp", NULL, DASM_rel11, 0 },
	{ "sjmp", NULL, DASM_rel11, 0 },
	{ "sjmp", NULL, DASM_rel11, 0 },
	{ "sjmp", NULL, DASM_rel11, 0 },
	{ "scall", NULL, DASM_rel11, DASMFLAG_STEP_OVER },
	{ "scall", NULL, DASM_rel11, DASMFLAG_STEP_OVER },
	{ "scall", NULL, DASM_rel11, DASMFLAG_STEP_OVER },
	{ "scall", NULL, DASM_rel11, DASMFLAG_STEP_OVER },
	{ "scall", NULL, DASM_rel11, DASMFLAG_STEP_OVER },
	{ "scall", NULL, DASM_rel11, DASMFLAG_STEP_OVER },
	{ "scall", NULL, DASM_rel11, DASMFLAG_STEP_OVER },
	{ "scall", NULL, DASM_rel11, DASMFLAG_STEP_OVER },
	{ "jbc", NULL, DASM_brrel8, 0 },
	{ "jbc", NULL, DASM_brrel8, 0 },
	{ "jbc", NULL, DASM_brrel8, 0 },
	{ "jbc", NULL, DASM_brrel8, 0 },
	{ "jbc", NULL, DASM_brrel8, 0 },
	{ "jbc", NULL, DASM_brrel8, 0 },
	{ "jbc", NULL, DASM_brrel8, 0 },
	{ "jbc", NULL, DASM_brrel8, 0 },
	{ "jbs", NULL, DASM_brrel8, 0 },
	{ "jbs", NULL, DASM_brrel8, 0 },
	{ "jbs", NULL, DASM_brrel8, 0 },
	{ "jbs", NULL, DASM_brrel8, 0 },
	{ "jbs", NULL, DASM_brrel8, 0 },
	{ "jbs", NULL, DASM_brrel8, 0 },
	{ "jbs", NULL, DASM_brrel8, 0 },
	{ "jbs", NULL, DASM_brrel8, 0 },
	{ "and", NULL, DASM_direct_3, 0 },
	{ "and", NULL, DASM_immed_3w, 0 },
	{ "and", NULL, DASM_indirect_3, 0 },
	{ "and", NULL, DASM_indexed_3, 0 },
	{ "add", NULL, DASM_direct_3, 0 },
	{ "add", NULL, DASM_immed_3w, 0 },
	{ "add", NULL, DASM_indirect_3, 0 },
	{ "add", NULL, DASM_indexed_3, 0 },
	{ "sub", NULL, DASM_direct_3, 0 },
	{ "sub", NULL, DASM_immed_3w, 0 },
	{ "sub", NULL, DASM_indirect_3, 0 },
	{ "sub", NULL, DASM_indexed_3, 0 },
	{ "mulu", "mul", DASM_direct_3, 0 },
	{ "mulu", "mul", DASM_immed_3w, 0 },
	{ "mulu", "mul", DASM_indirect_3, 0 },
	{ "mulu", "mul", DASM_indexed_3, 0 },
	{ "andb", NULL, DASM_direct_3, 0 },
	{ "andb", NULL, DASM_immed_3b, 0 },
	{ "andb", NULL, DASM_indirect_3, 0 },
	{ "andb", NULL, DASM_indexed_3, 0 },
	{ "addb", NULL, DASM_direct_3, 0 },
	{ "addb", NULL, DASM_immed_3b, 0 },
	{ "addb", NULL, DASM_indirect_3, 0 },
	{ "addb", NULL, DASM_indexed_3, 0 },
	{ "subb", NULL, DASM_direct_3, 0 },
	{ "subb", NULL, DASM_immed_3b, 0 },
	{ "subb", NULL, DASM_indirect_3, 0 },
	{ "subb", NULL, DASM_indexed_3, 0 },
	{ "mulub", "mulb", DASM_direct_3, 0 },
	{ "mulub", "mulb", DASM_immed_3b, 0 },
	{ "mulub", "mulb", DASM_indirect_3, 0 },
	{ "mulub", "mulb", DASM_indexed_3, 0 },
	{ "and", NULL, DASM_direct_2, 0 },
	{ "and", NULL, DASM_immed_2w, 0 },
	{ "and", NULL, DASM_indirect_2, 0 },
	{ "and", NULL, DASM_indexed_2, 0 },
	{ "add", NULL, DASM_direct_2, 0 },
	{ "add", NULL, DASM_immed_2w, 0 },
	{ "add", NULL, DASM_indirect_2, 0 },
	{ "add", NULL, DASM_indexed_2, 0 },
	{ "sub", NULL, DASM_direct_2, 0 },
	{ "sub", NULL, DASM_immed_2w, 0 },
	{ "sub", NULL, DASM_indirect_2, 0 },
	{ "sub", NULL, DASM_indexed_2, 0 },
	{ "mulu", "mul", DASM_direct_2, 0 },
	{ "mulu", "mul", DASM_immed_2w, 0 },
	{ "mulu", "mul", DASM_indirect_2, 0 },
	{ "mulu", "mul", DASM_indexed_2, 0 },
	{ "andb", NULL, DASM_direct_2, 0 },
	{ "andb", NULL, DASM_immed_2b, 0 },
	{ "andb", NULL, DASM_indirect_2, 0 },
	{ "andb", NULL, DASM_indexed_2, 0 },
	{ "addb", NULL, DASM_direct_2, 0 },
	{ "addb", NULL, DASM_immed_2b, 0 },
	{ "addb", NULL, DASM_indirect_2, 0 },
	{ "addb", NULL, DASM_indexed_2, 0 },
	{ "subb", NULL, DASM_direct_2, 0 },
	{ "subb", NULL, DASM_immed_2b, 0 },
	{ "subb", NULL, DASM_indirect_2, 0 },
	{ "subb", NULL, DASM_indexed_2, 0 },
	{ "mulub", "mulb", DASM_direct_2, 0 },
	{ "mulub", "mulb", DASM_immed_2b, 0 },
	{ "mulub", "mulb", DASM_indirect_2, 0 },
	{ "mulub", "mulb", DASM_indexed_2, 0 },
	{ "or", NULL, DASM_direct_2, 0 },
	{ "or", NULL, DASM_immed_2w, 0 },
	{ "or", NULL, DASM_indirect_2, 0 },
	{ "or", NULL, DASM_indexed_2, 0 },
	{ "xor", NULL, DASM_direct_2, 0 },
	{ "xor", NULL, DASM_immed_2w, 0 },
	{ "xor", NULL, DASM_indirect_2, 0 },
	{ "xor", NULL, DASM_indexed_2, 0 },
	{ "cmp", NULL, DASM_direct_2, 0 },
	{ "cmp", NULL, DASM_immed_2w, 0 },
	{ "cmp", NULL, DASM_indirect_2, 0 },
	{ "cmp", NULL, DASM_indexed_2, 0 },
	{ "divu", "div", DASM_direct_2, 0 },
	{ "divu", "div", DASM_immed_2w, 0 },
	{ "divu", "div", DASM_indirect_2, 0 },
	{ "divu", "div", DASM_indexed_2, 0 },
	{ "orb", NULL, DASM_direct_2, 0 },
	{ "orb", NULL, DASM_immed_2b, 0 },
	{ "orb", NULL, DASM_indirect_2, 0 },
	{ "orb", NULL, DASM_indexed_2, 0 },
	{ "xorb", NULL, DASM_direct_2, 0 },
	{ "xorb", NULL, DASM_immed_2b, 0 },
	{ "xorb", NULL, DASM_indirect_2, 0 },
	{ "xorb", NULL, DASM_indexed_2, 0 },
	{ "cmpb", NULL, DASM_direct_2, 0 },
	{ "cmpb", NULL, DASM_immed_2b, 0 },
	{ "cmpb", NULL, DASM_indirect_2, 0 },
	{ "cmpb", NULL, DASM_indexed_2, 0 },
	{ "divub", "divb", DASM_direct_2, 0 },
	{ "divub", "divb", DASM_immed_2b, 0 },
	{ "divub", "divb", DASM_indirect_2, 0 },
	{ "divub", "divb", DASM_indexed_2, 0 },
	{ "ld", NULL, DASM_direct_2, 0 },
	{ "ld", NULL, DASM_immed_2w, 0 },
	{ "ld", NULL, DASM_indirect_2, 0 },
	{ "ld", NULL, DASM_indexed_2, 0 },
	{ "addc", NULL, DASM_direct_2, 0 },
	{ "addc", NULL, DASM_immed_2w, 0 },
	{ "addc", NULL, DASM_indirect_2, 0 },
	{ "addc", NULL, DASM_indexed_2, 0 },
	{ "subc", NULL, DASM_direct_2, 0 },
	{ "subc", NULL, DASM_immed_2w, 0 },
	{ "subc", NULL, DASM_indirect_2, 0 },
	{ "subc", NULL, DASM_indexed_2, 0 },
	{ "ldbze", NULL, DASM_direct_2, 0 },
	{ "ldbze", NULL, DASM_immed_2b, 0 },
	{ "ldbze", NULL, DASM_indirect_2, 0 },
	{ "ldbze", NULL, DASM_indexed_2, 0 },
	{ "ldb", NULL, DASM_direct_2, 0 },
	{ "ldb", NULL, DASM_immed_2b, 0 },
	{ "ldb", NULL, DASM_indirect_2, 0 },
	{ "ldb", NULL, DASM_indexed_2, 0 },
	{ "addcb", NULL, DASM_direct_2, 0 },
	{ "addcb", NULL, DASM_immed_2w, 0 },
	{ "addcb", NULL, DASM_indirect_2, 0 },
	{ "addcb", NULL, DASM_indexed_2, 0 },
	{ "subcb", NULL, DASM_direct_2, 0 },
	{ "subcb", NULL, DASM_immed_2w, 0 },
	{ "subcb", NULL, DASM_indirect_2, 0 },
	{ "subcb", NULL, DASM_indexed_2, 0 },
	{ "ldbse", NULL, DASM_direct_2, 0 },
	{ "ldbse", NULL, DASM_immed_2b, 0 },
	{ "ldbse", NULL, DASM_indirect_2, 0 },
	{ "ldbse", NULL, DASM_indexed_2, 0 },
	{ "st", NULL, DASM_direct_2, 0 },
	{ "???", NULL, DASM_none, 0 },
	{ "st", NULL, DASM_indirect_2, 0 },
	{ "st", NULL, DASM_indexed_2, 0 },
	{ "stb", NULL, DASM_direct_2, 0 },
	{ "???", NULL, DASM_none, 0 },
	{ "stb", NULL, DASM_indirect_2, 0 },
	{ "stb", NULL, DASM_indexed_2, 0 },
	{ "push", NULL, DASM_direct_1, 0 },
	{ "push", NULL, DASM_immed_1w, 0 },
	{ "push", NULL, DASM_indirect_1, 0 },
	{ "push", NULL, DASM_indexed_1, 0 },
	{ "pop", NULL, DASM_direct_1, 0 },
	{ "???", NULL, DASM_none, 0 },
	{ "pop", NULL, DASM_indirect_1, 0 },
	{ "pop", NULL, DASM_indexed_1, 0 },
	{ "jnst", NULL, DASM_rel8, 0 },
	{ "jnh", NULL, DASM_rel8, 0 },
	{ "jgt", NULL, DASM_rel8, 0 },
	{ "jnc", NULL, DASM_rel8, 0 },
	{ "jnvt", NULL, DASM_rel8, 0 },
	{ "jnv", NULL, DASM_rel8, 0 },
	{ "jge", NULL, DASM_rel8, 0 },
	{ "jne", NULL, DASM_rel8, 0 },
	{ "jst", NULL, DASM_rel8, 0 },
	{ "jh", NULL, DASM_rel8, 0 },
	{ "jle", NULL, DASM_rel8, 0 },
	{ "jc", NULL, DASM_rel8, 0 },
	{ "jvt", NULL, DASM_rel8, 0 },
	{ "jv", NULL, DASM_rel8, 0 },
	{ "jlt", NULL, DASM_rel8, 0 },
	{ "je", NULL, DASM_rel8, 0 },
	{ "djnz", NULL, DASM_rrel8, 0 },
	{ "???", NULL, DASM_none, 0 },
	{ "???", NULL, DASM_none, 0 },
	{ "br", NULL, DASM_indirect_1n, 0 },
	{ "???", NULL, DASM_none, 0 },
	{ "???", NULL, DASM_none, 0 },
	{ "???", NULL, DASM_none, 0 },
	{ "ljmp", NULL, DASM_rel16, 0 },
	{ "???", NULL, DASM_none, 0 },
	{ "???", NULL, DASM_none, 0 },
	{ "???", NULL, DASM_none, 0 },
	{ "???", NULL, DASM_none, 0 },
	{ "???", NULL, DASM_none, 0 },
	{ "???", NULL, DASM_none, 0 },
	{ "???", NULL, DASM_none, 0 },
	{ "lcall", NULL, DASM_rel16, DASMFLAG_STEP_OVER },
	{ "ret", NULL, DASM_none, 0 },
	{ "???", NULL, DASM_none, 0 },
	{ "pushf", NULL, DASM_none, 0 },
	{ "popf", NULL, DASM_none, 0 },
	{ "???", NULL, DASM_none, 0 },
	{ "???", NULL, DASM_none, 0 },
	{ "???", NULL, DASM_none, 0 },
	{ "trap", NULL, DASM_none, 0 },
	{ "clrc", NULL, DASM_none, 0 },
	{ "setc", NULL, DASM_none, 0 },
	{ "di", NULL, DASM_none, 0 },
	{ "ei", NULL, DASM_none, 0 },
	{ "clrvt", NULL, DASM_none, 0 },
	{ "nop", NULL, DASM_none, 0 },
	{ "???", NULL, DASM_none, 0 },
	{ "rst", NULL, DASM_none, 0 },
};

void i8x9x_device::do_exec_full()
{
	switch(inst_state) {
	case 0x000: skip_immed_1b_full(); break;
	case 0x001: clr_direct_1_full(); break;
	case 0x002: not_direct_1_full(); break;
	case 0x003: neg_direct_1_full(); break;
	case 0x004: xch_direct_2_full(); break;
	case 0x005: dec_direct_1_full(); break;
	case 0x006: ext_direct_1_full(); break;
	case 0x007: inc_direct_1_full(); break;
	case 0x008: shr_immed_or_reg_2b_full(); break;
	case 0x009: shl_immed_or_reg_2b_full(); break;
	case 0x00a: shra_immed_or_reg_2b_full(); break;
	case 0x00c: shrl_immed_or_reg_2b_full(); break;
	case 0x00d: shll_immed_or_reg_2b_full(); break;
	case 0x00e: shral_immed_or_reg_2b_full(); break;
	case 0x00f: norml_direct_2_full(); break;
	case 0x011: clrb_direct_1_full(); break;
	case 0x012: notb_direct_1_full(); break;
	case 0x013: negb_direct_1_full(); break;
	case 0x014: xchb_direct_2_full(); break;
	case 0x015: decb_direct_1_full(); break;
	case 0x016: extb_direct_1_full(); break;
	case 0x017: incb_direct_1_full(); break;
	case 0x018: shrb_immed_or_reg_2b_full(); break;
	case 0x019: shlb_immed_or_reg_2b_full(); break;
	case 0x01a: shrab_immed_or_reg_2b_full(); break;
	case 0x020: sjmp_rel11_full(); break;
	case 0x021: sjmp_rel11_full(); break;
	case 0x022: sjmp_rel11_full(); break;
	case 0x023: sjmp_rel11_full(); break;
	case 0x024: sjmp_rel11_full(); break;
	case 0x025: sjmp_rel11_full(); break;
	case 0x026: sjmp_rel11_full(); break;
	case 0x027: sjmp_rel11_full(); break;
	case 0x028: scall_rel11_full(); break;
	case 0x029: scall_rel11_full(); break;
	case 0x02a: scall_rel11_full(); break;
	case 0x02b: scall_rel11_full(); break;
	case 0x02c: scall_rel11_full(); break;
	case 0x02d: scall_rel11_full(); break;
	case 0x02e: scall_rel11_full(); break;
	case 0x02f: scall_rel11_full(); break;
	case 0x030: jbc_brrel8_full(); break;
	case 0x031: jbc_brrel8_full(); break;
	case 0x032: jbc_brrel8_full(); break;
	case 0x033: jbc_brrel8_full(); break;
	case 0x034: jbc_brrel8_full(); break;
	case 0x035: jbc_brrel8_full(); break;
	case 0x036: jbc_brrel8_full(); break;
	case 0x037: jbc_brrel8_full(); break;
	case 0x038: jbs_brrel8_full(); break;
	case 0x039: jbs_brrel8_full(); break;
	case 0x03a: jbs_brrel8_full(); break;
	case 0x03b: jbs_brrel8_full(); break;
	case 0x03c: jbs_brrel8_full(); break;
	case 0x03d: jbs_brrel8_full(); break;
	case 0x03e: jbs_brrel8_full(); break;
	case 0x03f: jbs_brrel8_full(); break;
	case 0x040: and_direct_3_full(); break;
	case 0x041: and_immed_3w_full(); break;
	case 0x042: and_indirect_3_full(); break;
	case 0x043: and_indexed_3_full(); break;
	case 0x044: add_direct_3_full(); break;
	case 0x045: add_immed_3w_full(); break;
	case 0x046: add_indirect_3_full(); break;
	case 0x047: add_indexed_3_full(); break;
	case 0x048: sub_direct_3_full(); break;
	case 0x049: sub_immed_3w_full(); break;
	case 0x04a: sub_indirect_3_full(); break;
	case 0x04b: sub_indexed_3_full(); break;
	case 0x04c: mulu_direct_3_full(); break;
	case 0x04d: mulu_immed_3w_full(); break;
	case 0x04e: mulu_indirect_3_full(); break;
	case 0x04f: mulu_indexed_3_full(); break;
	case 0x050: andb_direct_3_full(); break;
	case 0x051: andb_immed_3b_full(); break;
	case 0x052: andb_indirect_3_full(); break;
	case 0x053: andb_indexed_3_full(); break;
	case 0x054: addb_direct_3_full(); break;
	case 0x055: addb_immed_3b_full(); break;
	case 0x056: addb_indirect_3_full(); break;
	case 0x057: addb_indexed_3_full(); break;
	case 0x058: subb_direct_3_full(); break;
	case 0x059: subb_immed_3b_full(); break;
	case 0x05a: subb_indirect_3_full(); break;
	case 0x05b: subb_indexed_3_full(); break;
	case 0x05c: mulub_direct_3_full(); break;
	case 0x05d: mulub_immed_3b_full(); break;
	case 0x05e: mulub_indirect_3_full(); break;
	case 0x05f: mulub_indexed_3_full(); break;
	case 0x060: and_direct_2_full(); break;
	case 0x061: and_immed_2w_full(); break;
	case 0x062: and_indirect_2_full(); break;
	case 0x063: and_indexed_2_full(); break;
	case 0x064: add_direct_2_full(); break;
	case 0x065: add_immed_2w_full(); break;
	case 0x066: add_indirect_2_full(); break;
	case 0x067: add_indexed_2_full(); break;
	case 0x068: sub_direct_2_full(); break;
	case 0x069: sub_immed_2w_full(); break;
	case 0x06a: sub_indirect_2_full(); break;
	case 0x06b: sub_indexed_2_full(); break;
	case 0x06c: mulu_direct_2_full(); break;
	case 0x06d: mulu_immed_2w_full(); break;
	case 0x06e: mulu_indirect_2_full(); break;
	case 0x06f: mulu_indexed_2_full(); break;
	case 0x070: andb_direct_2_full(); break;
	case 0x071: andb_immed_2b_full(); break;
	case 0x072: andb_indirect_2_full(); break;
	case 0x073: andb_indexed_2_full(); break;
	case 0x074: addb_direct_2_full(); break;
	case 0x075: addb_immed_2b_full(); break;
	case 0x076: addb_indirect_2_full(); break;
	case 0x077: addb_indexed_2_full(); break;
	case 0x078: subb_direct_2_full(); break;
	case 0x079: subb_immed_2b_full(); break;
	case 0x07a: subb_indirect_2_full(); break;
	case 0x07b: subb_indexed_2_full(); break;
	case 0x07c: mulub_direct_2_full(); break;
	case 0x07d: mulub_immed_2b_full(); break;
	case 0x07e: mulub_indirect_2_full(); break;
	case 0x07f: mulub_indexed_2_full(); break;
	case 0x080: or_direct_2_full(); break;
	case 0x081: or_immed_2w_full(); break;
	case 0x082: or_indirect_2_full(); break;
	case 0x083: or_indexed_2_full(); break;
	case 0x084: xor_direct_2_full(); break;
	case 0x085: xor_immed_2w_full(); break;
	case 0x086: xor_indirect_2_full(); break;
	case 0x087: xor_indexed_2_full(); break;
	case 0x088: cmp_direct_2_full(); break;
	case 0x089: cmp_immed_2w_full(); break;
	case 0x08a: cmp_indirect_2_full(); break;
	case 0x08b: cmp_indexed_2_full(); break;
	case 0x08c: divu_direct_2_full(); break;
	case 0x08d: divu_immed_2w_full(); break;
	case 0x08e: divu_indirect_2_full(); break;
	case 0x08f: divu_indexed_2_full(); break;
	case 0x090: orb_direct_2_full(); break;
	case 0x091: orb_immed_2b_full(); break;
	case 0x092: orb_indirect_2_full(); break;
	case 0x093: orb_indexed_2_full(); break;
	case 0x094: xorb_direct_2_full(); break;
	case 0x095: xorb_immed_2b_full(); break;
	case 0x096: xorb_indirect_2_full(); break;
	case 0x097: xorb_indexed_2_full(); break;
	case 0x098: cmpb_direct_2_full(); break;
	case 0x099: cmpb_immed_2b_full(); break;
	case 0x09a: cmpb_indirect_2_full(); break;
	case 0x09b: cmpb_indexed_2_full(); break;
	case 0x09c: divub_direct_2_full(); break;
	case 0x09d: divub_immed_2b_full(); break;
	case 0x09e: divub_indirect_2_full(); break;
	case 0x09f: divub_indexed_2_full(); break;
	case 0x0a0: ld_direct_2_full(); break;
	case 0x0a1: ld_immed_2w_full(); break;
	case 0x0a2: ld_indirect_2_full(); break;
	case 0x0a3: ld_indexed_2_full(); break;
	case 0x0a4: addc_direct_2_full(); break;
	case 0x0a5: addc_immed_2w_full(); break;
	case 0x0a6: addc_indirect_2_full(); break;
	case 0x0a7: addc_indexed_2_full(); break;
	case 0x0a8: subc_direct_2_full(); break;
	case 0x0a9: subc_immed_2w_full(); break;
	case 0x0aa: subc_indirect_2_full(); break;
	case 0x0ab: subc_indexed_2_full(); break;
	case 0x0ac: ldbze_direct_2_full(); break;
	case 0x0ad: ldbze_immed_2b_full(); break;
	case 0x0ae: ldbze_indirect_2_full(); break;
	case 0x0af: ldbze_indexed_2_full(); break;
	case 0x0b0: ldb_direct_2_full(); break;
	case 0x0b1: ldb_immed_2b_full(); break;
	case 0x0b2: ldb_indirect_2_full(); break;
	case 0x0b3: ldb_indexed_2_full(); break;
	case 0x0b4: addcb_direct_2_full(); break;
	case 0x0b5: addcb_immed_2w_full(); break;
	case 0x0b6: addcb_indirect_2_full(); break;
	case 0x0b7: addcb_indexed_2_full(); break;
	case 0x0b8: subcb_direct_2_full(); break;
	case 0x0b9: subcb_immed_2w_full(); break;
	case 0x0ba: subcb_indirect_2_full(); break;
	case 0x0bb: subcb_indexed_2_full(); break;
	case 0x0bc: ldbse_direct_2_full(); break;
	case 0x0bd: ldbse_immed_2b_full(); break;
	case 0x0be: ldbse_indirect_2_full(); break;
	case 0x0bf: ldbse_indexed_2_full(); break;
	case 0x0c0: st_direct_2_full(); break;
	case 0x0c2: st_indirect_2_full(); break;
	case 0x0c3: st_indexed_2_full(); break;
	case 0x0c4: stb_direct_2_full(); break;
	case 0x0c6: stb_indirect_2_full(); break;
	case 0x0c7: stb_indexed_2_full(); break;
	case 0x0c8: push_direct_1_full(); break;
	case 0x0c9: push_immed_1w_full(); break;
	case 0x0ca: push_indirect_1_full(); break;
	case 0x0cb: push_indexed_1_full(); break;
	case 0x0cc: pop_direct_1_full(); break;
	case 0x0ce: pop_indirect_1_full(); break;
	case 0x0cf: pop_indexed_1_full(); break;
	case 0x0d0: jnst_rel8_full(); break;
	case 0x0d1: jnh_rel8_full(); break;
	case 0x0d2: jgt_rel8_full(); break;
	case 0x0d3: jnc_rel8_full(); break;
	case 0x0d4: jnvt_rel8_full(); break;
	case 0x0d5: jnv_rel8_full(); break;
	case 0x0d6: jge_rel8_full(); break;
	case 0x0d7: jne_rel8_full(); break;
	case 0x0d8: jst_rel8_full(); break;
	case 0x0d9: jh_rel8_full(); break;
	case 0x0da: jle_rel8_full(); break;
	case 0x0db: jc_rel8_full(); break;
	case 0x0dc: jvt_rel8_full(); break;
	case 0x0dd: jv_rel8_full(); break;
	case 0x0de: jlt_rel8_full(); break;
	case 0x0df: je_rel8_full(); break;
	case 0x0e0: djnz_rrel8_full(); break;
	case 0x0e3: br_indirect_1n_full(); break;
	case 0x0e7: ljmp_rel16_full(); break;
	case 0x0ef: lcall_rel16_full(); break;
	case 0x0f0: ret_none_full(); break;
	case 0x0f2: pushf_none_full(); break;
	case 0x0f3: popf_none_full(); break;
	case 0x0f7: trap_none_full(); break;
	case 0x0f8: clrc_none_full(); break;
	case 0x0f9: setc_none_full(); break;
	case 0x0fa: di_none_full(); break;
	case 0x0fb: ei_none_full(); break;
	case 0x0fc: clrvt_none_full(); break;
	case 0x0fd: nop_none_full(); break;
	case 0x0ff: rst_none_full(); break;
	case 0x100: skip_immed_1b_full(); break;
	case 0x101: clr_direct_1_full(); break;
	case 0x102: not_direct_1_full(); break;
	case 0x103: neg_direct_1_full(); break;
	case 0x104: xch_direct_2_full(); break;
	case 0x105: dec_direct_1_full(); break;
	case 0x106: ext_direct_1_full(); break;
	case 0x107: inc_direct_1_full(); break;
	case 0x108: shr_immed_or_reg_2b_full(); break;
	case 0x109: shl_immed_or_reg_2b_full(); break;
	case 0x10a: shra_immed_or_reg_2b_full(); break;
	case 0x10c: shrl_immed_or_reg_2b_full(); break;
	case 0x10d: shll_immed_or_reg_2b_full(); break;
	case 0x10e: shral_immed_or_reg_2b_full(); break;
	case 0x10f: norml_direct_2_full(); break;
	case 0x111: clrb_direct_1_full(); break;
	case 0x112: notb_direct_1_full(); break;
	case 0x113: negb_direct_1_full(); break;
	case 0x114: xchb_direct_2_full(); break;
	case 0x115: decb_direct_1_full(); break;
	case 0x116: extb_direct_1_full(); break;
	case 0x117: incb_direct_1_full(); break;
	case 0x118: shrb_immed_or_reg_2b_full(); break;
	case 0x119: shlb_immed_or_reg_2b_full(); break;
	case 0x11a: shrab_immed_or_reg_2b_full(); break;
	case 0x120: sjmp_rel11_full(); break;
	case 0x121: sjmp_rel11_full(); break;
	case 0x122: sjmp_rel11_full(); break;
	case 0x123: sjmp_rel11_full(); break;
	case 0x124: sjmp_rel11_full(); break;
	case 0x125: sjmp_rel11_full(); break;
	case 0x126: sjmp_rel11_full(); break;
	case 0x127: sjmp_rel11_full(); break;
	case 0x128: scall_rel11_full(); break;
	case 0x129: scall_rel11_full(); break;
	case 0x12a: scall_rel11_full(); break;
	case 0x12b: scall_rel11_full(); break;
	case 0x12c: scall_rel11_full(); break;
	case 0x12d: scall_rel11_full(); break;
	case 0x12e: scall_rel11_full(); break;
	case 0x12f: scall_rel11_full(); break;
	case 0x130: jbc_brrel8_full(); break;
	case 0x131: jbc_brrel8_full(); break;
	case 0x132: jbc_brrel8_full(); break;
	case 0x133: jbc_brrel8_full(); break;
	case 0x134: jbc_brrel8_full(); break;
	case 0x135: jbc_brrel8_full(); break;
	case 0x136: jbc_brrel8_full(); break;
	case 0x137: jbc_brrel8_full(); break;
	case 0x138: jbs_brrel8_full(); break;
	case 0x139: jbs_brrel8_full(); break;
	case 0x13a: jbs_brrel8_full(); break;
	case 0x13b: jbs_brrel8_full(); break;
	case 0x13c: jbs_brrel8_full(); break;
	case 0x13d: jbs_brrel8_full(); break;
	case 0x13e: jbs_brrel8_full(); break;
	case 0x13f: jbs_brrel8_full(); break;
	case 0x140: and_direct_3_full(); break;
	case 0x141: and_immed_3w_full(); break;
	case 0x142: and_indirect_3_full(); break;
	case 0x143: and_indexed_3_full(); break;
	case 0x144: add_direct_3_full(); break;
	case 0x145: add_immed_3w_full(); break;
	case 0x146: add_indirect_3_full(); break;
	case 0x147: add_indexed_3_full(); break;
	case 0x148: sub_direct_3_full(); break;
	case 0x149: sub_immed_3w_full(); break;
	case 0x14a: sub_indirect_3_full(); break;
	case 0x14b: sub_indexed_3_full(); break;
	case 0x14c: mul_direct_3_full(); break;
	case 0x14d: mul_immed_3w_full(); break;
	case 0x14e: mul_indirect_3_full(); break;
	case 0x14f: mul_indexed_3_full(); break;
	case 0x150: andb_direct_3_full(); break;
	case 0x151: andb_immed_3b_full(); break;
	case 0x152: andb_indirect_3_full(); break;
	case 0x153: andb_indexed_3_full(); break;
	case 0x154: addb_direct_3_full(); break;
	case 0x155: addb_immed_3b_full(); break;
	case 0x156: addb_indirect_3_full(); break;
	case 0x157: addb_indexed_3_full(); break;
	case 0x158: subb_direct_3_full(); break;
	case 0x159: subb_immed_3b_full(); break;
	case 0x15a: subb_indirect_3_full(); break;
	case 0x15b: subb_indexed_3_full(); break;
	case 0x15c: mulb_direct_3_full(); break;
	case 0x15d: mulb_immed_3b_full(); break;
	case 0x15e: mulb_indirect_3_full(); break;
	case 0x15f: mulb_indexed_3_full(); break;
	case 0x160: and_direct_2_full(); break;
	case 0x161: and_immed_2w_full(); break;
	case 0x162: and_indirect_2_full(); break;
	case 0x163: and_indexed_2_full(); break;
	case 0x164: add_direct_2_full(); break;
	case 0x165: add_immed_2w_full(); break;
	case 0x166: add_indirect_2_full(); break;
	case 0x167: add_indexed_2_full(); break;
	case 0x168: sub_direct_2_full(); break;
	case 0x169: sub_immed_2w_full(); break;
	case 0x16a: sub_indirect_2_full(); break;
	case 0x16b: sub_indexed_2_full(); break;
	case 0x16c: mul_direct_2_full(); break;
	case 0x16d: mul_immed_2w_full(); break;
	case 0x16e: mul_indirect_2_full(); break;
	case 0x16f: mul_indexed_2_full(); break;
	case 0x170: andb_direct_2_full(); break;
	case 0x171: andb_immed_2b_full(); break;
	case 0x172: andb_indirect_2_full(); break;
	case 0x173: andb_indexed_2_full(); break;
	case 0x174: addb_direct_2_full(); break;
	case 0x175: addb_immed_2b_full(); break;
	case 0x176: addb_indirect_2_full(); break;
	case 0x177: addb_indexed_2_full(); break;
	case 0x178: subb_direct_2_full(); break;
	case 0x179: subb_immed_2b_full(); break;
	case 0x17a: subb_indirect_2_full(); break;
	case 0x17b: subb_indexed_2_full(); break;
	case 0x17c: mulb_direct_2_full(); break;
	case 0x17d: mulb_immed_2b_full(); break;
	case 0x17e: mulb_indirect_2_full(); break;
	case 0x17f: mulb_indexed_2_full(); break;
	case 0x180: or_direct_2_full(); break;
	case 0x181: or_immed_2w_full(); break;
	case 0x182: or_indirect_2_full(); break;
	case 0x183: or_indexed_2_full(); break;
	case 0x184: xor_direct_2_full(); break;
	case 0x185: xor_immed_2w_full(); break;
	case 0x186: xor_indirect_2_full(); break;
	case 0x187: xor_indexed_2_full(); break;
	case 0x188: cmp_direct_2_full(); break;
	case 0x189: cmp_immed_2w_full(); break;
	case 0x18a: cmp_indirect_2_full(); break;
	case 0x18b: cmp_indexed_2_full(); break;
	case 0x18c: div_direct_2_full(); break;
	case 0x18d: div_immed_2w_full(); break;
	case 0x18e: div_indirect_2_full(); break;
	case 0x18f: div_indexed_2_full(); break;
	case 0x190: orb_direct_2_full(); break;
	case 0x191: orb_immed_2b_full(); break;
	case 0x192: orb_indirect_2_full(); break;
	case 0x193: orb_indexed_2_full(); break;
	case 0x194: xorb_direct_2_full(); break;
	case 0x195: xorb_immed_2b_full(); break;
	case 0x196: xorb_indirect_2_full(); break;
	case 0x197: xorb_indexed_2_full(); break;
	case 0x198: cmpb_direct_2_full(); break;
	case 0x199: cmpb_immed_2b_full(); break;
	case 0x19a: cmpb_indirect_2_full(); break;
	case 0x19b: cmpb_indexed_2_full(); break;
	case 0x19c: divb_direct_2_full(); break;
	case 0x19d: divb_immed_2b_full(); break;
	case 0x19e: divb_indirect_2_full(); break;
	case 0x19f: divb_indexed_2_full(); break;
	case 0x1a0: ld_direct_2_full(); break;
	case 0x1a1: ld_immed_2w_full(); break;
	case 0x1a2: ld_indirect_2_full(); break;
	case 0x1a3: ld_indexed_2_full(); break;
	case 0x1a4: addc_direct_2_full(); break;
	case 0x1a5: addc_immed_2w_full(); break;
	case 0x1a6: addc_indirect_2_full(); break;
	case 0x1a7: addc_indexed_2_full(); break;
	case 0x1a8: subc_direct_2_full(); break;
	case 0x1a9: subc_immed_2w_full(); break;
	case 0x1aa: subc_indirect_2_full(); break;
	case 0x1ab: subc_indexed_2_full(); break;
	case 0x1ac: ldbze_direct_2_full(); break;
	case 0x1ad: ldbze_immed_2b_full(); break;
	case 0x1ae: ldbze_indirect_2_full(); break;
	case 0x1af: ldbze_indexed_2_full(); break;
	case 0x1b0: ldb_direct_2_full(); break;
	case 0x1b1: ldb_immed_2b_full(); break;
	case 0x1b2: ldb_indirect_2_full(); break;
	case 0x1b3: ldb_indexed_2_full(); break;
	case 0x1b4: addcb_direct_2_full(); break;
	case 0x1b5: addcb_immed_2w_full(); break;
	case 0x1b6: addcb_indirect_2_full(); break;
	case 0x1b7: addcb_indexed_2_full(); break;
	case 0x1b8: subcb_direct_2_full(); break;
	case 0x1b9: subcb_immed_2w_full(); break;
	case 0x1ba: subcb_indirect_2_full(); break;
	case 0x1bb: subcb_indexed_2_full(); break;
	case 0x1bc: ldbse_direct_2_full(); break;
	case 0x1bd: ldbse_immed_2b_full(); break;
	case 0x1be: ldbse_indirect_2_full(); break;
	case 0x1bf: ldbse_indexed_2_full(); break;
	case 0x1c0: st_direct_2_full(); break;
	case 0x1c2: st_indirect_2_full(); break;
	case 0x1c3: st_indexed_2_full(); break;
	case 0x1c4: stb_direct_2_full(); break;
	case 0x1c6: stb_indirect_2_full(); break;
	case 0x1c7: stb_indexed_2_full(); break;
	case 0x1c8: push_direct_1_full(); break;
	case 0x1c9: push_immed_1w_full(); break;
	case 0x1ca: push_indirect_1_full(); break;
	case 0x1cb: push_indexed_1_full(); break;
	case 0x1cc: pop_direct_1_full(); break;
	case 0x1ce: pop_indirect_1_full(); break;
	case 0x1cf: pop_indexed_1_full(); break;
	case 0x1d0: jnst_rel8_full(); break;
	case 0x1d1: jnh_rel8_full(); break;
	case 0x1d2: jgt_rel8_full(); break;
	case 0x1d3: jnc_rel8_full(); break;
	case 0x1d4: jnvt_rel8_full(); break;
	case 0x1d5: jnv_rel8_full(); break;
	case 0x1d6: jge_rel8_full(); break;
	case 0x1d7: jne_rel8_full(); break;
	case 0x1d8: jst_rel8_full(); break;
	case 0x1d9: jh_rel8_full(); break;
	case 0x1da: jle_rel8_full(); break;
	case 0x1db: jc_rel8_full(); break;
	case 0x1dc: jvt_rel8_full(); break;
	case 0x1dd: jv_rel8_full(); break;
	case 0x1de: jlt_rel8_full(); break;
	case 0x1df: je_rel8_full(); break;
	case 0x1e0: djnz_rrel8_full(); break;
	case 0x1e3: br_indirect_1n_full(); break;
	case 0x1e7: ljmp_rel16_full(); break;
	case 0x1ef: lcall_rel16_full(); break;
	case 0x1f0: ret_none_full(); break;
	case 0x1f2: pushf_none_full(); break;
	case 0x1f3: popf_none_full(); break;
	case 0x1f7: trap_none_full(); break;
	case 0x1f8: clrc_none_full(); break;
	case 0x1f9: setc_none_full(); break;
	case 0x1fa: di_none_full(); break;
	case 0x1fb: ei_none_full(); break;
	case 0x1fc: clrvt_none_full(); break;
	case 0x1fd: nop_none_full(); break;
	case 0x1ff: rst_none_full(); break;
	case 0x200: fetch_full(); break;
	case 0x201: fetch_noirq_full(); break;
	}
}
