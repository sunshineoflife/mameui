const h8_device::disasm_entry h8_device::disasm_entries[] = {
	{ 0, 0x00000000, 0x0000ffff, 0x0000, 0x0000, "nop", DASM_none, DASM_none, 2 }, // needed
	{ 0, 0x00000180, 0x0000ffff, 0x0000, 0x0000, "sleep", DASM_none, DASM_none, 2 }, // needed
	{ 0, 0x00000200, 0x0000fff0, 0x0000, 0x0000, "stc", DASM_ccr, DASM_r8l, 2 }, // needed
	{ 0, 0x00000300, 0x0000fff0, 0x0000, 0x0000, "ldc", DASM_r8l, DASM_ccr, 2 }, // needed
	{ 0, 0x00000400, 0x0000ff00, 0x0000, 0x0000, "orc", DASM_imm8, DASM_ccr, 2 }, // needed
	{ 0, 0x00000500, 0x0000ff00, 0x0000, 0x0000, "xorc", DASM_imm8, DASM_ccr, 2 }, // needed
	{ 0, 0x00000600, 0x0000ff00, 0x0000, 0x0000, "andc", DASM_imm8, DASM_ccr, 2 }, // needed
	{ 0, 0x00000700, 0x0000ff00, 0x0000, 0x0000, "ldc", DASM_imm8, DASM_ccr, 2 }, // needed
	{ 0, 0x00000800, 0x0000ff00, 0x0000, 0x0000, "add.b", DASM_r8h, DASM_r8l, 2 }, // needed
	{ 0, 0x00000900, 0x0000ff88, 0x0000, 0x0000, "add.w", DASM_r16h, DASM_r16l, 2 }, // needed
	{ 0, 0x00000a00, 0x0000fff0, 0x0000, 0x0000, "inc.b", DASM_one, DASM_r8l, 2 }, // needed
	{ 0, 0x00000b00, 0x0000fff8, 0x0000, 0x0000, "adds.l", DASM_one, DASM_r16l, 2 }, // needed
	{ 0, 0x00000b80, 0x0000fff8, 0x0000, 0x0000, "adds.l", DASM_two, DASM_r16l, 2 }, // needed
	{ 0, 0x00000b90, 0x0000fff8, 0x0000, 0x0000, "adds.l", DASM_four, DASM_r16l, 2 }, // needed
	{ 0, 0x00000c00, 0x0000ff00, 0x0000, 0x0000, "mov.b", DASM_r8h, DASM_r8l, 2 }, // needed
	{ 0, 0x00000d00, 0x0000ff88, 0x0000, 0x0000, "mov.w", DASM_r16h, DASM_r16l, 2 }, // needed
	{ 0, 0x00000e00, 0x0000ff00, 0x0000, 0x0000, "addx.b", DASM_r8h, DASM_r8l, 2 }, // needed
	{ 0, 0x00000f00, 0x0000fff0, 0x0000, 0x0000, "daa.b", DASM_r8l, DASM_none, 2 }, // needed
	{ 0, 0x00001000, 0x0000fff0, 0x0000, 0x0000, "shll.b", DASM_r8l, DASM_none, 2 }, // needed
	{ 0, 0x00001080, 0x0000fff0, 0x0000, 0x0000, "shal.b", DASM_r8l, DASM_none, 2 }, // needed
	{ 0, 0x00001100, 0x0000fff0, 0x0000, 0x0000, "shlr.b", DASM_r8l, DASM_none, 2 }, // needed
	{ 0, 0x00001180, 0x0000fff0, 0x0000, 0x0000, "shar.b", DASM_r8l, DASM_none, 2 }, // needed
	{ 0, 0x00001200, 0x0000fff0, 0x0000, 0x0000, "rotxl.b", DASM_r8l, DASM_none, 2 }, // needed
	{ 0, 0x00001280, 0x0000fff0, 0x0000, 0x0000, "rotl.b", DASM_r8l, DASM_none, 2 }, // needed
	{ 0, 0x00001300, 0x0000fff0, 0x0000, 0x0000, "rotxr.b", DASM_r8l, DASM_none, 2 }, // needed
	{ 0, 0x00001380, 0x0000fff0, 0x0000, 0x0000, "rotr.b", DASM_r8l, DASM_none, 2 }, // needed
	{ 0, 0x00001400, 0x0000ff00, 0x0000, 0x0000, "or.b", DASM_r8h, DASM_r8l, 2 }, // needed
	{ 0, 0x00001500, 0x0000ff00, 0x0000, 0x0000, "xor.b", DASM_r8h, DASM_r8l, 2 }, // needed
	{ 0, 0x00001600, 0x0000ff00, 0x0000, 0x0000, "and.b", DASM_r8h, DASM_r8l, 2 }, // needed
	{ 0, 0x00001700, 0x0000fff0, 0x0000, 0x0000, "not.b", DASM_r8l, DASM_none, 2 }, // needed
	{ 0, 0x00001780, 0x0000fff0, 0x0000, 0x0000, "neg.b", DASM_r8l, DASM_none, 2 }, // needed
	{ 0, 0x00001800, 0x0000ff00, 0x0000, 0x0000, "sub.b", DASM_r8h, DASM_r8l, 2 }, // needed
	{ 0, 0x00001900, 0x0000ff88, 0x0000, 0x0000, "sub.w", DASM_r16h, DASM_r16l, 2 }, // needed
	{ 0, 0x00001a00, 0x0000fff0, 0x0000, 0x0000, "dec.b", DASM_one, DASM_r8l, 2 }, // needed
	{ 0, 0x00001b00, 0x0000fff8, 0x0000, 0x0000, "subs.l", DASM_one, DASM_r16l, 2 }, // needed
	{ 0, 0x00001b50, 0x0000fff8, 0x0000, 0x0000, "dec.w", DASM_one, DASM_r16l, 2 }, // needed
	{ 0, 0x00001b80, 0x0000fff8, 0x0000, 0x0000, "subs.l", DASM_two, DASM_r16l, 2 }, // needed
	{ 0, 0x00001b90, 0x0000fff8, 0x0000, 0x0000, "subs.l", DASM_four, DASM_r16l, 2 }, // needed
	{ 0, 0x00001bd0, 0x0000fff8, 0x0000, 0x0000, "dec.w", DASM_two, DASM_r16l, 2 }, // needed
	{ 0, 0x00001c00, 0x0000ff00, 0x0000, 0x0000, "cmp.b", DASM_r8h, DASM_r8l, 2 }, // needed
	{ 0, 0x00001d00, 0x0000ff88, 0x0000, 0x0000, "cmp.w", DASM_r16h, DASM_r16l, 2 }, // needed
	{ 0, 0x00001e00, 0x0000ff00, 0x0000, 0x0000, "subx.b", DASM_r8h, DASM_r8l, 2 }, // needed
	{ 0, 0x00001f00, 0x0000fff0, 0x0000, 0x0000, "das.b", DASM_r8l, DASM_none, 2 }, // needed
	{ 0, 0x00002000, 0x0000f000, 0x0000, 0x0000, "mov.b", DASM_abs8, DASM_r8u, 2 }, // needed
	{ 0, 0x00003000, 0x0000f000, 0x0000, 0x0000, "mov.b", DASM_r8u, DASM_abs8, 2 }, // needed
	{ 0, 0x00004000, 0x0000ff00, 0x0000, 0x0000, "bt", DASM_rel8, DASM_none, 2 }, // needed
	{ 0, 0x00004100, 0x0000ff00, 0x0000, 0x0000, "bf", DASM_rel8, DASM_none, 2 }, // needed
	{ 0, 0x00004200, 0x0000ff00, 0x0000, 0x0000, "bhi", DASM_rel8, DASM_none, 2 }, // needed
	{ 0, 0x00004300, 0x0000ff00, 0x0000, 0x0000, "bls", DASM_rel8, DASM_none, 2 }, // needed
	{ 0, 0x00004400, 0x0000ff00, 0x0000, 0x0000, "bcc", DASM_rel8, DASM_none, 2 }, // needed
	{ 0, 0x00004500, 0x0000ff00, 0x0000, 0x0000, "bcs", DASM_rel8, DASM_none, 2 }, // needed
	{ 0, 0x00004600, 0x0000ff00, 0x0000, 0x0000, "bne", DASM_rel8, DASM_none, 2 }, // needed
	{ 0, 0x00004700, 0x0000ff00, 0x0000, 0x0000, "beq", DASM_rel8, DASM_none, 2 }, // needed
	{ 0, 0x00004800, 0x0000ff00, 0x0000, 0x0000, "bvc", DASM_rel8, DASM_none, 2 }, // needed
	{ 0, 0x00004900, 0x0000ff00, 0x0000, 0x0000, "bvs", DASM_rel8, DASM_none, 2 }, // needed
	{ 0, 0x00004a00, 0x0000ff00, 0x0000, 0x0000, "bpl", DASM_rel8, DASM_none, 2 }, // needed
	{ 0, 0x00004b00, 0x0000ff00, 0x0000, 0x0000, "bmi", DASM_rel8, DASM_none, 2 }, // needed
	{ 0, 0x00004c00, 0x0000ff00, 0x0000, 0x0000, "bge", DASM_rel8, DASM_none, 2 }, // needed
	{ 0, 0x00004d00, 0x0000ff00, 0x0000, 0x0000, "blt", DASM_rel8, DASM_none, 2 }, // needed
	{ 0, 0x00004e00, 0x0000ff00, 0x0000, 0x0000, "bgt", DASM_rel8, DASM_none, 2 }, // needed
	{ 0, 0x00004f00, 0x0000ff00, 0x0000, 0x0000, "ble", DASM_rel8, DASM_none, 2 }, // needed
	{ 0, 0x00005000, 0x0000ff08, 0x0000, 0x0000, "mulxu.b", DASM_r8h, DASM_r16l, 2 }, // needed
	{ 0, 0x00005100, 0x0000ff08, 0x0000, 0x0000, "divxu.b", DASM_r8h, DASM_r16l, 2 }, // needed
	{ 0, 0x00005470, 0x0000ffff, 0x0000, 0x0000, "rts", DASM_none, DASM_none, 2 | DASMFLAG_STEP_OUT }, // needed
	{ 0, 0x00005500, 0x0000ff00, 0x0000, 0x0000, "bsr", DASM_rel8, DASM_none, 2 | DASMFLAG_STEP_OVER }, // needed
	{ 0, 0x00005670, 0x0000ffff, 0x0000, 0x0000, "rte", DASM_none, DASM_none, 2 | DASMFLAG_STEP_OUT }, // needed
	{ 0, 0x00005a00, 0x0000ffff, 0x0000, 0x0000, "jmp", DASM_abs16e, DASM_none, 4 }, // needed
	{ 0, 0x00005b00, 0x0000ff00, 0x0000, 0x0000, "jmp", DASM_abs8i, DASM_none, 2 }, // needed
	{ 0, 0x00005d00, 0x0000ff8f, 0x0000, 0x0000, "jsr", DASM_r16h, DASM_none, 2 | DASMFLAG_STEP_OVER }, // needed
	{ 0, 0x00005e00, 0x0000ffff, 0x0000, 0x0000, "jsr", DASM_abs16e, DASM_none, 4 | DASMFLAG_STEP_OVER }, // needed
	{ 0, 0x00005f00, 0x0000ff00, 0x0000, 0x0000, "jsr", DASM_abs8i, DASM_none, 2 | DASMFLAG_STEP_OVER }, // needed
	{ 0, 0x00006000, 0x0000ff00, 0x0000, 0x0000, "bset", DASM_r8h, DASM_r8l, 2 }, // needed
	{ 0, 0x00006100, 0x0000ff00, 0x0000, 0x0000, "bnot", DASM_r8h, DASM_r8l, 2 }, // needed
	{ 0, 0x00006200, 0x0000ff00, 0x0000, 0x0000, "bclr", DASM_r8h, DASM_r8l, 2 }, // needed
	{ 0, 0x00006300, 0x0000ff00, 0x0000, 0x0000, "btst", DASM_r8h, DASM_r8l, 2 }, // needed
	{ 0, 0x00006700, 0x0000ff80, 0x0000, 0x0000, "bst", DASM_imm3, DASM_r8l, 2 }, // needed
	{ 0, 0x00006780, 0x0000ff80, 0x0000, 0x0000, "bist", DASM_imm3, DASM_r8l, 2 }, // needed
	{ 0, 0x00006800, 0x0000ff80, 0x0000, 0x0000, "mov.b", DASM_r16ih, DASM_r8l, 2 }, // needed
	{ 0, 0x00006880, 0x0000ff80, 0x0000, 0x0000, "mov.b", DASM_r8l, DASM_r16ih, 2 }, // needed
	{ 0, 0x00006900, 0x0000ff88, 0x0000, 0x0000, "mov.w", DASM_r16ih, DASM_r16l, 2 }, // needed
	{ 0, 0x00006980, 0x0000ff88, 0x0000, 0x0000, "mov.w", DASM_r16l, DASM_r16ih, 2 }, // needed
	{ 0, 0x00006a00, 0x0000fff0, 0x0000, 0x0000, "mov.b", DASM_abs16, DASM_r8l, 4 }, // needed
	{ 2, 0x6a106300, 0xffffff0f, 0x0000, 0x0000, "btst", DASM_r8h, DASM_abs16, 6 }, // needed
	{ 2, 0x6a107300, 0xffffff8f, 0x0000, 0x0000, "btst", DASM_imm3, DASM_abs16, 6 }, // needed
	{ 2, 0x6a107400, 0xffffff8f, 0x0000, 0x0000, "bor", DASM_imm3, DASM_abs16, 6 }, // needed
	{ 2, 0x6a107480, 0xffffff8f, 0x0000, 0x0000, "bior", DASM_imm3, DASM_abs16, 6 }, // needed
	{ 2, 0x6a107500, 0xffffff8f, 0x0000, 0x0000, "bxor", DASM_imm3, DASM_abs16, 6 }, // needed
	{ 2, 0x6a107580, 0xffffff8f, 0x0000, 0x0000, "bixor", DASM_imm3, DASM_abs16, 6 }, // needed
	{ 2, 0x6a107600, 0xffffff8f, 0x0000, 0x0000, "band", DASM_imm3, DASM_abs16, 6 }, // needed
	{ 2, 0x6a107680, 0xffffff8f, 0x0000, 0x0000, "biand", DASM_imm3, DASM_abs16, 6 }, // needed
	{ 2, 0x6a107700, 0xffffff8f, 0x0000, 0x0000, "bld", DASM_imm3, DASM_abs16, 6 }, // needed
	{ 2, 0x6a107780, 0xffffff8f, 0x0000, 0x0000, "bild", DASM_imm3, DASM_abs16, 6 }, // needed
	{ 2, 0x6a186000, 0xffffff0f, 0x0000, 0x0000, "bset", DASM_r8h, DASM_abs16, 6 }, // needed
	{ 2, 0x6a186100, 0xffffff0f, 0x0000, 0x0000, "bnot", DASM_r8h, DASM_abs16, 6 }, // needed
	{ 2, 0x6a186200, 0xffffff0f, 0x0000, 0x0000, "bclr", DASM_r8h, DASM_abs16, 6 }, // needed
	{ 2, 0x6a186700, 0xffffff8f, 0x0000, 0x0000, "bst", DASM_imm3, DASM_abs16, 6 }, // needed
	{ 2, 0x6a186780, 0xffffff8f, 0x0000, 0x0000, "bist", DASM_imm3, DASM_abs16, 6 }, // needed
	{ 2, 0x6a187000, 0xffffff8f, 0x0000, 0x0000, "bset", DASM_imm3, DASM_abs16, 6 }, // needed
	{ 2, 0x6a187100, 0xffffff8f, 0x0000, 0x0000, "bnot", DASM_imm3, DASM_abs16, 6 }, // needed
	{ 2, 0x6a187200, 0xffffff8f, 0x0000, 0x0000, "bclr", DASM_imm3, DASM_abs16, 6 }, // needed
	{ 0, 0x00006a40, 0x0000fff0, 0x0000, 0x0000, "movfpe", DASM_abs16, DASM_r8l, 4 }, // needed
	{ 0, 0x00006a80, 0x0000fff0, 0x0000, 0x0000, "mov.b", DASM_r8l, DASM_abs16, 4 }, // needed
	{ 0, 0x00006ac0, 0x0000fff0, 0x0000, 0x0000, "movtpe", DASM_r8l, DASM_abs16, 4 }, // needed
	{ 0, 0x00006b00, 0x0000fff8, 0x0000, 0x0000, "mov.w", DASM_abs16, DASM_r16l, 4 }, // needed
	{ 0, 0x00006b80, 0x0000fff8, 0x0000, 0x0000, "mov.w", DASM_r16l, DASM_abs16, 4 }, // needed
	{ 0, 0x00006c00, 0x0000ff80, 0x0000, 0x0000, "mov.b", DASM_r16ph, DASM_r8l, 2 }, // needed
	{ 0, 0x00006c80, 0x0000ff80, 0x0000, 0x0000, "mov.b", DASM_r8l, DASM_pr16h, 2 }, // needed
	{ 0, 0x00006d00, 0x0000ff88, 0x0000, 0x0000, "mov.w", DASM_r16ph, DASM_r16l, 2 }, // needed
	{ 0, 0x00006d80, 0x0000ff88, 0x0000, 0x0000, "mov.w", DASM_r16l, DASM_pr16h, 2 }, // needed
	{ 0, 0x00006e00, 0x0000ff80, 0x0000, 0x0000, "mov.b", DASM_r16d16h, DASM_r8l, 4 }, // needed
	{ 0, 0x00006e80, 0x0000ff80, 0x0000, 0x0000, "mov.b", DASM_r8l, DASM_r16d16h, 4 }, // needed
	{ 0, 0x00006f00, 0x0000ff88, 0x0000, 0x0000, "mov.w", DASM_r16d16h, DASM_r16l, 4 }, // needed
	{ 0, 0x00006f80, 0x0000ff88, 0x0000, 0x0000, "mov.w", DASM_r16l, DASM_r16d16h, 4 }, // needed
	{ 0, 0x00007000, 0x0000ff80, 0x0000, 0x0000, "bset", DASM_imm3, DASM_r8l, 2 }, // needed
	{ 0, 0x00007100, 0x0000ff80, 0x0000, 0x0000, "bnot", DASM_imm3, DASM_r8l, 2 }, // needed
	{ 0, 0x00007200, 0x0000ff80, 0x0000, 0x0000, "bclr", DASM_imm3, DASM_r8l, 2 }, // needed
	{ 0, 0x00007300, 0x0000ff80, 0x0000, 0x0000, "btst", DASM_imm3, DASM_r8l, 2 }, // needed
	{ 0, 0x00007400, 0x0000ff80, 0x0000, 0x0000, "bor", DASM_imm3, DASM_r8l, 2 }, // needed
	{ 0, 0x00007480, 0x0000ff80, 0x0000, 0x0000, "bior", DASM_imm3, DASM_r8l, 2 }, // needed
	{ 0, 0x00007500, 0x0000ff80, 0x0000, 0x0000, "bxor", DASM_imm3, DASM_r8l, 2 }, // needed
	{ 0, 0x00007580, 0x0000ff80, 0x0000, 0x0000, "bixor", DASM_imm3, DASM_r8l, 2 }, // needed
	{ 0, 0x00007600, 0x0000ff80, 0x0000, 0x0000, "band", DASM_imm3, DASM_r8l, 2 }, // needed
	{ 0, 0x00007680, 0x0000ff80, 0x0000, 0x0000, "biand", DASM_imm3, DASM_r8l, 2 }, // needed
	{ 0, 0x00007700, 0x0000ff80, 0x0000, 0x0000, "bld", DASM_imm3, DASM_r8l, 2 }, // needed
	{ 0, 0x00007780, 0x0000ff80, 0x0000, 0x0000, "bild", DASM_imm3, DASM_r8l, 2 }, // needed
	{ 0, 0x00007900, 0x0000fff8, 0x0000, 0x0000, "mov.w", DASM_imm16, DASM_r16l, 4 }, // needed
	{ 0, 0x00007910, 0x0000fff8, 0x0000, 0x0000, "add.w", DASM_imm16, DASM_r16l, 4 }, // needed
	{ 0, 0x00007920, 0x0000fff8, 0x0000, 0x0000, "cmp.w", DASM_imm16, DASM_r16l, 4 }, // needed
	{ 0, 0x00007930, 0x0000fff8, 0x0000, 0x0000, "sub.w", DASM_imm16, DASM_r16l, 4 }, // needed
	{ 0, 0x00007940, 0x0000fff8, 0x0000, 0x0000, "or.w", DASM_imm16, DASM_r16l, 4 }, // needed
	{ 0, 0x00007950, 0x0000fff8, 0x0000, 0x0000, "xor.w", DASM_imm16, DASM_r16l, 4 }, // needed
	{ 0, 0x00007960, 0x0000fff8, 0x0000, 0x0000, "and.w", DASM_imm16, DASM_r16l, 4 }, // needed
	{ 1, 0x7b5c598f, 0xffffffff, 0x0000, 0x0000, "eepmov.b", DASM_none, DASM_none, 4 }, // needed
	{ 1, 0x7c006300, 0xff8fff0f, 0x0000, 0x0000, "btst", DASM_r8h, DASM_r16ihh, 4 }, // needed
	{ 1, 0x7c007300, 0xff8fff8f, 0x0000, 0x0000, "btst", DASM_imm3, DASM_r16ihh, 4 }, // needed
	{ 1, 0x7c007400, 0xff8fff8f, 0x0000, 0x0000, "bor", DASM_imm3, DASM_r16ihh, 4 }, // needed
	{ 1, 0x7c007480, 0xff8fff8f, 0x0000, 0x0000, "bior", DASM_imm3, DASM_r16ihh, 4 }, // needed
	{ 1, 0x7c007500, 0xff8fff8f, 0x0000, 0x0000, "bxor", DASM_imm3, DASM_r16ihh, 4 }, // needed
	{ 1, 0x7c007580, 0xff8fff8f, 0x0000, 0x0000, "bixor", DASM_imm3, DASM_r16ihh, 4 }, // needed
	{ 1, 0x7c007600, 0xff8fff8f, 0x0000, 0x0000, "band", DASM_imm3, DASM_r16ihh, 4 }, // needed
	{ 1, 0x7c007680, 0xff8fff8f, 0x0000, 0x0000, "biand", DASM_imm3, DASM_r16ihh, 4 }, // needed
	{ 1, 0x7c007700, 0xff8fff8f, 0x0000, 0x0000, "bld", DASM_imm3, DASM_r16ihh, 4 }, // needed
	{ 1, 0x7c007780, 0xff8fff8f, 0x0000, 0x0000, "bild", DASM_imm3, DASM_r16ihh, 4 }, // needed
	{ 1, 0x7d006000, 0xff8fff0f, 0x0000, 0x0000, "bset", DASM_r8h, DASM_r16ihh, 4 }, // needed
	{ 1, 0x7d006100, 0xff8fff0f, 0x0000, 0x0000, "bnot", DASM_r8h, DASM_r16ihh, 4 }, // needed
	{ 1, 0x7d006200, 0xff8fff0f, 0x0000, 0x0000, "bclr", DASM_r8h, DASM_r16ihh, 4 }, // needed
	{ 1, 0x7d006700, 0xff8fff8f, 0x0000, 0x0000, "bst", DASM_imm3, DASM_r16ihh, 4 }, // needed
	{ 1, 0x7d006780, 0xff8fff8f, 0x0000, 0x0000, "bist", DASM_imm3, DASM_r16ihh, 4 }, // needed
	{ 1, 0x7d007000, 0xff8fff8f, 0x0000, 0x0000, "bset", DASM_imm3, DASM_r16ihh, 4 }, // needed
	{ 1, 0x7d007100, 0xff8fff8f, 0x0000, 0x0000, "bnot", DASM_imm3, DASM_r16ihh, 4 }, // needed
	{ 1, 0x7d007200, 0xff8fff8f, 0x0000, 0x0000, "bclr", DASM_imm3, DASM_r16ihh, 4 }, // needed
	{ 1, 0x7e006300, 0xff00ff0f, 0x0000, 0x0000, "btst", DASM_r8h, DASM_abs8, 4 }, // needed
	{ 1, 0x7e007300, 0xff00ff8f, 0x0000, 0x0000, "btst", DASM_imm3, DASM_abs8, 4 }, // needed
	{ 1, 0x7e007400, 0xff00ff8f, 0x0000, 0x0000, "bor", DASM_imm3, DASM_abs8, 4 }, // needed
	{ 1, 0x7e007480, 0xff00ff8f, 0x0000, 0x0000, "bior", DASM_imm3, DASM_abs8, 4 }, // needed
	{ 1, 0x7e007500, 0xff00ff8f, 0x0000, 0x0000, "bxor", DASM_imm3, DASM_abs8, 4 }, // needed
	{ 1, 0x7e007580, 0xff00ff8f, 0x0000, 0x0000, "bixor", DASM_imm3, DASM_abs8, 4 }, // needed
	{ 1, 0x7e007600, 0xff00ff8f, 0x0000, 0x0000, "band", DASM_imm3, DASM_abs8, 4 }, // needed
	{ 1, 0x7e007680, 0xff00ff8f, 0x0000, 0x0000, "biand", DASM_imm3, DASM_abs8, 4 }, // needed
	{ 1, 0x7e007700, 0xff00ff8f, 0x0000, 0x0000, "bld", DASM_imm3, DASM_abs8, 4 }, // needed
	{ 1, 0x7e007780, 0xff00ff8f, 0x0000, 0x0000, "bild", DASM_imm3, DASM_abs8, 4 }, // needed
	{ 1, 0x7f006000, 0xff00ff0f, 0x0000, 0x0000, "bset", DASM_r8h, DASM_abs8, 4 }, // needed
	{ 1, 0x7f006100, 0xff00ff0f, 0x0000, 0x0000, "bnot", DASM_r8h, DASM_abs8, 4 }, // needed
	{ 1, 0x7f006200, 0xff00ff0f, 0x0000, 0x0000, "bclr", DASM_r8h, DASM_abs8, 4 }, // needed
	{ 1, 0x7f006700, 0xff00ff8f, 0x0000, 0x0000, "bst", DASM_imm3, DASM_abs8, 4 }, // needed
	{ 1, 0x7f006780, 0xff00ff8f, 0x0000, 0x0000, "bist", DASM_imm3, DASM_abs8, 4 }, // needed
	{ 1, 0x7f007000, 0xff00ff8f, 0x0000, 0x0000, "bset", DASM_imm3, DASM_abs8, 4 }, // needed
	{ 1, 0x7f007100, 0xff00ff8f, 0x0000, 0x0000, "bnot", DASM_imm3, DASM_abs8, 4 }, // needed
	{ 1, 0x7f007200, 0xff00ff8f, 0x0000, 0x0000, "bclr", DASM_imm3, DASM_abs8, 4 }, // needed
	{ 0, 0x00008000, 0x0000f000, 0x0000, 0x0000, "add.b", DASM_imm8, DASM_r8u, 2 }, // needed
	{ 0, 0x00009000, 0x0000f000, 0x0000, 0x0000, "addx.b", DASM_imm8, DASM_r8u, 2 }, // needed
	{ 0, 0x0000a000, 0x0000f000, 0x0000, 0x0000, "cmp.b", DASM_imm8, DASM_r8u, 2 }, // needed
	{ 0, 0x0000b000, 0x0000f000, 0x0000, 0x0000, "subx.b", DASM_imm8, DASM_r8u, 2 }, // needed
	{ 0, 0x0000c000, 0x0000f000, 0x0000, 0x0000, "or.b", DASM_imm8, DASM_r8u, 2 }, // needed
	{ 0, 0x0000d000, 0x0000f000, 0x0000, 0x0000, "xor.b", DASM_imm8, DASM_r8u, 2 }, // needed
	{ 0, 0x0000e000, 0x0000f000, 0x0000, 0x0000, "and.b", DASM_imm8, DASM_r8u, 2 }, // needed
	{ 0, 0x0000f000, 0x0000f000, 0x0000, 0x0000, "mov.b", DASM_imm8, DASM_r8u, 2 }, // needed
	{ 0, 0, 0, 0, 0, "illegal", 0, 0, 2 },
};

void h8_device::nop_full()
{
	if(icount <= bcount) { inst_substate = 1; return; }
	prefetch();
}

void h8_device::nop_partial()
{
switch(inst_substate) {
case 0:
	if(icount <= bcount) { inst_substate = 1; return; }
case 1:;
	prefetch();
	break;
}
	inst_substate = 0;
}

void h8_device::sleep_full()
{
	if(icount <= bcount) { inst_substate = 1; return; }
	prefetch_start();
	while(!irq_vector) {
	if(icount) { icount = bcount; } inst_substate = 2; return;
	}
	prefetch_done();
}

void h8_device::sleep_partial()
{
switch(inst_substate) {
case 0:
	if(icount <= bcount) { inst_substate = 1; return; }
case 1:;
	prefetch_start();
	while(!irq_vector) {
	if(icount) { icount = bcount; } inst_substate = 2; return;
case 2:;
	}
	prefetch_done();
	break;
}
	inst_substate = 0;
}

void h8_device::stc_ccr_r8l_full()
{
	r8_w(IR[0], CCR);
	if(icount <= bcount) { inst_substate = 1; return; }
	prefetch();
}

void h8_device::stc_ccr_r8l_partial()
{
switch(inst_substate) {
case 0:
	r8_w(IR[0], CCR);
	if(icount <= bcount) { inst_substate = 1; return; }
case 1:;
	prefetch();
	break;
}
	inst_substate = 0;
}

void h8_device::ldc_r8l_ccr_full()
{
	CCR = r8_r(IR[0]);
	update_irq_filter();
	if(icount <= bcount) { inst_substate = 1; return; }
	prefetch_noirq();
}

void h8_device::ldc_r8l_ccr_partial()
{
switch(inst_substate) {
case 0:
	CCR = r8_r(IR[0]);
	update_irq_filter();
	if(icount <= bcount) { inst_substate = 1; return; }
case 1:;
	prefetch_noirq();
	break;
}
	inst_substate = 0;
}

void h8_device::orc_imm8_ccr_full()
{
	CCR |= IR[0];
	update_irq_filter();
	if(icount <= bcount) { inst_substate = 1; return; }
	prefetch_noirq();
}

void h8_device::orc_imm8_ccr_partial()
{
switch(inst_substate) {
case 0:
	CCR |= IR[0];
	update_irq_filter();
	if(icount <= bcount) { inst_substate = 1; return; }
case 1:;
	prefetch_noirq();
	break;
}
	inst_substate = 0;
}

void h8_device::xorc_imm8_ccr_full()
{
	CCR ^= IR[0];
	update_irq_filter();
	if(icount <= bcount) { inst_substate = 1; return; }
	prefetch_noirq();
}

void h8_device::xorc_imm8_ccr_partial()
{
switch(inst_substate) {
case 0:
	CCR ^= IR[0];
	update_irq_filter();
	if(icount <= bcount) { inst_substate = 1; return; }
case 1:;
	prefetch_noirq();
	break;
}
	inst_substate = 0;
}

void h8_device::andc_imm8_ccr_full()
{
	CCR &= IR[0];
	update_irq_filter();
	if(icount <= bcount) { inst_substate = 1; return; }
	prefetch_noirq();
}

