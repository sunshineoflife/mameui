void m4510_device::eom_imp_full()
{

	inhibit_interrupts = false; // before or after prefetch?

	if(icount == 0) { inst_substate = 1; return; }
	prefetch();
	icount--;

}

void m4510_device::eom_imp_partial()
{
switch(inst_substate) {
case 0:

	inhibit_interrupts = false; // before or after prefetch?

	if(icount == 0) { inst_substate = 1; return; }
case 1:
	prefetch();
	icount--;

}
	inst_substate = 0;
}


void m4510_device::map_imp_full()
{

	inhibit_interrupts = true;

	map_offset[0] = (A<<8) | ((X & 0xf) << 16);

	map_offset[1] = (Y<<8) | ((Z & 0xf) << 16);

	map_enable = ((X & 0xf0) >> 4) | (Z & 0xf0);

	logerror("MAP execute\n");

	logerror("0x0000 - 0x1fff = %08x\n",map_enable & 1 ? map_offset[0]+0x0000 : 0x0000);

	logerror("0x2000 - 0x3fff = %08x\n",map_enable & 2 ? map_offset[0]+0x2000 : 0x2000);

	logerror("0x4000 - 0x5fff = %08x\n",map_enable & 4 ? map_offset[0]+0x4000 : 0x4000);

	logerror("0x6000 - 0x7fff = %08x\n",map_enable & 8 ? map_offset[0]+0x6000 : 0x6000);

	logerror("0x8000 - 0x9fff = %08x\n",map_enable & 16 ? map_offset[1]+0x8000 : 0x8000);

	logerror("0xa000 - 0xbfff = %08x\n",map_enable & 32 ? map_offset[1]+0xa000 : 0xa000);

	logerror("0xc000 - 0xdfff = %08x\n",map_enable & 64 ? map_offset[1]+0xc000 : 0xc000);

	logerror("0xe000 - 0xffff = %08x\n",map_enable & 128 ? map_offset[1]+0xe000 : 0xe000);

	if(icount == 0) { inst_substate = 1; return; }
	prefetch();
	icount--;

}

void m4510_device::map_imp_partial()
{
switch(inst_substate) {
case 0:

	inhibit_interrupts = true;

	map_offset[0] = (A<<8) | ((X & 0xf) << 16);

	map_offset[1] = (Y<<8) | ((Z & 0xf) << 16);

	map_enable = ((X & 0xf0) >> 4) | (Z & 0xf0);

	logerror("MAP execute\n");

	logerror("0x0000 - 0x1fff = %08x\n",map_enable & 1 ? map_offset[0]+0x0000 : 0x0000);

	logerror("0x2000 - 0x3fff = %08x\n",map_enable & 2 ? map_offset[0]+0x2000 : 0x2000);

	logerror("0x4000 - 0x5fff = %08x\n",map_enable & 4 ? map_offset[0]+0x4000 : 0x4000);

	logerror("0x6000 - 0x7fff = %08x\n",map_enable & 8 ? map_offset[0]+0x6000 : 0x6000);

	logerror("0x8000 - 0x9fff = %08x\n",map_enable & 16 ? map_offset[1]+0x8000 : 0x8000);

	logerror("0xa000 - 0xbfff = %08x\n",map_enable & 32 ? map_offset[1]+0xa000 : 0xa000);

	logerror("0xc000 - 0xdfff = %08x\n",map_enable & 64 ? map_offset[1]+0xc000 : 0xc000);

	logerror("0xe000 - 0xffff = %08x\n",map_enable & 128 ? map_offset[1]+0xe000 : 0xe000);

	if(icount == 0) { inst_substate = 1; return; }
case 1:
	prefetch();
	icount--;

}
	inst_substate = 0;
}