void h8_device::andc_imm8_ccr_partial()
{
switch(inst_substate) {
case 0:
	CCR &= IR[0];
	update_irq_filter();
	if(icount <= bcount) { inst_substate = 1; return; }
case 1:;
	prefetch_noirq();
	break;
}
	inst_substate = 0;
}

void h8_device::ldc_imm8_ccr_full()
{
	CCR = IR[0];
	update_irq_filter();
	if(icount <= bcount) { inst_substate = 1; return; }
	prefetch_noirq();
}

void h8_device::ldc_imm8_ccr_partial()
{
switch(inst_substate) {
case 0:
	CCR = IR[0];
	update_irq_filter();
	if(icount <= bcount) { inst_substate = 1; return; }
case 1:;
	prefetch_noirq();
	break;
}
	inst_substate = 0;
}

void h8_device::add_b_r8h_r8l_full()
{
	r8_w(IR[0], do_add8(r8_r(IR[0]), r8_r(IR[0] >> 4)));
	if(icount <= bcount) { inst_substate = 1; return; }
	prefetch();
}

void h8_device::add_b_r8h_r8l_partial()
{
switch(inst_substate) {
case 0:
	r8_w(IR[0], do_add8(r8_r(IR[0]), r8_r(IR[0] >> 4)));
	if(icount <= bcount) { inst_substate = 1; return; }
case 1:;
	prefetch();
	break;
}
	inst_substate = 0;
}

void h8_device::add_w_r16h_r16l_full()
{
	r16_w(IR[0], do_add16(r16_r(IR[0]), r16_r(IR[0] >> 4)));
	if(icount <= bcount) { inst_substate = 1; return; }
	prefetch();
}

void h8_device::add_w_r16h_r16l_partial()
{
switch(inst_substate) {
case 0:
	r16_w(IR[0], do_add16(r16_r(IR[0]), r16_r(IR[0] >> 4)));
	if(icount <= bcount) { inst_substate = 1; return; }
case 1:;
	prefetch();
	break;
}
	inst_substate = 0;
}

void h8_device::inc_b_one_r8l_full()
{
	r8_w(IR[0], do_inc8(r8_r(IR[0]), 1));
	if(icount <= bcount) { inst_substate = 1; return; }
	prefetch();
}

void h8_device::inc_b_one_r8l_partial()
{
switch(inst_substate) {
case 0:
	r8_w(IR[0], do_inc8(r8_r(IR[0]), 1));
	if(icount <= bcount) { inst_substate = 1; return; }
case 1:;
	prefetch();
	break;
}
	inst_substate = 0;
}

void h8_device::adds_l_one_r16l_full()
{
	r16_w(IR[0], r16_r(IR[0])+1);
	if(icount <= bcount) { inst_substate = 1; return; }
	prefetch();
}

void h8_device::adds_l_one_r16l_partial()
{
switch(inst_substate) {
case 0:
	r16_w(IR[0], r16_r(IR[0])+1);
	if(icount <= bcount) { inst_substate = 1; return; }
case 1:;
	prefetch();
	break;
}
	inst_substate = 0;
}

void h8_device::adds_l_two_r16l_full()
{
	r16_w(IR[0], r16_r(IR[0])+2);
	if(icount <= bcount) { inst_substate = 1; return; }
	prefetch();
}

void h8_device::adds_l_two_r16l_partial()
{
switch(inst_substate) {
case 0:
	r16_w(IR[0], r16_r(IR[0])+2);
	if(icount <= bcount) { inst_substate = 1; return; }
case 1:;
	prefetch();
	break;
}
	inst_substate = 0;
}

void h8_device::adds_l_four_r16l_full()
{
	r16_w(IR[0], r16_r(IR[0])+4);
	if(icount <= bcount) { inst_substate = 1; return; }
	prefetch();
}

void h8_device::adds_l_four_r16l_partial()
{
switch(inst_substate) {
case 0:
	r16_w(IR[0], r16_r(IR[0])+4);
	if(icount <= bcount) { inst_substate = 1; return; }
case 1:;
	prefetch();
	break;
}
	inst_substate = 0;
}

void h8_device::mov_b_r8h_r8l_full()
{
	TMP1 = r8_r(IR[0] >> 4);
	set_nzv8(TMP1);
	r8_w(IR[0], TMP1);
	if(icount <= bcount) { inst_substate = 1; return; }
	prefetch();
}

void h8_device::mov_b_r8h_r8l_partial()
{
switch(inst_substate) {
case 0:
	TMP1 = r8_r(IR[0] >> 4);
	set_nzv8(TMP1);
	r8_w(IR[0], TMP1);
	if(icount <= bcount) { inst_substate = 1; return; }
case 1:;
	prefetch();
	break;
}
	inst_substate = 0;
}

void h8_device::mov_w_r16h_r16l_full()
{
	TMP1 = r16_r(IR[0] >> 4);
	set_nzv16(TMP1);
	r16_w(IR[0], TMP1);
	if(icount <= bcount) { inst_substate = 1; return; }
	prefetch();
}

void h8_device::mov_w_r16h_r16l_partial()
{
switch(inst_substate) {
case 0:
	TMP1 = r16_r(IR[0] >> 4);
	set_nzv16(TMP1);
	r16_w(IR[0], TMP1);
	if(icount <= bcount) { inst_substate = 1; return; }
case 1:;
	prefetch();
	break;
}
	inst_substate = 0;
}

void h8_device::addx_b_r8h_r8l_full()
{
	r8_w(IR[0], do_addx8(r8_r(IR[0]), r8_r(IR[0] >> 4)));
	if(icount <= bcount) { inst_substate = 1; return; }
	prefetch();
}

void h8_device::addx_b_r8h_r8l_partial()
{
switch(inst_substate) {
case 0:
	r8_w(IR[0], do_addx8(r8_r(IR[0]), r8_r(IR[0] >> 4)));
	if(icount <= bcount) { inst_substate = 1; return; }
case 1:;
	prefetch();
	break;
}
	inst_substate = 0;
}

void h8_device::daa_b_r8l_full()
{
	TMP1 = r8_r(IR[0]);
	TMP2 = 0;
	if(CCR & F_C) {
		if(CCR & F_H) {
			if((TMP1 & 0xf0) <= 0x30 && (TMP1 & 0x0f) <= 3)
				TMP2 = 0x66;
		} else {
			if((TMP1 & 0xf0) <= 0x20)
				TMP2 = (TMP1 & 0x0f) <= 9 ? 0x60 : 0x66;
		}
	} else {
		if(CCR & F_H) {
			if((TMP1 & 0x0f) <= 3)
				TMP2 = (TMP1 & 0xf0) <= 0x90 ? 0x06 : 0x66;
		} else {
			if((TMP1 & 0x0f) <= 9)
				TMP2 = (TMP1 & 0xf0) <= 0x90 ? 0x00 : 0x60;
			else
				TMP2 = (TMP1 & 0xf0) <= 0x80 ? 0x06 : 0x66;
		}
	}
	r8_w(IR[0], do_add8(TMP1, TMP2));
	if(icount <= bcount) { inst_substate = 1; return; }
	prefetch();
}

void h8_device::daa_b_r8l_partial()
{
switch(inst_substate) {
case 0:
	TMP1 = r8_r(IR[0]);
	TMP2 = 0;
	if(CCR & F_C) {
		if(CCR & F_H) {
			if((TMP1 & 0xf0) <= 0x30 && (TMP1 & 0x0f) <= 3)
				TMP2 = 0x66;
		} else {
			if((TMP1 & 0xf0) <= 0x20)
				TMP2 = (TMP1 & 0x0f) <= 9 ? 0x60 : 0x66;
		}
	} else {
		if(CCR & F_H) {
			if((TMP1 & 0x0f) <= 3)
				TMP2 = (TMP1 & 0xf0) <= 0x90 ? 0x06 : 0x66;
		} else {
			if((TMP1 & 0x0f) <= 9)
				TMP2 = (TMP1 & 0xf0) <= 0x90 ? 0x00 : 0x60;
			else
				TMP2 = (TMP1 & 0xf0) <= 0x80 ? 0x06 : 0x66;
		}
	}
	r8_w(IR[0], do_add8(TMP1, TMP2));
	if(icount <= bcount) { inst_substate = 1; return; }
case 1:;
	prefetch();
	break;
}
	inst_substate = 0;
}

void h8_device::shll_b_r8l_full()
{
	r8_w(IR[0], do_shll8(r8_r(IR[0])));
	if(icount <= bcount) { inst_substate = 1; return; }
	prefetch();
}

void h8_device::shll_b_r8l_partial()
{
switch(inst_substate) {
case 0:
	r8_w(IR[0], do_shll8(r8_r(IR[0])));
	if(icount <= bcount) { inst_substate = 1; return; }
case 1:;
	prefetch();
	break;
}
	inst_substate = 0;
}

void h8_device::shal_b_r8l_full()
{
	r8_w(IR[0], do_shal8(r8_r(IR[0])));
	if(icount <= bcount) { inst_substate = 1; return; }
	prefetch();
}

void h8_device::shal_b_r8l_partial()
{
switch(inst_substate) {
case 0:
	r8_w(IR[0], do_shal8(r8_r(IR[0])));
	if(icount <= bcount) { inst_substate = 1; return; }
case 1:;
	prefetch();
	break;
}
	inst_substate = 0;
}

void h8_device::shlr_b_r8l_full()
{
	r8_w(IR[0], do_shlr8(r8_r(IR[0])));
	if(icount <= bcount) { inst_substate = 1; return; }
	prefetch();
}

void h8_device::shlr_b_r8l_partial()
{
switch(inst_substate) {
case 0:
	r8_w(IR[0], do_shlr8(r8_r(IR[0])));
	if(icount <= bcount) { inst_substate = 1; return; }
case 1:;
	prefetch();
	break;
}
	inst_substate = 0;
}

void h8_device::shar_b_r8l_full()
{
	r8_w(IR[0], do_shar8(r8_r(IR[0])));
	if(icount <= bcount) { inst_substate = 1; return; }
	prefetch();
}

void h8_device::shar_b_r8l_partial()
{
switch(inst_substate) {
case 0:
	r8_w(IR[0], do_shar8(r8_r(IR[0])));
	if(icount <= bcount) { inst_substate = 1; return; }
case 1:;
	prefetch();
	break;
}
	inst_substate = 0;
}

void h8_device::rotxl_b_r8l_full()
{
	r8_w(IR[0], do_rotxl8(r8_r(IR[0])));
	if(icount <= bcount) { inst_substate = 1; return; }
	prefetch();
}

void h8_device::rotxl_b_r8l_partial()
{
switch(inst_substate) {
case 0:
	r8_w(IR[0], do_rotxl8(r8_r(IR[0])));
	if(icount <= bcount) { inst_substate = 1; return; }
case 1:;
	prefetch();
	break;
}
	inst_substate = 0;
}

void h8_device::rotl_b_r8l_full()
{
	r8_w(IR[0], do_rotl8(r8_r(IR[0])));
	if(icount <= bcount) { inst_substate = 1; return; }
	prefetch();
}

void h8_device::rotl_b_r8l_partial()
{
switch(inst_substate) {
case 0:
	r8_w(IR[0], do_rotl8(r8_r(IR[0])));
	if(icount <= bcount) { inst_substate = 1; return; }
case 1:;
	prefetch();
	break;
}
	inst_substate = 0;
}

void h8_device::rotxr_b_r8l_full()
{
	r8_w(IR[0], do_rotxr8(r8_r(IR[0])));
	if(icount <= bcount) { inst_substate = 1; return; }
	prefetch();
}

void h8_device::rotxr_b_r8l_partial()
{
switch(inst_substate) {
case 0:
	r8_w(IR[0], do_rotxr8(r8_r(IR[0])));
	if(icount <= bcount) { inst_substate = 1; return; }
case 1:;
	prefetch();
	break;
}
	inst_substate = 0;
}

void h8_device::rotr_b_r8l_full()
{
	r8_w(IR[0], do_rotr8(r8_r(IR[0])));
	if(icount <= bcount) { inst_substate = 1; return; }
	prefetch();
}

void h8_device::rotr_b_r8l_partial()
{
switch(inst_substate) {
case 0:
	r8_w(IR[0], do_rotr8(r8_r(IR[0])));
	if(icount <= bcount) { inst_substate = 1; return; }
case 1:;
	prefetch();
	break;
}
	inst_substate = 0;
}

void h8_device::or_b_r8h_r8l_full()
{
	TMP1 = r8_r(IR[0] >> 4) | r8_r(IR[0]);
	set_nzv8(TMP1);
	r8_w(IR[0], TMP1);
	if(icount <= bcount) { inst_substate = 1; return; }
	prefetch();
}

void h8_device::or_b_r8h_r8l_partial()
{
switch(inst_substate) {
case 0:
	TMP1 = r8_r(IR[0] >> 4) | r8_r(IR[0]);
	set_nzv8(TMP1);
	r8_w(IR[0], TMP1);
	if(icount <= bcount) { inst_substate = 1; return; }
case 1:;
	prefetch();
	break;
}
	inst_substate = 0;
}

void h8_device::xor_b_r8h_r8l_full()
{
	TMP1 = r8_r(IR[0] >> 4) ^ r8_r(IR[0]);
	set_nzv8(TMP1);
	r8_w(IR[0], TMP1);
	if(icount <= bcount) { inst_substate = 1; return; }
	prefetch();
}

void h8_device::xor_b_r8h_r8l_partial()
{
switch(inst_substate) {
case 0:
	TMP1 = r8_r(IR[0] >> 4) ^ r8_r(IR[0]);
	set_nzv8(TMP1);
	r8_w(IR[0], TMP1);
	if(icount <= bcount) { inst_substate = 1; return; }
case 1:;
	prefetch();
	break;
}
	inst_substate = 0;
}

void h8_device::and_b_r8h_r8l_full()
{
	TMP1 = r8_r(IR[0] >> 4) & r8_r(IR[0]);
	set_nzv8(TMP1);
	r8_w(IR[0], TMP1);
	if(icount <= bcount) { inst_substate = 1; return; }
	prefetch();
}

void h8_device::and_b_r8h_r8l_partial()
{
switch(inst_substate) {
case 0:
	TMP1 = r8_r(IR[0] >> 4) & r8_r(IR[0]);
	set_nzv8(TMP1);
	r8_w(IR[0], TMP1);
	if(icount <= bcount) { inst_substate = 1; return; }
case 1:;
	prefetch();
	break;
}
	inst_substate = 0;
}

void h8_device::not_b_r8l_full()
{
	TMP1 = ~r8_r(IR[0]);
	set_nzv8(TMP1);
	r8_w(IR[0], TMP1);
	if(icount <= bcount) { inst_substate = 1; return; }
	prefetch();
}

void h8_device::not_b_r8l_partial()
{
switch(inst_substate) {
case 0:
	TMP1 = ~r8_r(IR[0]);
	set_nzv8(TMP1);
	r8_w(IR[0], TMP1);
	if(icount <= bcount) { inst_substate = 1; return; }
case 1:;
	prefetch();
	break;
}
	inst_substate = 0;
}

void h8_device::neg_b_r8l_full()
{
	r8_w(IR[0], do_sub8(0, r8_r(IR[0])));
	if(icount <= bcount) { inst_substate = 1; return; }
	prefetch();
}

void h8_device::neg_b_r8l_partial()
{
switch(inst_substate) {
case 0:
	r8_w(IR[0], do_sub8(0, r8_r(IR[0])));
	if(icount <= bcount) { inst_substate = 1; return; }
case 1:;
	prefetch();
	break;
}
	inst_substate = 0;
}

void h8_device::sub_b_r8h_r8l_full()
{
	r8_w(IR[0], do_sub8(r8_r(IR[0]), r8_r(IR[0] >> 4)));
	if(icount <= bcount) { inst_substate = 1; return; }
	prefetch();
}

void h8_device::sub_b_r8h_r8l_partial()
{
switch(inst_substate) {
case 0:
	r8_w(IR[0], do_sub8(r8_r(IR[0]), r8_r(IR[0] >> 4)));
	if(icount <= bcount) { inst_substate = 1; return; }
case 1:;
	prefetch();
	break;
}
	inst_substate = 0;
}

void h8_device::sub_w_r16h_r16l_full()
{
	r16_w(IR[0], do_sub16(r16_r(IR[0]), r16_r(IR[0] >> 4)));
	if(icount <= bcount) { inst_substate = 1; return; }
	prefetch();
}

void h8_device::sub_w_r16h_r16l_partial()
{
switch(inst_substate) {
case 0:
	r16_w(IR[0], do_sub16(r16_r(IR[0]), r16_r(IR[0] >> 4)));
	if(icount <= bcount) { inst_substate = 1; return; }
case 1:;
	prefetch();
	break;
}
	inst_substate = 0;
}

void h8_device::dec_b_one_r8l_full()
{
	r8_w(IR[0], do_dec8(r8_r(IR[0]), 1));
	if(icount <= bcount) { inst_substate = 1; return; }
	prefetch();
}

void h8_device::dec_b_one_r8l_partial()
{
switch(inst_substate) {
case 0:
	r8_w(IR[0], do_dec8(r8_r(IR[0]), 1));
	if(icount <= bcount) { inst_substate = 1; return; }
case 1:;
	prefetch();
	break;
}
	inst_substate = 0;
}

void h8_device::subs_l_one_r16l_full()
{
	r16_w(IR[0], r16_r(IR[0])-1);
	if(icount <= bcount) { inst_substate = 1; return; }
	prefetch();
}

void h8_device::subs_l_one_r16l_partial()
{
switch(inst_substate) {
case 0:
	r16_w(IR[0], r16_r(IR[0])-1);
	if(icount <= bcount) { inst_substate = 1; return; }
case 1:;
	prefetch();
	break;
}
	inst_substate = 0;
}

void h8_device::dec_w_one_r16l_full()
{
	r16_w(IR[0], do_dec16(r16_r(IR[0]), 1));
	if(icount <= bcount) { inst_substate = 1; return; }
	prefetch();
}

void h8_device::dec_w_one_r16l_partial()
{
switch(inst_substate) {
case 0:
	r16_w(IR[0], do_dec16(r16_r(IR[0]), 1));
	if(icount <= bcount) { inst_substate = 1; return; }
case 1:;
	prefetch();
	break;
}
	inst_substate = 0;
}

void h8_device::subs_l_two_r16l_full()
{
	r16_w(IR[0], r16_r(IR[0])-2);
	if(icount <= bcount) { inst_substate = 1; return; }
	prefetch();
}

void h8_device::subs_l_two_r16l_partial()
{
switch(inst_substate) {
case 0:
	r16_w(IR[0], r16_r(IR[0])-2);
	if(icount <= bcount) { inst_substate = 1; return; }
case 1:;
	prefetch();
	break;
}
	inst_substate = 0;
}

void h8_device::subs_l_four_r16l_full()
{
	r16_w(IR[0], r16_r(IR[0])-4);
	if(icount <= bcount) { inst_substate = 1; return; }
	prefetch();
}

void h8_device::subs_l_four_r16l_partial()
{
switch(inst_substate) {
case 0:
	r16_w(IR[0], r16_r(IR[0])-4);
	if(icount <= bcount) { inst_substate = 1; return; }
case 1:;
	prefetch();
	break;
}
	inst_substate = 0;
}

void h8_device::dec_w_two_r16l_full()
{
	r16_w(IR[0], do_dec16(r16_r(IR[0]), 2));
	if(icount <= bcount) { inst_substate = 1; return; }
	prefetch();
}

void h8_device::dec_w_two_r16l_partial()
{
switch(inst_substate) {
case 0:
	r16_w(IR[0], do_dec16(r16_r(IR[0]), 2));
	if(icount <= bcount) { inst_substate = 1; return; }
case 1:;
	prefetch();
	break;
}
	inst_substate = 0;
}

void h8_device::cmp_b_r8h_r8l_full()
{
	do_sub8(r8_r(IR[0]), r8_r(IR[0] >> 4));
	if(icount <= bcount) { inst_substate = 1; return; }
	prefetch();
}

void h8_device::cmp_b_r8h_r8l_partial()
{
switch(inst_substate) {
case 0:
	do_sub8(r8_r(IR[0]), r8_r(IR[0] >> 4));
	if(icount <= bcount) { inst_substate = 1; return; }
case 1:;
	prefetch();
	break;
}
	inst_substate = 0;
}

void h8_device::cmp_w_r16h_r16l_full()
{
	do_sub16(r16_r(IR[0]), r16_r(IR[0] >> 4));
	if(icount <= bcount) { inst_substate = 1; return; }
	prefetch();
}

void h8_device::cmp_w_r16h_r16l_partial()
{
switch(inst_substate) {
case 0:
	do_sub16(r16_r(IR[0]), r16_r(IR[0] >> 4));
	if(icount <= bcount) { inst_substate = 1; return; }
case 1:;
	prefetch();
	break;
}
	inst_substate = 0;
}

void h8_device::subx_b_r8h_r8l_full()
{
	r8_w(IR[0], do_subx8(r8_r(IR[0]), r8_r(IR[0] >> 4)));
	if(icount <= bcount) { inst_substate = 1; return; }
	prefetch();
}

void h8_device::subx_b_r8h_r8l_partial()
{
switch(inst_substate) {
case 0:
	r8_w(IR[0], do_subx8(r8_r(IR[0]), r8_r(IR[0] >> 4)));
	if(icount <= bcount) { inst_substate = 1; return; }
case 1:;
	prefetch();
	break;
}
	inst_substate = 0;
}

void h8_device::das_b_r8l_full()
{
	TMP1 = r8_r(IR[0]);
	TMP2 = 0;
	if(CCR & F_C) {
		if(CCR & F_H) {
			if((TMP1 & 0xf0) >= 0x60 && (TMP1 & 0x0f) >= 6)
				TMP2 = 0x9a;
		} else {
			if((TMP1 & 0xf0) >= 0x70 && (TMP1 & 0x0f) <= 9)
				TMP2 = 0xa0;
		}
	} else {
		if(CCR & F_H) {
			if((TMP1 & 0xf0) <= 0x80 && (TMP1 & 0x0f) >= 6)
				TMP2 = 0xfa;
		}
	}
	r8_w(IR[0], do_add8(TMP1, TMP2));
	if(icount <= bcount) { inst_substate = 1; return; }
	prefetch();
}

void h8_device::das_b_r8l_partial()
{
switch(inst_substate) {
case 0:
	TMP1 = r8_r(IR[0]);
	TMP2 = 0;
	if(CCR & F_C) {
		if(CCR & F_H) {
			if((TMP1 & 0xf0) >= 0x60 && (TMP1 & 0x0f) >= 6)
				TMP2 = 0x9a;
		} else {
			if((TMP1 & 0xf0) >= 0x70 && (TMP1 & 0x0f) <= 9)
				TMP2 = 0xa0;
		}
	} else {
		if(CCR & F_H) {
			if((TMP1 & 0xf0) <= 0x80 && (TMP1 & 0x0f) >= 6)
				TMP2 = 0xfa;
		}
	}
	r8_w(IR[0], do_add8(TMP1, TMP2));
	if(icount <= bcount) { inst_substate = 1; return; }
case 1:;
	prefetch();
	break;
}
	inst_substate = 0;
}

void h8_device::mov_b_abs8_r8u_full()
{
	if(icount <= bcount) { inst_substate = 1; return; }
	prefetch_start();
	if(icount <= bcount) { inst_substate = 2; return; }
	TMP1 = read8(0xffffff00 | IR[0]);
	set_nzv8(TMP1);
	r8_w(IR[0] >> 8, TMP1);
	prefetch_done();
}

void h8_device::mov_b_abs8_r8u_partial()
{
switch(inst_substate) {
case 0:
	if(icount <= bcount) { inst_substate = 1; return; }
case 1:;
	prefetch_start();
	if(icount <= bcount) { inst_substate = 2; return; }
case 2:;
	TMP1 = read8(0xffffff00 | IR[0]);
	set_nzv8(TMP1);
	r8_w(IR[0] >> 8, TMP1);
	prefetch_done();
	break;
}
	inst_substate = 0;
}

void h8_device::mov_b_r8u_abs8_full()
{
	if(icount <= bcount) { inst_substate = 1; return; }
	prefetch_start();
	TMP1 = r8_r(IR[0] >> 8);
	set_nzv8(TMP1);
	if(icount <= bcount) { inst_substate = 2; return; }
	write8(0xffffff00 | IR[0], TMP1);
	prefetch_done();
}

void h8_device::mov_b_r8u_abs8_partial()
{
switch(inst_substate) {
case 0:
	if(icount <= bcount) { inst_substate = 1; return; }
case 1:;
	prefetch_start();
	TMP1 = r8_r(IR[0] >> 8);
	set_nzv8(TMP1);
	if(icount <= bcount) { inst_substate = 2; return; }
case 2:;
	write8(0xffffff00 | IR[0], TMP1);
	prefetch_done();
	break;
}
	inst_substate = 0;
}

void h8_device::bt_rel8_full()
{
	TMP1 = PC + int8_t(IR[0]);
	if(icount <= bcount) { inst_substate = 1; return; }
	prefetch_start();
	if(icount <= bcount) { inst_substate = 2; return; }
	TMP2 = read16i(TMP1);
	if(true)
		prefetch_switch(TMP1, TMP2);
	prefetch_done();
}

void h8_device::bt_rel8_partial()
{
switch(inst_substate) {
case 0:
	TMP1 = PC + int8_t(IR[0]);
	if(icount <= bcount) { inst_substate = 1; return; }
case 1:;
	prefetch_start();
	if(icount <= bcount) { inst_substate = 2; return; }
case 2:;
	TMP2 = read16i(TMP1);
	if(true)
		prefetch_switch(TMP1, TMP2);
	prefetch_done();
	break;
}
	inst_substate = 0;
}

void h8_device::bf_rel8_full()
{
	TMP1 = PC + int8_t(IR[0]);
	if(icount <= bcount) { inst_substate = 1; return; }
	prefetch_start();
	if(icount <= bcount) { inst_substate = 2; return; }
	TMP2 = read16i(TMP1);
	if(false)
		prefetch_switch(TMP1, TMP2);
	prefetch_done();
}

void h8_device::bf_rel8_partial()
{
switch(inst_substate) {
case 0:
	TMP1 = PC + int8_t(IR[0]);
	if(icount <= bcount) { inst_substate = 1; return; }
case 1:;
	prefetch_start();
	if(icount <= bcount) { inst_substate = 2; return; }
case 2:;
	TMP2 = read16i(TMP1);
	if(false)
		prefetch_switch(TMP1, TMP2);
	prefetch_done();
	break;
}
	inst_substate = 0;
}

void h8_device::bhi_rel8_full()
{
	TMP1 = PC + int8_t(IR[0]);
	if(icount <= bcount) { inst_substate = 1; return; }
	prefetch_start();
	if(icount <= bcount) { inst_substate = 2; return; }
	TMP2 = read16i(TMP1);
	if(!(CCR & (F_C|F_Z)))
		prefetch_switch(TMP1, TMP2);
	prefetch_done();
}

void h8_device::bhi_rel8_partial()
{
switch(inst_substate) {
case 0:
	TMP1 = PC + int8_t(IR[0]);
	if(icount <= bcount) { inst_substate = 1; return; }
case 1:;
	prefetch_start();
	if(icount <= bcount) { inst_substate = 2; return; }
case 2:;
	TMP2 = read16i(TMP1);
	if(!(CCR & (F_C|F_Z)))
		prefetch_switch(TMP1, TMP2);
	prefetch_done();
	break;
}
	inst_substate = 0;
}

void h8_device::bls_rel8_full()
{
	TMP1 = PC + int8_t(IR[0]);
	if(icount <= bcount) { inst_substate = 1; return; }
	prefetch_start();
	if(icount <= bcount) { inst_substate = 2; return; }
	TMP2 = read16i(TMP1);
	if(CCR & (F_C|F_Z))
		prefetch_switch(TMP1, TMP2);
	prefetch_done();
}

void h8_device::bls_rel8_partial()
{
switch(inst_substate) {
case 0:
	TMP1 = PC + int8_t(IR[0]);
	if(icount <= bcount) { inst_substate = 1; return; }
case 1:;
	prefetch_start();
	if(icount <= bcount) { inst_substate = 2; return; }
case 2:;
	TMP2 = read16i(TMP1);
	if(CCR & (F_C|F_Z))
		prefetch_switch(TMP1, TMP2);
	prefetch_done();
	break;
}
	inst_substate = 0;
}

void h8_device::bcc_rel8_full()
{
	TMP1 = PC + int8_t(IR[0]);
	if(icount <= bcount) { inst_substate = 1; return; }
	prefetch_start();
	if(icount <= bcount) { inst_substate = 2; return; }
	TMP2 = read16i(TMP1);
	if(!(CCR & F_C))
		prefetch_switch(TMP1, TMP2);
	prefetch_done();
}

void h8_device::bcc_rel8_partial()
{
switch(inst_substate) {
case 0:
	TMP1 = PC + int8_t(IR[0]);
	if(icount <= bcount) { inst_substate = 1; return; }
case 1:;
	prefetch_start();
	if(icount <= bcount) { inst_substate = 2; return; }
case 2:;
	TMP2 = read16i(TMP1);
	if(!(CCR & F_C))
		prefetch_switch(TMP1, TMP2);
	prefetch_done();
	break;
}
	inst_substate = 0;
}

void h8_device::bcs_rel8_full()
{
	TMP1 = PC + int8_t(IR[0]);
	if(icount <= bcount) { inst_substate = 1; return; }
	prefetch_start();
	if(icount <= bcount) { inst_substate = 2; return; }
	TMP2 = read16i(TMP1);
	if(CCR & F_C)
		prefetch_switch(TMP1, TMP2);
	prefetch_done();
}

void h8_device::bcs_rel8_partial()
{
switch(inst_substate) {
case 0:
	TMP1 = PC + int8_t(IR[0]);
	if(icount <= bcount) { inst_substate = 1; return; }
case 1:;
	prefetch_start();
	if(icount <= bcount) { inst_substate = 2; return; }
case 2:;
	TMP2 = read16i(TMP1);
	if(CCR & F_C)
		prefetch_switch(TMP1, TMP2);
	prefetch_done();
	break;
}
	inst_substate = 0;
}

void h8_device::bne_rel8_full()
{
	TMP1 = PC + int8_t(IR[0]);
	if(icount <= bcount) { inst_substate = 1; return; }
	prefetch_start();
	if(icount <= bcount) { inst_substate = 2; return; }
	TMP2 = read16i(TMP1);
	if(!(CCR & F_Z))
		prefetch_switch(TMP1, TMP2);
	prefetch_done();
}

void h8_device::bne_rel8_partial()
{
switch(inst_substate) {
case 0:
	TMP1 = PC + int8_t(IR[0]);
	if(icount <= bcount) { inst_substate = 1; return; }
case 1:;
	prefetch_start();
	if(icount <= bcount) { inst_substate = 2; return; }
case 2:;
	TMP2 = read16i(TMP1);
	if(!(CCR & F_Z))
		prefetch_switch(TMP1, TMP2);
	prefetch_done();
	break;
}
	inst_substate = 0;
}

void h8_device::beq_rel8_full()
{
	TMP1 = PC + int8_t(IR[0]);
	if(icount <= bcount) { inst_substate = 1; return; }
	prefetch_start();
	if(icount <= bcount) { inst_substate = 2; return; }
	TMP2 = read16i(TMP1);
	if(CCR & F_Z)
		prefetch_switch(TMP1, TMP2);
	prefetch_done();
}

void h8_device::beq_rel8_partial()
{
switch(inst_substate) {
case 0:
	TMP1 = PC + int8_t(IR[0]);
	if(icount <= bcount) { inst_substate = 1; return; }
case 1:;
	prefetch_start();
	if(icount <= bcount) { inst_substate = 2; return; }
case 2:;
	TMP2 = read16i(TMP1);
	if(CCR & F_Z)
		prefetch_switch(TMP1, TMP2);
	prefetch_done();
	break;
}
	inst_substate = 0;
}

void h8_device::bvc_rel8_full()
{
	TMP1 = PC + int8_t(IR[0]);
	if(icount <= bcount) { inst_substate = 1; return; }
	prefetch_start();
	if(icount <= bcount) { inst_substate = 2; return; }
	TMP2 = read16i(TMP1);
	if(!(CCR & F_V))
		prefetch_switch(TMP1, TMP2);
	prefetch_done();
}

void h8_device::bvc_rel8_partial()
{
switch(inst_substate) {
case 0:
	TMP1 = PC + int8_t(IR[0]);
	if(icount <= bcount) { inst_substate = 1; return; }
case 1:;
	prefetch_start();
	if(icount <= bcount) { inst_substate = 2; return; }
case 2:;
	TMP2 = read16i(TMP1);
	if(!(CCR & F_V))
		prefetch_switch(TMP1, TMP2);
	prefetch_done();
	break;
}
	inst_substate = 0;
}

void h8_device::bvs_rel8_full()
{
	TMP1 = PC + int8_t(IR[0]);
	if(icount <= bcount) { inst_substate = 1; return; }
	prefetch_start();
	if(icount <= bcount) { inst_substate = 2; return; }
	TMP2 = read16i(TMP1);
	if(CCR & F_V)
		prefetch_switch(TMP1, TMP2);
	prefetch_done();
}

void h8_device::bvs_rel8_partial()
{
switch(inst_substate) {
case 0:
	TMP1 = PC + int8_t(IR[0]);
	if(icount <= bcount) { inst_substate = 1; return; }
case 1:;
	prefetch_start();
	if(icount <= bcount) { inst_substate = 2; return; }
case 2:;
	TMP2 = read16i(TMP1);
	if(CCR & F_V)
		prefetch_switch(TMP1, TMP2);
	prefetch_done();
	break;
}
	inst_substate = 0;
}

void h8_device::bpl_rel8_full()
{
	TMP1 = PC + int8_t(IR[0]);
	if(icount <= bcount) { inst_substate = 1; return; }
	prefetch_start();
	if(icount <= bcount) { inst_substate = 2; return; }
	TMP2 = read16i(TMP1);
	if(!(CCR & F_N))
		prefetch_switch(TMP1, TMP2);
	prefetch_done();
}

void h8_device::bpl_rel8_partial()
{
switch(inst_substate) {
case 0:
	TMP1 = PC + int8_t(IR[0]);
	if(icount <= bcount) { inst_substate = 1; return; }
case 1:;
	prefetch_start();
	if(icount <= bcount) { inst_substate = 2; return; }
case 2:;
	TMP2 = read16i(TMP1);
	if(!(CCR & F_N))
		prefetch_switch(TMP1, TMP2);
	prefetch_done();
	break;
}
	inst_substate = 0;
}

void h8_device::bmi_rel8_full()
{
	TMP1 = PC + int8_t(IR[0]);
	if(icount <= bcount) { inst_substate = 1; return; }
	prefetch_start();
	if(icount <= bcount) { inst_substate = 2; return; }
	TMP2 = read16i(TMP1);
	if(CCR & F_N)
		prefetch_switch(TMP1, TMP2);
	prefetch_done();
}

void h8_device::bmi_rel8_partial()
{
switch(inst_substate) {
case 0:
	TMP1 = PC + int8_t(IR[0]);
	if(icount <= bcount) { inst_substate = 1; return; }
case 1:;
	prefetch_start();
	if(icount <= bcount) { inst_substate = 2; return; }
case 2:;
	TMP2 = read16i(TMP1);
	if(CCR & F_N)
		prefetch_switch(TMP1, TMP2);
	prefetch_done();
	break;
}
	inst_substate = 0;
}

void h8_device::bge_rel8_full()
{
	TMP1 = PC + int8_t(IR[0]);
	if(icount <= bcount) { inst_substate = 1; return; }
	prefetch_start();
	if(icount <= bcount) { inst_substate = 2; return; }
	TMP2 = read16i(TMP1);
	if(!((CCR & (F_N|F_V)) == F_N || (CCR & (F_N|F_V)) == F_V))
		prefetch_switch(TMP1, TMP2);
	prefetch_done();
}

void h8_device::bge_rel8_partial()
{
switch(inst_substate) {
case 0:
	TMP1 = PC + int8_t(IR[0]);
	if(icount <= bcount) { inst_substate = 1; return; }
case 1:;
	prefetch_start();
	if(icount <= bcount) { inst_substate = 2; return; }
case 2:;
	TMP2 = read16i(TMP1);
	if(!((CCR & (F_N|F_V)) == F_N || (CCR & (F_N|F_V)) == F_V))
		prefetch_switch(TMP1, TMP2);
	prefetch_done();
	break;
}
	inst_substate = 0;
}

void h8_device::blt_rel8_full()
{
	TMP1 = PC + int8_t(IR[0]);
	if(icount <= bcount) { inst_substate = 1; return; }
	prefetch_start();
	if(icount <= bcount) { inst_substate = 2; return; }
	TMP2 = read16i(TMP1);
	if((CCR & (F_N|F_V)) == F_N || (CCR & (F_N|F_V)) == F_V)
		prefetch_switch(TMP1, TMP2);
	prefetch_done();
}

void h8_device::blt_rel8_partial()
{
switch(inst_substate) {
case 0:
	TMP1 = PC + int8_t(IR[0]);
	if(icount <= bcount) { inst_substate = 1; return; }
case 1:;
	prefetch_start();
	if(icount <= bcount) { inst_substate = 2; return; }
case 2:;
	TMP2 = read16i(TMP1);
	if((CCR & (F_N|F_V)) == F_N || (CCR & (F_N|F_V)) == F_V)
		prefetch_switch(TMP1, TMP2);
	prefetch_done();
	break;
}
	inst_substate = 0;
}

void h8_device::bgt_rel8_full()
{
	TMP1 = PC + int8_t(IR[0]);
	if(icount <= bcount) { inst_substate = 1; return; }
	prefetch_start();
	if(icount <= bcount) { inst_substate = 2; return; }
	TMP2 = read16i(TMP1);
	if(!((CCR & F_Z) || (CCR & (F_N|F_V)) == F_N || (CCR & (F_N|F_V)) == F_V))
		prefetch_switch(TMP1, TMP2);
	prefetch_done();
}

void h8_device::bgt_rel8_partial()
{
switch(inst_substate) {
case 0:
	TMP1 = PC + int8_t(IR[0]);
	if(icount <= bcount) { inst_substate = 1; return; }
case 1:;
	prefetch_start();
	if(icount <= bcount) { inst_substate = 2; return; }
case 2:;
	TMP2 = read16i(TMP1);
	if(!((CCR & F_Z) || (CCR & (F_N|F_V)) == F_N || (CCR & (F_N|F_V)) == F_V))
		prefetch_switch(TMP1, TMP2);
	prefetch_done();
	break;
}
	inst_substate = 0;
}

void h8_device::ble_rel8_full()
{
	TMP1 = PC + int8_t(IR[0]);
	if(icount <= bcount) { inst_substate = 1; return; }
	prefetch_start();
	if(icount <= bcount) { inst_substate = 2; return; }
	TMP2 = read16i(TMP1);
	if((CCR & F_Z) || (CCR & (F_N|F_V)) == F_N || (CCR & (F_N|F_V)) == F_V)
		prefetch_switch(TMP1, TMP2);
	prefetch_done();
}

void h8_device::ble_rel8_partial()
{
switch(inst_substate) {
case 0:
	TMP1 = PC + int8_t(IR[0]);
	if(icount <= bcount) { inst_substate = 1; return; }
case 1:;
	prefetch_start();
	if(icount <= bcount) { inst_substate = 2; return; }
case 2:;
	TMP2 = read16i(TMP1);
	if((CCR & F_Z) || (CCR & (F_N|F_V)) == F_N || (CCR & (F_N|F_V)) == F_V)
		prefetch_switch(TMP1, TMP2);
	prefetch_done();
	break;
}
	inst_substate = 0;
}

void h8_device::mulxu_b_r8h_r16l_full()
{
	if(icount <= bcount) { inst_substate = 1; return; }
	prefetch_start();
	r16_w(IR[0], uint8_t(r16_r(IR[0])) * r8_r(IR[0] >> 4));
	internal(2);
	prefetch_done();
}

void h8_device::mulxu_b_r8h_r16l_partial()
{
switch(inst_substate) {
case 0:
	if(icount <= bcount) { inst_substate = 1; return; }
case 1:;
	prefetch_start();
	r16_w(IR[0], uint8_t(r16_r(IR[0])) * r8_r(IR[0] >> 4));
	internal(2);
	prefetch_done();
	break;
}
	inst_substate = 0;
}

void h8_device::divxu_b_r8h_r16l_full()
{
	if(icount <= bcount) { inst_substate = 1; return; }
	prefetch_start();
	internal(11);
	TMP1 = r16_r(IR[0]);
	TMP2 = r8_r(IR[0] >> 4);
	CCR &= ~(F_Z|F_N);
	if(TMP2 & 0x80)
		CCR |= F_N;
	if(!TMP2) {
		CCR |= F_Z;
	} else {
		int q = TMP1 / TMP2;
		int r = TMP1 % TMP2;
		r16_w(IR[0], (q & 0xff) | ((r & 0xff) << 8));
	}
	prefetch_done();
}

void h8_device::divxu_b_r8h_r16l_partial()
{
switch(inst_substate) {
case 0:
	if(icount <= bcount) { inst_substate = 1; return; }
case 1:;
	prefetch_start();
	internal(11);
	TMP1 = r16_r(IR[0]);
	TMP2 = r8_r(IR[0] >> 4);
	CCR &= ~(F_Z|F_N);
	if(TMP2 & 0x80)
		CCR |= F_N;
	if(!TMP2) {
		CCR |= F_Z;
	} else {
		int q = TMP1 / TMP2;
		int r = TMP1 % TMP2;
		r16_w(IR[0], (q & 0xff) | ((r & 0xff) << 8));
	}
	prefetch_done();
	break;
}
	inst_substate = 0;
}

void h8_device::rts_full()
{
	if(icount <= bcount) { inst_substate = 1; return; }
	fetch();
	TMP1 = r16_r(7);
	if(icount <= bcount) { inst_substate = 2; return; }
	TMP2 = read16(TMP1);
	r16_w(7, TMP1+2);
	internal(1);
	PC = TMP2;
	if(icount <= bcount) { inst_substate = 3; return; }
	prefetch();
}

void h8_device::rts_partial()
{
switch(inst_substate) {
case 0:
	if(icount <= bcount) { inst_substate = 1; return; }
case 1:;
	fetch();
	TMP1 = r16_r(7);
	if(icount <= bcount) { inst_substate = 2; return; }
case 2:;
	TMP2 = read16(TMP1);
	r16_w(7, TMP1+2);
	internal(1);
	PC = TMP2;
	if(icount <= bcount) { inst_substate = 3; return; }
case 3:;
	prefetch();
	break;
}
	inst_substate = 0;
}

void h8_device::bsr_rel8_full()
{
	TMP2 = PC;
	PC += int8_t(IR[0]);
	if(icount <= bcount) { inst_substate = 1; return; }
	prefetch_start();
	TMP1 = r16_r(7) - 2;
	r16_w(7, TMP1);
	if(icount <= bcount) { inst_substate = 2; return; }
	write16(TMP1, TMP2);
	prefetch_done();
}

void h8_device::bsr_rel8_partial()
{
switch(inst_substate) {
case 0:
	TMP2 = PC;
	PC += int8_t(IR[0]);
	if(icount <= bcount) { inst_substate = 1; return; }
case 1:;
	prefetch_start();
	TMP1 = r16_r(7) - 2;
	r16_w(7, TMP1);
	if(icount <= bcount) { inst_substate = 2; return; }
case 2:;
	write16(TMP1, TMP2);
	prefetch_done();
	break;
}
	inst_substate = 0;
}

void h8_device::rte_full()
{
	if(icount <= bcount) { inst_substate = 1; return; }
	fetch();
	TMP1 = r16_r(7);
	if(icount <= bcount) { inst_substate = 2; return; }
	CCR = read16(TMP1) >> 8;
	TMP1 = r16_r(7);
	if(icount <= bcount) { inst_substate = 3; return; }
	TMP2 = read16(TMP1+2);
	r16_w(7, TMP1+4);
	internal(1);
	PC = TMP2;
	update_irq_filter();
	prefetch_noirq_notrace();
}

void h8_device::rte_partial()
{
switch(inst_substate) {
case 0:
	if(icount <= bcount) { inst_substate = 1; return; }
case 1:;
	fetch();
	TMP1 = r16_r(7);
	if(icount <= bcount) { inst_substate = 2; return; }
case 2:;
	CCR = read16(TMP1) >> 8;
	TMP1 = r16_r(7);
	if(icount <= bcount) { inst_substate = 3; return; }
case 3:;
	TMP2 = read16(TMP1+2);
	r16_w(7, TMP1+4);
	internal(1);
	PC = TMP2;
	update_irq_filter();
	prefetch_noirq_notrace();
	break;
}
	inst_substate = 0;
}

void h8_device::jmp_abs16e_full()
{
	if(icount <= bcount) { inst_substate = 1; return; }
	fetch(1);

	internal(1);
	PC = IR[1];
	if(icount <= bcount) { inst_substate = 2; return; }
	prefetch();
}

void h8_device::jmp_abs16e_partial()
{
switch(inst_substate) {
case 0:
	if(icount <= bcount) { inst_substate = 1; return; }
case 1:;
	fetch(1);

	internal(1);
	PC = IR[1];
	if(icount <= bcount) { inst_substate = 2; return; }
case 2:;
	prefetch();
	break;
}
	inst_substate = 0;
}

void h8_device::jmp_abs8i_full()
{
	if(icount <= bcount) { inst_substate = 1; return; }
	fetch();
	if(icount <= bcount) { inst_substate = 2; return; }
	PC = read16(IR[0] & 0xff);
	internal(1);
	if(icount <= bcount) { inst_substate = 3; return; }
	prefetch();
}

void h8_device::jmp_abs8i_partial()
{
switch(inst_substate) {
case 0:
	if(icount <= bcount) { inst_substate = 1; return; }
case 1:;
	fetch();
	if(icount <= bcount) { inst_substate = 2; return; }
case 2:;
	PC = read16(IR[0] & 0xff);
	internal(1);
	if(icount <= bcount) { inst_substate = 3; return; }
case 3:;
	prefetch();
	break;
}
	inst_substate = 0;
}

void h8_device::jsr_r16h_full()
{
	TMP2 = PC;
	PC = r16_r(IR[0] >> 4);
	if(icount <= bcount) { inst_substate = 1; return; }
	prefetch_start();
	TMP1 = r16_r(7) - 2;
	r16_w(7, TMP1);
	if(icount <= bcount) { inst_substate = 2; return; }
	write16(TMP1, TMP2);
	prefetch_done();
}

void h8_device::jsr_r16h_partial()
{
switch(inst_substate) {
case 0:
	TMP2 = PC;
	PC = r16_r(IR[0] >> 4);
	if(icount <= bcount) { inst_substate = 1; return; }
case 1:;
	prefetch_start();
	TMP1 = r16_r(7) - 2;
	r16_w(7, TMP1);
	if(icount <= bcount) { inst_substate = 2; return; }
case 2:;
	write16(TMP1, TMP2);
	prefetch_done();
	break;
}
	inst_substate = 0;
}

void h8_device::jsr_abs16e_full()
{
	if(icount <= bcount) { inst_substate = 1; return; }
	fetch(1);

	internal(1);
	TMP2 = PC;
	PC = IR[1];
	if(icount <= bcount) { inst_substate = 2; return; }
	prefetch_start();
	TMP1 = r16_r(7) - 2;
	r16_w(7, TMP1);
	if(icount <= bcount) { inst_substate = 3; return; }
	write16(TMP1, TMP2);
	prefetch_done();
}

void h8_device::jsr_abs16e_partial()
{
switch(inst_substate) {
case 0:
	if(icount <= bcount) { inst_substate = 1; return; }
case 1:;
	fetch(1);

	internal(1);
	TMP2 = PC;
	PC = IR[1];
	if(icount <= bcount) { inst_substate = 2; return; }
case 2:;
	prefetch_start();
	TMP1 = r16_r(7) - 2;
	r16_w(7, TMP1);
	if(icount <= bcount) { inst_substate = 3; return; }
case 3:;
	write16(TMP1, TMP2);
	prefetch_done();
	break;
}
	inst_substate = 0;
}

void h8_device::jsr_abs8i_full()
{
	if(icount <= bcount) { inst_substate = 1; return; }
	fetch();
	TMP2 = PC;
	if(icount <= bcount) { inst_substate = 2; return; }
	PC = read16(IR[0] & 0xff);
	if(icount <= bcount) { inst_substate = 3; return; }
	prefetch_start();
	TMP1 = r16_r(7) - 2;
	r16_w(7, TMP1);
	if(icount <= bcount) { inst_substate = 4; return; }
	write16(TMP1, TMP2);
	prefetch_done();
}

void h8_device::jsr_abs8i_partial()
{
switch(inst_substate) {
case 0:
	if(icount <= bcount) { inst_substate = 1; return; }
case 1:;
	fetch();
	TMP2 = PC;
	if(icount <= bcount) { inst_substate = 2; return; }
case 2:;
	PC = read16(IR[0] & 0xff);
	if(icount <= bcount) { inst_substate = 3; return; }
case 3:;
	prefetch_start();
	TMP1 = r16_r(7) - 2;
	r16_w(7, TMP1);
	if(icount <= bcount) { inst_substate = 4; return; }
case 4:;
	write16(TMP1, TMP2);
	prefetch_done();
	break;
}
	inst_substate = 0;
}

void h8_device::bset_r8h_r8l_full()
{
	TMP1 = r8_r(IR[0]);
	TMP1 |= 1 << ((r8_r(IR[0] >> 4)) & 7);
	r8_w(IR[0], TMP1);
	if(icount <= bcount) { inst_substate = 1; return; }
	prefetch();
}

void h8_device::bset_r8h_r8l_partial()
{
switch(inst_substate) {
case 0:
	TMP1 = r8_r(IR[0]);
	TMP1 |= 1 << ((r8_r(IR[0] >> 4)) & 7);
	r8_w(IR[0], TMP1);
	if(icount <= bcount) { inst_substate = 1; return; }
case 1:;
	prefetch();
	break;
}
	inst_substate = 0;
}

void h8_device::bnot_r8h_r8l_full()
{
	TMP1 = r8_r(IR[0]);
	TMP1 ^= 1 << ((r8_r(IR[0] >> 4)) & 7);
	r8_w(IR[0], TMP1);
	if(icount <= bcount) { inst_substate = 1; return; }
	prefetch();
}

void h8_device::bnot_r8h_r8l_partial()
{
switch(inst_substate) {
case 0:
	TMP1 = r8_r(IR[0]);
	TMP1 ^= 1 << ((r8_r(IR[0] >> 4)) & 7);
	r8_w(IR[0], TMP1);
	if(icount <= bcount) { inst_substate = 1; return; }
case 1:;
	prefetch();
	break;
}
	inst_substate = 0;
}

void h8_device::bclr_r8h_r8l_full()
{
	TMP1 = r8_r(IR[0]);
	TMP1 &= ~(1 << ((r8_r(IR[0] >> 4)) & 7));
	r8_w(IR[0], TMP1);
	if(icount <= bcount) { inst_substate = 1; return; }
	prefetch();
}

void h8_device::bclr_r8h_r8l_partial()
{
switch(inst_substate) {
case 0:
	TMP1 = r8_r(IR[0]);
	TMP1 &= ~(1 << ((r8_r(IR[0] >> 4)) & 7));
	r8_w(IR[0], TMP1);
	if(icount <= bcount) { inst_substate = 1; return; }
case 1:;
	prefetch();
	break;
}
	inst_substate = 0;
}

void h8_device::btst_r8h_r8l_full()
{
	TMP1 = r8_r(IR[0]);
	if(TMP1 & (1 << ((r8_r(IR[0] >> 4)) & 7)))
		CCR &= ~F_Z;
	else
		CCR |= F_Z;
	if(icount <= bcount) { inst_substate = 1; return; }
	prefetch();
}

void h8_device::btst_r8h_r8l_partial()
{
switch(inst_substate) {
case 0:
	TMP1 = r8_r(IR[0]);
	if(TMP1 & (1 << ((r8_r(IR[0] >> 4)) & 7)))
		CCR &= ~F_Z;
	else
		CCR |= F_Z;
	if(icount <= bcount) { inst_substate = 1; return; }
case 1:;
	prefetch();
	break;
}
	inst_substate = 0;
}

void h8_device::bst_imm3_r8l_full()
{
	TMP1 = r8_r(IR[0]);
	if(CCR & F_C)
		TMP1 |= 1 << ((IR[0] >> 4) & 7);
	else
		TMP1 &= ~(1 << ((IR[0] >> 4) & 7));
	r8_w(IR[0], TMP1);
	if(icount <= bcount) { inst_substate = 1; return; }
	prefetch();
}

void h8_device::bst_imm3_r8l_partial()
{
switch(inst_substate) {
case 0:
	TMP1 = r8_r(IR[0]);
	if(CCR & F_C)
		TMP1 |= 1 << ((IR[0] >> 4) & 7);
	else
		TMP1 &= ~(1 << ((IR[0] >> 4) & 7));
	r8_w(IR[0], TMP1);
	if(icount <= bcount) { inst_substate = 1; return; }
case 1:;
	prefetch();
	break;
}
	inst_substate = 0;
}

void h8_device::bist_imm3_r8l_full()
{
	TMP1 = r8_r(IR[0]);
	if(!(CCR & F_C))
		TMP1 |= 1 << ((IR[0] >> 4) & 7);
	else
		TMP1 &= ~(1 << ((IR[0] >> 4) & 7));
	r8_w(IR[0], TMP1);
	if(icount <= bcount) { inst_substate = 1; return; }
	prefetch();
}

void h8_device::bist_imm3_r8l_partial()
{
switch(inst_substate) {
case 0:
	TMP1 = r8_r(IR[0]);
	if(!(CCR & F_C))
		TMP1 |= 1 << ((IR[0] >> 4) & 7);
	else
		TMP1 &= ~(1 << ((IR[0] >> 4) & 7));
	r8_w(IR[0], TMP1);
	if(icount <= bcount) { inst_substate = 1; return; }
case 1:;
	prefetch();
	break;
}
	inst_substate = 0;
}

void h8_device::mov_b_r16ih_r8l_full()
{
	if(icount <= bcount) { inst_substate = 1; return; }
	prefetch_start();
	if(icount <= bcount) { inst_substate = 2; return; }
	TMP1 = read8(r16_r(IR[0] >> 4));
	set_nzv8(TMP1);
	r8_w(IR[0], TMP1);
	prefetch_done();
}

void h8_device::mov_b_r16ih_r8l_partial()
{
switch(inst_substate) {
case 0:
	if(icount <= bcount) { inst_substate = 1; return; }
case 1:;
	prefetch_start();
	if(icount <= bcount) { inst_substate = 2; return; }
case 2:;
	TMP1 = read8(r16_r(IR[0] >> 4));
	set_nzv8(TMP1);
	r8_w(IR[0], TMP1);
	prefetch_done();
	break;
}
	inst_substate = 0;
}

void h8_device::mov_b_r8l_r16ih_full()
{
	if(icount <= bcount) { inst_substate = 1; return; }
	prefetch_start();
	TMP1 = r8_r(IR[0]);
	set_nzv8(TMP1);
	if(icount <= bcount) { inst_substate = 2; return; }
	write8(r16_r((IR[0] >> 4) & 7), TMP1);
	prefetch_done();
}

void h8_device::mov_b_r8l_r16ih_partial()
{
switch(inst_substate) {
case 0:
	if(icount <= bcount) { inst_substate = 1; return; }
case 1:;
	prefetch_start();
	TMP1 = r8_r(IR[0]);
	set_nzv8(TMP1);
	if(icount <= bcount) { inst_substate = 2; return; }
case 2:;
	write8(r16_r((IR[0] >> 4) & 7), TMP1);
	prefetch_done();
	break;
}
	inst_substate = 0;
}

void h8_device::mov_w_r16ih_r16l_full()
{
	if(icount <= bcount) { inst_substate = 1; return; }
	prefetch_start();
	if(icount <= bcount) { inst_substate = 2; return; }
	TMP1 = read16(r16_r(IR[0] >> 4));
	set_nzv16(TMP1);
	r16_w(IR[0], TMP1);
	prefetch_done();
}

void h8_device::mov_w_r16ih_r16l_partial()
{
switch(inst_substate) {
case 0:
	if(icount <= bcount) { inst_substate = 1; return; }
case 1:;
	prefetch_start();
	if(icount <= bcount) { inst_substate = 2; return; }
case 2:;
	TMP1 = read16(r16_r(IR[0] >> 4));
	set_nzv16(TMP1);
	r16_w(IR[0], TMP1);
	prefetch_done();
	break;
}
	inst_substate = 0;
}

void h8_device::mov_w_r16l_r16ih_full()
{
	if(icount <= bcount) { inst_substate = 1; return; }
	prefetch_start();
	TMP1 = r16_r(IR[0]);
	set_nzv16(TMP1);
	if(icount <= bcount) { inst_substate = 2; return; }
	write16(r16_r((IR[0] >> 4) & 7), TMP1);
	prefetch_done();
}

void h8_device::mov_w_r16l_r16ih_partial()
{
switch(inst_substate) {
case 0:
	if(icount <= bcount) { inst_substate = 1; return; }
case 1:;
	prefetch_start();
	TMP1 = r16_r(IR[0]);
	set_nzv16(TMP1);
	if(icount <= bcount) { inst_substate = 2; return; }
case 2:;
	write16(r16_r((IR[0] >> 4) & 7), TMP1);
	prefetch_done();
	break;
}
	inst_substate = 0;
}

void h8_device::mov_b_abs16_r8l_full()
{
	if(icount <= bcount) { inst_substate = 1; return; }
	fetch(1);

	if(icount <= bcount) { inst_substate = 2; return; }
	prefetch_start();
	if(icount <= bcount) { inst_substate = 3; return; }
	TMP1 = read8(int16_t(IR[1]));
	set_nzv8(TMP1);
	r8_w(IR[0], TMP1);
	prefetch_done();
}

void h8_device::mov_b_abs16_r8l_partial()
{
switch(inst_substate) {
case 0:
	if(icount <= bcount) { inst_substate = 1; return; }
case 1:;
	fetch(1);

	if(icount <= bcount) { inst_substate = 2; return; }
case 2:;
	prefetch_start();
	if(icount <= bcount) { inst_substate = 3; return; }
case 3:;
	TMP1 = read8(int16_t(IR[1]));
	set_nzv8(TMP1);
	r8_w(IR[0], TMP1);
	prefetch_done();
	break;
}
	inst_substate = 0;
}

void h8_device::btst_r8h_abs16_full()
{
	TMP2 = int16_t(IR[1]);
	if(icount <= bcount) { inst_substate = 1; return; }
	TMP1 = read8(TMP2);
	if(TMP1 & (1 << ((r8_r(IR[2] >> 4)) & 7)))
		CCR &= ~F_Z;
	else
		CCR |= F_Z;
	if(icount <= bcount) { inst_substate = 2; return; }
	prefetch();
}

void h8_device::btst_r8h_abs16_partial()
{
switch(inst_substate) {
case 0:
	TMP2 = int16_t(IR[1]);
	if(icount <= bcount) { inst_substate = 1; return; }
case 1:;
	TMP1 = read8(TMP2);
	if(TMP1 & (1 << ((r8_r(IR[2] >> 4)) & 7)))
		CCR &= ~F_Z;
	else
		CCR |= F_Z;
	if(icount <= bcount) { inst_substate = 2; return; }
case 2:;
	prefetch();
	break;
}
	inst_substate = 0;
}

void h8_device::btst_imm3_abs16_full()
{
	TMP2 = int16_t(IR[1]);
	if(icount <= bcount) { inst_substate = 1; return; }
	TMP1 = read8(TMP2);
	if(TMP1 & (1 << ((IR[2] >> 4) & 7)))
		CCR &= ~F_Z;
	else
		CCR |= F_Z;
	if(icount <= bcount) { inst_substate = 2; return; }
	prefetch();
}

void h8_device::btst_imm3_abs16_partial()
{
switch(inst_substate) {
case 0:
	TMP2 = int16_t(IR[1]);
	if(icount <= bcount) { inst_substate = 1; return; }
case 1:;
	TMP1 = read8(TMP2);
	if(TMP1 & (1 << ((IR[2] >> 4) & 7)))
		CCR &= ~F_Z;
	else
		CCR |= F_Z;
	if(icount <= bcount) { inst_substate = 2; return; }
case 2:;
	prefetch();
	break;
}
	inst_substate = 0;
}

void h8_device::bor_imm3_abs16_full()
{
	TMP2 = int16_t(IR[1]);
	if(icount <= bcount) { inst_substate = 1; return; }
	TMP1 = read8(TMP2);
	if(TMP1 & (1 << ((IR[2] >> 4) & 7)))
		CCR |= F_C;
	if(icount <= bcount) { inst_substate = 2; return; }
	prefetch();
}

void h8_device::bor_imm3_abs16_partial()
{
switch(inst_substate) {
case 0:
	TMP2 = int16_t(IR[1]);
	if(icount <= bcount) { inst_substate = 1; return; }
case 1:;
	TMP1 = read8(TMP2);
	if(TMP1 & (1 << ((IR[2] >> 4) & 7)))
		CCR |= F_C;
	if(icount <= bcount) { inst_substate = 2; return; }
case 2:;
	prefetch();
	break;
}
	inst_substate = 0;
}

void h8_device::bior_imm3_abs16_full()
{
	TMP2 = int16_t(IR[1]);
	if(icount <= bcount) { inst_substate = 1; return; }
	TMP1 = read8(TMP2);
	if(!(TMP1 & (1 << ((IR[2] >> 4) & 7))))
		CCR |= F_C;
	if(icount <= bcount) { inst_substate = 2; return; }
	prefetch();
}

void h8_device::bior_imm3_abs16_partial()
{
switch(inst_substate) {
case 0:
	TMP2 = int16_t(IR[1]);
	if(icount <= bcount) { inst_substate = 1; return; }
case 1:;
	TMP1 = read8(TMP2);
	if(!(TMP1 & (1 << ((IR[2] >> 4) & 7))))
		CCR |= F_C;
	if(icount <= bcount) { inst_substate = 2; return; }
case 2:;
	prefetch();
	break;
}
	inst_substate = 0;
}

void h8_device::bxor_imm3_abs16_full()
{
	TMP2 = int16_t(IR[1]);
	if(icount <= bcount) { inst_substate = 1; return; }
	TMP1 = read8(TMP2);
	if(TMP1 & (1 << ((IR[2] >> 4) & 7)))
		CCR ^= F_C;
	if(icount <= bcount) { inst_substate = 2; return; }
	prefetch();
}