void m4510_device::do_exec_full()
{
	switch(inst_state) {

	case 0x00: brk_ce_imp_full(); break;

	case 0x01: ora_ce_idx_full(); break;

	case 0x02: cle_imp_full(); break;

	case 0x03: see_imp_full(); break;

	case 0x04: tsb_ce_zpg_full(); break;

	case 0x05: ora_ce_zpg_full(); break;

	case 0x06: asl_ce_zpg_full(); break;

	case 0x07: rmb_ce_bzp_full(); break;

	case 0x08: php_ce_imp_full(); break;

	case 0x09: ora_imm_full(); break;

	case 0x0a: asl_ce_acc_full(); break;

	case 0x0b: tsy_imp_full(); break;

	case 0x0c: tsb_ce_aba_full(); break;

	case 0x0d: ora_aba_full(); break;

	case 0x0e: asl_ce_aba_full(); break;

	case 0x0f: bbr_ce_zpb_full(); break;

	case 0x10: bpl_ce_rel_full(); break;

	case 0x11: ora_ce_idy_full(); break;

	case 0x12: ora_idz_full(); break;

	case 0x13: bpl_rw2_full(); break;

	case 0x14: trb_ce_zpg_full(); break;

	case 0x15: ora_ce_zpx_full(); break;

	case 0x16: asl_ce_zpx_full(); break;

	case 0x17: rmb_ce_bzp_full(); break;

	case 0x18: clc_ce_imp_full(); break;

	case 0x19: ora_ce_aby_full(); break;

	case 0x1a: inc_ce_acc_full(); break;

	case 0x1b: inz_imp_full(); break;

	case 0x1c: trb_ce_aba_full(); break;

	case 0x1d: ora_ce_abx_full(); break;

	case 0x1e: asl_ce_abx_full(); break;

	case 0x1f: bbr_ce_zpb_full(); break;

	case 0x20: jsr_ce_adr_full(); break;

	case 0x21: and_ce_idx_full(); break;

	case 0x22: jsr_ind_full(); break;

	case 0x23: jsr_iax_full(); break;

	case 0x24: bit_ce_zpg_full(); break;

	case 0x25: and_ce_zpg_full(); break;

	case 0x26: rol_ce_zpg_full(); break;

	case 0x27: rmb_ce_bzp_full(); break;

	case 0x28: plp_ce_imp_full(); break;

	case 0x29: and_imm_full(); break;

	case 0x2a: rol_ce_acc_full(); break;

	case 0x2b: tys_imp_full(); break;

	case 0x2c: bit_aba_full(); break;

	case 0x2d: and_aba_full(); break;

	case 0x2e: rol_ce_aba_full(); break;

	case 0x2f: bbr_ce_zpb_full(); break;

	case 0x30: bmi_ce_rel_full(); break;

	case 0x31: and_ce_idy_full(); break;

	case 0x32: and_idz_full(); break;

	case 0x33: bmi_rw2_full(); break;

	case 0x34: bit_ce_zpx_full(); break;

	case 0x35: and_ce_zpx_full(); break;

	case 0x36: rol_ce_zpx_full(); break;

	case 0x37: rmb_ce_bzp_full(); break;

	case 0x38: sec_ce_imp_full(); break;

	case 0x39: and_ce_aby_full(); break;

	case 0x3a: dec_ce_acc_full(); break;

	case 0x3b: dez_imp_full(); break;

	case 0x3c: bit_ce_abx_full(); break;

	case 0x3d: and_ce_abx_full(); break;

	case 0x3e: rol_ce_abx_full(); break;

	case 0x3f: bbr_ce_zpb_full(); break;

	case 0x40: rti_ce_imp_full(); break;

	case 0x41: eor_ce_idx_full(); break;

	case 0x42: neg_acc_full(); break;

	case 0x43: asr_acc_full(); break;

	case 0x44: asr_zpg_full(); break;

	case 0x45: eor_ce_zpg_full(); break;

	case 0x46: lsr_ce_zpg_full(); break;

	case 0x47: rmb_ce_bzp_full(); break;

	case 0x48: pha_ce_imp_full(); break;

	case 0x49: eor_imm_full(); break;

	case 0x4a: lsr_ce_acc_full(); break;

	case 0x4b: taz_imp_full(); break;

	case 0x4c: jmp_adr_full(); break;

	case 0x4d: eor_aba_full(); break;

	case 0x4e: lsr_ce_aba_full(); break;

	case 0x4f: bbr_ce_zpb_full(); break;

	case 0x50: bvc_ce_rel_full(); break;

	case 0x51: eor_ce_idy_full(); break;

	case 0x52: eor_idz_full(); break;

	case 0x53: bvc_rw2_full(); break;

	case 0x54: asr_zpx_full(); break;

	case 0x55: eor_ce_zpx_full(); break;

	case 0x56: lsr_ce_zpx_full(); break;

	case 0x57: rmb_ce_bzp_full(); break;

	case 0x58: cli_ce_imp_full(); break;

	case 0x59: eor_ce_aby_full(); break;

	case 0x5a: phy_ce_imp_full(); break;

	case 0x5b: tab_imp_full(); break;

	case 0x5c: map_imp_full(); break;

	case 0x5d: eor_ce_abx_full(); break;

	case 0x5e: lsr_ce_abx_full(); break;

	case 0x5f: bbr_ce_zpb_full(); break;

	case 0x60: rts_ce_imp_full(); break;

	case 0x61: adc_ce_idx_full(); break;

	case 0x62: rtn_imm_full(); break;

	case 0x63: bsr_rw2_full(); break;

	case 0x64: stz_ce_zpg_full(); break;

	case 0x65: adc_ce_zpg_full(); break;

	case 0x66: ror_ce_zpg_full(); break;

	case 0x67: rmb_ce_bzp_full(); break;

	case 0x68: pla_ce_imp_full(); break;

	case 0x69: adc_ce_imm_full(); break;

	case 0x6a: ror_ce_acc_full(); break;

	case 0x6b: tza_imp_full(); break;

	case 0x6c: jmp_ce_ind_full(); break;

	case 0x6d: adc_ce_aba_full(); break;

	case 0x6e: ror_ce_aba_full(); break;

	case 0x6f: bbr_ce_zpb_full(); break;

	case 0x70: bvs_ce_rel_full(); break;

	case 0x71: adc_ce_idy_full(); break;

	case 0x72: adc_idz_full(); break;

	case 0x73: bvs_rw2_full(); break;

	case 0x74: stz_ce_zpx_full(); break;

	case 0x75: adc_ce_zpx_full(); break;

	case 0x76: ror_ce_zpx_full(); break;

	case 0x77: rmb_ce_bzp_full(); break;

	case 0x78: sei_ce_imp_full(); break;

	case 0x79: adc_ce_aby_full(); break;

	case 0x7a: ply_ce_imp_full(); break;

	case 0x7b: tba_imp_full(); break;

	case 0x7c: jmp_ce_iax_full(); break;

	case 0x7d: adc_ce_abx_full(); break;

	case 0x7e: ror_ce_abx_full(); break;

	case 0x7f: bbr_ce_zpb_full(); break;

	case 0x80: bra_ce_rel_full(); break;

	case 0x81: sta_ce_idx_full(); break;

	case 0x82: sta_isy_full(); break;

	case 0x83: bra_rw2_full(); break;

	case 0x84: sty_ce_zpg_full(); break;

	case 0x85: sta_ce_zpg_full(); break;

	case 0x86: stx_ce_zpg_full(); break;

	case 0x87: smb_ce_bzp_full(); break;

	case 0x88: dey_ce_imp_full(); break;

	case 0x89: bit_ce_imm_full(); break;

	case 0x8a: txa_ce_imp_full(); break;

	case 0x8b: sty_abx_full(); break;

	case 0x8c: sty_aba_full(); break;

	case 0x8d: sta_aba_full(); break;

	case 0x8e: stx_aba_full(); break;

	case 0x8f: bbs_ce_zpb_full(); break;

	case 0x90: bcc_ce_rel_full(); break;

	case 0x91: sta_ce_idy_full(); break;

	case 0x92: sta_idz_full(); break;

	case 0x93: bcc_rw2_full(); break;

	case 0x94: sty_ce_zpx_full(); break;

	case 0x95: sta_ce_zpx_full(); break;

	case 0x96: stx_ce_zpy_full(); break;

	case 0x97: smb_ce_bzp_full(); break;

	case 0x98: tya_ce_imp_full(); break;

	case 0x99: sta_ce_aby_full(); break;

	case 0x9a: txs_ce_imp_full(); break;

	case 0x9b: stx_aby_full(); break;

	case 0x9c: stz_ce_aba_full(); break;

	case 0x9d: sta_ce_abx_full(); break;

	case 0x9e: stz_ce_abx_full(); break;

	case 0x9f: bbs_ce_zpb_full(); break;

	case 0xa0: ldy_imm_full(); break;

	case 0xa1: lda_ce_idx_full(); break;

	case 0xa2: ldx_imm_full(); break;

	case 0xa3: ldz_imm_full(); break;

	case 0xa4: ldy_ce_zpg_full(); break;

	case 0xa5: lda_ce_zpg_full(); break;

	case 0xa6: ldx_ce_zpg_full(); break;

	case 0xa7: smb_ce_bzp_full(); break;

	case 0xa8: tay_ce_imp_full(); break;

	case 0xa9: lda_imm_full(); break;

	case 0xaa: tax_ce_imp_full(); break;

	case 0xab: ldz_aba_full(); break;

	case 0xac: ldy_aba_full(); break;

	case 0xad: lda_aba_full(); break;

	case 0xae: ldx_aba_full(); break;

	case 0xaf: bbs_ce_zpb_full(); break;

	case 0xb0: bcs_ce_rel_full(); break;

	case 0xb1: lda_ce_idy_full(); break;

	case 0xb2: lda_idz_full(); break;

	case 0xb3: bcs_rw2_full(); break;

	case 0xb4: ldy_ce_zpx_full(); break;

	case 0xb5: lda_ce_zpx_full(); break;

	case 0xb6: ldx_ce_zpy_full(); break;

	case 0xb7: smb_ce_bzp_full(); break;

	case 0xb8: clv_ce_imp_full(); break;

	case 0xb9: lda_ce_aby_full(); break;

	case 0xba: tsx_ce_imp_full(); break;

	case 0xbb: ldz_abx_full(); break;

	case 0xbc: ldy_ce_abx_full(); break;

	case 0xbd: lda_ce_abx_full(); break;

	case 0xbe: ldx_ce_aby_full(); break;

	case 0xbf: bbs_ce_zpb_full(); break;

	case 0xc0: cpy_imm_full(); break;

	case 0xc1: cmp_ce_idx_full(); break;

	case 0xc2: cpz_imm_full(); break;

	case 0xc3: dew_zpg_full(); break;

	case 0xc4: cpy_ce_zpg_full(); break;

	case 0xc5: cmp_ce_zpg_full(); break;

	case 0xc6: dec_ce_zpg_full(); break;

	case 0xc7: smb_ce_bzp_full(); break;

	case 0xc8: iny_ce_imp_full(); break;

	case 0xc9: cmp_imm_full(); break;

	case 0xca: dex_ce_imp_full(); break;

	case 0xcb: asw_aba_full(); break;

	case 0xcc: cpy_aba_full(); break;

	case 0xcd: cmp_aba_full(); break;

	case 0xce: dec_ce_aba_full(); break;

	case 0xcf: bbs_ce_zpb_full(); break;

	case 0xd0: bne_ce_rel_full(); break;

	case 0xd1: cmp_ce_idy_full(); break;

	case 0xd2: cmp_idz_full(); break;

	case 0xd3: bne_rw2_full(); break;

	case 0xd4: cpz_zpg_full(); break;

	case 0xd5: cmp_ce_zpx_full(); break;

	case 0xd6: dec_ce_zpx_full(); break;

	case 0xd7: smb_ce_bzp_full(); break;

	case 0xd8: cld_ce_imp_full(); break;

	case 0xd9: cmp_ce_aby_full(); break;

	case 0xda: phx_ce_imp_full(); break;

	case 0xdb: phz_imp_full(); break;

	case 0xdc: cpz_aba_full(); break;

	case 0xdd: cmp_ce_abx_full(); break;

	case 0xde: dec_ce_abx_full(); break;

	case 0xdf: bbs_ce_zpb_full(); break;

	case 0xe0: cpx_imm_full(); break;

	case 0xe1: sbc_ce_idx_full(); break;

	case 0xe2: lda_isy_full(); break;

	case 0xe3: inw_zpg_full(); break;

	case 0xe4: cpx_ce_zpg_full(); break;

	case 0xe5: sbc_ce_zpg_full(); break;

	case 0xe6: inc_ce_zpg_full(); break;

	case 0xe7: smb_ce_bzp_full(); break;

	case 0xe8: inx_ce_imp_full(); break;

	case 0xe9: sbc_ce_imm_full(); break;

	case 0xea: eom_imp_full(); break;

	case 0xeb: row_aba_full(); break;

	case 0xec: cpx_aba_full(); break;

	case 0xed: sbc_ce_aba_full(); break;

	case 0xee: inc_ce_aba_full(); break;

	case 0xef: bbs_ce_zpb_full(); break;

	case 0xf0: beq_ce_rel_full(); break;

	case 0xf1: sbc_ce_idy_full(); break;

	case 0xf2: sbc_idz_full(); break;

	case 0xf3: beq_rw2_full(); break;

	case 0xf4: phw_iw2_full(); break;

	case 0xf5: sbc_ce_zpx_full(); break;

	case 0xf6: inc_ce_zpx_full(); break;

	case 0xf7: smb_ce_bzp_full(); break;

	case 0xf8: sed_ce_imp_full(); break;

	case 0xf9: sbc_ce_aby_full(); break;

	case 0xfa: plx_ce_imp_full(); break;

	case 0xfb: plz_imp_full(); break;

	case 0xfc: phw_aba_full(); break;

	case 0xfd: sbc_ce_abx_full(); break;

	case 0xfe: inc_ce_abx_full(); break;

	case 0xff: bbs_ce_zpb_full(); break;

	case STATE_RESET: reset_full(); break;

	}
}