void h8_device::bxor_imm3_abs16_partial()
{
switch(inst_substate) {
case 0:
	TMP2 = int16_t(IR[1]);
	if(icount <= bcount) { inst_substate = 1; return; }
case 1:;
	TMP1 = read8(TMP2);
	if(TMP1 & (1 << ((IR[2] >> 4) & 7)))
		CCR ^= F_C;
	if(icount <= bcount) { inst_substate = 2; return; }
case 2:;
	prefetch();
	break;
}
	inst_substate = 0;
}

void h8_device::bixor_imm3_abs16_full()
{
	TMP2 = int16_t(IR[1]);
	if(icount <= bcount) { inst_substate = 1; return; }
	TMP1 = read8(TMP2);
	if(!(TMP1 & (1 << ((IR[2] >> 4) & 7))))
		CCR ^= F_C;
	if(icount <= bcount) { inst_substate = 2; return; }
	prefetch();
}

void h8_device::bixor_imm3_abs16_partial()
{
switch(inst_substate) {
case 0:
	TMP2 = int16_t(IR[1]);
	if(icount <= bcount) { inst_substate = 1; return; }
case 1:;
	TMP1 = read8(TMP2);
	if(!(TMP1 & (1 << ((IR[2] >> 4) & 7))))
		CCR ^= F_C;
	if(icount <= bcount) { inst_substate = 2; return; }
case 2:;
	prefetch();
	break;
}
	inst_substate = 0;
}

void h8_device::band_imm3_abs16_full()
{
	TMP2 = int16_t(IR[1]);
	if(icount <= bcount) { inst_substate = 1; return; }
	TMP1 = read8(TMP2);
	if(!(TMP1 & (1 << ((IR[2] >> 4) & 7))))
		CCR &= ~F_C;
	if(icount <= bcount) { inst_substate = 2; return; }
	prefetch();
}

void h8_device::band_imm3_abs16_partial()
{
switch(inst_substate) {
case 0:
	TMP2 = int16_t(IR[1]);
	if(icount <= bcount) { inst_substate = 1; return; }
case 1:;
	TMP1 = read8(TMP2);
	if(!(TMP1 & (1 << ((IR[2] >> 4) & 7))))
		CCR &= ~F_C;
	if(icount <= bcount) { inst_substate = 2; return; }
case 2:;
	prefetch();
	break;
}
	inst_substate = 0;
}

void h8_device::biand_imm3_abs16_full()
{
	TMP2 = int16_t(IR[1]);
	if(icount <= bcount) { inst_substate = 1; return; }
	TMP1 = read8(TMP2);
	if(TMP1 & (1 << ((IR[2] >> 4) & 7)))
		CCR &= ~F_C;
	if(icount <= bcount) { inst_substate = 2; return; }
	prefetch();
}

void h8_device::biand_imm3_abs16_partial()
{
switch(inst_substate) {
case 0:
	TMP2 = int16_t(IR[1]);
	if(icount <= bcount) { inst_substate = 1; return; }
case 1:;
	TMP1 = read8(TMP2);
	if(TMP1 & (1 << ((IR[2] >> 4) & 7)))
		CCR &= ~F_C;
	if(icount <= bcount) { inst_substate = 2; return; }
case 2:;
	prefetch();
	break;
}
	inst_substate = 0;
}

void h8_device::bld_imm3_abs16_full()
{
	TMP2 = int16_t(IR[1]);
	if(icount <= bcount) { inst_substate = 1; return; }
	TMP1 = read8(TMP2);
	if(TMP1 & (1 << ((IR[2] >> 4) & 7)))
		CCR |= F_C;
	else
		CCR &= ~F_C;
	if(icount <= bcount) { inst_substate = 2; return; }
	prefetch();
}

void h8_device::bld_imm3_abs16_partial()
{
switch(inst_substate) {
case 0:
	TMP2 = int16_t(IR[1]);
	if(icount <= bcount) { inst_substate = 1; return; }
case 1:;
	TMP1 = read8(TMP2);
	if(TMP1 & (1 << ((IR[2] >> 4) & 7)))
		CCR |= F_C;
	else
		CCR &= ~F_C;
	if(icount <= bcount) { inst_substate = 2; return; }
case 2:;
	prefetch();
	break;
}
	inst_substate = 0;
}

void h8_device::bild_imm3_abs16_full()
{
	TMP2 = int16_t(IR[1]);
	if(icount <= bcount) { inst_substate = 1; return; }
	TMP1 = read8(TMP2);
	if(!(TMP1 & (1 << ((IR[2] >> 4) & 7))))
		CCR |= F_C;
	else
		CCR &= ~F_C;
	if(icount <= bcount) { inst_substate = 2; return; }
	prefetch();
}

void h8_device::bild_imm3_abs16_partial()
{
switch(inst_substate) {
case 0:
	TMP2 = int16_t(IR[1]);
	if(icount <= bcount) { inst_substate = 1; return; }
case 1:;
	TMP1 = read8(TMP2);
	if(!(TMP1 & (1 << ((IR[2] >> 4) & 7))))
		CCR |= F_C;
	else
		CCR &= ~F_C;
	if(icount <= bcount) { inst_substate = 2; return; }
case 2:;
	prefetch();
	break;
}
	inst_substate = 0;
}

void h8_device::bset_r8h_abs16_full()
{
	TMP2 = int16_t(IR[1]);
	if(icount <= bcount) { inst_substate = 1; return; }
	TMP1 = read8(TMP2);
	if(icount <= bcount) { inst_substate = 2; return; }
	prefetch_start();
	TMP1 |= 1 << ((r8_r(IR[2] >> 4)) & 7);
	if(icount <= bcount) { inst_substate = 3; return; }
	write8(TMP2, TMP1);
	prefetch_done();
}

void h8_device::bset_r8h_abs16_partial()
{
switch(inst_substate) {
case 0:
	TMP2 = int16_t(IR[1]);
	if(icount <= bcount) { inst_substate = 1; return; }
case 1:;
	TMP1 = read8(TMP2);
	if(icount <= bcount) { inst_substate = 2; return; }
case 2:;
	prefetch_start();
	TMP1 |= 1 << ((r8_r(IR[2] >> 4)) & 7);
	if(icount <= bcount) { inst_substate = 3; return; }
case 3:;
	write8(TMP2, TMP1);
	prefetch_done();
	break;
}
	inst_substate = 0;
}

void h8_device::bnot_r8h_abs16_full()
{
	TMP2 = int16_t(IR[1]);
	if(icount <= bcount) { inst_substate = 1; return; }
	TMP1 = read8(TMP2);
	if(icount <= bcount) { inst_substate = 2; return; }
	prefetch_start();
	TMP1 ^= 1 << ((r8_r(IR[2] >> 4)) & 7);
	if(icount <= bcount) { inst_substate = 3; return; }
	write8(TMP2, TMP1);
	prefetch_done();
}

void h8_device::bnot_r8h_abs16_partial()
{
switch(inst_substate) {
case 0:
	TMP2 = int16_t(IR[1]);
	if(icount <= bcount) { inst_substate = 1; return; }
case 1:;
	TMP1 = read8(TMP2);
	if(icount <= bcount) { inst_substate = 2; return; }
case 2:;
	prefetch_start();
	TMP1 ^= 1 << ((r8_r(IR[2] >> 4)) & 7);
	if(icount <= bcount) { inst_substate = 3; return; }
case 3:;
	write8(TMP2, TMP1);
	prefetch_done();
	break;
}
	inst_substate = 0;
}

void h8_device::bclr_r8h_abs16_full()
{
	TMP2 = int16_t(IR[1]);
	if(icount <= bcount) { inst_substate = 1; return; }
	TMP1 = read8(TMP2);
	if(icount <= bcount) { inst_substate = 2; return; }
	prefetch_start();
	TMP1 &= ~(1 << ((r8_r(IR[2] >> 4)) & 7));
	if(icount <= bcount) { inst_substate = 3; return; }
	write8(TMP2, TMP1);
	prefetch_done();
}

void h8_device::bclr_r8h_abs16_partial()
{
switch(inst_substate) {
case 0:
	TMP2 = int16_t(IR[1]);
	if(icount <= bcount) { inst_substate = 1; return; }
case 1:;
	TMP1 = read8(TMP2);
	if(icount <= bcount) { inst_substate = 2; return; }
case 2:;
	prefetch_start();
	TMP1 &= ~(1 << ((r8_r(IR[2] >> 4)) & 7));
	if(icount <= bcount) { inst_substate = 3; return; }
case 3:;
	write8(TMP2, TMP1);
	prefetch_done();
	break;
}
	inst_substate = 0;
}

void h8_device::bst_imm3_abs16_full()
{
	TMP2 = int16_t(IR[2]);
	if(icount <= bcount) { inst_substate = 1; return; }
	TMP1 = read8(TMP2);
	if(icount <= bcount) { inst_substate = 2; return; }
	prefetch_start();
	if(CCR & F_C)
		TMP1 |= 1 << ((IR[2] >> 4) & 7);
	else
		TMP1 &= ~(1 << ((IR[2] >> 4) & 7));
	if(icount <= bcount) { inst_substate = 3; return; }
	write8(TMP2, TMP1);
	prefetch_done();
}

void h8_device::bst_imm3_abs16_partial()
{
switch(inst_substate) {
case 0:
	TMP2 = int16_t(IR[2]);
	if(icount <= bcount) { inst_substate = 1; return; }
case 1:;
	TMP1 = read8(TMP2);
	if(icount <= bcount) { inst_substate = 2; return; }
case 2:;
	prefetch_start();
	if(CCR & F_C)
		TMP1 |= 1 << ((IR[2] >> 4) & 7);
	else
		TMP1 &= ~(1 << ((IR[2] >> 4) & 7));
	if(icount <= bcount) { inst_substate = 3; return; }
case 3:;
	write8(TMP2, TMP1);
	prefetch_done();
	break;
}
	inst_substate = 0;
}

void h8_device::bist_imm3_abs16_full()
{
	TMP2 = int16_t(IR[1]);
	if(icount <= bcount) { inst_substate = 1; return; }
	TMP1 = read8(TMP2);
	if(icount <= bcount) { inst_substate = 2; return; }
	prefetch_start();
	if(!(CCR & F_C))
		TMP1 |= 1 << ((IR[2] >> 4) & 7);
	else
		TMP1 &= ~(1 << ((IR[2] >> 4) & 7));
	if(icount <= bcount) { inst_substate = 3; return; }
	write8(TMP2, TMP1);
	prefetch_done();
}

void h8_device::bist_imm3_abs16_partial()
{
switch(inst_substate) {
case 0:
	TMP2 = int16_t(IR[1]);
	if(icount <= bcount) { inst_substate = 1; return; }
case 1:;
	TMP1 = read8(TMP2);
	if(icount <= bcount) { inst_substate = 2; return; }
case 2:;
	prefetch_start();
	if(!(CCR & F_C))
		TMP1 |= 1 << ((IR[2] >> 4) & 7);
	else
		TMP1 &= ~(1 << ((IR[2] >> 4) & 7));
	if(icount <= bcount) { inst_substate = 3; return; }
case 3:;
	write8(TMP2, TMP1);
	prefetch_done();
	break;
}
	inst_substate = 0;
}

void h8_device::bset_imm3_abs16_full()
{
	TMP2 = int16_t(IR[1]);
	if(icount <= bcount) { inst_substate = 1; return; }
	TMP1 = read8(TMP2);
	if(icount <= bcount) { inst_substate = 2; return; }
	prefetch_start();
	TMP1 |= 1 << ((IR[2] >> 4) & 7);
	if(icount <= bcount) { inst_substate = 3; return; }
	write8(TMP2, TMP1);
	prefetch_done();
}

void h8_device::bset_imm3_abs16_partial()
{
switch(inst_substate) {
case 0:
	TMP2 = int16_t(IR[1]);
	if(icount <= bcount) { inst_substate = 1; return; }
case 1:;
	TMP1 = read8(TMP2);
	if(icount <= bcount) { inst_substate = 2; return; }
case 2:;
	prefetch_start();
	TMP1 |= 1 << ((IR[2] >> 4) & 7);
	if(icount <= bcount) { inst_substate = 3; return; }
case 3:;
	write8(TMP2, TMP1);
	prefetch_done();
	break;
}
	inst_substate = 0;
}

void h8_device::bnot_imm3_abs16_full()
{
	TMP2 = int16_t(IR[1]);
	if(icount <= bcount) { inst_substate = 1; return; }
	TMP1 = read8(TMP2);
	if(icount <= bcount) { inst_substate = 2; return; }
	prefetch_start();
	TMP1 ^= 1 << ((IR[2] >> 4) & 7);
	if(icount <= bcount) { inst_substate = 3; return; }
	write8(TMP2, TMP1);
	prefetch_done();
}

void h8_device::bnot_imm3_abs16_partial()
{
switch(inst_substate) {
case 0:
	TMP2 = int16_t(IR[1]);
	if(icount <= bcount) { inst_substate = 1; return; }
case 1:;
	TMP1 = read8(TMP2);
	if(icount <= bcount) { inst_substate = 2; return; }
case 2:;
	prefetch_start();
	TMP1 ^= 1 << ((IR[2] >> 4) & 7);
	if(icount <= bcount) { inst_substate = 3; return; }
case 3:;
	write8(TMP2, TMP1);
	prefetch_done();
	break;
}
	inst_substate = 0;
}

void h8_device::bclr_imm3_abs16_full()
{
	TMP2 = int16_t(IR[1]);
	if(icount <= bcount) { inst_substate = 1; return; }
	TMP1 = read8(TMP2);
	if(icount <= bcount) { inst_substate = 2; return; }
	prefetch_start();
	TMP1 &= ~(1 << ((IR[2] >> 4) & 7));
	if(icount <= bcount) { inst_substate = 3; return; }
	write8(TMP2, TMP1);
	prefetch_done();
}

void h8_device::bclr_imm3_abs16_partial()
{
switch(inst_substate) {
case 0:
	TMP2 = int16_t(IR[1]);
	if(icount <= bcount) { inst_substate = 1; return; }
case 1:;
	TMP1 = read8(TMP2);
	if(icount <= bcount) { inst_substate = 2; return; }
case 2:;
	prefetch_start();
	TMP1 &= ~(1 << ((IR[2] >> 4) & 7));
	if(icount <= bcount) { inst_substate = 3; return; }
case 3:;
	write8(TMP2, TMP1);
	prefetch_done();
	break;
}
	inst_substate = 0;
}

void h8_device::movfpe_abs16_r8l_full()
{
	if(icount <= bcount) { inst_substate = 1; return; }
	fetch(1);

}

void h8_device::movfpe_abs16_r8l_partial()
{
switch(inst_substate) {
case 0:
	if(icount <= bcount) { inst_substate = 1; return; }
case 1:;
	fetch(1);

	break;
}
	inst_substate = 0;
}

void h8_device::mov_b_r8l_abs16_full()
{
	if(icount <= bcount) { inst_substate = 1; return; }
	fetch(1);

	if(icount <= bcount) { inst_substate = 2; return; }
	prefetch_start();
	TMP1 = r8_r(IR[0]);
	set_nzv8(TMP1);
	if(icount <= bcount) { inst_substate = 3; return; }
	write8(int16_t(IR[1]), TMP1);
	prefetch_done();
}

void h8_device::mov_b_r8l_abs16_partial()
{
switch(inst_substate) {
case 0:
	if(icount <= bcount) { inst_substate = 1; return; }
case 1:;
	fetch(1);

	if(icount <= bcount) { inst_substate = 2; return; }
case 2:;
	prefetch_start();
	TMP1 = r8_r(IR[0]);
	set_nzv8(TMP1);
	if(icount <= bcount) { inst_substate = 3; return; }
case 3:;
	write8(int16_t(IR[1]), TMP1);
	prefetch_done();
	break;
}
	inst_substate = 0;
}

void h8_device::movtpe_r8l_abs16_full()
{
	if(icount <= bcount) { inst_substate = 1; return; }
	fetch(1);

}

void h8_device::movtpe_r8l_abs16_partial()
{
switch(inst_substate) {
case 0:
	if(icount <= bcount) { inst_substate = 1; return; }
case 1:;
	fetch(1);

	break;
}
	inst_substate = 0;
}

void h8_device::mov_w_abs16_r16l_full()
{
	if(icount <= bcount) { inst_substate = 1; return; }
	fetch(1);

	if(icount <= bcount) { inst_substate = 2; return; }
	prefetch_start();
	if(icount <= bcount) { inst_substate = 3; return; }
	TMP1 = read16(int16_t(IR[1]));
	set_nzv16(TMP1);
	r16_w(IR[0], TMP1);
	prefetch_done();
}

void h8_device::mov_w_abs16_r16l_partial()
{
switch(inst_substate) {
case 0:
	if(icount <= bcount) { inst_substate = 1; return; }
case 1:;
	fetch(1);

	if(icount <= bcount) { inst_substate = 2; return; }
case 2:;
	prefetch_start();
	if(icount <= bcount) { inst_substate = 3; return; }
case 3:;
	TMP1 = read16(int16_t(IR[1]));
	set_nzv16(TMP1);
	r16_w(IR[0], TMP1);
	prefetch_done();
	break;
}
	inst_substate = 0;
}

void h8_device::mov_w_r16l_abs16_full()
{
	if(icount <= bcount) { inst_substate = 1; return; }
	fetch(1);

	if(icount <= bcount) { inst_substate = 2; return; }
	prefetch_start();
	TMP1 = r16_r(IR[0]);
	set_nzv16(TMP1);
	if(icount <= bcount) { inst_substate = 3; return; }
	write16(int16_t(IR[1]), TMP1);
	prefetch_done();
}

void h8_device::mov_w_r16l_abs16_partial()
{
switch(inst_substate) {
case 0:
	if(icount <= bcount) { inst_substate = 1; return; }
case 1:;
	fetch(1);

	if(icount <= bcount) { inst_substate = 2; return; }
case 2:;
	prefetch_start();
	TMP1 = r16_r(IR[0]);
	set_nzv16(TMP1);
	if(icount <= bcount) { inst_substate = 3; return; }
case 3:;
	write16(int16_t(IR[1]), TMP1);
	prefetch_done();
	break;
}
	inst_substate = 0;
}

void h8_device::mov_b_r16ph_r8l_full()
{
	TMP2 = r16_r(IR[0] >> 4);
	if(icount <= bcount) { inst_substate = 1; return; }
	prefetch_start();
	internal(1);
	if(icount <= bcount) { inst_substate = 2; return; }
	TMP1 = read8(TMP2);
	TMP2 += 1;
	r16_w(IR[0] >> 4, TMP2);
	set_nzv8(TMP1);
	r8_w(IR[0], TMP1);
	prefetch_done();
}

void h8_device::mov_b_r16ph_r8l_partial()
{
switch(inst_substate) {
case 0:
	TMP2 = r16_r(IR[0] >> 4);
	if(icount <= bcount) { inst_substate = 1; return; }
case 1:;
	prefetch_start();
	internal(1);
	if(icount <= bcount) { inst_substate = 2; return; }
case 2:;
	TMP1 = read8(TMP2);
	TMP2 += 1;
	r16_w(IR[0] >> 4, TMP2);
	set_nzv8(TMP1);
	r8_w(IR[0], TMP1);
	prefetch_done();
	break;
}
	inst_substate = 0;
}

void h8_device::mov_b_r8l_pr16h_full()
{
	TMP1 = r8_r(IR[0]);
	TMP2 = r16_r((IR[0] >> 4) & 7);
	if(icount <= bcount) { inst_substate = 1; return; }
	prefetch_start();
	internal(1);
	TMP2 -= 1;
	r16_w((IR[0] >> 4) & 7, TMP2);
	set_nzv8(TMP1);
	if(icount <= bcount) { inst_substate = 2; return; }
	write8(TMP2, TMP1);
	prefetch_done();
}

void h8_device::mov_b_r8l_pr16h_partial()
{
switch(inst_substate) {
case 0:
	TMP1 = r8_r(IR[0]);
	TMP2 = r16_r((IR[0] >> 4) & 7);
	if(icount <= bcount) { inst_substate = 1; return; }
case 1:;
	prefetch_start();
	internal(1);
	TMP2 -= 1;
	r16_w((IR[0] >> 4) & 7, TMP2);
	set_nzv8(TMP1);
	if(icount <= bcount) { inst_substate = 2; return; }
case 2:;
	write8(TMP2, TMP1);
	prefetch_done();
	break;
}
	inst_substate = 0;
}

void h8_device::mov_w_r16ph_r16l_full()
{
	TMP2 = r16_r(IR[0] >> 4);
	if(icount <= bcount) { inst_substate = 1; return; }
	prefetch_start();
	internal(1);
	if(icount <= bcount) { inst_substate = 2; return; }
	TMP1 = read16(TMP2);
	TMP2 += 2;
	r16_w(IR[0] >> 4, TMP2);
	set_nzv16(TMP1);
	r16_w(IR[0], TMP1);
	prefetch_done();
}

void h8_device::mov_w_r16ph_r16l_partial()
{
switch(inst_substate) {
case 0:
	TMP2 = r16_r(IR[0] >> 4);
	if(icount <= bcount) { inst_substate = 1; return; }
case 1:;
	prefetch_start();
	internal(1);
	if(icount <= bcount) { inst_substate = 2; return; }
case 2:;
	TMP1 = read16(TMP2);
	TMP2 += 2;
	r16_w(IR[0] >> 4, TMP2);
	set_nzv16(TMP1);
	r16_w(IR[0], TMP1);
	prefetch_done();
	break;
}
	inst_substate = 0;
}

void h8_device::mov_w_r16l_pr16h_full()
{
	TMP1 = r16_r(IR[0]);
	TMP2 = r16_r((IR[0] >> 4) & 7);
	if(icount <= bcount) { inst_substate = 1; return; }
	prefetch_start();
	internal(1);
	TMP2 -= 2;
	r16_w((IR[0] >> 4) & 7, TMP2);
	set_nzv16(TMP1);
	if(icount <= bcount) { inst_substate = 2; return; }
	write16(TMP2, TMP1);
	prefetch_done();
}

void h8_device::mov_w_r16l_pr16h_partial()
{
switch(inst_substate) {
case 0:
	TMP1 = r16_r(IR[0]);
	TMP2 = r16_r((IR[0] >> 4) & 7);
	if(icount <= bcount) { inst_substate = 1; return; }
case 1:;
	prefetch_start();
	internal(1);
	TMP2 -= 2;
	r16_w((IR[0] >> 4) & 7, TMP2);
	set_nzv16(TMP1);
	if(icount <= bcount) { inst_substate = 2; return; }
case 2:;
	write16(TMP2, TMP1);
	prefetch_done();
	break;
}
	inst_substate = 0;
}

void h8_device::mov_b_r16d16h_r8l_full()
{
	if(icount <= bcount) { inst_substate = 1; return; }
	fetch(1);

	if(icount <= bcount) { inst_substate = 2; return; }
	prefetch_start();
	TMP1 = uint16_t(r16_r(IR[0] >> 4) + IR[1]);
	if(icount <= bcount) { inst_substate = 3; return; }
	TMP2 = read8(TMP1);
	set_nzv8(TMP2);
	r8_w(IR[0], TMP2);
	prefetch_done();
}

void h8_device::mov_b_r16d16h_r8l_partial()
{
switch(inst_substate) {
case 0:
	if(icount <= bcount) { inst_substate = 1; return; }
case 1:;
	fetch(1);

	if(icount <= bcount) { inst_substate = 2; return; }
case 2:;
	prefetch_start();
	TMP1 = uint16_t(r16_r(IR[0] >> 4) + IR[1]);
	if(icount <= bcount) { inst_substate = 3; return; }
case 3:;
	TMP2 = read8(TMP1);
	set_nzv8(TMP2);
	r8_w(IR[0], TMP2);
	prefetch_done();
	break;
}
	inst_substate = 0;
}

void h8_device::mov_b_r8l_r16d16h_full()
{
	if(icount <= bcount) { inst_substate = 1; return; }
	fetch(1);

	if(icount <= bcount) { inst_substate = 2; return; }
	prefetch_start();
	TMP1 = uint16_t(r16_r((IR[0] >> 4) & 7) + IR[1]);
	TMP2 = r8_r(IR[0]);
	set_nzv8(TMP2);
	if(icount <= bcount) { inst_substate = 3; return; }
	write8(TMP1, TMP2);
	prefetch_done();
}

void h8_device::mov_b_r8l_r16d16h_partial()
{
switch(inst_substate) {
case 0:
	if(icount <= bcount) { inst_substate = 1; return; }
case 1:;
	fetch(1);

	if(icount <= bcount) { inst_substate = 2; return; }
case 2:;
	prefetch_start();
	TMP1 = uint16_t(r16_r((IR[0] >> 4) & 7) + IR[1]);
	TMP2 = r8_r(IR[0]);
	set_nzv8(TMP2);
	if(icount <= bcount) { inst_substate = 3; return; }
case 3:;
	write8(TMP1, TMP2);
	prefetch_done();
	break;
}
	inst_substate = 0;
}

void h8_device::mov_w_r16d16h_r16l_full()
{
	if(icount <= bcount) { inst_substate = 1; return; }
	fetch(1);

	if(icount <= bcount) { inst_substate = 2; return; }
	prefetch_start();
	TMP1 = uint16_t(r16_r(IR[0] >> 4) + IR[1]);
	if(icount <= bcount) { inst_substate = 3; return; }
	TMP2 = read16(TMP1);
	set_nzv16(TMP2);
	r16_w(IR[0], TMP2);
	prefetch_done();
}

void h8_device::mov_w_r16d16h_r16l_partial()
{
switch(inst_substate) {
case 0:
	if(icount <= bcount) { inst_substate = 1; return; }
case 1:;
	fetch(1);

	if(icount <= bcount) { inst_substate = 2; return; }
case 2:;
	prefetch_start();
	TMP1 = uint16_t(r16_r(IR[0] >> 4) + IR[1]);
	if(icount <= bcount) { inst_substate = 3; return; }
case 3:;
	TMP2 = read16(TMP1);
	set_nzv16(TMP2);
	r16_w(IR[0], TMP2);
	prefetch_done();
	break;
}
	inst_substate = 0;
}

void h8_device::mov_w_r16l_r16d16h_full()
{
	if(icount <= bcount) { inst_substate = 1; return; }
	fetch(1);

	if(icount <= bcount) { inst_substate = 2; return; }
	prefetch_start();
	TMP1 = uint16_t(r16_r((IR[0] >> 4) & 7) + IR[1]);
	TMP2 = r16_r(IR[0]);
	set_nzv16(TMP2);
	if(icount <= bcount) { inst_substate = 3; return; }
	write16(TMP1, TMP2);
	prefetch_done();
}

void h8_device::mov_w_r16l_r16d16h_partial()
{
switch(inst_substate) {
case 0:
	if(icount <= bcount) { inst_substate = 1; return; }
case 1:;
	fetch(1);

	if(icount <= bcount) { inst_substate = 2; return; }
case 2:;
	prefetch_start();
	TMP1 = uint16_t(r16_r((IR[0] >> 4) & 7) + IR[1]);
	TMP2 = r16_r(IR[0]);
	set_nzv16(TMP2);
	if(icount <= bcount) { inst_substate = 3; return; }
case 3:;
	write16(TMP1, TMP2);
	prefetch_done();
	break;
}
	inst_substate = 0;
}

void h8_device::bset_imm3_r8l_full()
{
	TMP1 = r8_r(IR[0]);
	TMP1 |= 1 << ((IR[0] >> 4) & 7);
	r8_w(IR[0], TMP1);
	if(icount <= bcount) { inst_substate = 1; return; }
	prefetch();
}

void h8_device::bset_imm3_r8l_partial()
{
switch(inst_substate) {
case 0:
	TMP1 = r8_r(IR[0]);
	TMP1 |= 1 << ((IR[0] >> 4) & 7);
	r8_w(IR[0], TMP1);
	if(icount <= bcount) { inst_substate = 1; return; }
case 1:;
	prefetch();
	break;
}
	inst_substate = 0;
}

void h8_device::bnot_imm3_r8l_full()
{
	TMP1 = r8_r(IR[0]);
	TMP1 ^= 1 << ((IR[0] >> 4) & 7);
	r8_w(IR[0], TMP1);
	if(icount <= bcount) { inst_substate = 1; return; }
	prefetch();
}

void h8_device::bnot_imm3_r8l_partial()
{
switch(inst_substate) {
case 0:
	TMP1 = r8_r(IR[0]);
	TMP1 ^= 1 << ((IR[0] >> 4) & 7);
	r8_w(IR[0], TMP1);
	if(icount <= bcount) { inst_substate = 1; return; }
case 1:;
	prefetch();
	break;
}
	inst_substate = 0;
}

void h8_device::bclr_imm3_r8l_full()
{
	TMP1 = r8_r(IR[0]);
	TMP1 &= ~(1 << ((IR[0] >> 4) & 7));
	r8_w(IR[0], TMP1);
	if(icount <= bcount) { inst_substate = 1; return; }
	prefetch();
}

void h8_device::bclr_imm3_r8l_partial()
{
switch(inst_substate) {
case 0:
	TMP1 = r8_r(IR[0]);
	TMP1 &= ~(1 << ((IR[0] >> 4) & 7));
	r8_w(IR[0], TMP1);
	if(icount <= bcount) { inst_substate = 1; return; }
case 1:;
	prefetch();
	break;
}
	inst_substate = 0;
}

void h8_device::btst_imm3_r8l_full()
{
	TMP1 = r8_r(IR[0]);
	if(TMP1 & (1 << ((IR[0] >> 4) & 7)))
		CCR &= ~F_Z;
	else
		CCR |= F_Z;
	if(icount <= bcount) { inst_substate = 1; return; }
	prefetch();
}

void h8_device::btst_imm3_r8l_partial()
{
switch(inst_substate) {
case 0:
	TMP1 = r8_r(IR[0]);
	if(TMP1 & (1 << ((IR[0] >> 4) & 7)))
		CCR &= ~F_Z;
	else
		CCR |= F_Z;
	if(icount <= bcount) { inst_substate = 1; return; }
case 1:;
	prefetch();
	break;
}
	inst_substate = 0;
}

void h8_device::bor_imm3_r8l_full()
{
	TMP1 = r8_r(IR[0]);
	if(TMP1 & (1 << ((IR[0] >> 4) & 7)))
		CCR |= F_C;
	if(icount <= bcount) { inst_substate = 1; return; }
	prefetch();
}

void h8_device::bor_imm3_r8l_partial()
{
switch(inst_substate) {
case 0:
	TMP1 = r8_r(IR[0]);
	if(TMP1 & (1 << ((IR[0] >> 4) & 7)))
		CCR |= F_C;
	if(icount <= bcount) { inst_substate = 1; return; }
case 1:;
	prefetch();
	break;
}
	inst_substate = 0;
}

void h8_device::bior_imm3_r8l_full()
{
	TMP1 = r8_r(IR[0]);
	if(!(TMP1 & (1 << ((IR[0] >> 4) & 7))))
		CCR |= F_C;
	if(icount <= bcount) { inst_substate = 1; return; }
	prefetch();
}

void h8_device::bior_imm3_r8l_partial()
{
switch(inst_substate) {
case 0:
	TMP1 = r8_r(IR[0]);
	if(!(TMP1 & (1 << ((IR[0] >> 4) & 7))))
		CCR |= F_C;
	if(icount <= bcount) { inst_substate = 1; return; }
case 1:;
	prefetch();
	break;
}
	inst_substate = 0;
}

void h8_device::bxor_imm3_r8l_full()
{
	TMP1 = r8_r(IR[0]);
	if(TMP1 & (1 << ((IR[0] >> 4) & 7)))
		CCR ^= F_C;
	if(icount <= bcount) { inst_substate = 1; return; }
	prefetch();
}

void h8_device::bxor_imm3_r8l_partial()
{
switch(inst_substate) {
case 0:
	TMP1 = r8_r(IR[0]);
	if(TMP1 & (1 << ((IR[0] >> 4) & 7)))
		CCR ^= F_C;
	if(icount <= bcount) { inst_substate = 1; return; }
case 1:;
	prefetch();
	break;
}
	inst_substate = 0;
}

void h8_device::bixor_imm3_r8l_full()
{
	TMP1 = r8_r(IR[0]);
	if(!(TMP1 & (1 << ((IR[0] >> 4) & 7))))
		CCR ^= F_C;
	if(icount <= bcount) { inst_substate = 1; return; }
	prefetch();
}

void h8_device::bixor_imm3_r8l_partial()
{
switch(inst_substate) {
case 0:
	TMP1 = r8_r(IR[0]);
	if(!(TMP1 & (1 << ((IR[0] >> 4) & 7))))
		CCR ^= F_C;
	if(icount <= bcount) { inst_substate = 1; return; }
case 1:;
	prefetch();
	break;
}
	inst_substate = 0;
}

void h8_device::band_imm3_r8l_full()
{
	TMP1 = r8_r(IR[0]);
	if(!(TMP1 & (1 << ((IR[0] >> 4) & 7))))
		CCR &= ~F_C;
	if(icount <= bcount) { inst_substate = 1; return; }
	prefetch();
}

void h8_device::band_imm3_r8l_partial()
{
switch(inst_substate) {
case 0:
	TMP1 = r8_r(IR[0]);
	if(!(TMP1 & (1 << ((IR[0] >> 4) & 7))))
		CCR &= ~F_C;
	if(icount <= bcount) { inst_substate = 1; return; }
case 1:;
	prefetch();
	break;
}
	inst_substate = 0;
}

void h8_device::biand_imm3_r8l_full()
{
	TMP1 = r8_r(IR[0]);
	if(TMP1 & (1 << ((IR[0] >> 4) & 7)))
		CCR &= ~F_C;
	if(icount <= bcount) { inst_substate = 1; return; }
	prefetch();
}

void h8_device::biand_imm3_r8l_partial()
{
switch(inst_substate) {
case 0:
	TMP1 = r8_r(IR[0]);
	if(TMP1 & (1 << ((IR[0] >> 4) & 7)))
		CCR &= ~F_C;
	if(icount <= bcount) { inst_substate = 1; return; }
case 1:;
	prefetch();
	break;
}
	inst_substate = 0;
}

void h8_device::bld_imm3_r8l_full()
{
	TMP1 = r8_r(IR[0]);
	if(TMP1 & (1 << ((IR[0] >> 4) & 7)))
		CCR |= F_C;
	else
		CCR &= ~F_C;
	if(icount <= bcount) { inst_substate = 1; return; }
	prefetch();
}

void h8_device::bld_imm3_r8l_partial()
{
switch(inst_substate) {
case 0:
	TMP1 = r8_r(IR[0]);
	if(TMP1 & (1 << ((IR[0] >> 4) & 7)))
		CCR |= F_C;
	else
		CCR &= ~F_C;
	if(icount <= bcount) { inst_substate = 1; return; }
case 1:;
	prefetch();
	break;
}
	inst_substate = 0;
}

void h8_device::bild_imm3_r8l_full()
{
	TMP1 = r8_r(IR[0]);
	if(!(TMP1 & (1 << ((IR[0] >> 4) & 7))))
		CCR |= F_C;
	else
		CCR &= ~F_C;
	if(icount <= bcount) { inst_substate = 1; return; }
	prefetch();
}

void h8_device::bild_imm3_r8l_partial()
{
switch(inst_substate) {
case 0:
	TMP1 = r8_r(IR[0]);
	if(!(TMP1 & (1 << ((IR[0] >> 4) & 7))))
		CCR |= F_C;
	else
		CCR &= ~F_C;
	if(icount <= bcount) { inst_substate = 1; return; }
case 1:;
	prefetch();
	break;
}
	inst_substate = 0;
}

void h8_device::mov_w_imm16_r16l_full()
{
	if(icount <= bcount) { inst_substate = 1; return; }
	fetch(1);

	set_nzv16(IR[1]);
	r16_w(IR[0], IR[1]);
	if(icount <= bcount) { inst_substate = 2; return; }
	prefetch();
}

void h8_device::mov_w_imm16_r16l_partial()
{
switch(inst_substate) {
case 0:
	if(icount <= bcount) { inst_substate = 1; return; }
case 1:;
	fetch(1);

	set_nzv16(IR[1]);
	r16_w(IR[0], IR[1]);
	if(icount <= bcount) { inst_substate = 2; return; }
case 2:;
	prefetch();
	break;
}
	inst_substate = 0;
}

void h8_device::add_w_imm16_r16l_full()
{
	if(icount <= bcount) { inst_substate = 1; return; }
	fetch(1);

	r16_w(IR[0], do_add16(r16_r(IR[0]), IR[1]));
	if(icount <= bcount) { inst_substate = 2; return; }
	prefetch();
}

void h8_device::add_w_imm16_r16l_partial()
{
switch(inst_substate) {
case 0:
	if(icount <= bcount) { inst_substate = 1; return; }
case 1:;
	fetch(1);

	r16_w(IR[0], do_add16(r16_r(IR[0]), IR[1]));
	if(icount <= bcount) { inst_substate = 2; return; }
case 2:;
	prefetch();
	break;
}
	inst_substate = 0;
}

void h8_device::cmp_w_imm16_r16l_full()
{
	if(icount <= bcount) { inst_substate = 1; return; }
	fetch(1);

	do_sub16(r16_r(IR[0]), IR[1]);
	if(icount <= bcount) { inst_substate = 2; return; }
	prefetch();
}

void h8_device::cmp_w_imm16_r16l_partial()
{
switch(inst_substate) {
case 0:
	if(icount <= bcount) { inst_substate = 1; return; }
case 1:;
	fetch(1);

	do_sub16(r16_r(IR[0]), IR[1]);
	if(icount <= bcount) { inst_substate = 2; return; }
case 2:;
	prefetch();
	break;
}
	inst_substate = 0;
}

void h8_device::sub_w_imm16_r16l_full()
{
	if(icount <= bcount) { inst_substate = 1; return; }
	fetch(1);

	r16_w(IR[0], do_sub16(r16_r(IR[0]), IR[1]));
	if(icount <= bcount) { inst_substate = 2; return; }
	prefetch();
}

void h8_device::sub_w_imm16_r16l_partial()
{
switch(inst_substate) {
case 0:
	if(icount <= bcount) { inst_substate = 1; return; }
case 1:;
	fetch(1);

	r16_w(IR[0], do_sub16(r16_r(IR[0]), IR[1]));
	if(icount <= bcount) { inst_substate = 2; return; }
case 2:;
	prefetch();
	break;
}
	inst_substate = 0;
}

void h8_device::or_w_imm16_r16l_full()
{
	if(icount <= bcount) { inst_substate = 1; return; }
	fetch(1);

	TMP1 = IR[1] | r16_r(IR[0]);
	set_nzv16(TMP1);
	r16_w(IR[0], TMP1);
	if(icount <= bcount) { inst_substate = 2; return; }
	prefetch();
}

void h8_device::or_w_imm16_r16l_partial()
{
switch(inst_substate) {
case 0:
	if(icount <= bcount) { inst_substate = 1; return; }
case 1:;
	fetch(1);

	TMP1 = IR[1] | r16_r(IR[0]);
	set_nzv16(TMP1);
	r16_w(IR[0], TMP1);
	if(icount <= bcount) { inst_substate = 2; return; }
case 2:;
	prefetch();
	break;
}
	inst_substate = 0;
}

void h8_device::xor_w_imm16_r16l_full()
{
	if(icount <= bcount) { inst_substate = 1; return; }
	fetch(1);

	TMP1 = IR[1] ^ r16_r(IR[0]);
	set_nzv16(TMP1);
	r16_w(IR[0], TMP1);
	if(icount <= bcount) { inst_substate = 2; return; }
	prefetch();
}

void h8_device::xor_w_imm16_r16l_partial()
{
switch(inst_substate) {
case 0:
	if(icount <= bcount) { inst_substate = 1; return; }
case 1:;
	fetch(1);

	TMP1 = IR[1] ^ r16_r(IR[0]);
	set_nzv16(TMP1);
	r16_w(IR[0], TMP1);
	if(icount <= bcount) { inst_substate = 2; return; }
case 2:;
	prefetch();
	break;
}
	inst_substate = 0;
}

void h8_device::and_w_imm16_r16l_full()
{
	if(icount <= bcount) { inst_substate = 1; return; }
	fetch(1);

	TMP1 = IR[1] & r16_r(IR[0]);
	set_nzv16(TMP1);
	r16_w(IR[0], TMP1);
	if(icount <= bcount) { inst_substate = 2; return; }
	prefetch();
}

void h8_device::and_w_imm16_r16l_partial()
{
switch(inst_substate) {
case 0:
	if(icount <= bcount) { inst_substate = 1; return; }
case 1:;
	fetch(1);

	TMP1 = IR[1] & r16_r(IR[0]);
	set_nzv16(TMP1);
	r16_w(IR[0], TMP1);
	if(icount <= bcount) { inst_substate = 2; return; }
case 2:;
	prefetch();
	break;
}
	inst_substate = 0;
}

void h8_device::eepmov_b_full()
{
	while(r8_r(4)) {
	if(icount <= bcount) { inst_substate = 1; return; }
		TMP1 = read8(r16_r(5));
	if(icount <= bcount) { inst_substate = 2; return; }
		write8(r16_r(6), TMP1);
		r16_w(5, r16_r(5)+1);
		r16_w(6, r16_r(6)+1);
		r8_w(4, r8_r(4)-1);
	}
	if(icount <= bcount) { inst_substate = 3; return; }
	prefetch();
}

void h8_device::eepmov_b_partial()
{
switch(inst_substate) {
case 0:
	while(r8_r(4)) {
	if(icount <= bcount) { inst_substate = 1; return; }
case 1:;
		TMP1 = read8(r16_r(5));
	if(icount <= bcount) { inst_substate = 2; return; }
case 2:;
		write8(r16_r(6), TMP1);
		r16_w(5, r16_r(5)+1);
		r16_w(6, r16_r(6)+1);
		r8_w(4, r8_r(4)-1);
	}
	if(icount <= bcount) { inst_substate = 3; return; }
case 3:;
	prefetch();
	break;
}
	inst_substate = 0;
}

void h8_device::btst_r8h_r16ihh_full()
{
	TMP2 = r16_r(IR[0] >> 4);
	if(icount <= bcount) { inst_substate = 1; return; }
	TMP1 = read8(TMP2);
	if(TMP1 & (1 << ((r8_r(IR[1] >> 4)) & 7)))
		CCR &= ~F_Z;
	else
		CCR |= F_Z;
	if(icount <= bcount) { inst_substate = 2; return; }
	prefetch();
}

void h8_device::btst_r8h_r16ihh_partial()
{
switch(inst_substate) {
case 0:
	TMP2 = r16_r(IR[0] >> 4);
	if(icount <= bcount) { inst_substate = 1; return; }
case 1:;
	TMP1 = read8(TMP2);
	if(TMP1 & (1 << ((r8_r(IR[1] >> 4)) & 7)))
		CCR &= ~F_Z;
	else
		CCR |= F_Z;
	if(icount <= bcount) { inst_substate = 2; return; }
case 2:;
	prefetch();
	break;
}
	inst_substate = 0;
}

void h8_device::btst_imm3_r16ihh_full()
{
	TMP2 = r16_r(IR[0] >> 4);
	if(icount <= bcount) { inst_substate = 1; return; }
	TMP1 = read8(TMP2);
	if(TMP1 & (1 << ((IR[1] >> 4) & 7)))
		CCR &= ~F_Z;
	else
		CCR |= F_Z;
	if(icount <= bcount) { inst_substate = 2; return; }
	prefetch();
}

void h8_device::btst_imm3_r16ihh_partial()
{
switch(inst_substate) {
case 0:
	TMP2 = r16_r(IR[0] >> 4);
	if(icount <= bcount) { inst_substate = 1; return; }
case 1:;
	TMP1 = read8(TMP2);
	if(TMP1 & (1 << ((IR[1] >> 4) & 7)))
		CCR &= ~F_Z;
	else
		CCR |= F_Z;
	if(icount <= bcount) { inst_substate = 2; return; }
case 2:;
	prefetch();
	break;
}
	inst_substate = 0;
}

void h8_device::bor_imm3_r16ihh_full()
{
	TMP2 = r16_r(IR[0] >> 4);
	if(icount <= bcount) { inst_substate = 1; return; }
	TMP1 = read8(TMP2);
	if(TMP1 & (1 << ((IR[1] >> 4) & 7)))
		CCR |= F_C;
	if(icount <= bcount) { inst_substate = 2; return; }
	prefetch();
}

void h8_device::bor_imm3_r16ihh_partial()
{
switch(inst_substate) {
case 0:
	TMP2 = r16_r(IR[0] >> 4);
	if(icount <= bcount) { inst_substate = 1; return; }
case 1:;
	TMP1 = read8(TMP2);
	if(TMP1 & (1 << ((IR[1] >> 4) & 7)))
		CCR |= F_C;
	if(icount <= bcount) { inst_substate = 2; return; }
case 2:;
	prefetch();
	break;
}
	inst_substate = 0;
}

void h8_device::bior_imm3_r16ihh_full()
{
	TMP2 = r16_r(IR[0] >> 4);
	if(icount <= bcount) { inst_substate = 1; return; }
	TMP1 = read8(TMP2);
	if(!(TMP1 & (1 << ((IR[1] >> 4) & 7))))
		CCR |= F_C;
	if(icount <= bcount) { inst_substate = 2; return; }
	prefetch();
}

void h8_device::bior_imm3_r16ihh_partial()
{
switch(inst_substate) {
case 0:
	TMP2 = r16_r(IR[0] >> 4);
	if(icount <= bcount) { inst_substate = 1; return; }
case 1:;
	TMP1 = read8(TMP2);
	if(!(TMP1 & (1 << ((IR[1] >> 4) & 7))))
		CCR |= F_C;
	if(icount <= bcount) { inst_substate = 2; return; }
case 2:;
	prefetch();
	break;
}
	inst_substate = 0;
}

void h8_device::bxor_imm3_r16ihh_full()
{
	TMP2 = r16_r(IR[0] >> 4);
	if(icount <= bcount) { inst_substate = 1; return; }
	TMP1 = read8(TMP2);
	if(TMP1 & (1 << ((IR[1] >> 4) & 7)))
		CCR ^= F_C;
	if(icount <= bcount) { inst_substate = 2; return; }
	prefetch();
}

void h8_device::bxor_imm3_r16ihh_partial()
{
switch(inst_substate) {
case 0:
	TMP2 = r16_r(IR[0] >> 4);
	if(icount <= bcount) { inst_substate = 1; return; }
case 1:;
	TMP1 = read8(TMP2);
	if(TMP1 & (1 << ((IR[1] >> 4) & 7)))
		CCR ^= F_C;
	if(icount <= bcount) { inst_substate = 2; return; }
case 2:;
	prefetch();
	break;
}
	inst_substate = 0;
}

void h8_device::bixor_imm3_r16ihh_full()
{
	TMP2 = r16_r(IR[0] >> 4);
	if(icount <= bcount) { inst_substate = 1; return; }
	TMP1 = read8(TMP2);
	if(!(TMP1 & (1 << ((IR[1] >> 4) & 7))))
		CCR ^= F_C;
	if(icount <= bcount) { inst_substate = 2; return; }
	prefetch();
}

void h8_device::bixor_imm3_r16ihh_partial()
{
switch(inst_substate) {
case 0:
	TMP2 = r16_r(IR[0] >> 4);
	if(icount <= bcount) { inst_substate = 1; return; }
case 1:;
	TMP1 = read8(TMP2);
	if(!(TMP1 & (1 << ((IR[1] >> 4) & 7))))
		CCR ^= F_C;
	if(icount <= bcount) { inst_substate = 2; return; }
case 2:;
	prefetch();
	break;
}
	inst_substate = 0;
}

void h8_device::band_imm3_r16ihh_full()
{
	TMP2 = r16_r(IR[0] >> 4);
	if(icount <= bcount) { inst_substate = 1; return; }
	TMP1 = read8(TMP2);
	if(!(TMP1 & (1 << ((IR[1] >> 4) & 7))))
		CCR &= ~F_C;
	if(icount <= bcount) { inst_substate = 2; return; }
	prefetch();
}

void h8_device::band_imm3_r16ihh_partial()
{
switch(inst_substate) {
case 0:
	TMP2 = r16_r(IR[0] >> 4);
	if(icount <= bcount) { inst_substate = 1; return; }
case 1:;
	TMP1 = read8(TMP2);
	if(!(TMP1 & (1 << ((IR[1] >> 4) & 7))))
		CCR &= ~F_C;
	if(icount <= bcount) { inst_substate = 2; return; }
case 2:;
	prefetch();
	break;
}
	inst_substate = 0;
}

void h8_device::biand_imm3_r16ihh_full()
{
	TMP2 = r16_r(IR[0] >> 4);
	if(icount <= bcount) { inst_substate = 1; return; }
	TMP1 = read8(TMP2);
	if(TMP1 & (1 << ((IR[1] >> 4) & 7)))
		CCR &= ~F_C;
	if(icount <= bcount) { inst_substate = 2; return; }
	prefetch();
}

void h8_device::biand_imm3_r16ihh_partial()
{
switch(inst_substate) {
case 0:
	TMP2 = r16_r(IR[0] >> 4);
	if(icount <= bcount) { inst_substate = 1; return; }
case 1:;
	TMP1 = read8(TMP2);
	if(TMP1 & (1 << ((IR[1] >> 4) & 7)))
		CCR &= ~F_C;
	if(icount <= bcount) { inst_substate = 2; return; }
case 2:;
	prefetch();
	break;
}
	inst_substate = 0;
}

void h8_device::bld_imm3_r16ihh_full()
{
	TMP2 = r16_r(IR[0] >> 4);
	if(icount <= bcount) { inst_substate = 1; return; }
	TMP1 = read8(TMP2);
	if(TMP1 & (1 << ((IR[1] >> 4) & 7)))
		CCR |= F_C;
	else
		CCR &= ~F_C;
	if(icount <= bcount) { inst_substate = 2; return; }
	prefetch();
}

void h8_device::bld_imm3_r16ihh_partial()
{
switch(inst_substate) {
case 0:
	TMP2 = r16_r(IR[0] >> 4);
	if(icount <= bcount) { inst_substate = 1; return; }
case 1:;
	TMP1 = read8(TMP2);
	if(TMP1 & (1 << ((IR[1] >> 4) & 7)))
		CCR |= F_C;
	else
		CCR &= ~F_C;
	if(icount <= bcount) { inst_substate = 2; return; }
case 2:;
	prefetch();
	break;
}
	inst_substate = 0;
}

void h8_device::bild_imm3_r16ihh_full()
{
	TMP2 = r16_r(IR[0] >> 4);
	if(icount <= bcount) { inst_substate = 1; return; }
	TMP1 = read8(TMP2);
	if(!(TMP1 & (1 << ((IR[1] >> 4) & 7))))
		CCR |= F_C;
	else
		CCR &= ~F_C;
	if(icount <= bcount) { inst_substate = 2; return; }
	prefetch();
}

void h8_device::bild_imm3_r16ihh_partial()
{
switch(inst_substate) {
case 0:
	TMP2 = r16_r(IR[0] >> 4);
	if(icount <= bcount) { inst_substate = 1; return; }
case 1:;
	TMP1 = read8(TMP2);
	if(!(TMP1 & (1 << ((IR[1] >> 4) & 7))))
		CCR |= F_C;
	else
		CCR &= ~F_C;
	if(icount <= bcount) { inst_substate = 2; return; }
case 2:;
	prefetch();
	break;
}
	inst_substate = 0;
}

void h8_device::bset_r8h_r16ihh_full()
{
	TMP2 = r16_r(IR[0] >> 4);
	if(icount <= bcount) { inst_substate = 1; return; }
	TMP1 = read8(TMP2);
	TMP1 |= 1 << ((r8_r(IR[1] >> 4)) & 7);
	if(icount <= bcount) { inst_substate = 2; return; }
	prefetch_start();
	if(icount <= bcount) { inst_substate = 3; return; }
	write8(TMP2, TMP1);
	prefetch_done();
}

void h8_device::bset_r8h_r16ihh_partial()
{
switch(inst_substate) {
case 0:
	TMP2 = r16_r(IR[0] >> 4);
	if(icount <= bcount) { inst_substate = 1; return; }
case 1:;
	TMP1 = read8(TMP2);
	TMP1 |= 1 << ((r8_r(IR[1] >> 4)) & 7);
	if(icount <= bcount) { inst_substate = 2; return; }
case 2:;
	prefetch_start();
	if(icount <= bcount) { inst_substate = 3; return; }
case 3:;
	write8(TMP2, TMP1);
	prefetch_done();
	break;
}
	inst_substate = 0;
}

void h8_device::bnot_r8h_r16ihh_full()
{
	TMP2 = r16_r(IR[0] >> 4);
	if(icount <= bcount) { inst_substate = 1; return; }
	TMP1 = read8(TMP2);
	TMP1 ^= 1 << ((r8_r(IR[1] >> 4)) & 7);
	if(icount <= bcount) { inst_substate = 2; return; }
	prefetch_start();
	if(icount <= bcount) { inst_substate = 3; return; }
	write8(TMP2, TMP1);
	prefetch_done();
}

void h8_device::bnot_r8h_r16ihh_partial()
{
switch(inst_substate) {
case 0:
	TMP2 = r16_r(IR[0] >> 4);
	if(icount <= bcount) { inst_substate = 1; return; }
case 1:;
	TMP1 = read8(TMP2);
	TMP1 ^= 1 << ((r8_r(IR[1] >> 4)) & 7);
	if(icount <= bcount) { inst_substate = 2; return; }
case 2:;
	prefetch_start();
	if(icount <= bcount) { inst_substate = 3; return; }
case 3:;
	write8(TMP2, TMP1);
	prefetch_done();
	break;
}
	inst_substate = 0;
}

void h8_device::bclr_r8h_r16ihh_full()
{
	TMP2 = r16_r(IR[0] >> 4);
	if(icount <= bcount) { inst_substate = 1; return; }
	TMP1 = read8(TMP2);
	TMP1 &= ~(1 << ((r8_r(IR[1] >> 4)) & 7));
	if(icount <= bcount) { inst_substate = 2; return; }
	prefetch_start();
	if(icount <= bcount) { inst_substate = 3; return; }
	write8(TMP2, TMP1);
	prefetch_done();
}

void h8_device::bclr_r8h_r16ihh_partial()
{
switch(inst_substate) {
case 0:
	TMP2 = r16_r(IR[0] >> 4);
	if(icount <= bcount) { inst_substate = 1; return; }
case 1:;
	TMP1 = read8(TMP2);
	TMP1 &= ~(1 << ((r8_r(IR[1] >> 4)) & 7));
	if(icount <= bcount) { inst_substate = 2; return; }
case 2:;
	prefetch_start();
	if(icount <= bcount) { inst_substate = 3; return; }
case 3:;
	write8(TMP2, TMP1);
	prefetch_done();
	break;
}
	inst_substate = 0;
}

void h8_device::bst_imm3_r16ihh_full()
{
	TMP2 = r16_r(IR[0] >> 4);
	if(icount <= bcount) { inst_substate = 1; return; }
	TMP1 = read8(TMP2);
	if(CCR & F_C)
		TMP1 |= 1 << ((IR[1] >> 4) & 7);
	else
		TMP1 &= ~(1 << ((IR[1] >> 4) & 7));
	if(icount <= bcount) { inst_substate = 2; return; }
	prefetch_start();
	if(icount <= bcount) { inst_substate = 3; return; }
	write8(TMP2, TMP1);
	prefetch_done();
}

void h8_device::bst_imm3_r16ihh_partial()
{
switch(inst_substate) {
case 0:
	TMP2 = r16_r(IR[0] >> 4);
	if(icount <= bcount) { inst_substate = 1; return; }
case 1:;
	TMP1 = read8(TMP2);
	if(CCR & F_C)
		TMP1 |= 1 << ((IR[1] >> 4) & 7);
	else
		TMP1 &= ~(1 << ((IR[1] >> 4) & 7));
	if(icount <= bcount) { inst_substate = 2; return; }
case 2:;
	prefetch_start();
	if(icount <= bcount) { inst_substate = 3; return; }
case 3:;
	write8(TMP2, TMP1);
	prefetch_done();
	break;
}
	inst_substate = 0;
}

void h8_device::bist_imm3_r16ihh_full()
{
	TMP2 = r16_r(IR[0] >> 4);
	if(icount <= bcount) { inst_substate = 1; return; }
	TMP1 = read8(TMP2);
	if(!(CCR & F_C))
		TMP1 |= 1 << ((IR[1] >> 4) & 7);
	else
		TMP1 &= ~(1 << ((IR[1] >> 4) & 7));
	if(icount <= bcount) { inst_substate = 2; return; }
	prefetch_start();
	if(icount <= bcount) { inst_substate = 3; return; }
	write8(TMP2, TMP1);
	prefetch_done();
}

void h8_device::bist_imm3_r16ihh_partial()
{
switch(inst_substate) {
case 0:
	TMP2 = r16_r(IR[0] >> 4);
	if(icount <= bcount) { inst_substate = 1; return; }
case 1:;
	TMP1 = read8(TMP2);
	if(!(CCR & F_C))
		TMP1 |= 1 << ((IR[1] >> 4) & 7);
	else
		TMP1 &= ~(1 << ((IR[1] >> 4) & 7));
	if(icount <= bcount) { inst_substate = 2; return; }
case 2:;
	prefetch_start();
	if(icount <= bcount) { inst_substate = 3; return; }
case 3:;
	write8(TMP2, TMP1);
	prefetch_done();
	break;
}
	inst_substate = 0;
}

void h8_device::bset_imm3_r16ihh_full()
{
	TMP2 = r16_r(IR[0] >> 4);
	if(icount <= bcount) { inst_substate = 1; return; }
	TMP1 = read8(TMP2);
	TMP1 |= 1 << ((IR[1] >> 4) & 7);
	if(icount <= bcount) { inst_substate = 2; return; }
	prefetch_start();
	if(icount <= bcount) { inst_substate = 3; return; }
	write8(TMP2, TMP1);
	prefetch_done();
}

void h8_device::bset_imm3_r16ihh_partial()
{
switch(inst_substate) {
case 0:
	TMP2 = r16_r(IR[0] >> 4);
	if(icount <= bcount) { inst_substate = 1; return; }
case 1:;
	TMP1 = read8(TMP2);
	TMP1 |= 1 << ((IR[1] >> 4) & 7);
	if(icount <= bcount) { inst_substate = 2; return; }
case 2:;
	prefetch_start();
	if(icount <= bcount) { inst_substate = 3; return; }
case 3:;
	write8(TMP2, TMP1);
	prefetch_done();
	break;
}
	inst_substate = 0;
}

void h8_device::bnot_imm3_r16ihh_full()
{
	TMP2 = r16_r(IR[0] >> 4);
	if(icount <= bcount) { inst_substate = 1; return; }
	TMP1 = read8(TMP2);
	TMP1 ^= 1 << ((IR[1] >> 4) & 7);
	if(icount <= bcount) { inst_substate = 2; return; }
	prefetch_start();
	if(icount <= bcount) { inst_substate = 3; return; }
	write8(TMP2, TMP1);
	prefetch_done();
}

void h8_device::bnot_imm3_r16ihh_partial()
{
switch(inst_substate) {
case 0:
	TMP2 = r16_r(IR[0] >> 4);
	if(icount <= bcount) { inst_substate = 1; return; }
case 1:;
	TMP1 = read8(TMP2);
	TMP1 ^= 1 << ((IR[1] >> 4) & 7);
	if(icount <= bcount) { inst_substate = 2; return; }
case 2:;
	prefetch_start();
	if(icount <= bcount) { inst_substate = 3; return; }
case 3:;
	write8(TMP2, TMP1);
	prefetch_done();
	break;
}
	inst_substate = 0;
}

void h8_device::bclr_imm3_r16ihh_full()
{
	TMP2 = r16_r(IR[0] >> 4);
	if(icount <= bcount) { inst_substate = 1; return; }
	TMP1 = read8(TMP2);
	TMP1 &= ~(1 << ((IR[1] >> 4) & 7));
	if(icount <= bcount) { inst_substate = 2; return; }
	prefetch_start();
	if(icount <= bcount) { inst_substate = 3; return; }
	write8(TMP2, TMP1);
	prefetch_done();
}

void h8_device::bclr_imm3_r16ihh_partial()
{
switch(inst_substate) {
case 0:
	TMP2 = r16_r(IR[0] >> 4);
	if(icount <= bcount) { inst_substate = 1; return; }
case 1:;
	TMP1 = read8(TMP2);
	TMP1 &= ~(1 << ((IR[1] >> 4) & 7));
	if(icount <= bcount) { inst_substate = 2; return; }
case 2:;
	prefetch_start();
	if(icount <= bcount) { inst_substate = 3; return; }
case 3:;
	write8(TMP2, TMP1);
	prefetch_done();
	break;
}
	inst_substate = 0;
}

void h8_device::btst_r8h_abs8_full()
{
	TMP2 = 0xffffff00 | IR[0];
	if(icount <= bcount) { inst_substate = 1; return; }
	TMP1 = read8(TMP2);
	if(TMP1 & (1 << ((r8_r(IR[1] >> 4)) & 7)))
		CCR &= ~F_Z;
	else
		CCR |= F_Z;
	if(icount <= bcount) { inst_substate = 2; return; }
	prefetch();
}

void h8_device::btst_r8h_abs8_partial()
{
switch(inst_substate) {
case 0:
	TMP2 = 0xffffff00 | IR[0];
	if(icount <= bcount) { inst_substate = 1; return; }
case 1:;
	TMP1 = read8(TMP2);
	if(TMP1 & (1 << ((r8_r(IR[1] >> 4)) & 7)))
		CCR &= ~F_Z;
	else
		CCR |= F_Z;
	if(icount <= bcount) { inst_substate = 2; return; }
case 2:;
	prefetch();
	break;
}
	inst_substate = 0;
}

void h8_device::btst_imm3_abs8_full()
{
	TMP2 = 0xffffff00 | IR[0];
	if(icount <= bcount) { inst_substate = 1; return; }
	TMP1 = read8(TMP2);
	if(TMP1 & (1 << ((IR[1] >> 4) & 7)))
		CCR &= ~F_Z;
	else
		CCR |= F_Z;
	if(icount <= bcount) { inst_substate = 2; return; }
	prefetch();
}