void m4510_device::do_exec_partial()
{
	switch(inst_state) {

	case 0x00: brk_ce_imp_partial(); break;

	case 0x01: ora_ce_idx_partial(); break;

	case 0x02: cle_imp_partial(); break;

	case 0x03: see_imp_partial(); break;

	case 0x04: tsb_ce_zpg_partial(); break;

	case 0x05: ora_ce_zpg_partial(); break;

	case 0x06: asl_ce_zpg_partial(); break;

	case 0x07: rmb_ce_bzp_partial(); break;

	case 0x08: php_ce_imp_partial(); break;

	case 0x09: ora_imm_partial(); break;

	case 0x0a: asl_ce_acc_partial(); break;

	case 0x0b: tsy_imp_partial(); break;

	case 0x0c: tsb_ce_aba_partial(); break;

	case 0x0d: ora_aba_partial(); break;

	case 0x0e: asl_ce_aba_partial(); break;

	case 0x0f: bbr_ce_zpb_partial(); break;

	case 0x10: bpl_ce_rel_partial(); break;

	case 0x11: ora_ce_idy_partial(); break;

	case 0x12: ora_idz_partial(); break;

	case 0x13: bpl_rw2_partial(); break;

	case 0x14: trb_ce_zpg_partial(); break;

	case 0x15: ora_ce_zpx_partial(); break;

	case 0x16: asl_ce_zpx_partial(); break;

	case 0x17: rmb_ce_bzp_partial(); break;

	case 0x18: clc_ce_imp_partial(); break;

	case 0x19: ora_ce_aby_partial(); break;

	case 0x1a: inc_ce_acc_partial(); break;

	case 0x1b: inz_imp_partial(); break;

	case 0x1c: trb_ce_aba_partial(); break;

	case 0x1d: ora_ce_abx_partial(); break;

	case 0x1e: asl_ce_abx_partial(); break;

	case 0x1f: bbr_ce_zpb_partial(); break;

	case 0x20: jsr_ce_adr_partial(); break;

	case 0x21: and_ce_idx_partial(); break;

	case 0x22: jsr_ind_partial(); break;

	case 0x23: jsr_iax_partial(); break;

	case 0x24: bit_ce_zpg_partial(); break;

	case 0x25: and_ce_zpg_partial(); break;

	case 0x26: rol_ce_zpg_partial(); break;

	case 0x27: rmb_ce_bzp_partial(); break;

	case 0x28: plp_ce_imp_partial(); break;

	case 0x29: and_imm_partial(); break;

	case 0x2a: rol_ce_acc_partial(); break;

	case 0x2b: tys_imp_partial(); break;

	case 0x2c: bit_aba_partial(); break;

	case 0x2d: and_aba_partial(); break;

	case 0x2e: rol_ce_aba_partial(); break;

	case 0x2f: bbr_ce_zpb_partial(); break;

	case 0x30: bmi_ce_rel_partial(); break;

	case 0x31: and_ce_idy_partial(); break;

	case 0x32: and_idz_partial(); break;

	case 0x33: bmi_rw2_partial(); break;

	case 0x34: bit_ce_zpx_partial(); break;

	case 0x35: and_ce_zpx_partial(); break;

	case 0x36: rol_ce_zpx_partial(); break;

	case 0x37: rmb_ce_bzp_partial(); break;

	case 0x38: sec_ce_imp_partial(); break;

	case 0x39: and_ce_aby_partial(); break;

	case 0x3a: dec_ce_acc_partial(); break;

	case 0x3b: dez_imp_partial(); break;

	case 0x3c: bit_ce_abx_partial(); break;

	case 0x3d: and_ce_abx_partial(); break;

	case 0x3e: rol_ce_abx_partial(); break;

	case 0x3f: bbr_ce_zpb_partial(); break;

	case 0x40: rti_ce_imp_partial(); break;

	case 0x41: eor_ce_idx_partial(); break;

	case 0x42: neg_acc_partial(); break;

	case 0x43: asr_acc_partial(); break;

	case 0x44: asr_zpg_partial(); break;

	case 0x45: eor_ce_zpg_partial(); break;

	case 0x46: lsr_ce_zpg_partial(); break;

	case 0x47: rmb_ce_bzp_partial(); break;

	case 0x48: pha_ce_imp_partial(); break;

	case 0x49: eor_imm_partial(); break;

	case 0x4a: lsr_ce_acc_partial(); break;

	case 0x4b: taz_imp_partial(); break;

	case 0x4c: jmp_adr_partial(); break;

	case 0x4d: eor_aba_partial(); break;

	case 0x4e: lsr_ce_aba_partial(); break;

	case 0x4f: bbr_ce_zpb_partial(); break;

	case 0x50: bvc_ce_rel_partial(); break;

	case 0x51: eor_ce_idy_partial(); break;

	case 0x52: eor_idz_partial(); break;

	case 0x53: bvc_rw2_partial(); break;

	case 0x54: asr_zpx_partial(); break;

	case 0x55: eor_ce_zpx_partial(); break;

	case 0x56: lsr_ce_zpx_partial(); break;

	case 0x57: rmb_ce_bzp_partial(); break;

	case 0x58: cli_ce_imp_partial(); break;

	case 0x59: eor_ce_aby_partial(); break;

	case 0x5a: phy_ce_imp_partial(); break;

	case 0x5b: tab_imp_partial(); break;

	case 0x5c: map_imp_partial(); break;

	case 0x5d: eor_ce_abx_partial(); break;

	case 0x5e: lsr_ce_abx_partial(); break;

	case 0x5f: bbr_ce_zpb_partial(); break;

	case 0x60: rts_ce_imp_partial(); break;

	case 0x61: adc_ce_idx_partial(); break;

	case 0x62: rtn_imm_partial(); break;

	case 0x63: bsr_rw2_partial(); break;

	case 0x64: stz_ce_zpg_partial(); break;

	case 0x65: adc_ce_zpg_partial(); break;

	case 0x66: ror_ce_zpg_partial(); break;

	case 0x67: rmb_ce_bzp_partial(); break;

	case 0x68: pla_ce_imp_partial(); break;

	case 0x69: adc_ce_imm_partial(); break;

	case 0x6a: ror_ce_acc_partial(); break;

	case 0x6b: tza_imp_partial(); break;

	case 0x6c: jmp_ce_ind_partial(); break;

	case 0x6d: adc_ce_aba_partial(); break;

	case 0x6e: ror_ce_aba_partial(); break;

	case 0x6f: bbr_ce_zpb_partial(); break;

	case 0x70: bvs_ce_rel_partial(); break;

	case 0x71: adc_ce_idy_partial(); break;

	case 0x72: adc_idz_partial(); break;

	case 0x73: bvs_rw2_partial(); break;

	case 0x74: stz_ce_zpx_partial(); break;

	case 0x75: adc_ce_zpx_partial(); break;

	case 0x76: ror_ce_zpx_partial(); break;

	case 0x77: rmb_ce_bzp_partial(); break;

	case 0x78: sei_ce_imp_partial(); break;

	case 0x79: adc_ce_aby_partial(); break;

	case 0x7a: ply_ce_imp_partial(); break;

	case 0x7b: tba_imp_partial(); break;

	case 0x7c: jmp_ce_iax_partial(); break;

	case 0x7d: adc_ce_abx_partial(); break;

	case 0x7e: ror_ce_abx_partial(); break;

	case 0x7f: bbr_ce_zpb_partial(); break;

	case 0x80: bra_ce_rel_partial(); break;

	case 0x81: sta_ce_idx_partial(); break;

	case 0x82: sta_isy_partial(); break;

	case 0x83: bra_rw2_partial(); break;

	case 0x84: sty_ce_zpg_partial(); break;

	case 0x85: sta_ce_zpg_partial(); break;

	case 0x86: stx_ce_zpg_partial(); break;

	case 0x87: smb_ce_bzp_partial(); break;

	case 0x88: dey_ce_imp_partial(); break;

	case 0x89: bit_ce_imm_partial(); break;

	case 0x8a: txa_ce_imp_partial(); break;

	case 0x8b: sty_abx_partial(); break;

	case 0x8c: sty_aba_partial(); break;

	case 0x8d: sta_aba_partial(); break;

	case 0x8e: stx_aba_partial(); break;

	case 0x8f: bbs_ce_zpb_partial(); break;

	case 0x90: bcc_ce_rel_partial(); break;

	case 0x91: sta_ce_idy_partial(); break;

	case 0x92: sta_idz_partial(); break;

	case 0x93: bcc_rw2_partial(); break;

	case 0x94: sty_ce_zpx_partial(); break;

	case 0x95: sta_ce_zpx_partial(); break;

	case 0x96: stx_ce_zpy_partial(); break;

	case 0x97: smb_ce_bzp_partial(); break;

	case 0x98: tya_ce_imp_partial(); break;

	case 0x99: sta_ce_aby_partial(); break;

	case 0x9a: txs_ce_imp_partial(); break;

	case 0x9b: stx_aby_partial(); break;

	case 0x9c: stz_ce_aba_partial(); break;

	case 0x9d: sta_ce_abx_partial(); break;

	case 0x9e: stz_ce_abx_partial(); break;

	case 0x9f: bbs_ce_zpb_partial(); break;

	case 0xa0: ldy_imm_partial(); break;

	case 0xa1: lda_ce_idx_partial(); break;

	case 0xa2: ldx_imm_partial(); break;

	case 0xa3: ldz_imm_partial(); break;

	case 0xa4: ldy_ce_zpg_partial(); break;

	case 0xa5: lda_ce_zpg_partial(); break;

	case 0xa6: ldx_ce_zpg_partial(); break;

	case 0xa7: smb_ce_bzp_partial(); break;

	case 0xa8: tay_ce_imp_partial(); break;

	case 0xa9: lda_imm_partial(); break;

	case 0xaa: tax_ce_imp_partial(); break;

	case 0xab: ldz_aba_partial(); break;

	case 0xac: ldy_aba_partial(); break;

	case 0xad: lda_aba_partial(); break;

	case 0xae: ldx_aba_partial(); break;

	case 0xaf: bbs_ce_zpb_partial(); break;

	case 0xb0: bcs_ce_rel_partial(); break;

	case 0xb1: lda_ce_idy_partial(); break;

	case 0xb2: lda_idz_partial(); break;

	case 0xb3: bcs_rw2_partial(); break;

	case 0xb4: ldy_ce_zpx_partial(); break;

	case 0xb5: lda_ce_zpx_partial(); break;

	case 0xb6: ldx_ce_zpy_partial(); break;

	case 0xb7: smb_ce_bzp_partial(); break;

	case 0xb8: clv_ce_imp_partial(); break;

	case 0xb9: lda_ce_aby_partial(); break;

	case 0xba: tsx_ce_imp_partial(); break;

	case 0xbb: ldz_abx_partial(); break;

	case 0xbc: ldy_ce_abx_partial(); break;

	case 0xbd: lda_ce_abx_partial(); break;

	case 0xbe: ldx_ce_aby_partial(); break;

	case 0xbf: bbs_ce_zpb_partial(); break;

	case 0xc0: cpy_imm_partial(); break;

	case 0xc1: cmp_ce_idx_partial(); break;

	case 0xc2: cpz_imm_partial(); break;

	case 0xc3: dew_zpg_partial(); break;

	case 0xc4: cpy_ce_zpg_partial(); break;

	case 0xc5: cmp_ce_zpg_partial(); break;

	case 0xc6: dec_ce_zpg_partial(); break;

	case 0xc7: smb_ce_bzp_partial(); break;

	case 0xc8: iny_ce_imp_partial(); break;

	case 0xc9: cmp_imm_partial(); break;

	case 0xca: dex_ce_imp_partial(); break;

	case 0xcb: asw_aba_partial(); break;

	case 0xcc: cpy_aba_partial(); break;

	case 0xcd: cmp_aba_partial(); break;

	case 0xce: dec_ce_aba_partial(); break;

	case 0xcf: bbs_ce_zpb_partial(); break;

	case 0xd0: bne_ce_rel_partial(); break;

	case 0xd1: cmp_ce_idy_partial(); break;

	case 0xd2: cmp_idz_partial(); break;

	case 0xd3: bne_rw2_partial(); break;

	case 0xd4: cpz_zpg_partial(); break;

	case 0xd5: cmp_ce_zpx_partial(); break;

	case 0xd6: dec_ce_zpx_partial(); break;

	case 0xd7: smb_ce_bzp_partial(); break;

	case 0xd8: cld_ce_imp_partial(); break;

	case 0xd9: cmp_ce_aby_partial(); break;

	case 0xda: phx_ce_imp_partial(); break;

	case 0xdb: phz_imp_partial(); break;

	case 0xdc: cpz_aba_partial(); break;

	case 0xdd: cmp_ce_abx_partial(); break;

	case 0xde: dec_ce_abx_partial(); break;

	case 0xdf: bbs_ce_zpb_partial(); break;

	case 0xe0: cpx_imm_partial(); break;

	case 0xe1: sbc_ce_idx_partial(); break;

	case 0xe2: lda_isy_partial(); break;

	case 0xe3: inw_zpg_partial(); break;

	case 0xe4: cpx_ce_zpg_partial(); break;

	case 0xe5: sbc_ce_zpg_partial(); break;

	case 0xe6: inc_ce_zpg_partial(); break;

	case 0xe7: smb_ce_bzp_partial(); break;

	case 0xe8: inx_ce_imp_partial(); break;

	case 0xe9: sbc_ce_imm_partial(); break;

	case 0xea: eom_imp_partial(); break;

	case 0xeb: row_aba_partial(); break;

	case 0xec: cpx_aba_partial(); break;

	case 0xed: sbc_ce_aba_partial(); break;

	case 0xee: inc_ce_aba_partial(); break;

	case 0xef: bbs_ce_zpb_partial(); break;

	case 0xf0: beq_ce_rel_partial(); break;

	case 0xf1: sbc_ce_idy_partial(); break;

	case 0xf2: sbc_idz_partial(); break;

	case 0xf3: beq_rw2_partial(); break;

	case 0xf4: phw_iw2_partial(); break;

	case 0xf5: sbc_ce_zpx_partial(); break;

	case 0xf6: inc_ce_zpx_partial(); break;

	case 0xf7: smb_ce_bzp_partial(); break;

	case 0xf8: sed_ce_imp_partial(); break;

	case 0xf9: sbc_ce_aby_partial(); break;

	case 0xfa: plx_ce_imp_partial(); break;

	case 0xfb: plz_imp_partial(); break;

	case 0xfc: phw_aba_partial(); break;

	case 0xfd: sbc_ce_abx_partial(); break;

	case 0xfe: inc_ce_abx_partial(); break;

	case 0xff: bbs_ce_zpb_partial(); break;

	case STATE_RESET: reset_partial(); break;

	}
}