void h8_device::btst_imm3_abs8_partial()
{
switch(inst_substate) {
case 0:
	TMP2 = 0xffffff00 | IR[0];
	if(icount <= bcount) { inst_substate = 1; return; }
case 1:;
	TMP1 = read8(TMP2);
	if(TMP1 & (1 << ((IR[1] >> 4) & 7)))
		CCR &= ~F_Z;
	else
		CCR |= F_Z;
	if(icount <= bcount) { inst_substate = 2; return; }
case 2:;
	prefetch();
	break;
}
	inst_substate = 0;
}

void h8_device::bor_imm3_abs8_full()
{
	TMP2 = 0xffffff00 | IR[0];
	if(icount <= bcount) { inst_substate = 1; return; }
	TMP1 = read8(TMP2);
	if(TMP1 & (1 << ((IR[1] >> 4) & 7)))
		CCR |= F_C;
	if(icount <= bcount) { inst_substate = 2; return; }
	prefetch();
}

void h8_device::bor_imm3_abs8_partial()
{
switch(inst_substate) {
case 0:
	TMP2 = 0xffffff00 | IR[0];
	if(icount <= bcount) { inst_substate = 1; return; }
case 1:;
	TMP1 = read8(TMP2);
	if(TMP1 & (1 << ((IR[1] >> 4) & 7)))
		CCR |= F_C;
	if(icount <= bcount) { inst_substate = 2; return; }
case 2:;
	prefetch();
	break;
}
	inst_substate = 0;
}

void h8_device::bior_imm3_abs8_full()
{
	TMP2 = 0xffffff00 | IR[0];
	if(icount <= bcount) { inst_substate = 1; return; }
	TMP1 = read8(TMP2);
	if(!(TMP1 & (1 << ((IR[1] >> 4) & 7))))
		CCR |= F_C;
	if(icount <= bcount) { inst_substate = 2; return; }
	prefetch();
}

void h8_device::bior_imm3_abs8_partial()
{
switch(inst_substate) {
case 0:
	TMP2 = 0xffffff00 | IR[0];
	if(icount <= bcount) { inst_substate = 1; return; }
case 1:;
	TMP1 = read8(TMP2);
	if(!(TMP1 & (1 << ((IR[1] >> 4) & 7))))
		CCR |= F_C;
	if(icount <= bcount) { inst_substate = 2; return; }
case 2:;
	prefetch();
	break;
}
	inst_substate = 0;
}

void h8_device::bxor_imm3_abs8_full()
{
	TMP2 = 0xffffff00 | IR[0];
	if(icount <= bcount) { inst_substate = 1; return; }
	TMP1 = read8(TMP2);
	if(TMP1 & (1 << ((IR[1] >> 4) & 7)))
		CCR ^= F_C;
	if(icount <= bcount) { inst_substate = 2; return; }
	prefetch();
}

void h8_device::bxor_imm3_abs8_partial()
{
switch(inst_substate) {
case 0:
	TMP2 = 0xffffff00 | IR[0];
	if(icount <= bcount) { inst_substate = 1; return; }
case 1:;
	TMP1 = read8(TMP2);
	if(TMP1 & (1 << ((IR[1] >> 4) & 7)))
		CCR ^= F_C;
	if(icount <= bcount) { inst_substate = 2; return; }
case 2:;
	prefetch();
	break;
}
	inst_substate = 0;
}

void h8_device::bixor_imm3_abs8_full()
{
	TMP2 = 0xffffff00 | IR[0];
	if(icount <= bcount) { inst_substate = 1; return; }
	TMP1 = read8(TMP2);
	if(!(TMP1 & (1 << ((IR[1] >> 4) & 7))))
		CCR ^= F_C;
	if(icount <= bcount) { inst_substate = 2; return; }
	prefetch();
}

void h8_device::bixor_imm3_abs8_partial()
{
switch(inst_substate) {
case 0:
	TMP2 = 0xffffff00 | IR[0];
	if(icount <= bcount) { inst_substate = 1; return; }
case 1:;
	TMP1 = read8(TMP2);
	if(!(TMP1 & (1 << ((IR[1] >> 4) & 7))))
		CCR ^= F_C;
	if(icount <= bcount) { inst_substate = 2; return; }
case 2:;
	prefetch();
	break;
}
	inst_substate = 0;
}

void h8_device::band_imm3_abs8_full()
{
	TMP2 = 0xffffff00 | IR[0];
	if(icount <= bcount) { inst_substate = 1; return; }
	TMP1 = read8(TMP2);
	if(!(TMP1 & (1 << ((IR[1] >> 4) & 7))))
		CCR &= ~F_C;
	if(icount <= bcount) { inst_substate = 2; return; }
	prefetch();
}

void h8_device::band_imm3_abs8_partial()
{
switch(inst_substate) {
case 0:
	TMP2 = 0xffffff00 | IR[0];
	if(icount <= bcount) { inst_substate = 1; return; }
case 1:;
	TMP1 = read8(TMP2);
	if(!(TMP1 & (1 << ((IR[1] >> 4) & 7))))
		CCR &= ~F_C;
	if(icount <= bcount) { inst_substate = 2; return; }
case 2:;
	prefetch();
	break;
}
	inst_substate = 0;
}

void h8_device::biand_imm3_abs8_full()
{
	TMP2 = 0xffffff00 | IR[0];
	if(icount <= bcount) { inst_substate = 1; return; }
	TMP1 = read8(TMP2);
	if(TMP1 & (1 << ((IR[1] >> 4) & 7)))
		CCR &= ~F_C;
	if(icount <= bcount) { inst_substate = 2; return; }
	prefetch();
}

void h8_device::biand_imm3_abs8_partial()
{
switch(inst_substate) {
case 0:
	TMP2 = 0xffffff00 | IR[0];
	if(icount <= bcount) { inst_substate = 1; return; }
case 1:;
	TMP1 = read8(TMP2);
	if(TMP1 & (1 << ((IR[1] >> 4) & 7)))
		CCR &= ~F_C;
	if(icount <= bcount) { inst_substate = 2; return; }
case 2:;
	prefetch();
	break;
}
	inst_substate = 0;
}

void h8_device::bld_imm3_abs8_full()
{
	TMP2 = 0xffffff00 | IR[0];
	if(icount <= bcount) { inst_substate = 1; return; }
	TMP1 = read8(TMP2);
	if(TMP1 & (1 << ((IR[1] >> 4) & 7)))
		CCR |= F_C;
	else
		CCR &= ~F_C;
	if(icount <= bcount) { inst_substate = 2; return; }
	prefetch();
}

void h8_device::bld_imm3_abs8_partial()
{
switch(inst_substate) {
case 0:
	TMP2 = 0xffffff00 | IR[0];
	if(icount <= bcount) { inst_substate = 1; return; }
case 1:;
	TMP1 = read8(TMP2);
	if(TMP1 & (1 << ((IR[1] >> 4) & 7)))
		CCR |= F_C;
	else
		CCR &= ~F_C;
	if(icount <= bcount) { inst_substate = 2; return; }
case 2:;
	prefetch();
	break;
}
	inst_substate = 0;
}

void h8_device::bild_imm3_abs8_full()
{
	TMP2 = 0xffffff00 | IR[0];
	if(icount <= bcount) { inst_substate = 1; return; }
	TMP1 = read8(TMP2);
	if(!(TMP1 & (1 << ((IR[1] >> 4) & 7))))
		CCR |= F_C;
	else
		CCR &= ~F_C;
	if(icount <= bcount) { inst_substate = 2; return; }
	prefetch();
}

void h8_device::bild_imm3_abs8_partial()
{
switch(inst_substate) {
case 0:
	TMP2 = 0xffffff00 | IR[0];
	if(icount <= bcount) { inst_substate = 1; return; }
case 1:;
	TMP1 = read8(TMP2);
	if(!(TMP1 & (1 << ((IR[1] >> 4) & 7))))
		CCR |= F_C;
	else
		CCR &= ~F_C;
	if(icount <= bcount) { inst_substate = 2; return; }
case 2:;
	prefetch();
	break;
}
	inst_substate = 0;
}

void h8_device::bset_r8h_abs8_full()
{
	TMP2 = 0xffffff00 | IR[0];
	if(icount <= bcount) { inst_substate = 1; return; }
	TMP1 = read8(TMP2);
	TMP1 |= 1 << ((r8_r(IR[1] >> 4)) & 7);
	if(icount <= bcount) { inst_substate = 2; return; }
	prefetch_start();
	if(icount <= bcount) { inst_substate = 3; return; }
	write8(TMP2, TMP1);
	prefetch_done();
}

void h8_device::bset_r8h_abs8_partial()
{
switch(inst_substate) {
case 0:
	TMP2 = 0xffffff00 | IR[0];
	if(icount <= bcount) { inst_substate = 1; return; }
case 1:;
	TMP1 = read8(TMP2);
	TMP1 |= 1 << ((r8_r(IR[1] >> 4)) & 7);
	if(icount <= bcount) { inst_substate = 2; return; }
case 2:;
	prefetch_start();
	if(icount <= bcount) { inst_substate = 3; return; }
case 3:;
	write8(TMP2, TMP1);
	prefetch_done();
	break;
}
	inst_substate = 0;
}

void h8_device::bnot_r8h_abs8_full()
{
	TMP2 = 0xffffff00 | IR[0];
	if(icount <= bcount) { inst_substate = 1; return; }
	TMP1 = read8(TMP2);
	TMP1 ^= 1 << ((r8_r(IR[1] >> 4)) & 7);
	if(icount <= bcount) { inst_substate = 2; return; }
	prefetch_start();
	if(icount <= bcount) { inst_substate = 3; return; }
	write8(TMP2, TMP1);
	prefetch_done();
}

void h8_device::bnot_r8h_abs8_partial()
{
switch(inst_substate) {
case 0:
	TMP2 = 0xffffff00 | IR[0];
	if(icount <= bcount) { inst_substate = 1; return; }
case 1:;
	TMP1 = read8(TMP2);
	TMP1 ^= 1 << ((r8_r(IR[1] >> 4)) & 7);
	if(icount <= bcount) { inst_substate = 2; return; }
case 2:;
	prefetch_start();
	if(icount <= bcount) { inst_substate = 3; return; }
case 3:;
	write8(TMP2, TMP1);
	prefetch_done();
	break;
}
	inst_substate = 0;
}

void h8_device::bclr_r8h_abs8_full()
{
	TMP2 = 0xffffff00 | IR[0];
	if(icount <= bcount) { inst_substate = 1; return; }
	TMP1 = read8(TMP2);
	TMP1 &= ~(1 << ((r8_r(IR[1] >> 4)) & 7));
	if(icount <= bcount) { inst_substate = 2; return; }
	prefetch_start();
	if(icount <= bcount) { inst_substate = 3; return; }
	write8(TMP2, TMP1);
	prefetch_done();
}

void h8_device::bclr_r8h_abs8_partial()
{
switch(inst_substate) {
case 0:
	TMP2 = 0xffffff00 | IR[0];
	if(icount <= bcount) { inst_substate = 1; return; }
case 1:;
	TMP1 = read8(TMP2);
	TMP1 &= ~(1 << ((r8_r(IR[1] >> 4)) & 7));
	if(icount <= bcount) { inst_substate = 2; return; }
case 2:;
	prefetch_start();
	if(icount <= bcount) { inst_substate = 3; return; }
case 3:;
	write8(TMP2, TMP1);
	prefetch_done();
	break;
}
	inst_substate = 0;
}

void h8_device::bst_imm3_abs8_full()
{
	TMP2 = 0xffffff00 | IR[0];
	if(icount <= bcount) { inst_substate = 1; return; }
	TMP1 = read8(TMP2);
	if(icount <= bcount) { inst_substate = 2; return; }
	prefetch_start();
	if(CCR & F_C)
		TMP1 |= 1 << ((IR[0] >> 4) & 7);
	else
		TMP1 &= ~(1 << ((IR[0] >> 4) & 7));
	if(icount <= bcount) { inst_substate = 3; return; }
	write8(TMP2, TMP1);
	prefetch_done();
}

void h8_device::bst_imm3_abs8_partial()
{
switch(inst_substate) {
case 0:
	TMP2 = 0xffffff00 | IR[0];
	if(icount <= bcount) { inst_substate = 1; return; }
case 1:;
	TMP1 = read8(TMP2);
	if(icount <= bcount) { inst_substate = 2; return; }
case 2:;
	prefetch_start();
	if(CCR & F_C)
		TMP1 |= 1 << ((IR[0] >> 4) & 7);
	else
		TMP1 &= ~(1 << ((IR[0] >> 4) & 7));
	if(icount <= bcount) { inst_substate = 3; return; }
case 3:;
	write8(TMP2, TMP1);
	prefetch_done();
	break;
}
	inst_substate = 0;
}

void h8_device::bist_imm3_abs8_full()
{
	TMP2 = 0xffffff00 | IR[0];
	if(icount <= bcount) { inst_substate = 1; return; }
	TMP1 = read8(TMP2);
	if(icount <= bcount) { inst_substate = 2; return; }
	prefetch_start();
	if(!(CCR & F_C))
		TMP1 |= 1 << ((IR[0] >> 4) & 7);
	else
		TMP1 &= ~(1 << ((IR[0] >> 4) & 7));
	if(icount <= bcount) { inst_substate = 3; return; }
	write8(TMP2, TMP1);
	prefetch_done();
}

void h8_device::bist_imm3_abs8_partial()
{
switch(inst_substate) {
case 0:
	TMP2 = 0xffffff00 | IR[0];
	if(icount <= bcount) { inst_substate = 1; return; }
case 1:;
	TMP1 = read8(TMP2);
	if(icount <= bcount) { inst_substate = 2; return; }
case 2:;
	prefetch_start();
	if(!(CCR & F_C))
		TMP1 |= 1 << ((IR[0] >> 4) & 7);
	else
		TMP1 &= ~(1 << ((IR[0] >> 4) & 7));
	if(icount <= bcount) { inst_substate = 3; return; }
case 3:;
	write8(TMP2, TMP1);
	prefetch_done();
	break;
}
	inst_substate = 0;
}

void h8_device::bset_imm3_abs8_full()
{
	TMP2 = 0xffffff00 | IR[0];
	if(icount <= bcount) { inst_substate = 1; return; }
	TMP1 = read8(TMP2);
	if(icount <= bcount) { inst_substate = 2; return; }
	prefetch_start();
	TMP1 |= 1 << ((IR[1] >> 4) & 7);
	if(icount <= bcount) { inst_substate = 3; return; }
	write8(TMP2, TMP1);
	prefetch_done();
}

void h8_device::bset_imm3_abs8_partial()
{
switch(inst_substate) {
case 0:
	TMP2 = 0xffffff00 | IR[0];
	if(icount <= bcount) { inst_substate = 1; return; }
case 1:;
	TMP1 = read8(TMP2);
	if(icount <= bcount) { inst_substate = 2; return; }
case 2:;
	prefetch_start();
	TMP1 |= 1 << ((IR[1] >> 4) & 7);
	if(icount <= bcount) { inst_substate = 3; return; }
case 3:;
	write8(TMP2, TMP1);
	prefetch_done();
	break;
}
	inst_substate = 0;
}

void h8_device::bnot_imm3_abs8_full()
{
	TMP2 = 0xffffff00 | IR[0];
	if(icount <= bcount) { inst_substate = 1; return; }
	TMP1 = read8(TMP2);
	if(icount <= bcount) { inst_substate = 2; return; }
	prefetch_start();
	TMP1 ^= 1 << ((IR[1] >> 4) & 7);
	if(icount <= bcount) { inst_substate = 3; return; }
	write8(TMP2, TMP1);
	prefetch_done();
}

void h8_device::bnot_imm3_abs8_partial()
{
switch(inst_substate) {
case 0:
	TMP2 = 0xffffff00 | IR[0];
	if(icount <= bcount) { inst_substate = 1; return; }
case 1:;
	TMP1 = read8(TMP2);
	if(icount <= bcount) { inst_substate = 2; return; }
case 2:;
	prefetch_start();
	TMP1 ^= 1 << ((IR[1] >> 4) & 7);
	if(icount <= bcount) { inst_substate = 3; return; }
case 3:;
	write8(TMP2, TMP1);
	prefetch_done();
	break;
}
	inst_substate = 0;
}

void h8_device::bclr_imm3_abs8_full()
{
	TMP2 = 0xffffff00 | IR[0];
	if(icount <= bcount) { inst_substate = 1; return; }
	TMP1 = read8(TMP2);
	if(icount <= bcount) { inst_substate = 2; return; }
	prefetch_start();
	TMP1 &= ~(1 << ((IR[1] >> 4) & 7));
	if(icount <= bcount) { inst_substate = 3; return; }
	write8(TMP2, TMP1);
	prefetch_done();
}

void h8_device::bclr_imm3_abs8_partial()
{
switch(inst_substate) {
case 0:
	TMP2 = 0xffffff00 | IR[0];
	if(icount <= bcount) { inst_substate = 1; return; }
case 1:;
	TMP1 = read8(TMP2);
	if(icount <= bcount) { inst_substate = 2; return; }
case 2:;
	prefetch_start();
	TMP1 &= ~(1 << ((IR[1] >> 4) & 7));
	if(icount <= bcount) { inst_substate = 3; return; }
case 3:;
	write8(TMP2, TMP1);
	prefetch_done();
	break;
}
	inst_substate = 0;
}

void h8_device::add_b_imm8_r8u_full()
{
	r8_w(IR[0] >> 8, do_add8(r8_r(IR[0] >> 8), IR[0]));
	if(icount <= bcount) { inst_substate = 1; return; }
	prefetch();
}

void h8_device::add_b_imm8_r8u_partial()
{
switch(inst_substate) {
case 0:
	r8_w(IR[0] >> 8, do_add8(r8_r(IR[0] >> 8), IR[0]));
	if(icount <= bcount) { inst_substate = 1; return; }
case 1:;
	prefetch();
	break;
}
	inst_substate = 0;
}

void h8_device::addx_b_imm8_r8u_full()
{
	r8_w(IR[0] >> 8, do_addx8(r8_r(IR[0] >> 8), IR[0]));
	if(icount <= bcount) { inst_substate = 1; return; }
	prefetch();
}

void h8_device::addx_b_imm8_r8u_partial()
{
switch(inst_substate) {
case 0:
	r8_w(IR[0] >> 8, do_addx8(r8_r(IR[0] >> 8), IR[0]));
	if(icount <= bcount) { inst_substate = 1; return; }
case 1:;
	prefetch();
	break;
}
	inst_substate = 0;
}

void h8_device::cmp_b_imm8_r8u_full()
{
	do_sub8(r8_r(IR[0]>>8), IR[0]);
	if(icount <= bcount) { inst_substate = 1; return; }
	prefetch();
}

void h8_device::cmp_b_imm8_r8u_partial()
{
switch(inst_substate) {
case 0:
	do_sub8(r8_r(IR[0]>>8), IR[0]);
	if(icount <= bcount) { inst_substate = 1; return; }
case 1:;
	prefetch();
	break;
}
	inst_substate = 0;
}

void h8_device::subx_b_imm8_r8u_full()
{
	r8_w(IR[0] >> 8, do_subx8(r8_r(IR[0] >> 8), IR[0]));
	if(icount <= bcount) { inst_substate = 1; return; }
	prefetch();
}

void h8_device::subx_b_imm8_r8u_partial()
{
switch(inst_substate) {
case 0:
	r8_w(IR[0] >> 8, do_subx8(r8_r(IR[0] >> 8), IR[0]));
	if(icount <= bcount) { inst_substate = 1; return; }
case 1:;
	prefetch();
	break;
}
	inst_substate = 0;
}

void h8_device::or_b_imm8_r8u_full()
{
	TMP1 = IR[0] | r8_r(IR[0] >> 8);
	set_nzv8(TMP1);
	r8_w(IR[0] >> 8, TMP1);
	if(icount <= bcount) { inst_substate = 1; return; }
	prefetch();
}

void h8_device::or_b_imm8_r8u_partial()
{
switch(inst_substate) {
case 0:
	TMP1 = IR[0] | r8_r(IR[0] >> 8);
	set_nzv8(TMP1);
	r8_w(IR[0] >> 8, TMP1);
	if(icount <= bcount) { inst_substate = 1; return; }
case 1:;
	prefetch();
	break;
}
	inst_substate = 0;
}

void h8_device::xor_b_imm8_r8u_full()
{
	TMP1 = IR[0] ^ r8_r(IR[0] >> 8);
	set_nzv8(TMP1);
	r8_w(IR[0] >> 8, TMP1);
	if(icount <= bcount) { inst_substate = 1; return; }
	prefetch();
}

void h8_device::xor_b_imm8_r8u_partial()
{
switch(inst_substate) {
case 0:
	TMP1 = IR[0] ^ r8_r(IR[0] >> 8);
	set_nzv8(TMP1);
	r8_w(IR[0] >> 8, TMP1);
	if(icount <= bcount) { inst_substate = 1; return; }
case 1:;
	prefetch();
	break;
}
	inst_substate = 0;
}

void h8_device::and_b_imm8_r8u_full()
{
	TMP1 = IR[0] & r8_r(IR[0] >> 8);
	set_nzv8(TMP1);
	r8_w(IR[0] >> 8, TMP1);
	if(icount <= bcount) { inst_substate = 1; return; }
	prefetch();
}

void h8_device::and_b_imm8_r8u_partial()
{
switch(inst_substate) {
case 0:
	TMP1 = IR[0] & r8_r(IR[0] >> 8);
	set_nzv8(TMP1);
	r8_w(IR[0] >> 8, TMP1);
	if(icount <= bcount) { inst_substate = 1; return; }
case 1:;
	prefetch();
	break;
}
	inst_substate = 0;
}

void h8_device::mov_b_imm8_r8u_full()
{
	set_nzv8(IR[0]);
	r8_w(IR[0] >> 8, IR[0]);
	if(icount <= bcount) { inst_substate = 1; return; }
	prefetch();
}

void h8_device::mov_b_imm8_r8u_partial()
{
switch(inst_substate) {
case 0:
	set_nzv8(IR[0]);
	r8_w(IR[0] >> 8, IR[0]);
	if(icount <= bcount) { inst_substate = 1; return; }
case 1:;
	prefetch();
	break;
}
	inst_substate = 0;
}

void h8_device::state_reset_full()
{
	CCR |= F_I;
	EXR = EXR_I | EXR_NC;
	if(mode_advanced) {
	if(icount <= bcount) { inst_substate = 1; return; }
		IR[0] = read16i(0);
	if(icount <= bcount) { inst_substate = 2; return; }
		IR[1] = read16i(2);
		PC = (IR[0] << 16) | IR[1];
	} else {
	if(icount <= bcount) { inst_substate = 3; return; }
		PC = read16i(0);
	}
	update_irq_filter();
	if(icount <= bcount) { inst_substate = 4; return; }
	prefetch_noirq();
}

void h8_device::state_reset_partial()
{
switch(inst_substate) {
case 0:
	CCR |= F_I;
	EXR = EXR_I | EXR_NC;
	if(mode_advanced) {
	if(icount <= bcount) { inst_substate = 1; return; }
case 1:;
		IR[0] = read16i(0);
	if(icount <= bcount) { inst_substate = 2; return; }
case 2:;
		IR[1] = read16i(2);
		PC = (IR[0] << 16) | IR[1];
	} else {
	if(icount <= bcount) { inst_substate = 3; return; }
case 3:;
		PC = read16i(0);
	}
	update_irq_filter();
	if(icount <= bcount) { inst_substate = 4; return; }
case 4:;
	prefetch_noirq();
	break;
}
	inst_substate = 0;
}

void h8_device::state_irq_full()
{
	internal(1);
	TMP1 = r16_r(7) - 2;
	r16_w(7, TMP1);
	if(icount <= bcount) { inst_substate = 1; return; }
	write16(TMP1, NPC);
	TMP1 = r16_r(7) - 2;
	r16_w(7, TMP1);
	if(icount <= bcount) { inst_substate = 2; return; }
	write16(TMP1, (CCR << 8) | ((PC >> 16) & 0xff));
	if(icount <= bcount) { inst_substate = 3; return; }
	PC = read16i(2*taken_irq_vector);
	internal(1);
	irq_setup();
	update_irq_filter();
	interrupt_taken();
	if(icount <= bcount) { inst_substate = 4; return; }
	prefetch_noirq();
}

void h8_device::state_irq_partial()
{
switch(inst_substate) {
case 0:
	internal(1);
	TMP1 = r16_r(7) - 2;
	r16_w(7, TMP1);
	if(icount <= bcount) { inst_substate = 1; return; }
case 1:;
	write16(TMP1, NPC);
	TMP1 = r16_r(7) - 2;
	r16_w(7, TMP1);
	if(icount <= bcount) { inst_substate = 2; return; }
case 2:;
	write16(TMP1, (CCR << 8) | ((PC >> 16) & 0xff));
	if(icount <= bcount) { inst_substate = 3; return; }
case 3:;
	PC = read16i(2*taken_irq_vector);
	internal(1);
	irq_setup();
	update_irq_filter();
	interrupt_taken();
	if(icount <= bcount) { inst_substate = 4; return; }
case 4:;
	prefetch_noirq();
	break;
}
	inst_substate = 0;
}

void h8_device::state_dma_full()
{
	if(current_dma->mode_16) {
	if(icount <= bcount) { inst_substate = 1; return; }
		TMP1 = read16(current_dma->source);
	if(icount <= bcount) { inst_substate = 2; return; }
		write16(current_dma->dest, TMP1);
	} else {
	if(icount <= bcount) { inst_substate = 3; return; }
		TMP1 = read8(current_dma->source);
	if(icount <= bcount) { inst_substate = 4; return; }
		write8(current_dma->dest, TMP1);
	}
	current_dma->source += current_dma->incs;
	current_dma->dest   += current_dma->incd;
	current_dma->count--;
	if(!current_dma->count) {
		uint8_t id = current_dma->id;
		current_dma = nullptr;
		dma_device->count_done(id);
	}
	prefetch_done();
}

void h8_device::state_dma_partial()
{
switch(inst_substate) {
case 0:
	if(current_dma->mode_16) {
	if(icount <= bcount) { inst_substate = 1; return; }
case 1:;
		TMP1 = read16(current_dma->source);
	if(icount <= bcount) { inst_substate = 2; return; }
case 2:;
		write16(current_dma->dest, TMP1);
	} else {
	if(icount <= bcount) { inst_substate = 3; return; }
case 3:;
		TMP1 = read8(current_dma->source);
	if(icount <= bcount) { inst_substate = 4; return; }
case 4:;
		write8(current_dma->dest, TMP1);
	}
	current_dma->source += current_dma->incs;
	current_dma->dest   += current_dma->incd;
	current_dma->count--;
	if(!current_dma->count) {
		uint8_t id = current_dma->id;
		current_dma = nullptr;
		dma_device->count_done(id);
	}
	prefetch_done();
	break;
}
	inst_substate = 0;
}

void h8_device::dispatch_0100_full()
{
	if(icount <= bcount) { inst_substate = 1; return; }
	IR[1] = fetch();
	inst_state = 0x20000 | IR[1];
}

void h8_device::dispatch_0100_partial()
{
switch(inst_substate) {
case 0:
	if(icount <= bcount) { inst_substate = 1; return; }
case 1:;
	IR[1] = fetch();
	inst_state = 0x20000 | IR[1];
	break;
}
	inst_substate = 0;
}

void h8_device::dispatch_01007800_full()
{
	if(icount <= bcount) { inst_substate = 1; return; }
	IR[2] = fetch();
	inst_state = 0x30000 | IR[2];
}

void h8_device::dispatch_01007800_partial()
{
switch(inst_substate) {
case 0:
	if(icount <= bcount) { inst_substate = 1; return; }
case 1:;
	IR[2] = fetch();
	inst_state = 0x30000 | IR[2];
	break;
}
	inst_substate = 0;
}

void h8_device::dispatch_0110_full()
{
	if(icount <= bcount) { inst_substate = 1; return; }
	IR[1] = fetch();
	inst_state = 0x40000 | IR[1];
}

void h8_device::dispatch_0110_partial()
{
switch(inst_substate) {
case 0:
	if(icount <= bcount) { inst_substate = 1; return; }
case 1:;
	IR[1] = fetch();
	inst_state = 0x40000 | IR[1];
	break;
}
	inst_substate = 0;
}

void h8_device::dispatch_0120_full()
{
	if(icount <= bcount) { inst_substate = 1; return; }
	IR[1] = fetch();
	inst_state = 0x50000 | IR[1];
}

void h8_device::dispatch_0120_partial()
{
switch(inst_substate) {
case 0:
	if(icount <= bcount) { inst_substate = 1; return; }
case 1:;
	IR[1] = fetch();
	inst_state = 0x50000 | IR[1];
	break;
}
	inst_substate = 0;
}

void h8_device::dispatch_0130_full()
{
	if(icount <= bcount) { inst_substate = 1; return; }
	IR[1] = fetch();
	inst_state = 0x60000 | IR[1];
}

void h8_device::dispatch_0130_partial()
{
switch(inst_substate) {
case 0:
	if(icount <= bcount) { inst_substate = 1; return; }
case 1:;
	IR[1] = fetch();
	inst_state = 0x60000 | IR[1];
	break;
}
	inst_substate = 0;
}

void h8_device::dispatch_0140_full()
{
	if(icount <= bcount) { inst_substate = 1; return; }
	IR[1] = fetch();
	inst_state = 0x70000 | IR[1];
}

void h8_device::dispatch_0140_partial()
{
switch(inst_substate) {
case 0:
	if(icount <= bcount) { inst_substate = 1; return; }
case 1:;
	IR[1] = fetch();
	inst_state = 0x70000 | IR[1];
	break;
}
	inst_substate = 0;
}

void h8_device::dispatch_01407800_full()
{
	if(icount <= bcount) { inst_substate = 1; return; }
	IR[2] = fetch();
	inst_state = 0x80000 | IR[2];
}

void h8_device::dispatch_01407800_partial()
{
switch(inst_substate) {
case 0:
	if(icount <= bcount) { inst_substate = 1; return; }
case 1:;
	IR[2] = fetch();
	inst_state = 0x80000 | IR[2];
	break;
}
	inst_substate = 0;
}

void h8_device::dispatch_01407880_full()
{
	if(icount <= bcount) { inst_substate = 1; return; }
	IR[2] = fetch();
	inst_state = 0x90000 | IR[2];
}

void h8_device::dispatch_01407880_partial()
{
switch(inst_substate) {
case 0:
	if(icount <= bcount) { inst_substate = 1; return; }
case 1:;
	IR[2] = fetch();
	inst_state = 0x90000 | IR[2];
	break;
}
	inst_substate = 0;
}

void h8_device::dispatch_0141_full()
{
	if(icount <= bcount) { inst_substate = 1; return; }
	IR[1] = fetch();
	inst_state = 0xa0000 | IR[1];
}

void h8_device::dispatch_0141_partial()
{
switch(inst_substate) {
case 0:
	if(icount <= bcount) { inst_substate = 1; return; }
case 1:;
	IR[1] = fetch();
	inst_state = 0xa0000 | IR[1];
	break;
}
	inst_substate = 0;
}

void h8_device::dispatch_01417800_full()
{
	if(icount <= bcount) { inst_substate = 1; return; }
	IR[2] = fetch();
	inst_state = 0xb0000 | IR[2];
}

void h8_device::dispatch_01417800_partial()
{
switch(inst_substate) {
case 0:
	if(icount <= bcount) { inst_substate = 1; return; }
case 1:;
	IR[2] = fetch();
	inst_state = 0xb0000 | IR[2];
	break;
}
	inst_substate = 0;
}

void h8_device::dispatch_01417880_full()
{
	if(icount <= bcount) { inst_substate = 1; return; }
	IR[2] = fetch();
	inst_state = 0xc0000 | IR[2];
}

void h8_device::dispatch_01417880_partial()
{
switch(inst_substate) {
case 0:
	if(icount <= bcount) { inst_substate = 1; return; }
case 1:;
	IR[2] = fetch();
	inst_state = 0xc0000 | IR[2];
	break;
}
	inst_substate = 0;
}

void h8_device::dispatch_0160_full()
{
	if(icount <= bcount) { inst_substate = 1; return; }
	IR[1] = fetch();
	inst_state = 0xd0000 | IR[1];
}

void h8_device::dispatch_0160_partial()
{
switch(inst_substate) {
case 0:
	if(icount <= bcount) { inst_substate = 1; return; }
case 1:;
	IR[1] = fetch();
	inst_state = 0xd0000 | IR[1];
	break;
}
	inst_substate = 0;
}

void h8_device::dispatch_01c0_full()
{
	if(icount <= bcount) { inst_substate = 1; return; }
	IR[1] = fetch();
	inst_state = 0xe0000 | IR[1];
}

void h8_device::dispatch_01c0_partial()
{
switch(inst_substate) {
case 0:
	if(icount <= bcount) { inst_substate = 1; return; }
case 1:;
	IR[1] = fetch();
	inst_state = 0xe0000 | IR[1];
	break;
}
	inst_substate = 0;
}

void h8_device::dispatch_01d0_full()
{
	if(icount <= bcount) { inst_substate = 1; return; }
	IR[1] = fetch();
	inst_state = 0xf0000 | IR[1];
}

void h8_device::dispatch_01d0_partial()
{
switch(inst_substate) {
case 0:
	if(icount <= bcount) { inst_substate = 1; return; }
case 1:;
	IR[1] = fetch();
	inst_state = 0xf0000 | IR[1];
	break;
}
	inst_substate = 0;
}

void h8_device::dispatch_01e0_full()
{
	if(icount <= bcount) { inst_substate = 1; return; }
	IR[1] = fetch();
	inst_state = 0x100000 | IR[1];
}

void h8_device::dispatch_01e0_partial()
{
switch(inst_substate) {
case 0:
	if(icount <= bcount) { inst_substate = 1; return; }
case 1:;
	IR[1] = fetch();
	inst_state = 0x100000 | IR[1];
	break;
}
	inst_substate = 0;
}

void h8_device::dispatch_01f0_full()
{
	if(icount <= bcount) { inst_substate = 1; return; }
	IR[1] = fetch();
	inst_state = 0x110000 | IR[1];
}

void h8_device::dispatch_01f0_partial()
{
switch(inst_substate) {
case 0:
	if(icount <= bcount) { inst_substate = 1; return; }
case 1:;
	IR[1] = fetch();
	inst_state = 0x110000 | IR[1];
	break;
}
	inst_substate = 0;
}

void h8_device::dispatch_6a10_full()
{
	if(icount <= bcount) { inst_substate = 1; return; }
	IR[1] = fetch();
	if(icount <= bcount) { inst_substate = 2; return; }
	IR[2] = fetch();
	inst_state = 0x120000 | IR[2];
}

void h8_device::dispatch_6a10_partial()
{
switch(inst_substate) {
case 0:
	if(icount <= bcount) { inst_substate = 1; return; }
case 1:;
	IR[1] = fetch();
	if(icount <= bcount) { inst_substate = 2; return; }
case 2:;
	IR[2] = fetch();
	inst_state = 0x120000 | IR[2];
	break;
}
	inst_substate = 0;
}

void h8_device::dispatch_6a18_full()
{
	if(icount <= bcount) { inst_substate = 1; return; }
	IR[1] = fetch();
	if(icount <= bcount) { inst_substate = 2; return; }
	IR[2] = fetch();
	inst_state = 0x130000 | IR[2];
}

void h8_device::dispatch_6a18_partial()
{
switch(inst_substate) {
case 0:
	if(icount <= bcount) { inst_substate = 1; return; }
case 1:;
	IR[1] = fetch();
	if(icount <= bcount) { inst_substate = 2; return; }
case 2:;
	IR[2] = fetch();
	inst_state = 0x130000 | IR[2];
	break;
}
	inst_substate = 0;
}

void h8_device::dispatch_6a30_full()
{
	if(icount <= bcount) { inst_substate = 1; return; }
	IR[1] = fetch();
	if(icount <= bcount) { inst_substate = 2; return; }
	IR[2] = fetch();
	if(icount <= bcount) { inst_substate = 3; return; }
	IR[3] = fetch();
	inst_state = 0x140000 | IR[3];
}

void h8_device::dispatch_6a30_partial()
{
switch(inst_substate) {
case 0:
	if(icount <= bcount) { inst_substate = 1; return; }
case 1:;
	IR[1] = fetch();
	if(icount <= bcount) { inst_substate = 2; return; }
case 2:;
	IR[2] = fetch();
	if(icount <= bcount) { inst_substate = 3; return; }
case 3:;
	IR[3] = fetch();
	inst_state = 0x140000 | IR[3];
	break;
}
	inst_substate = 0;
}

void h8_device::dispatch_6a38_full()
{
	if(icount <= bcount) { inst_substate = 1; return; }
	IR[1] = fetch();
	if(icount <= bcount) { inst_substate = 2; return; }
	IR[2] = fetch();
	if(icount <= bcount) { inst_substate = 3; return; }
	IR[3] = fetch();
	inst_state = 0x150000 | IR[3];
}

void h8_device::dispatch_6a38_partial()
{
switch(inst_substate) {
case 0:
	if(icount <= bcount) { inst_substate = 1; return; }
case 1:;
	IR[1] = fetch();
	if(icount <= bcount) { inst_substate = 2; return; }
case 2:;
	IR[2] = fetch();
	if(icount <= bcount) { inst_substate = 3; return; }
case 3:;
	IR[3] = fetch();
	inst_state = 0x150000 | IR[3];
	break;
}
	inst_substate = 0;
}

void h8_device::dispatch_7800_full()
{
	if(icount <= bcount) { inst_substate = 1; return; }
	IR[1] = fetch();
	inst_state = 0x160000 | IR[1];
}

void h8_device::dispatch_7800_partial()
{
switch(inst_substate) {
case 0:
	if(icount <= bcount) { inst_substate = 1; return; }
case 1:;
	IR[1] = fetch();
	inst_state = 0x160000 | IR[1];
	break;
}
	inst_substate = 0;
}

void h8_device::dispatch_7b5c_full()
{
	if(icount <= bcount) { inst_substate = 1; return; }
	IR[1] = fetch();
	inst_state = 0x170000 | IR[1];
}

void h8_device::dispatch_7b5c_partial()
{
switch(inst_substate) {
case 0:
	if(icount <= bcount) { inst_substate = 1; return; }
case 1:;
	IR[1] = fetch();
	inst_state = 0x170000 | IR[1];
	break;
}
	inst_substate = 0;
}

void h8_device::dispatch_7bd4_full()
{
	if(icount <= bcount) { inst_substate = 1; return; }
	IR[1] = fetch();
	inst_state = 0x180000 | IR[1];
}

void h8_device::dispatch_7bd4_partial()
{
switch(inst_substate) {
case 0:
	if(icount <= bcount) { inst_substate = 1; return; }
case 1:;
	IR[1] = fetch();
	inst_state = 0x180000 | IR[1];
	break;
}
	inst_substate = 0;
}

void h8_device::dispatch_7c00_full()
{
	if(icount <= bcount) { inst_substate = 1; return; }
	IR[1] = fetch();
	inst_state = 0x190000 | IR[1];
}

void h8_device::dispatch_7c00_partial()
{
switch(inst_substate) {
case 0:
	if(icount <= bcount) { inst_substate = 1; return; }
case 1:;
	IR[1] = fetch();
	inst_state = 0x190000 | IR[1];
	break;
}
	inst_substate = 0;
}

void h8_device::dispatch_7d00_full()
{
	if(icount <= bcount) { inst_substate = 1; return; }
	IR[1] = fetch();
	inst_state = 0x1a0000 | IR[1];
}

void h8_device::dispatch_7d00_partial()
{
switch(inst_substate) {
case 0:
	if(icount <= bcount) { inst_substate = 1; return; }
case 1:;
	IR[1] = fetch();
	inst_state = 0x1a0000 | IR[1];
	break;
}
	inst_substate = 0;
}

void h8_device::dispatch_7e00_full()
{
	if(icount <= bcount) { inst_substate = 1; return; }
	IR[1] = fetch();
	inst_state = 0x1b0000 | IR[1];
}

void h8_device::dispatch_7e00_partial()
{
switch(inst_substate) {
case 0:
	if(icount <= bcount) { inst_substate = 1; return; }
case 1:;
	IR[1] = fetch();
	inst_state = 0x1b0000 | IR[1];
	break;
}
	inst_substate = 0;
}

void h8_device::dispatch_7f00_full()
{
	if(icount <= bcount) { inst_substate = 1; return; }
	IR[1] = fetch();
	inst_state = 0x1c0000 | IR[1];
}

void h8_device::dispatch_7f00_partial()
{
switch(inst_substate) {
case 0:
	if(icount <= bcount) { inst_substate = 1; return; }
case 1:;
	IR[1] = fetch();
	inst_state = 0x1c0000 | IR[1];
	break;
}
	inst_substate = 0;
}