const m4510_device::disasm_entry m4510_device::disasm_entries[0x100] = {

	{ "brk", DASM_imp, 0 },

	{ "ora", DASM_idx, 0 },

	{ "cle", DASM_imp, 0 },

	{ "see", DASM_imp, 0 },

	{ "tsb", DASM_zpg, 0 },

	{ "ora", DASM_zpg, 0 },

	{ "asl", DASM_zpg, 0 },

	{ "rmb", DASM_bzp, 0 },

	{ "php", DASM_imp, 0 },

	{ "ora", DASM_imm, 0 },

	{ "asl", DASM_acc, 0 },

	{ "tsy", DASM_imp, 0 },

	{ "tsb", DASM_aba, 0 },

	{ "ora", DASM_aba, 0 },

	{ "asl", DASM_aba, 0 },

	{ "bbr", DASM_zpb, 0 },

	{ "bpl", DASM_rel, 0 },

	{ "ora", DASM_idy, 0 },

	{ "ora", DASM_idz, 0 },

	{ "bpl", DASM_rw2, 0 },

	{ "trb", DASM_zpg, 0 },

	{ "ora", DASM_zpx, 0 },

	{ "asl", DASM_zpx, 0 },

	{ "rmb", DASM_bzp, 0 },

	{ "clc", DASM_imp, 0 },

	{ "ora", DASM_aby, 0 },

	{ "inc", DASM_acc, 0 },

	{ "inz", DASM_imp, 0 },

	{ "trb", DASM_aba, 0 },

	{ "ora", DASM_abx, 0 },

	{ "asl", DASM_abx, 0 },

	{ "bbr", DASM_zpb, 0 },

	{ "jsr", DASM_adr, DASMFLAG_STEP_OVER },

	{ "and", DASM_idx, 0 },

	{ "jsr", DASM_ind, DASMFLAG_STEP_OVER },

	{ "jsr", DASM_iax, DASMFLAG_STEP_OVER },

	{ "bit", DASM_zpg, 0 },

	{ "and", DASM_zpg, 0 },

	{ "rol", DASM_zpg, 0 },

	{ "rmb", DASM_bzp, 0 },

	{ "plp", DASM_imp, 0 },

	{ "and", DASM_imm, 0 },

	{ "rol", DASM_acc, 0 },

	{ "tys", DASM_imp, 0 },

	{ "bit", DASM_aba, 0 },

	{ "and", DASM_aba, 0 },

	{ "rol", DASM_aba, 0 },

	{ "bbr", DASM_zpb, 0 },

	{ "bmi", DASM_rel, 0 },

	{ "and", DASM_idy, 0 },

	{ "and", DASM_idz, 0 },

	{ "bmi", DASM_rw2, 0 },

	{ "bit", DASM_zpx, 0 },

	{ "and", DASM_zpx, 0 },

	{ "rol", DASM_zpx, 0 },

	{ "rmb", DASM_bzp, 0 },

	{ "sec", DASM_imp, 0 },

	{ "and", DASM_aby, 0 },

	{ "dec", DASM_acc, 0 },

	{ "dez", DASM_imp, 0 },

	{ "bit", DASM_abx, 0 },

	{ "and", DASM_abx, 0 },

	{ "rol", DASM_abx, 0 },

	{ "bbr", DASM_zpb, 0 },

	{ "rti", DASM_imp, DASMFLAG_STEP_OUT },

	{ "eor", DASM_idx, 0 },

	{ "neg", DASM_acc, 0 },

	{ "asr", DASM_acc, 0 },

	{ "asr", DASM_zpg, 0 },

	{ "eor", DASM_zpg, 0 },

	{ "lsr", DASM_zpg, 0 },

	{ "rmb", DASM_bzp, 0 },

	{ "pha", DASM_imp, 0 },

	{ "eor", DASM_imm, 0 },

	{ "lsr", DASM_acc, 0 },

	{ "taz", DASM_imp, 0 },

	{ "jmp", DASM_adr, 0 },

	{ "eor", DASM_aba, 0 },

	{ "lsr", DASM_aba, 0 },

	{ "bbr", DASM_zpb, 0 },

	{ "bvc", DASM_rel, 0 },

	{ "eor", DASM_idy, 0 },

	{ "eor", DASM_idz, 0 },

	{ "bvc", DASM_rw2, 0 },

	{ "asr", DASM_zpx, 0 },

	{ "eor", DASM_zpx, 0 },

	{ "lsr", DASM_zpx, 0 },

	{ "rmb", DASM_bzp, 0 },

	{ "cli", DASM_imp, 0 },

	{ "eor", DASM_aby, 0 },

	{ "phy", DASM_imp, 0 },

	{ "tab", DASM_imp, 0 },

	{ "map", DASM_imp, 0 },

	{ "eor", DASM_abx, 0 },

	{ "lsr", DASM_abx, 0 },

	{ "bbr", DASM_zpb, 0 },

	{ "rts", DASM_imp, DASMFLAG_STEP_OUT },

	{ "adc", DASM_idx, 0 },

	{ "rtn", DASM_imm, DASMFLAG_STEP_OUT },

	{ "bsr", DASM_rw2, DASMFLAG_STEP_OVER },

	{ "stz", DASM_zpg, 0 },

	{ "adc", DASM_zpg, 0 },

	{ "ror", DASM_zpg, 0 },

	{ "rmb", DASM_bzp, 0 },

	{ "pla", DASM_imp, 0 },

	{ "adc", DASM_imm, 0 },

	{ "ror", DASM_acc, 0 },

	{ "tza", DASM_imp, 0 },

	{ "jmp", DASM_ind, 0 },

	{ "adc", DASM_aba, 0 },

	{ "ror", DASM_aba, 0 },

	{ "bbr", DASM_zpb, 0 },

	{ "bvs", DASM_rel, 0 },

	{ "adc", DASM_idy, 0 },

	{ "adc", DASM_idz, 0 },

	{ "bvs", DASM_rw2, 0 },

	{ "stz", DASM_zpx, 0 },

	{ "adc", DASM_zpx, 0 },

	{ "ror", DASM_zpx, 0 },

	{ "rmb", DASM_bzp, 0 },

	{ "sei", DASM_imp, 0 },

	{ "adc", DASM_aby, 0 },

	{ "ply", DASM_imp, 0 },

	{ "tba", DASM_imp, 0 },

	{ "jmp", DASM_iax, 0 },

	{ "adc", DASM_abx, 0 },

	{ "ror", DASM_abx, 0 },

	{ "bbr", DASM_zpb, 0 },

	{ "bra", DASM_rel, 0 },

	{ "sta", DASM_idx, 0 },

	{ "sta", DASM_isy, 0 },

	{ "bra", DASM_rw2, 0 },

	{ "sty", DASM_zpg, 0 },

	{ "sta", DASM_zpg, 0 },

	{ "stx", DASM_zpg, 0 },

	{ "smb", DASM_bzp, 0 },

	{ "dey", DASM_imp, 0 },

	{ "bit", DASM_imm, 0 },

	{ "txa", DASM_imp, 0 },

	{ "sty", DASM_abx, 0 },

	{ "sty", DASM_aba, 0 },

	{ "sta", DASM_aba, 0 },

	{ "stx", DASM_aba, 0 },

	{ "bbs", DASM_zpb, 0 },

	{ "bcc", DASM_rel, 0 },

	{ "sta", DASM_idy, 0 },

	{ "sta", DASM_idz, 0 },

	{ "bcc", DASM_rw2, 0 },

	{ "sty", DASM_zpx, 0 },

	{ "sta", DASM_zpx, 0 },

	{ "stx", DASM_zpy, 0 },

	{ "smb", DASM_bzp, 0 },

	{ "tya", DASM_imp, 0 },

	{ "sta", DASM_aby, 0 },

	{ "txs", DASM_imp, 0 },

	{ "stx", DASM_aby, 0 },

	{ "stz", DASM_aba, 0 },

	{ "sta", DASM_abx, 0 },

	{ "stz", DASM_abx, 0 },

	{ "bbs", DASM_zpb, 0 },

	{ "ldy", DASM_imm, 0 },

	{ "lda", DASM_idx, 0 },

	{ "ldx", DASM_imm, 0 },

	{ "ldz", DASM_imm, 0 },

	{ "ldy", DASM_zpg, 0 },

	{ "lda", DASM_zpg, 0 },

	{ "ldx", DASM_zpg, 0 },

	{ "smb", DASM_bzp, 0 },

	{ "tay", DASM_imp, 0 },

	{ "lda", DASM_imm, 0 },

	{ "tax", DASM_imp, 0 },

	{ "ldz", DASM_aba, 0 },

	{ "ldy", DASM_aba, 0 },

	{ "lda", DASM_aba, 0 },

	{ "ldx", DASM_aba, 0 },

	{ "bbs", DASM_zpb, 0 },

	{ "bcs", DASM_rel, 0 },

	{ "lda", DASM_idy, 0 },

	{ "lda", DASM_idz, 0 },

	{ "bcs", DASM_rw2, 0 },

	{ "ldy", DASM_zpx, 0 },

	{ "lda", DASM_zpx, 0 },

	{ "ldx", DASM_zpy, 0 },

	{ "smb", DASM_bzp, 0 },

	{ "clv", DASM_imp, 0 },

	{ "lda", DASM_aby, 0 },

	{ "tsx", DASM_imp, 0 },

	{ "ldz", DASM_abx, 0 },

	{ "ldy", DASM_abx, 0 },

	{ "lda", DASM_abx, 0 },

	{ "ldx", DASM_aby, 0 },

	{ "bbs", DASM_zpb, 0 },

	{ "cpy", DASM_imm, 0 },

	{ "cmp", DASM_idx, 0 },

	{ "cpz", DASM_imm, 0 },

	{ "dew", DASM_zpg, 0 },

	{ "cpy", DASM_zpg, 0 },

	{ "cmp", DASM_zpg, 0 },

	{ "dec", DASM_zpg, 0 },

	{ "smb", DASM_bzp, 0 },

	{ "iny", DASM_imp, 0 },

	{ "cmp", DASM_imm, 0 },

	{ "dex", DASM_imp, 0 },

	{ "asw", DASM_aba, 0 },

	{ "cpy", DASM_aba, 0 },

	{ "cmp", DASM_aba, 0 },

	{ "dec", DASM_aba, 0 },

	{ "bbs", DASM_zpb, 0 },

	{ "bne", DASM_rel, 0 },

	{ "cmp", DASM_idy, 0 },

	{ "cmp", DASM_idz, 0 },

	{ "bne", DASM_rw2, 0 },

	{ "cpz", DASM_zpg, 0 },

	{ "cmp", DASM_zpx, 0 },

	{ "dec", DASM_zpx, 0 },

	{ "smb", DASM_bzp, 0 },

	{ "cld", DASM_imp, 0 },

	{ "cmp", DASM_aby, 0 },

	{ "phx", DASM_imp, 0 },

	{ "phz", DASM_imp, 0 },

	{ "cpz", DASM_aba, 0 },

	{ "cmp", DASM_abx, 0 },

	{ "dec", DASM_abx, 0 },

	{ "bbs", DASM_zpb, 0 },

	{ "cpx", DASM_imm, 0 },

	{ "sbc", DASM_idx, 0 },

	{ "lda", DASM_isy, 0 },

	{ "inw", DASM_zpg, 0 },

	{ "cpx", DASM_zpg, 0 },

	{ "sbc", DASM_zpg, 0 },

	{ "inc", DASM_zpg, 0 },

	{ "smb", DASM_bzp, 0 },

	{ "inx", DASM_imp, 0 },

	{ "sbc", DASM_imm, 0 },

	{ "eom", DASM_imp, 0 },

	{ "row", DASM_aba, 0 },

	{ "cpx", DASM_aba, 0 },

	{ "sbc", DASM_aba, 0 },

	{ "inc", DASM_aba, 0 },

	{ "bbs", DASM_zpb, 0 },

	{ "beq", DASM_rel, 0 },

	{ "sbc", DASM_idy, 0 },

	{ "sbc", DASM_idz, 0 },

	{ "beq", DASM_rw2, 0 },

	{ "phw", DASM_iw2, 0 },

	{ "sbc", DASM_zpx, 0 },

	{ "inc", DASM_zpx, 0 },

	{ "smb", DASM_bzp, 0 },

	{ "sed", DASM_imp, 0 },

	{ "sbc", DASM_aby, 0 },

	{ "plx", DASM_imp, 0 },

	{ "plz", DASM_imp, 0 },

	{ "phw", DASM_aba, 0 },

	{ "sbc", DASM_abx, 0 },

	{ "inc", DASM_abx, 0 },

	{ "bbs", DASM_zpb, 0 },

};