void h8_device::do_exec_full()
{
	switch(inst_state >> 16) {
	case 0x00: {
		switch((inst_state >> 8) & 0xff) {
		case 0x00: {
			switch(inst_state & 0xff) {
			case 0x00: nop_full(); break;
			default: illegal(); break;
			}
			break;
		}
		case 0x01: {
			switch(inst_state & 0xff) {
			case 0x80: sleep_full(); break;
			default: illegal(); break;
			}
			break;
		}
		case 0x02: {
			switch(inst_state & 0xf0) {
			case 0x00: stc_ccr_r8l_full(); break;
			default: illegal(); break;
			}
			break;
		}
		case 0x03: {
			switch(inst_state & 0xf0) {
			case 0x00: ldc_r8l_ccr_full(); break;
			default: illegal(); break;
			}
			break;
		}
		case 0x04: {
			orc_imm8_ccr_full();
			break;
		}
		case 0x05: {
			xorc_imm8_ccr_full();
			break;
		}
		case 0x06: {
			andc_imm8_ccr_full();
			break;
		}
		case 0x07: {
			ldc_imm8_ccr_full();
			break;
		}
		case 0x08: {
			add_b_r8h_r8l_full();
			break;
		}
		case 0x09: {
			switch(inst_state & 0x88) {
			case 0x00: add_w_r16h_r16l_full(); break;
			default: illegal(); break;
			}
			break;
		}
		case 0x0a: {
			switch(inst_state & 0xf0) {
			case 0x00: inc_b_one_r8l_full(); break;
			default: illegal(); break;
			}
			break;
		}
		case 0x0b: {
			switch(inst_state & 0xf8) {
			case 0x00: adds_l_one_r16l_full(); break;
			case 0x80: adds_l_two_r16l_full(); break;
			case 0x90: adds_l_four_r16l_full(); break;
			default: illegal(); break;
			}
			break;
		}
		case 0x0c: {
			mov_b_r8h_r8l_full();
			break;
		}
		case 0x0d: {
			switch(inst_state & 0x88) {
			case 0x00: mov_w_r16h_r16l_full(); break;
			default: illegal(); break;
			}
			break;
		}
		case 0x0e: {
			addx_b_r8h_r8l_full();
			break;
		}
		case 0x0f: {
			switch(inst_state & 0xf0) {
			case 0x00: daa_b_r8l_full(); break;
			default: illegal(); break;
			}
			break;
		}
		case 0x10: {
			switch(inst_state & 0xf0) {
			case 0x00: shll_b_r8l_full(); break;
			case 0x80: shal_b_r8l_full(); break;
			default: illegal(); break;
			}
			break;
		}
		case 0x11: {
			switch(inst_state & 0xf0) {
			case 0x00: shlr_b_r8l_full(); break;
			case 0x80: shar_b_r8l_full(); break;
			default: illegal(); break;
			}
			break;
		}
		case 0x12: {
			switch(inst_state & 0xf0) {
			case 0x00: rotxl_b_r8l_full(); break;
			case 0x80: rotl_b_r8l_full(); break;
			default: illegal(); break;
			}
			break;
		}
		case 0x13: {
			switch(inst_state & 0xf0) {
			case 0x00: rotxr_b_r8l_full(); break;
			case 0x80: rotr_b_r8l_full(); break;
			default: illegal(); break;
			}
			break;
		}
		case 0x14: {
			or_b_r8h_r8l_full();
			break;
		}
		case 0x15: {
			xor_b_r8h_r8l_full();
			break;
		}
		case 0x16: {
			and_b_r8h_r8l_full();
			break;
		}
		case 0x17: {
			switch(inst_state & 0xf0) {
			case 0x00: not_b_r8l_full(); break;
			case 0x80: neg_b_r8l_full(); break;
			default: illegal(); break;
			}
			break;
		}
		case 0x18: {
			sub_b_r8h_r8l_full();
			break;
		}
		case 0x19: {
			switch(inst_state & 0x88) {
			case 0x00: sub_w_r16h_r16l_full(); break;
			default: illegal(); break;
			}
			break;
		}
		case 0x1a: {
			switch(inst_state & 0xf0) {
			case 0x00: dec_b_one_r8l_full(); break;
			default: illegal(); break;
			}
			break;
		}
		case 0x1b: {
			switch(inst_state & 0xf8) {
			case 0x00: subs_l_one_r16l_full(); break;
			case 0x50: dec_w_one_r16l_full(); break;
			case 0x80: subs_l_two_r16l_full(); break;
			case 0x90: subs_l_four_r16l_full(); break;
			case 0xd0: dec_w_two_r16l_full(); break;
			default: illegal(); break;
			}
			break;
		}
		case 0x1c: {
			cmp_b_r8h_r8l_full();
			break;
		}
		case 0x1d: {
			switch(inst_state & 0x88) {
			case 0x00: cmp_w_r16h_r16l_full(); break;
			default: illegal(); break;
			}
			break;
		}
		case 0x1e: {
			subx_b_r8h_r8l_full();
			break;
		}
		case 0x1f: {
			switch(inst_state & 0xf0) {
			case 0x00: das_b_r8l_full(); break;
			default: illegal(); break;
			}
			break;
		}
		case 0x20: case 0x21: case 0x22: case 0x23: case 0x24: case 0x25: case 0x26: case 0x27: case 0x28: case 0x29: case 0x2a: case 0x2b: case 0x2c: case 0x2d: case 0x2e: case 0x2f: {
			mov_b_abs8_r8u_full();
			break;
		}
		case 0x30: case 0x31: case 0x32: case 0x33: case 0x34: case 0x35: case 0x36: case 0x37: case 0x38: case 0x39: case 0x3a: case 0x3b: case 0x3c: case 0x3d: case 0x3e: case 0x3f: {
			mov_b_r8u_abs8_full();
			break;
		}
		case 0x40: {
			bt_rel8_full();
			break;
		}
		case 0x41: {
			bf_rel8_full();
			break;
		}
		case 0x42: {
			bhi_rel8_full();
			break;
		}
		case 0x43: {
			bls_rel8_full();
			break;
		}
		case 0x44: {
			bcc_rel8_full();
			break;
		}
		case 0x45: {
			bcs_rel8_full();
			break;
		}
		case 0x46: {
			bne_rel8_full();
			break;
		}
		case 0x47: {
			beq_rel8_full();
			break;
		}
		case 0x48: {
			bvc_rel8_full();
			break;
		}
		case 0x49: {
			bvs_rel8_full();
			break;
		}
		case 0x4a: {
			bpl_rel8_full();
			break;
		}
		case 0x4b: {
			bmi_rel8_full();
			break;
		}
		case 0x4c: {
			bge_rel8_full();
			break;
		}
		case 0x4d: {
			blt_rel8_full();
			break;
		}
		case 0x4e: {
			bgt_rel8_full();
			break;
		}
		case 0x4f: {
			ble_rel8_full();
			break;
		}
		case 0x50: {
			switch(inst_state & 0x08) {
			case 0x00: mulxu_b_r8h_r16l_full(); break;
			default: illegal(); break;
			}
			break;
		}
		case 0x51: {
			switch(inst_state & 0x08) {
			case 0x00: divxu_b_r8h_r16l_full(); break;
			default: illegal(); break;
			}
			break;
		}
		case 0x54: {
			switch(inst_state & 0xff) {
			case 0x70: rts_full(); break;
			default: illegal(); break;
			}
			break;
		}
		case 0x55: {
			bsr_rel8_full();
			break;
		}
		case 0x56: {
			switch(inst_state & 0xff) {
			case 0x70: rte_full(); break;
			default: illegal(); break;
			}
			break;
		}
		case 0x5a: {
			switch(inst_state & 0xff) {
			case 0x00: jmp_abs16e_full(); break;
			default: illegal(); break;
			}
			break;
		}
		case 0x5b: {
			jmp_abs8i_full();
			break;
		}
		case 0x5d: {
			switch(inst_state & 0x8f) {
			case 0x00: jsr_r16h_full(); break;
			default: illegal(); break;
			}
			break;
		}
		case 0x5e: {
			switch(inst_state & 0xff) {
			case 0x00: jsr_abs16e_full(); break;
			default: illegal(); break;
			}
			break;
		}
		case 0x5f: {
			jsr_abs8i_full();
			break;
		}
		case 0x60: {
			bset_r8h_r8l_full();
			break;
		}
		case 0x61: {
			bnot_r8h_r8l_full();
			break;
		}
		case 0x62: {
			bclr_r8h_r8l_full();
			break;
		}
		case 0x63: {
			btst_r8h_r8l_full();
			break;
		}
		case 0x67: {
			switch(inst_state & 0x80) {
			case 0x00: bst_imm3_r8l_full(); break;
			case 0x80: bist_imm3_r8l_full(); break;
			default: illegal(); break;
			}
			break;
		}
		case 0x68: {
			switch(inst_state & 0x80) {
			case 0x00: mov_b_r16ih_r8l_full(); break;
			case 0x80: mov_b_r8l_r16ih_full(); break;
			default: illegal(); break;
			}
			break;
		}
		case 0x69: {
			switch(inst_state & 0x88) {
			case 0x00: mov_w_r16ih_r16l_full(); break;
			case 0x80: mov_w_r16l_r16ih_full(); break;
			default: illegal(); break;
			}
			break;
		}
		case 0x6a: {
			switch(inst_state & 0xff) {
			case 0x00: case 0x01: case 0x02: case 0x03: case 0x04: case 0x05: case 0x06: case 0x07: case 0x08: case 0x09: case 0x0a: case 0x0b: case 0x0c: case 0x0d: case 0x0e: case 0x0f: mov_b_abs16_r8l_full(); break;
			case 0x10: dispatch_6a10_full(); break;
			case 0x18: dispatch_6a18_full(); break;
			case 0x40: case 0x41: case 0x42: case 0x43: case 0x44: case 0x45: case 0x46: case 0x47: case 0x48: case 0x49: case 0x4a: case 0x4b: case 0x4c: case 0x4d: case 0x4e: case 0x4f: movfpe_abs16_r8l_full(); break;
			case 0x80: case 0x81: case 0x82: case 0x83: case 0x84: case 0x85: case 0x86: case 0x87: case 0x88: case 0x89: case 0x8a: case 0x8b: case 0x8c: case 0x8d: case 0x8e: case 0x8f: mov_b_r8l_abs16_full(); break;
			case 0xc0: case 0xc1: case 0xc2: case 0xc3: case 0xc4: case 0xc5: case 0xc6: case 0xc7: case 0xc8: case 0xc9: case 0xca: case 0xcb: case 0xcc: case 0xcd: case 0xce: case 0xcf: movtpe_r8l_abs16_full(); break;
			default: illegal(); break;
			}
			break;
		}
		case 0x6b: {
			switch(inst_state & 0xf8) {
			case 0x00: mov_w_abs16_r16l_full(); break;
			case 0x80: mov_w_r16l_abs16_full(); break;
			default: illegal(); break;
			}
			break;
		}
		case 0x6c: {
			switch(inst_state & 0x80) {
			case 0x00: mov_b_r16ph_r8l_full(); break;
			case 0x80: mov_b_r8l_pr16h_full(); break;
			default: illegal(); break;
			}
			break;
		}
		case 0x6d: {
			switch(inst_state & 0x88) {
			case 0x00: mov_w_r16ph_r16l_full(); break;
			case 0x80: mov_w_r16l_pr16h_full(); break;
			default: illegal(); break;
			}
			break;
		}
		case 0x6e: {
			switch(inst_state & 0x80) {
			case 0x00: mov_b_r16d16h_r8l_full(); break;
			case 0x80: mov_b_r8l_r16d16h_full(); break;
			default: illegal(); break;
			}
			break;
		}
		case 0x6f: {
			switch(inst_state & 0x88) {
			case 0x00: mov_w_r16d16h_r16l_full(); break;
			case 0x80: mov_w_r16l_r16d16h_full(); break;
			default: illegal(); break;
			}
			break;
		}
		case 0x70: {
			switch(inst_state & 0x80) {
			case 0x00: bset_imm3_r8l_full(); break;
			default: illegal(); break;
			}
			break;
		}
		case 0x71: {
			switch(inst_state & 0x80) {
			case 0x00: bnot_imm3_r8l_full(); break;
			default: illegal(); break;
			}
			break;
		}
		case 0x72: {
			switch(inst_state & 0x80) {
			case 0x00: bclr_imm3_r8l_full(); break;
			default: illegal(); break;
			}
			break;
		}
		case 0x73: {
			switch(inst_state & 0x80) {
			case 0x00: btst_imm3_r8l_full(); break;
			default: illegal(); break;
			}
			break;
		}
		case 0x74: {
			switch(inst_state & 0x80) {
			case 0x00: bor_imm3_r8l_full(); break;
			case 0x80: bior_imm3_r8l_full(); break;
			default: illegal(); break;
			}
			break;
		}
		case 0x75: {
			switch(inst_state & 0x80) {
			case 0x00: bxor_imm3_r8l_full(); break;
			case 0x80: bixor_imm3_r8l_full(); break;
			default: illegal(); break;
			}
			break;
		}
		case 0x76: {
			switch(inst_state & 0x80) {
			case 0x00: band_imm3_r8l_full(); break;
			case 0x80: biand_imm3_r8l_full(); break;
			default: illegal(); break;
			}
			break;
		}
		case 0x77: {
			switch(inst_state & 0x80) {
			case 0x00: bld_imm3_r8l_full(); break;
			case 0x80: bild_imm3_r8l_full(); break;
			default: illegal(); break;
			}
			break;
		}
		case 0x79: {
			switch(inst_state & 0xf8) {
			case 0x00: mov_w_imm16_r16l_full(); break;
			case 0x10: add_w_imm16_r16l_full(); break;
			case 0x20: cmp_w_imm16_r16l_full(); break;
			case 0x30: sub_w_imm16_r16l_full(); break;
			case 0x40: or_w_imm16_r16l_full(); break;
			case 0x50: xor_w_imm16_r16l_full(); break;
			case 0x60: and_w_imm16_r16l_full(); break;
			default: illegal(); break;
			}
			break;
		}
		case 0x7b: {
			switch(inst_state & 0xff) {
			case 0x5c: dispatch_7b5c_full(); break;
			default: illegal(); break;
			}
			break;
		}
		case 0x7c: {
			switch(inst_state & 0x8f) {
			case 0x00: dispatch_7c00_full(); break;
			default: illegal(); break;
			}
			break;
		}
		case 0x7d: {
			switch(inst_state & 0x8f) {
			case 0x00: dispatch_7d00_full(); break;
			default: illegal(); break;
			}
			break;
		}
		case 0x7e: {
			dispatch_7e00_full();
			break;
		}
		case 0x7f: {
			dispatch_7f00_full();
			break;
		}
		case 0x80: case 0x81: case 0x82: case 0x83: case 0x84: case 0x85: case 0x86: case 0x87: case 0x88: case 0x89: case 0x8a: case 0x8b: case 0x8c: case 0x8d: case 0x8e: case 0x8f: {
			add_b_imm8_r8u_full();
			break;
		}
		case 0x90: case 0x91: case 0x92: case 0x93: case 0x94: case 0x95: case 0x96: case 0x97: case 0x98: case 0x99: case 0x9a: case 0x9b: case 0x9c: case 0x9d: case 0x9e: case 0x9f: {
			addx_b_imm8_r8u_full();
			break;
		}
		case 0xa0: case 0xa1: case 0xa2: case 0xa3: case 0xa4: case 0xa5: case 0xa6: case 0xa7: case 0xa8: case 0xa9: case 0xaa: case 0xab: case 0xac: case 0xad: case 0xae: case 0xaf: {
			cmp_b_imm8_r8u_full();
			break;
		}
		case 0xb0: case 0xb1: case 0xb2: case 0xb3: case 0xb4: case 0xb5: case 0xb6: case 0xb7: case 0xb8: case 0xb9: case 0xba: case 0xbb: case 0xbc: case 0xbd: case 0xbe: case 0xbf: {
			subx_b_imm8_r8u_full();
			break;
		}
		case 0xc0: case 0xc1: case 0xc2: case 0xc3: case 0xc4: case 0xc5: case 0xc6: case 0xc7: case 0xc8: case 0xc9: case 0xca: case 0xcb: case 0xcc: case 0xcd: case 0xce: case 0xcf: {
			or_b_imm8_r8u_full();
			break;
		}
		case 0xd0: case 0xd1: case 0xd2: case 0xd3: case 0xd4: case 0xd5: case 0xd6: case 0xd7: case 0xd8: case 0xd9: case 0xda: case 0xdb: case 0xdc: case 0xdd: case 0xde: case 0xdf: {
			xor_b_imm8_r8u_full();
			break;
		}
		case 0xe0: case 0xe1: case 0xe2: case 0xe3: case 0xe4: case 0xe5: case 0xe6: case 0xe7: case 0xe8: case 0xe9: case 0xea: case 0xeb: case 0xec: case 0xed: case 0xee: case 0xef: {
			and_b_imm8_r8u_full();
			break;
		}
		case 0xf0: case 0xf1: case 0xf2: case 0xf3: case 0xf4: case 0xf5: case 0xf6: case 0xf7: case 0xf8: case 0xf9: case 0xfa: case 0xfb: case 0xfc: case 0xfd: case 0xfe: case 0xff: {
			mov_b_imm8_r8u_full();
			break;
		}
		default: illegal(); break;
		}
		break;
	}
	case 0x01: {
		switch(inst_state & 0xffff) {
		case 0x00: state_reset_full(); break;
		case 0x01: state_irq_full(); break;
		case 0x03: state_dma_full(); break;
		}
		break;
	}
	case 0x12: {
		switch((inst_state >> 8) & 0xff) {
		case 0x63: {
			switch(inst_state & 0x0f) {
			case 0x00: btst_r8h_abs16_full(); break;
			default: illegal(); break;
			}
			break;
		}
		case 0x73: {
			switch(inst_state & 0x8f) {
			case 0x00: btst_imm3_abs16_full(); break;
			default: illegal(); break;
			}
			break;
		}
		case 0x74: {
			switch(inst_state & 0x8f) {
			case 0x00: bor_imm3_abs16_full(); break;
			case 0x80: bior_imm3_abs16_full(); break;
			default: illegal(); break;
			}
			break;
		}
		case 0x75: {
			switch(inst_state & 0x8f) {
			case 0x00: bxor_imm3_abs16_full(); break;
			case 0x80: bixor_imm3_abs16_full(); break;
			default: illegal(); break;
			}
			break;
		}
		case 0x76: {
			switch(inst_state & 0x8f) {
			case 0x00: band_imm3_abs16_full(); break;
			case 0x80: biand_imm3_abs16_full(); break;
			default: illegal(); break;
			}
			break;
		}
		case 0x77: {
			switch(inst_state & 0x8f) {
			case 0x00: bld_imm3_abs16_full(); break;
			case 0x80: bild_imm3_abs16_full(); break;
			default: illegal(); break;
			}
			break;
		}
		default: illegal(); break;
		}
		break;
	}
	case 0x13: {
		switch((inst_state >> 8) & 0xff) {
		case 0x60: {
			switch(inst_state & 0x0f) {
			case 0x00: bset_r8h_abs16_full(); break;
			default: illegal(); break;
			}
			break;
		}
		case 0x61: {
			switch(inst_state & 0x0f) {
			case 0x00: bnot_r8h_abs16_full(); break;
			default: illegal(); break;
			}
			break;
		}
		case 0x62: {
			switch(inst_state & 0x0f) {
			case 0x00: bclr_r8h_abs16_full(); break;
			default: illegal(); break;
			}
			break;
		}
		case 0x67: {
			switch(inst_state & 0x8f) {
			case 0x00: bst_imm3_abs16_full(); break;
			case 0x80: bist_imm3_abs16_full(); break;
			default: illegal(); break;
			}
			break;
		}
		case 0x70: {
			switch(inst_state & 0x8f) {
			case 0x00: bset_imm3_abs16_full(); break;
			default: illegal(); break;
			}
			break;
		}
		case 0x71: {
			switch(inst_state & 0x8f) {
			case 0x00: bnot_imm3_abs16_full(); break;
			default: illegal(); break;
			}
			break;
		}
		case 0x72: {
			switch(inst_state & 0x8f) {
			case 0x00: bclr_imm3_abs16_full(); break;
			default: illegal(); break;
			}
			break;
		}
		default: illegal(); break;
		}
		break;
	}
	case 0x17: {
		switch((inst_state >> 8) & 0xff) {
		case 0x59: {
			switch(inst_state & 0xff) {
			case 0x8f: eepmov_b_full(); break;
			default: illegal(); break;
			}
			break;
		}
		default: illegal(); break;
		}
		break;
	}
	case 0x19: {
		switch((inst_state >> 8) & 0xff) {
		case 0x63: {
			switch(inst_state & 0x0f) {
			case 0x00: btst_r8h_r16ihh_full(); break;
			default: illegal(); break;
			}
			break;
		}
		case 0x73: {
			switch(inst_state & 0x8f) {
			case 0x00: btst_imm3_r16ihh_full(); break;
			default: illegal(); break;
			}
			break;
		}
		case 0x74: {
			switch(inst_state & 0x8f) {
			case 0x00: bor_imm3_r16ihh_full(); break;
			case 0x80: bior_imm3_r16ihh_full(); break;
			default: illegal(); break;
			}
			break;
		}
		case 0x75: {
			switch(inst_state & 0x8f) {
			case 0x00: bxor_imm3_r16ihh_full(); break;
			case 0x80: bixor_imm3_r16ihh_full(); break;
			default: illegal(); break;
			}
			break;
		}
		case 0x76: {
			switch(inst_state & 0x8f) {
			case 0x00: band_imm3_r16ihh_full(); break;
			case 0x80: biand_imm3_r16ihh_full(); break;
			default: illegal(); break;
			}
			break;
		}
		case 0x77: {
			switch(inst_state & 0x8f) {
			case 0x00: bld_imm3_r16ihh_full(); break;
			case 0x80: bild_imm3_r16ihh_full(); break;
			default: illegal(); break;
			}
			break;
		}
		default: illegal(); break;
		}
		break;
	}
	case 0x1a: {
		switch((inst_state >> 8) & 0xff) {
		case 0x60: {
			switch(inst_state & 0x0f) {
			case 0x00: bset_r8h_r16ihh_full(); break;
			default: illegal(); break;
			}
			break;
		}
		case 0x61: {
			switch(inst_state & 0x0f) {
			case 0x00: bnot_r8h_r16ihh_full(); break;
			default: illegal(); break;
			}
			break;
		}
		case 0x62: {
			switch(inst_state & 0x0f) {
			case 0x00: bclr_r8h_r16ihh_full(); break;
			default: illegal(); break;
			}
			break;
		}
		case 0x67: {
			switch(inst_state & 0x8f) {
			case 0x00: bst_imm3_r16ihh_full(); break;
			case 0x80: bist_imm3_r16ihh_full(); break;
			default: illegal(); break;
			}
			break;
		}
		case 0x70: {
			switch(inst_state & 0x8f) {
			case 0x00: bset_imm3_r16ihh_full(); break;
			default: illegal(); break;
			}
			break;
		}
		case 0x71: {
			switch(inst_state & 0x8f) {
			case 0x00: bnot_imm3_r16ihh_full(); break;
			default: illegal(); break;
			}
			break;
		}
		case 0x72: {
			switch(inst_state & 0x8f) {
			case 0x00: bclr_imm3_r16ihh_full(); break;
			default: illegal(); break;
			}
			break;
		}
		default: illegal(); break;
		}
		break;
	}
	case 0x1b: {
		switch((inst_state >> 8) & 0xff) {
		case 0x63: {
			switch(inst_state & 0x0f) {
			case 0x00: btst_r8h_abs8_full(); break;
			default: illegal(); break;
			}
			break;
		}
		case 0x73: {
			switch(inst_state & 0x8f) {
			case 0x00: btst_imm3_abs8_full(); break;
			default: illegal(); break;
			}
			break;
		}
		case 0x74: {
			switch(inst_state & 0x8f) {
			case 0x00: bor_imm3_abs8_full(); break;
			case 0x80: bior_imm3_abs8_full(); break;
			default: illegal(); break;
			}
			break;
		}
		case 0x75: {
			switch(inst_state & 0x8f) {
			case 0x00: bxor_imm3_abs8_full(); break;
			case 0x80: bixor_imm3_abs8_full(); break;
			default: illegal(); break;
			}
			break;
		}
		case 0x76: {
			switch(inst_state & 0x8f) {
			case 0x00: band_imm3_abs8_full(); break;
			case 0x80: biand_imm3_abs8_full(); break;
			default: illegal(); break;
			}
			break;
		}
		case 0x77: {
			switch(inst_state & 0x8f) {
			case 0x00: bld_imm3_abs8_full(); break;
			case 0x80: bild_imm3_abs8_full(); break;
			default: illegal(); break;
			}
			break;
		}
		default: illegal(); break;
		}
		break;
	}
	case 0x1c: {
		switch((inst_state >> 8) & 0xff) {
		case 0x60: {
			switch(inst_state & 0x0f) {
			case 0x00: bset_r8h_abs8_full(); break;
			default: illegal(); break;
			}
			break;
		}
		case 0x61: {
			switch(inst_state & 0x0f) {
			case 0x00: bnot_r8h_abs8_full(); break;
			default: illegal(); break;
			}
			break;
		}
		case 0x62: {
			switch(inst_state & 0x0f) {
			case 0x00: bclr_r8h_abs8_full(); break;
			default: illegal(); break;
			}
			break;
		}
		case 0x67: {
			switch(inst_state & 0x8f) {
			case 0x00: bst_imm3_abs8_full(); break;
			case 0x80: bist_imm3_abs8_full(); break;
			default: illegal(); break;
			}
			break;
		}
		case 0x70: {
			switch(inst_state & 0x8f) {
			case 0x00: bset_imm3_abs8_full(); break;
			default: illegal(); break;
			}
			break;
		}
		case 0x71: {
			switch(inst_state & 0x8f) {
			case 0x00: bnot_imm3_abs8_full(); break;
			default: illegal(); break;
			}
			break;
		}
		case 0x72: {
			switch(inst_state & 0x8f) {
			case 0x00: bclr_imm3_abs8_full(); break;
			default: illegal(); break;
			}
			break;
		}
		default: illegal(); break;
		}
		break;
	}
	}
}
void h8_device::do_exec_partial()
{
	switch(inst_state >> 16) {
	case 0x00: {
		switch((inst_state >> 8) & 0xff) {
		case 0x00: {
			switch(inst_state & 0xff) {
			case 0x00: nop_partial(); break;
			default: illegal(); break;
			}
			break;
		}
		case 0x01: {
			switch(inst_state & 0xff) {
			case 0x80: sleep_partial(); break;
			default: illegal(); break;
			}
			break;
		}
		case 0x02: {
			switch(inst_state & 0xf0) {
			case 0x00: stc_ccr_r8l_partial(); break;
			default: illegal(); break;
			}
			break;
		}
		case 0x03: {
			switch(inst_state & 0xf0) {
			case 0x00: ldc_r8l_ccr_partial(); break;
			default: illegal(); break;
			}
			break;
		}
		case 0x04: {
			orc_imm8_ccr_partial();
			break;
		}
		case 0x05: {
			xorc_imm8_ccr_partial();
			break;
		}
		case 0x06: {
			andc_imm8_ccr_partial();
			break;
		}
		case 0x07: {
			ldc_imm8_ccr_partial();
			break;
		}
		case 0x08: {
			add_b_r8h_r8l_partial();
			break;
		}
		case 0x09: {
			switch(inst_state & 0x88) {
			case 0x00: add_w_r16h_r16l_partial(); break;
			default: illegal(); break;
			}
			break;
		}
		case 0x0a: {
			switch(inst_state & 0xf0) {
			case 0x00: inc_b_one_r8l_partial(); break;
			default: illegal(); break;
			}
			break;
		}
		case 0x0b: {
			switch(inst_state & 0xf8) {
			case 0x00: adds_l_one_r16l_partial(); break;
			case 0x80: adds_l_two_r16l_partial(); break;
			case 0x90: adds_l_four_r16l_partial(); break;
			default: illegal(); break;
			}
			break;
		}
		case 0x0c: {
			mov_b_r8h_r8l_partial();
			break;
		}
		case 0x0d: {
			switch(inst_state & 0x88) {
			case 0x00: mov_w_r16h_r16l_partial(); break;
			default: illegal(); break;
			}
			break;
		}
		case 0x0e: {
			addx_b_r8h_r8l_partial();
			break;
		}
		case 0x0f: {
			switch(inst_state & 0xf0) {
			case 0x00: daa_b_r8l_partial(); break;
			default: illegal(); break;
			}
			break;
		}
		case 0x10: {
			switch(inst_state & 0xf0) {
			case 0x00: shll_b_r8l_partial(); break;
			case 0x80: shal_b_r8l_partial(); break;
			default: illegal(); break;
			}
			break;
		}
		case 0x11: {
			switch(inst_state & 0xf0) {
			case 0x00: shlr_b_r8l_partial(); break;
			case 0x80: shar_b_r8l_partial(); break;
			default: illegal(); break;
			}
			break;
		}
		case 0x12: {
			switch(inst_state & 0xf0) {
			case 0x00: rotxl_b_r8l_partial(); break;
			case 0x80: rotl_b_r8l_partial(); break;
			default: illegal(); break;
			}
			break;
		}
		case 0x13: {
			switch(inst_state & 0xf0) {
			case 0x00: rotxr_b_r8l_partial(); break;
			case 0x80: rotr_b_r8l_partial(); break;
			default: illegal(); break;
			}
			break;
		}
		case 0x14: {
			or_b_r8h_r8l_partial();
			break;
		}
		case 0x15: {
			xor_b_r8h_r8l_partial();
			break;
		}
		case 0x16: {
			and_b_r8h_r8l_partial();
			break;
		}
		case 0x17: {
			switch(inst_state & 0xf0) {
			case 0x00: not_b_r8l_partial(); break;
			case 0x80: neg_b_r8l_partial(); break;
			default: illegal(); break;
			}
			break;
		}
		case 0x18: {
			sub_b_r8h_r8l_partial();
			break;
		}
		case 0x19: {
			switch(inst_state & 0x88) {
			case 0x00: sub_w_r16h_r16l_partial(); break;
			default: illegal(); break;
			}
			break;
		}
		case 0x1a: {
			switch(inst_state & 0xf0) {
			case 0x00: dec_b_one_r8l_partial(); break;
			default: illegal(); break;
			}
			break;
		}
		case 0x1b: {
			switch(inst_state & 0xf8) {
			case 0x00: subs_l_one_r16l_partial(); break;
			case 0x50: dec_w_one_r16l_partial(); break;
			case 0x80: subs_l_two_r16l_partial(); break;
			case 0x90: subs_l_four_r16l_partial(); break;
			case 0xd0: dec_w_two_r16l_partial(); break;
			default: illegal(); break;
			}
			break;
		}
		case 0x1c: {
			cmp_b_r8h_r8l_partial();
			break;
		}
		case 0x1d: {
			switch(inst_state & 0x88) {
			case 0x00: cmp_w_r16h_r16l_partial(); break;
			default: illegal(); break;
			}
			break;
		}
		case 0x1e: {
			subx_b_r8h_r8l_partial();
			break;
		}
		case 0x1f: {
			switch(inst_state & 0xf0) {
			case 0x00: das_b_r8l_partial(); break;
			default: illegal(); break;
			}
			break;
		}
		case 0x20: case 0x21: case 0x22: case 0x23: case 0x24: case 0x25: case 0x26: case 0x27: case 0x28: case 0x29: case 0x2a: case 0x2b: case 0x2c: case 0x2d: case 0x2e: case 0x2f: {
			mov_b_abs8_r8u_partial();
			break;
		}
		case 0x30: case 0x31: case 0x32: case 0x33: case 0x34: case 0x35: case 0x36: case 0x37: case 0x38: case 0x39: case 0x3a: case 0x3b: case 0x3c: case 0x3d: case 0x3e: case 0x3f: {
			mov_b_r8u_abs8_partial();
			break;
		}
		case 0x40: {
			bt_rel8_partial();
			break;
		}
		case 0x41: {
			bf_rel8_partial();
			break;
		}
		case 0x42: {
			bhi_rel8_partial();
			break;
		}
		case 0x43: {
			bls_rel8_partial();
			break;
		}
		case 0x44: {
			bcc_rel8_partial();
			break;
		}
		case 0x45: {
			bcs_rel8_partial();
			break;
		}
		case 0x46: {
			bne_rel8_partial();
			break;
		}
		case 0x47: {
			beq_rel8_partial();
			break;
		}
		case 0x48: {
			bvc_rel8_partial();
			break;
		}
		case 0x49: {
			bvs_rel8_partial();
			break;
		}
		case 0x4a: {
			bpl_rel8_partial();
			break;
		}
		case 0x4b: {
			bmi_rel8_partial();
			break;
		}
		case 0x4c: {
			bge_rel8_partial();
			break;
		}
		case 0x4d: {
			blt_rel8_partial();
			break;
		}
		case 0x4e: {
			bgt_rel8_partial();
			break;
		}
		case 0x4f: {
			ble_rel8_partial();
			break;
		}
		case 0x50: {
			switch(inst_state & 0x08) {
			case 0x00: mulxu_b_r8h_r16l_partial(); break;
			default: illegal(); break;
			}
			break;
		}
		case 0x51: {
			switch(inst_state & 0x08) {
			case 0x00: divxu_b_r8h_r16l_partial(); break;
			default: illegal(); break;
			}
			break;
		}
		case 0x54: {
			switch(inst_state & 0xff) {
			case 0x70: rts_partial(); break;
			default: illegal(); break;
			}
			break;
		}
		case 0x55: {
			bsr_rel8_partial();
			break;
		}
		case 0x56: {
			switch(inst_state & 0xff) {
			case 0x70: rte_partial(); break;
			default: illegal(); break;
			}
			break;
		}
		case 0x5a: {
			switch(inst_state & 0xff) {
			case 0x00: jmp_abs16e_partial(); break;
			default: illegal(); break;
			}
			break;
		}
		case 0x5b: {
			jmp_abs8i_partial();
			break;
		}
		case 0x5d: {
			switch(inst_state & 0x8f) {
			case 0x00: jsr_r16h_partial(); break;
			default: illegal(); break;
			}
			break;
		}
		case 0x5e: {
			switch(inst_state & 0xff) {
			case 0x00: jsr_abs16e_partial(); break;
			default: illegal(); break;
			}
			break;
		}
		case 0x5f: {
			jsr_abs8i_partial();
			break;
		}
		case 0x60: {
			bset_r8h_r8l_partial();
			break;
		}
		case 0x61: {
			bnot_r8h_r8l_partial();
			break;
		}
		case 0x62: {
			bclr_r8h_r8l_partial();
			break;
		}
		case 0x63: {
			btst_r8h_r8l_partial();
			break;
		}
		case 0x67: {
			switch(inst_state & 0x80) {
			case 0x00: bst_imm3_r8l_partial(); break;
			case 0x80: bist_imm3_r8l_partial(); break;
			default: illegal(); break;
			}
			break;
		}
		case 0x68: {
			switch(inst_state & 0x80) {
			case 0x00: mov_b_r16ih_r8l_partial(); break;
			case 0x80: mov_b_r8l_r16ih_partial(); break;
			default: illegal(); break;
			}
			break;
		}
		case 0x69: {
			switch(inst_state & 0x88) {
			case 0x00: mov_w_r16ih_r16l_partial(); break;
			case 0x80: mov_w_r16l_r16ih_partial(); break;
			default: illegal(); break;
			}
			break;
		}
		case 0x6a: {
			switch(inst_state & 0xff) {
			case 0x00: case 0x01: case 0x02: case 0x03: case 0x04: case 0x05: case 0x06: case 0x07: case 0x08: case 0x09: case 0x0a: case 0x0b: case 0x0c: case 0x0d: case 0x0e: case 0x0f: mov_b_abs16_r8l_partial(); break;
			case 0x10: dispatch_6a10_partial(); break;
			case 0x18: dispatch_6a18_partial(); break;
			case 0x40: case 0x41: case 0x42: case 0x43: case 0x44: case 0x45: case 0x46: case 0x47: case 0x48: case 0x49: case 0x4a: case 0x4b: case 0x4c: case 0x4d: case 0x4e: case 0x4f: movfpe_abs16_r8l_partial(); break;
			case 0x80: case 0x81: case 0x82: case 0x83: case 0x84: case 0x85: case 0x86: case 0x87: case 0x88: case 0x89: case 0x8a: case 0x8b: case 0x8c: case 0x8d: case 0x8e: case 0x8f: mov_b_r8l_abs16_partial(); break;
			case 0xc0: case 0xc1: case 0xc2: case 0xc3: case 0xc4: case 0xc5: case 0xc6: case 0xc7: case 0xc8: case 0xc9: case 0xca: case 0xcb: case 0xcc: case 0xcd: case 0xce: case 0xcf: movtpe_r8l_abs16_partial(); break;
			default: illegal(); break;
			}
			break;
		}
		case 0x6b: {
			switch(inst_state & 0xf8) {
			case 0x00: mov_w_abs16_r16l_partial(); break;
			case 0x80: mov_w_r16l_abs16_partial(); break;
			default: illegal(); break;
			}
			break;
		}
		case 0x6c: {
			switch(inst_state & 0x80) {
			case 0x00: mov_b_r16ph_r8l_partial(); break;
			case 0x80: mov_b_r8l_pr16h_partial(); break;
			default: illegal(); break;
			}
			break;
		}
		case 0x6d: {
			switch(inst_state & 0x88) {
			case 0x00: mov_w_r16ph_r16l_partial(); break;
			case 0x80: mov_w_r16l_pr16h_partial(); break;
			default: illegal(); break;
			}
			break;
		}
		case 0x6e: {
			switch(inst_state & 0x80) {
			case 0x00: mov_b_r16d16h_r8l_partial(); break;
			case 0x80: mov_b_r8l_r16d16h_partial(); break;
			default: illegal(); break;
			}
			break;
		}
		case 0x6f: {
			switch(inst_state & 0x88) {
			case 0x00: mov_w_r16d16h_r16l_partial(); break;
			case 0x80: mov_w_r16l_r16d16h_partial(); break;
			default: illegal(); break;
			}
			break;
		}
		case 0x70: {
			switch(inst_state & 0x80) {
			case 0x00: bset_imm3_r8l_partial(); break;
			default: illegal(); break;
			}
			break;
		}
		case 0x71: {
			switch(inst_state & 0x80) {
			case 0x00: bnot_imm3_r8l_partial(); break;
			default: illegal(); break;
			}
			break;
		}
		case 0x72: {
			switch(inst_state & 0x80) {
			case 0x00: bclr_imm3_r8l_partial(); break;
			default: illegal(); break;
			}
			break;
		}
		case 0x73: {
			switch(inst_state & 0x80) {
			case 0x00: btst_imm3_r8l_partial(); break;
			default: illegal(); break;
			}
			break;
		}
		case 0x74: {
			switch(inst_state & 0x80) {
			case 0x00: bor_imm3_r8l_partial(); break;
			case 0x80: bior_imm3_r8l_partial(); break;
			default: illegal(); break;
			}
			break;
		}
		case 0x75: {
			switch(inst_state & 0x80) {
			case 0x00: bxor_imm3_r8l_partial(); break;
			case 0x80: bixor_imm3_r8l_partial(); break;
			default: illegal(); break;
			}
			break;
		}
		case 0x76: {
			switch(inst_state & 0x80) {
			case 0x00: band_imm3_r8l_partial(); break;
			case 0x80: biand_imm3_r8l_partial(); break;
			default: illegal(); break;
			}
			break;
		}
		case 0x77: {
			switch(inst_state & 0x80) {
			case 0x00: bld_imm3_r8l_partial(); break;
			case 0x80: bild_imm3_r8l_partial(); break;
			default: illegal(); break;
			}
			break;
		}
		case 0x79: {
			switch(inst_state & 0xf8) {
			case 0x00: mov_w_imm16_r16l_partial(); break;
			case 0x10: add_w_imm16_r16l_partial(); break;
			case 0x20: cmp_w_imm16_r16l_partial(); break;
			case 0x30: sub_w_imm16_r16l_partial(); break;
			case 0x40: or_w_imm16_r16l_partial(); break;
			case 0x50: xor_w_imm16_r16l_partial(); break;
			case 0x60: and_w_imm16_r16l_partial(); break;
			default: illegal(); break;
			}
			break;
		}
		case 0x7b: {
			switch(inst_state & 0xff) {
			case 0x5c: dispatch_7b5c_partial(); break;
			default: illegal(); break;
			}
			break;
		}
		case 0x7c: {
			switch(inst_state & 0x8f) {
			case 0x00: dispatch_7c00_partial(); break;
			default: illegal(); break;
			}
			break;
		}
		case 0x7d: {
			switch(inst_state & 0x8f) {
			case 0x00: dispatch_7d00_partial(); break;
			default: illegal(); break;
			}
			break;
		}
		case 0x7e: {
			dispatch_7e00_partial();
			break;
		}
		case 0x7f: {
			dispatch_7f00_partial();
			break;
		}
		case 0x80: case 0x81: case 0x82: case 0x83: case 0x84: case 0x85: case 0x86: case 0x87: case 0x88: case 0x89: case 0x8a: case 0x8b: case 0x8c: case 0x8d: case 0x8e: case 0x8f: {
			add_b_imm8_r8u_partial();
			break;
		}
		case 0x90: case 0x91: case 0x92: case 0x93: case 0x94: case 0x95: case 0x96: case 0x97: case 0x98: case 0x99: case 0x9a: case 0x9b: case 0x9c: case 0x9d: case 0x9e: case 0x9f: {
			addx_b_imm8_r8u_partial();
			break;
		}
		case 0xa0: case 0xa1: case 0xa2: case 0xa3: case 0xa4: case 0xa5: case 0xa6: case 0xa7: case 0xa8: case 0xa9: case 0xaa: case 0xab: case 0xac: case 0xad: case 0xae: case 0xaf: {
			cmp_b_imm8_r8u_partial();
			break;
		}
		case 0xb0: case 0xb1: case 0xb2: case 0xb3: case 0xb4: case 0xb5: case 0xb6: case 0xb7: case 0xb8: case 0xb9: case 0xba: case 0xbb: case 0xbc: case 0xbd: case 0xbe: case 0xbf: {
			subx_b_imm8_r8u_partial();
			break;
		}
		case 0xc0: case 0xc1: case 0xc2: case 0xc3: case 0xc4: case 0xc5: case 0xc6: case 0xc7: case 0xc8: case 0xc9: case 0xca: case 0xcb: case 0xcc: case 0xcd: case 0xce: case 0xcf: {
			or_b_imm8_r8u_partial();
			break;
		}
		case 0xd0: case 0xd1: case 0xd2: case 0xd3: case 0xd4: case 0xd5: case 0xd6: case 0xd7: case 0xd8: case 0xd9: case 0xda: case 0xdb: case 0xdc: case 0xdd: case 0xde: case 0xdf: {
			xor_b_imm8_r8u_partial();
			break;
		}
		case 0xe0: case 0xe1: case 0xe2: case 0xe3: case 0xe4: case 0xe5: case 0xe6: case 0xe7: case 0xe8: case 0xe9: case 0xea: case 0xeb: case 0xec: case 0xed: case 0xee: case 0xef: {
			and_b_imm8_r8u_partial();
			break;
		}
		case 0xf0: case 0xf1: case 0xf2: case 0xf3: case 0xf4: case 0xf5: case 0xf6: case 0xf7: case 0xf8: case 0xf9: case 0xfa: case 0xfb: case 0xfc: case 0xfd: case 0xfe: case 0xff: {
			mov_b_imm8_r8u_partial();
			break;
		}
		default: illegal(); break;
		}
		break;
	}
	case 0x01: {
		switch(inst_state & 0xffff) {
		case 0x00: state_reset_partial(); break;
		case 0x01: state_irq_partial(); break;
		case 0x03: state_dma_partial(); break;
		}
		break;
	}
	case 0x12: {
		switch((inst_state >> 8) & 0xff) {
		case 0x63: {
			switch(inst_state & 0x0f) {
			case 0x00: btst_r8h_abs16_partial(); break;
			default: illegal(); break;
			}
			break;
		}
		case 0x73: {
			switch(inst_state & 0x8f) {
			case 0x00: btst_imm3_abs16_partial(); break;
			default: illegal(); break;
			}
			break;
		}
		case 0x74: {
			switch(inst_state & 0x8f) {
			case 0x00: bor_imm3_abs16_partial(); break;
			case 0x80: bior_imm3_abs16_partial(); break;
			default: illegal(); break;
			}
			break;
		}
		case 0x75: {
			switch(inst_state & 0x8f) {
			case 0x00: bxor_imm3_abs16_partial(); break;
			case 0x80: bixor_imm3_abs16_partial(); break;
			default: illegal(); break;
			}
			break;
		}
		case 0x76: {
			switch(inst_state & 0x8f) {
			case 0x00: band_imm3_abs16_partial(); break;
			case 0x80: biand_imm3_abs16_partial(); break;
			default: illegal(); break;
			}
			break;
		}
		case 0x77: {
			switch(inst_state & 0x8f) {
			case 0x00: bld_imm3_abs16_partial(); break;
			case 0x80: bild_imm3_abs16_partial(); break;
			default: illegal(); break;
			}
			break;
		}
		default: illegal(); break;
		}
		break;
	}
	case 0x13: {
		switch((inst_state >> 8) & 0xff) {
		case 0x60: {
			switch(inst_state & 0x0f) {
			case 0x00: bset_r8h_abs16_partial(); break;
			default: illegal(); break;
			}
			break;
		}
		case 0x61: {
			switch(inst_state & 0x0f) {
			case 0x00: bnot_r8h_abs16_partial(); break;
			default: illegal(); break;
			}
			break;
		}
		case 0x62: {
			switch(inst_state & 0x0f) {
			case 0x00: bclr_r8h_abs16_partial(); break;
			default: illegal(); break;
			}
			break;
		}
		case 0x67: {
			switch(inst_state & 0x8f) {
			case 0x00: bst_imm3_abs16_partial(); break;
			case 0x80: bist_imm3_abs16_partial(); break;
			default: illegal(); break;
			}
			break;
		}
		case 0x70: {
			switch(inst_state & 0x8f) {
			case 0x00: bset_imm3_abs16_partial(); break;
			default: illegal(); break;
			}
			break;
		}
		case 0x71: {
			switch(inst_state & 0x8f) {
			case 0x00: bnot_imm3_abs16_partial(); break;
			default: illegal(); break;
			}
			break;
		}
		case 0x72: {
			switch(inst_state & 0x8f) {
			case 0x00: bclr_imm3_abs16_partial(); break;
			default: illegal(); break;
			}
			break;
		}
		default: illegal(); break;
		}
		break;
	}
	case 0x17: {
		switch((inst_state >> 8) & 0xff) {
		case 0x59: {
			switch(inst_state & 0xff) {
			case 0x8f: eepmov_b_partial(); break;
			default: illegal(); break;
			}
			break;
		}
		default: illegal(); break;
		}
		break;
	}
	case 0x19: {
		switch((inst_state >> 8) & 0xff) {
		case 0x63: {
			switch(inst_state & 0x0f) {
			case 0x00: btst_r8h_r16ihh_partial(); break;
			default: illegal(); break;
			}
			break;
		}
		case 0x73: {
			switch(inst_state & 0x8f) {
			case 0x00: btst_imm3_r16ihh_partial(); break;
			default: illegal(); break;
			}
			break;
		}
		case 0x74: {
			switch(inst_state & 0x8f) {
			case 0x00: bor_imm3_r16ihh_partial(); break;
			case 0x80: bior_imm3_r16ihh_partial(); break;
			default: illegal(); break;
			}
			break;
		}
		case 0x75: {
			switch(inst_state & 0x8f) {
			case 0x00: bxor_imm3_r16ihh_partial(); break;
			case 0x80: bixor_imm3_r16ihh_partial(); break;
			default: illegal(); break;
			}
			break;
		}
		case 0x76: {
			switch(inst_state & 0x8f) {
			case 0x00: band_imm3_r16ihh_partial(); break;
			case 0x80: biand_imm3_r16ihh_partial(); break;
			default: illegal(); break;
			}
			break;
		}
		case 0x77: {
			switch(inst_state & 0x8f) {
			case 0x00: bld_imm3_r16ihh_partial(); break;
			case 0x80: bild_imm3_r16ihh_partial(); break;
			default: illegal(); break;
			}
			break;
		}
		default: illegal(); break;
		}
		break;
	}
	case 0x1a: {
		switch((inst_state >> 8) & 0xff) {
		case 0x60: {
			switch(inst_state & 0x0f) {
			case 0x00: bset_r8h_r16ihh_partial(); break;
			default: illegal(); break;
			}
			break;
		}
		case 0x61: {
			switch(inst_state & 0x0f) {
			case 0x00: bnot_r8h_r16ihh_partial(); break;
			default: illegal(); break;
			}
			break;
		}
		case 0x62: {
			switch(inst_state & 0x0f) {
			case 0x00: bclr_r8h_r16ihh_partial(); break;
			default: illegal(); break;
			}
			break;
		}
		case 0x67: {
			switch(inst_state & 0x8f) {
			case 0x00: bst_imm3_r16ihh_partial(); break;
			case 0x80: bist_imm3_r16ihh_partial(); break;
			default: illegal(); break;
			}
			break;
		}
		case 0x70: {
			switch(inst_state & 0x8f) {
			case 0x00: bset_imm3_r16ihh_partial(); break;
			default: illegal(); break;
			}
			break;
		}
		case 0x71: {
			switch(inst_state & 0x8f) {
			case 0x00: bnot_imm3_r16ihh_partial(); break;
			default: illegal(); break;
			}
			break;
		}
		case 0x72: {
			switch(inst_state & 0x8f) {
			case 0x00: bclr_imm3_r16ihh_partial(); break;
			default: illegal(); break;
			}
			break;
		}
		default: illegal(); break;
		}
		break;
	}
	case 0x1b: {
		switch((inst_state >> 8) & 0xff) {
		case 0x63: {
			switch(inst_state & 0x0f) {
			case 0x00: btst_r8h_abs8_partial(); break;
			default: illegal(); break;
			}
			break;
		}
		case 0x73: {
			switch(inst_state & 0x8f) {
			case 0x00: btst_imm3_abs8_partial(); break;
			default: illegal(); break;
			}
			break;
		}
		case 0x74: {
			switch(inst_state & 0x8f) {
			case 0x00: bor_imm3_abs8_partial(); break;
			case 0x80: bior_imm3_abs8_partial(); break;
			default: illegal(); break;
			}
			break;
		}
		case 0x75: {
			switch(inst_state & 0x8f) {
			case 0x00: bxor_imm3_abs8_partial(); break;
			case 0x80: bixor_imm3_abs8_partial(); break;
			default: illegal(); break;
			}
			break;
		}
		case 0x76: {
			switch(inst_state & 0x8f) {
			case 0x00: band_imm3_abs8_partial(); break;
			case 0x80: biand_imm3_abs8_partial(); break;
			default: illegal(); break;
			}
			break;
		}
		case 0x77: {
			switch(inst_state & 0x8f) {
			case 0x00: bld_imm3_abs8_partial(); break;
			case 0x80: bild_imm3_abs8_partial(); break;
			default: illegal(); break;
			}
			break;
		}
		default: illegal(); break;
		}
		break;
	}
	case 0x1c: {
		switch((inst_state >> 8) & 0xff) {
		case 0x60: {
			switch(inst_state & 0x0f) {
			case 0x00: bset_r8h_abs8_partial(); break;
			default: illegal(); break;
			}
			break;
		}
		case 0x61: {
			switch(inst_state & 0x0f) {
			case 0x00: bnot_r8h_abs8_partial(); break;
			default: illegal(); break;
			}
			break;
		}
		case 0x62: {
			switch(inst_state & 0x0f) {
			case 0x00: bclr_r8h_abs8_partial(); break;
			default: illegal(); break;
			}
			break;
		}
		case 0x67: {
			switch(inst_state & 0x8f) {
			case 0x00: bst_imm3_abs8_partial(); break;
			case 0x80: bist_imm3_abs8_partial(); break;
			default: illegal(); break;
			}
			break;
		}
		case 0x70: {
			switch(inst_state & 0x8f) {
			case 0x00: bset_imm3_abs8_partial(); break;
			default: illegal(); break;
			}
			break;
		}
		case 0x71: {
			switch(inst_state & 0x8f) {
			case 0x00: bnot_imm3_abs8_partial(); break;
			default: illegal(); break;
			}
			break;
		}
		case 0x72: {
			switch(inst_state & 0x8f) {
			case 0x00: bclr_imm3_abs8_partial(); break;
			default: illegal(); break;
			}
			break;
		}
		default: illegal(); break;
		}
		break;
	}
	}
}
