

void r65c02_device::do_exec_full()
{
	switch(inst_state) {

	case 0x00: brk_c_imp_full(); break;

	case 0x01: ora_idx_full(); break;

	case 0x02: nop_imm_full(); break;

	case 0x03: nop_c_imp_full(); break;

	case 0x04: tsb_zpg_full(); break;

	case 0x05: ora_zpg_full(); break;

	case 0x06: asl_zpg_full(); break;

	case 0x07: rmb_bzp_full(); break;

	case 0x08: php_imp_full(); break;

	case 0x09: ora_imm_full(); break;

	case 0x0a: asl_acc_full(); break;

	case 0x0b: nop_c_imp_full(); break;

	case 0x0c: tsb_aba_full(); break;

	case 0x0d: ora_aba_full(); break;

	case 0x0e: asl_aba_full(); break;

	case 0x0f: bbr_zpb_full(); break;

	case 0x10: bpl_rel_full(); break;

	case 0x11: ora_idy_full(); break;

	case 0x12: ora_zpi_full(); break;

	case 0x13: nop_c_imp_full(); break;

	case 0x14: trb_zpg_full(); break;

	case 0x15: ora_zpx_full(); break;

	case 0x16: asl_zpx_full(); break;

	case 0x17: rmb_bzp_full(); break;

	case 0x18: clc_imp_full(); break;

	case 0x19: ora_aby_full(); break;

	case 0x1a: inc_acc_full(); break;

	case 0x1b: nop_c_imp_full(); break;

	case 0x1c: trb_aba_full(); break;

	case 0x1d: ora_abx_full(); break;

	case 0x1e: asl_c_abx_full(); break;

	case 0x1f: bbr_zpb_full(); break;

	case 0x20: jsr_adr_full(); break;

	case 0x21: and_idx_full(); break;

	case 0x22: nop_imm_full(); break;

	case 0x23: nop_c_imp_full(); break;

	case 0x24: bit_zpg_full(); break;

	case 0x25: and_zpg_full(); break;

	case 0x26: rol_zpg_full(); break;

	case 0x27: rmb_bzp_full(); break;

	case 0x28: plp_imp_full(); break;

	case 0x29: and_imm_full(); break;

	case 0x2a: rol_acc_full(); break;

	case 0x2b: nop_c_imp_full(); break;

	case 0x2c: bit_aba_full(); break;

	case 0x2d: and_aba_full(); break;

	case 0x2e: rol_aba_full(); break;

	case 0x2f: bbr_zpb_full(); break;

	case 0x30: bmi_rel_full(); break;

	case 0x31: and_idy_full(); break;

	case 0x32: and_zpi_full(); break;

	case 0x33: nop_c_imp_full(); break;

	case 0x34: bit_zpx_full(); break;

	case 0x35: and_zpx_full(); break;

	case 0x36: rol_zpx_full(); break;

	case 0x37: rmb_bzp_full(); break;

	case 0x38: sec_imp_full(); break;

	case 0x39: and_aby_full(); break;

	case 0x3a: dec_acc_full(); break;

	case 0x3b: nop_c_imp_full(); break;

	case 0x3c: bit_abx_full(); break;

	case 0x3d: and_abx_full(); break;

	case 0x3e: rol_c_abx_full(); break;

	case 0x3f: bbr_zpb_full(); break;

	case 0x40: rti_imp_full(); break;

	case 0x41: eor_idx_full(); break;

	case 0x42: nop_imm_full(); break;

	case 0x43: nop_c_imp_full(); break;

	case 0x44: nop_zpg_full(); break;

	case 0x45: eor_zpg_full(); break;

	case 0x46: lsr_zpg_full(); break;

	case 0x47: rmb_bzp_full(); break;

	case 0x48: pha_imp_full(); break;

	case 0x49: eor_imm_full(); break;

	case 0x4a: lsr_acc_full(); break;

	case 0x4b: nop_c_imp_full(); break;

	case 0x4c: jmp_adr_full(); break;

	case 0x4d: eor_aba_full(); break;

	case 0x4e: lsr_aba_full(); break;

	case 0x4f: bbr_zpb_full(); break;

	case 0x50: bvc_rel_full(); break;

	case 0x51: eor_idy_full(); break;

	case 0x52: eor_zpi_full(); break;

	case 0x53: nop_c_imp_full(); break;

	case 0x54: nop_zpx_full(); break;

	case 0x55: eor_zpx_full(); break;

	case 0x56: lsr_zpx_full(); break;

	case 0x57: rmb_bzp_full(); break;

	case 0x58: cli_imp_full(); break;

	case 0x59: eor_aby_full(); break;

	case 0x5a: phy_imp_full(); break;

	case 0x5b: nop_c_imp_full(); break;

	case 0x5c: nop_c_aba_full(); break;

	case 0x5d: eor_abx_full(); break;

	case 0x5e: lsr_c_abx_full(); break;

	case 0x5f: bbr_zpb_full(); break;

	case 0x60: rts_imp_full(); break;

	case 0x61: adc_c_idx_full(); break;

	case 0x62: nop_imm_full(); break;

	case 0x63: nop_c_imp_full(); break;

	case 0x64: stz_zpg_full(); break;

	case 0x65: adc_c_zpg_full(); break;

	case 0x66: ror_zpg_full(); break;

	case 0x67: rmb_bzp_full(); break;

	case 0x68: pla_imp_full(); break;

	case 0x69: adc_c_imm_full(); break;

	case 0x6a: ror_acc_full(); break;

	case 0x6b: nop_c_imp_full(); break;

	case 0x6c: jmp_c_ind_full(); break;

	case 0x6d: adc_c_aba_full(); break;

	case 0x6e: ror_aba_full(); break;

	case 0x6f: bbr_zpb_full(); break;

	case 0x70: bvs_rel_full(); break;

	case 0x71: adc_c_idy_full(); break;

	case 0x72: adc_c_zpi_full(); break;

	case 0x73: nop_c_imp_full(); break;

	case 0x74: stz_zpx_full(); break;

	case 0x75: adc_c_zpx_full(); break;

	case 0x76: ror_zpx_full(); break;

	case 0x77: rmb_bzp_full(); break;

	case 0x78: sei_imp_full(); break;

	case 0x79: adc_c_aby_full(); break;

	case 0x7a: ply_imp_full(); break;

	case 0x7b: nop_c_imp_full(); break;

	case 0x7c: jmp_iax_full(); break;

	case 0x7d: adc_c_abx_full(); break;

	case 0x7e: ror_c_abx_full(); break;

	case 0x7f: bbr_zpb_full(); break;

	case 0x80: bra_rel_full(); break;

	case 0x81: sta_idx_full(); break;

	case 0x82: nop_imm_full(); break;

	case 0x83: nop_c_imp_full(); break;

	case 0x84: sty_zpg_full(); break;

	case 0x85: sta_zpg_full(); break;

	case 0x86: stx_zpg_full(); break;

	case 0x87: smb_bzp_full(); break;

	case 0x88: dey_imp_full(); break;

	case 0x89: bit_imm_full(); break;

	case 0x8a: txa_imp_full(); break;

	case 0x8b: nop_c_imp_full(); break;

	case 0x8c: sty_aba_full(); break;

	case 0x8d: sta_aba_full(); break;

	case 0x8e: stx_aba_full(); break;

	case 0x8f: bbs_zpb_full(); break;

	case 0x90: bcc_rel_full(); break;

	case 0x91: sta_idy_full(); break;

	case 0x92: sta_zpi_full(); break;

	case 0x93: nop_c_imp_full(); break;

	case 0x94: sty_zpx_full(); break;

	case 0x95: sta_zpx_full(); break;

	case 0x96: stx_zpy_full(); break;

	case 0x97: smb_bzp_full(); break;

	case 0x98: tya_imp_full(); break;

	case 0x99: sta_aby_full(); break;

	case 0x9a: txs_imp_full(); break;

	case 0x9b: nop_c_imp_full(); break;

	case 0x9c: stz_aba_full(); break;

	case 0x9d: sta_abx_full(); break;

	case 0x9e: stz_abx_full(); break;

	case 0x9f: bbs_zpb_full(); break;

	case 0xa0: ldy_imm_full(); break;

	case 0xa1: lda_idx_full(); break;

	case 0xa2: ldx_imm_full(); break;

	case 0xa3: nop_c_imp_full(); break;

	case 0xa4: ldy_zpg_full(); break;

	case 0xa5: lda_zpg_full(); break;

	case 0xa6: ldx_zpg_full(); break;

	case 0xa7: smb_bzp_full(); break;

	case 0xa8: tay_imp_full(); break;

	case 0xa9: lda_imm_full(); break;

	case 0xaa: tax_imp_full(); break;

	case 0xab: nop_c_imp_full(); break;

	case 0xac: ldy_aba_full(); break;

	case 0xad: lda_aba_full(); break;

	case 0xae: ldx_aba_full(); break;

	case 0xaf: bbs_zpb_full(); break;

	case 0xb0: bcs_rel_full(); break;

	case 0xb1: lda_idy_full(); break;

	case 0xb2: lda_zpi_full(); break;

	case 0xb3: nop_c_imp_full(); break;

	case 0xb4: ldy_zpx_full(); break;

	case 0xb5: lda_zpx_full(); break;

	case 0xb6: ldx_zpy_full(); break;

	case 0xb7: smb_bzp_full(); break;

	case 0xb8: clv_imp_full(); break;

	case 0xb9: lda_aby_full(); break;

	case 0xba: tsx_imp_full(); break;

	case 0xbb: nop_c_imp_full(); break;

	case 0xbc: ldy_abx_full(); break;

	case 0xbd: lda_abx_full(); break;

	case 0xbe: ldx_aby_full(); break;

	case 0xbf: bbs_zpb_full(); break;

	case 0xc0: cpy_imm_full(); break;

	case 0xc1: cmp_idx_full(); break;

	case 0xc2: nop_imm_full(); break;

	case 0xc3: nop_c_imp_full(); break;

	case 0xc4: cpy_zpg_full(); break;

	case 0xc5: cmp_zpg_full(); break;

	case 0xc6: dec_zpg_full(); break;

	case 0xc7: smb_bzp_full(); break;

	case 0xc8: iny_imp_full(); break;

	case 0xc9: cmp_imm_full(); break;

	case 0xca: dex_imp_full(); break;

	case 0xcb: wai_imp_full(); break;

	case 0xcc: cpy_aba_full(); break;

	case 0xcd: cmp_aba_full(); break;

	case 0xce: dec_aba_full(); break;

	case 0xcf: bbs_zpb_full(); break;

	case 0xd0: bne_rel_full(); break;

	case 0xd1: cmp_idy_full(); break;

	case 0xd2: cmp_zpi_full(); break;

	case 0xd3: nop_c_imp_full(); break;

	case 0xd4: nop_zpx_full(); break;

	case 0xd5: cmp_zpx_full(); break;

	case 0xd6: dec_zpx_full(); break;

	case 0xd7: smb_bzp_full(); break;

	case 0xd8: cld_imp_full(); break;

	case 0xd9: cmp_aby_full(); break;

	case 0xda: phx_imp_full(); break;

	case 0xdb: stp_imp_full(); break;

	case 0xdc: nop_c_abx_full(); break;

	case 0xdd: cmp_abx_full(); break;

	case 0xde: dec_abx_full(); break;

	case 0xdf: bbs_zpb_full(); break;

	case 0xe0: cpx_imm_full(); break;

	case 0xe1: sbc_c_idx_full(); break;

	case 0xe2: nop_imm_full(); break;

	case 0xe3: nop_c_imp_full(); break;

	case 0xe4: cpx_zpg_full(); break;

	case 0xe5: sbc_c_zpg_full(); break;

	case 0xe6: inc_zpg_full(); break;

	case 0xe7: smb_bzp_full(); break;

	case 0xe8: inx_imp_full(); break;

	case 0xe9: sbc_c_imm_full(); break;

	case 0xea: nop_imp_full(); break;

	case 0xeb: nop_c_imp_full(); break;

	case 0xec: cpx_aba_full(); break;

	case 0xed: sbc_c_aba_full(); break;

	case 0xee: inc_aba_full(); break;

	case 0xef: bbs_zpb_full(); break;

	case 0xf0: beq_rel_full(); break;

	case 0xf1: sbc_c_idy_full(); break;

	case 0xf2: sbc_c_zpi_full(); break;

	case 0xf3: nop_c_imp_full(); break;

	case 0xf4: nop_zpx_full(); break;

	case 0xf5: sbc_c_zpx_full(); break;

	case 0xf6: inc_zpx_full(); break;

	case 0xf7: smb_bzp_full(); break;

	case 0xf8: sed_imp_full(); break;

	case 0xf9: sbc_c_aby_full(); break;

	case 0xfa: plx_imp_full(); break;

	case 0xfb: nop_c_imp_full(); break;

	case 0xfc: nop_c_abx_full(); break;

	case 0xfd: sbc_c_abx_full(); break;

	case 0xfe: inc_abx_full(); break;

	case 0xff: bbs_zpb_full(); break;

	case STATE_RESET: reset_full(); break;

	}
}

void r65c02_device::do_exec_partial()
{
	switch(inst_state) {

	case 0x00: brk_c_imp_partial(); break;

	case 0x01: ora_idx_partial(); break;

	case 0x02: nop_imm_partial(); break;

	case 0x03: nop_c_imp_partial(); break;

	case 0x04: tsb_zpg_partial(); break;

	case 0x05: ora_zpg_partial(); break;

	case 0x06: asl_zpg_partial(); break;

	case 0x07: rmb_bzp_partial(); break;

	case 0x08: php_imp_partial(); break;

	case 0x09: ora_imm_partial(); break;

	case 0x0a: asl_acc_partial(); break;

	case 0x0b: nop_c_imp_partial(); break;

	case 0x0c: tsb_aba_partial(); break;

	case 0x0d: ora_aba_partial(); break;

	case 0x0e: asl_aba_partial(); break;

	case 0x0f: bbr_zpb_partial(); break;

	case 0x10: bpl_rel_partial(); break;

	case 0x11: ora_idy_partial(); break;

	case 0x12: ora_zpi_partial(); break;

	case 0x13: nop_c_imp_partial(); break;

	case 0x14: trb_zpg_partial(); break;

	case 0x15: ora_zpx_partial(); break;

	case 0x16: asl_zpx_partial(); break;

	case 0x17: rmb_bzp_partial(); break;

	case 0x18: clc_imp_partial(); break;

	case 0x19: ora_aby_partial(); break;

	case 0x1a: inc_acc_partial(); break;

	case 0x1b: nop_c_imp_partial(); break;

	case 0x1c: trb_aba_partial(); break;

	case 0x1d: ora_abx_partial(); break;

	case 0x1e: asl_c_abx_partial(); break;

	case 0x1f: bbr_zpb_partial(); break;

	case 0x20: jsr_adr_partial(); break;

	case 0x21: and_idx_partial(); break;

	case 0x22: nop_imm_partial(); break;

	case 0x23: nop_c_imp_partial(); break;

	case 0x24: bit_zpg_partial(); break;

	case 0x25: and_zpg_partial(); break;

	case 0x26: rol_zpg_partial(); break;

	case 0x27: rmb_bzp_partial(); break;

	case 0x28: plp_imp_partial(); break;

	case 0x29: and_imm_partial(); break;

	case 0x2a: rol_acc_partial(); break;

	case 0x2b: nop_c_imp_partial(); break;

	case 0x2c: bit_aba_partial(); break;

	case 0x2d: and_aba_partial(); break;

	case 0x2e: rol_aba_partial(); break;

	case 0x2f: bbr_zpb_partial(); break;

	case 0x30: bmi_rel_partial(); break;

	case 0x31: and_idy_partial(); break;

	case 0x32: and_zpi_partial(); break;

	case 0x33: nop_c_imp_partial(); break;

	case 0x34: bit_zpx_partial(); break;

	case 0x35: and_zpx_partial(); break;

	case 0x36: rol_zpx_partial(); break;

	case 0x37: rmb_bzp_partial(); break;

	case 0x38: sec_imp_partial(); break;

	case 0x39: and_aby_partial(); break;

	case 0x3a: dec_acc_partial(); break;

	case 0x3b: nop_c_imp_partial(); break;

	case 0x3c: bit_abx_partial(); break;

	case 0x3d: and_abx_partial(); break;

	case 0x3e: rol_c_abx_partial(); break;

	case 0x3f: bbr_zpb_partial(); break;

	case 0x40: rti_imp_partial(); break;

	case 0x41: eor_idx_partial(); break;

	case 0x42: nop_imm_partial(); break;

	case 0x43: nop_c_imp_partial(); break;

	case 0x44: nop_zpg_partial(); break;

	case 0x45: eor_zpg_partial(); break;

	case 0x46: lsr_zpg_partial(); break;

	case 0x47: rmb_bzp_partial(); break;

	case 0x48: pha_imp_partial(); break;

	case 0x49: eor_imm_partial(); break;

	case 0x4a: lsr_acc_partial(); break;

	case 0x4b: nop_c_imp_partial(); break;

	case 0x4c: jmp_adr_partial(); break;

	case 0x4d: eor_aba_partial(); break;

	case 0x4e: lsr_aba_partial(); break;

	case 0x4f: bbr_zpb_partial(); break;

	case 0x50: bvc_rel_partial(); break;

	case 0x51: eor_idy_partial(); break;

	case 0x52: eor_zpi_partial(); break;

	case 0x53: nop_c_imp_partial(); break;

	case 0x54: nop_zpx_partial(); break;

	case 0x55: eor_zpx_partial(); break;

	case 0x56: lsr_zpx_partial(); break;

	case 0x57: rmb_bzp_partial(); break;

	case 0x58: cli_imp_partial(); break;

	case 0x59: eor_aby_partial(); break;

	case 0x5a: phy_imp_partial(); break;

	case 0x5b: nop_c_imp_partial(); break;

	case 0x5c: nop_c_aba_partial(); break;

	case 0x5d: eor_abx_partial(); break;

	case 0x5e: lsr_c_abx_partial(); break;

	case 0x5f: bbr_zpb_partial(); break;

	case 0x60: rts_imp_partial(); break;

	case 0x61: adc_c_idx_partial(); break;

	case 0x62: nop_imm_partial(); break;

	case 0x63: nop_c_imp_partial(); break;

	case 0x64: stz_zpg_partial(); break;

	case 0x65: adc_c_zpg_partial(); break;

	case 0x66: ror_zpg_partial(); break;

	case 0x67: rmb_bzp_partial(); break;

	case 0x68: pla_imp_partial(); break;

	case 0x69: adc_c_imm_partial(); break;

	case 0x6a: ror_acc_partial(); break;

	case 0x6b: nop_c_imp_partial(); break;

	case 0x6c: jmp_c_ind_partial(); break;

	case 0x6d: adc_c_aba_partial(); break;

	case 0x6e: ror_aba_partial(); break;

	case 0x6f: bbr_zpb_partial(); break;

	case 0x70: bvs_rel_partial(); break;

	case 0x71: adc_c_idy_partial(); break;

	case 0x72: adc_c_zpi_partial(); break;

	case 0x73: nop_c_imp_partial(); break;

	case 0x74: stz_zpx_partial(); break;

	case 0x75: adc_c_zpx_partial(); break;

	case 0x76: ror_zpx_partial(); break;

	case 0x77: rmb_bzp_partial(); break;

	case 0x78: sei_imp_partial(); break;

	case 0x79: adc_c_aby_partial(); break;

	case 0x7a: ply_imp_partial(); break;

	case 0x7b: nop_c_imp_partial(); break;

	case 0x7c: jmp_iax_partial(); break;

	case 0x7d: adc_c_abx_partial(); break;

	case 0x7e: ror_c_abx_partial(); break;

	case 0x7f: bbr_zpb_partial(); break;

	case 0x80: bra_rel_partial(); break;

	case 0x81: sta_idx_partial(); break;

	case 0x82: nop_imm_partial(); break;

	case 0x83: nop_c_imp_partial(); break;

	case 0x84: sty_zpg_partial(); break;

	case 0x85: sta_zpg_partial(); break;

	case 0x86: stx_zpg_partial(); break;

	case 0x87: smb_bzp_partial(); break;

	case 0x88: dey_imp_partial(); break;

	case 0x89: bit_imm_partial(); break;

	case 0x8a: txa_imp_partial(); break;

	case 0x8b: nop_c_imp_partial(); break;

	case 0x8c: sty_aba_partial(); break;

	case 0x8d: sta_aba_partial(); break;

	case 0x8e: stx_aba_partial(); break;

	case 0x8f: bbs_zpb_partial(); break;

	case 0x90: bcc_rel_partial(); break;

	case 0x91: sta_idy_partial(); break;

	case 0x92: sta_zpi_partial(); break;

	case 0x93: nop_c_imp_partial(); break;

	case 0x94: sty_zpx_partial(); break;

	case 0x95: sta_zpx_partial(); break;

	case 0x96: stx_zpy_partial(); break;

	case 0x97: smb_bzp_partial(); break;

	case 0x98: tya_imp_partial(); break;

	case 0x99: sta_aby_partial(); break;

	case 0x9a: txs_imp_partial(); break;

	case 0x9b: nop_c_imp_partial(); break;

	case 0x9c: stz_aba_partial(); break;

	case 0x9d: sta_abx_partial(); break;

	case 0x9e: stz_abx_partial(); break;

	case 0x9f: bbs_zpb_partial(); break;

	case 0xa0: ldy_imm_partial(); break;

	case 0xa1: lda_idx_partial(); break;

	case 0xa2: ldx_imm_partial(); break;

	case 0xa3: nop_c_imp_partial(); break;

	case 0xa4: ldy_zpg_partial(); break;

	case 0xa5: lda_zpg_partial(); break;

	case 0xa6: ldx_zpg_partial(); break;

	case 0xa7: smb_bzp_partial(); break;

	case 0xa8: tay_imp_partial(); break;

	case 0xa9: lda_imm_partial(); break;

	case 0xaa: tax_imp_partial(); break;

	case 0xab: nop_c_imp_partial(); break;

	case 0xac: ldy_aba_partial(); break;

	case 0xad: lda_aba_partial(); break;

	case 0xae: ldx_aba_partial(); break;

	case 0xaf: bbs_zpb_partial(); break;

	case 0xb0: bcs_rel_partial(); break;

	case 0xb1: lda_idy_partial(); break;

	case 0xb2: lda_zpi_partial(); break;

	case 0xb3: nop_c_imp_partial(); break;

	case 0xb4: ldy_zpx_partial(); break;

	case 0xb5: lda_zpx_partial(); break;

	case 0xb6: ldx_zpy_partial(); break;

	case 0xb7: smb_bzp_partial(); break;

	case 0xb8: clv_imp_partial(); break;

	case 0xb9: lda_aby_partial(); break;

	case 0xba: tsx_imp_partial(); break;

	case 0xbb: nop_c_imp_partial(); break;

	case 0xbc: ldy_abx_partial(); break;

	case 0xbd: lda_abx_partial(); break;

	case 0xbe: ldx_aby_partial(); break;

	case 0xbf: bbs_zpb_partial(); break;

	case 0xc0: cpy_imm_partial(); break;

	case 0xc1: cmp_idx_partial(); break;

	case 0xc2: nop_imm_partial(); break;

	case 0xc3: nop_c_imp_partial(); break;

	case 0xc4: cpy_zpg_partial(); break;

	case 0xc5: cmp_zpg_partial(); break;

	case 0xc6: dec_zpg_partial(); break;

	case 0xc7: smb_bzp_partial(); break;

	case 0xc8: iny_imp_partial(); break;

	case 0xc9: cmp_imm_partial(); break;

	case 0xca: dex_imp_partial(); break;

	case 0xcb: wai_imp_partial(); break;

	case 0xcc: cpy_aba_partial(); break;

	case 0xcd: cmp_aba_partial(); break;

	case 0xce: dec_aba_partial(); break;

	case 0xcf: bbs_zpb_partial(); break;

	case 0xd0: bne_rel_partial(); break;

	case 0xd1: cmp_idy_partial(); break;

	case 0xd2: cmp_zpi_partial(); break;

	case 0xd3: nop_c_imp_partial(); break;

	case 0xd4: nop_zpx_partial(); break;

	case 0xd5: cmp_zpx_partial(); break;

	case 0xd6: dec_zpx_partial(); break;

	case 0xd7: smb_bzp_partial(); break;

	case 0xd8: cld_imp_partial(); break;

	case 0xd9: cmp_aby_partial(); break;

	case 0xda: phx_imp_partial(); break;

	case 0xdb: stp_imp_partial(); break;

	case 0xdc: nop_c_abx_partial(); break;

	case 0xdd: cmp_abx_partial(); break;

	case 0xde: dec_abx_partial(); break;

	case 0xdf: bbs_zpb_partial(); break;

	case 0xe0: cpx_imm_partial(); break;

	case 0xe1: sbc_c_idx_partial(); break;

	case 0xe2: nop_imm_partial(); break;

	case 0xe3: nop_c_imp_partial(); break;

	case 0xe4: cpx_zpg_partial(); break;

	case 0xe5: sbc_c_zpg_partial(); break;

	case 0xe6: inc_zpg_partial(); break;

	case 0xe7: smb_bzp_partial(); break;

	case 0xe8: inx_imp_partial(); break;

	case 0xe9: sbc_c_imm_partial(); break;

	case 0xea: nop_imp_partial(); break;

	case 0xeb: nop_c_imp_partial(); break;

	case 0xec: cpx_aba_partial(); break;

	case 0xed: sbc_c_aba_partial(); break;

	case 0xee: inc_aba_partial(); break;

	case 0xef: bbs_zpb_partial(); break;

	case 0xf0: beq_rel_partial(); break;

	case 0xf1: sbc_c_idy_partial(); break;

	case 0xf2: sbc_c_zpi_partial(); break;

	case 0xf3: nop_c_imp_partial(); break;

	case 0xf4: nop_zpx_partial(); break;

	case 0xf5: sbc_c_zpx_partial(); break;

	case 0xf6: inc_zpx_partial(); break;

	case 0xf7: smb_bzp_partial(); break;

	case 0xf8: sed_imp_partial(); break;

	case 0xf9: sbc_c_aby_partial(); break;

	case 0xfa: plx_imp_partial(); break;

	case 0xfb: nop_c_imp_partial(); break;

	case 0xfc: nop_c_abx_partial(); break;

	case 0xfd: sbc_c_abx_partial(); break;

	case 0xfe: inc_abx_partial(); break;

	case 0xff: bbs_zpb_partial(); break;

	case STATE_RESET: reset_partial(); break;

	}
}

const r65c02_device::disasm_entry r65c02_device::disasm_entries[0x100] = {

	{ "brk", DASM_imp, 0 },

	{ "ora", DASM_idx, 0 },

	{ "nop", DASM_imm, 0 },

	{ "nop", DASM_imp, 0 },

	{ "tsb", DASM_zpg, 0 },

	{ "ora", DASM_zpg, 0 },

	{ "asl", DASM_zpg, 0 },

	{ "rmb", DASM_bzp, 0 },

	{ "php", DASM_imp, 0 },

	{ "ora", DASM_imm, 0 },

	{ "asl", DASM_acc, 0 },

	{ "nop", DASM_imp, 0 },

	{ "tsb", DASM_aba, 0 },

	{ "ora", DASM_aba, 0 },

	{ "asl", DASM_aba, 0 },

	{ "bbr", DASM_zpb, 0 },

	{ "bpl", DASM_rel, 0 },

	{ "ora", DASM_idy, 0 },

	{ "ora", DASM_zpi, 0 },

	{ "nop", DASM_imp, 0 },

	{ "trb", DASM_zpg, 0 },

	{ "ora", DASM_zpx, 0 },

	{ "asl", DASM_zpx, 0 },

	{ "rmb", DASM_bzp, 0 },

	{ "clc", DASM_imp, 0 },

	{ "ora", DASM_aby, 0 },

	{ "inc", DASM_acc, 0 },

	{ "nop", DASM_imp, 0 },

	{ "trb", DASM_aba, 0 },

	{ "ora", DASM_abx, 0 },

	{ "asl", DASM_abx, 0 },

	{ "bbr", DASM_zpb, 0 },

	{ "jsr", DASM_adr, DASMFLAG_STEP_OVER },

	{ "and", DASM_idx, 0 },

	{ "nop", DASM_imm, 0 },

	{ "nop", DASM_imp, 0 },

	{ "bit", DASM_zpg, 0 },

	{ "and", DASM_zpg, 0 },

	{ "rol", DASM_zpg, 0 },

	{ "rmb", DASM_bzp, 0 },

	{ "plp", DASM_imp, 0 },

	{ "and", DASM_imm, 0 },

	{ "rol", DASM_acc, 0 },

	{ "nop", DASM_imp, 0 },

	{ "bit", DASM_aba, 0 },

	{ "and", DASM_aba, 0 },

	{ "rol", DASM_aba, 0 },

	{ "bbr", DASM_zpb, 0 },

	{ "bmi", DASM_rel, 0 },

	{ "and", DASM_idy, 0 },

	{ "and", DASM_zpi, 0 },

	{ "nop", DASM_imp, 0 },

	{ "bit", DASM_zpx, 0 },

	{ "and", DASM_zpx, 0 },

	{ "rol", DASM_zpx, 0 },

	{ "rmb", DASM_bzp, 0 },

	{ "sec", DASM_imp, 0 },

	{ "and", DASM_aby, 0 },

	{ "dec", DASM_acc, 0 },

	{ "nop", DASM_imp, 0 },

	{ "bit", DASM_abx, 0 },

	{ "and", DASM_abx, 0 },

	{ "rol", DASM_abx, 0 },

	{ "bbr", DASM_zpb, 0 },

	{ "rti", DASM_imp, DASMFLAG_STEP_OUT },

	{ "eor", DASM_idx, 0 },

	{ "nop", DASM_imm, 0 },

	{ "nop", DASM_imp, 0 },

	{ "nop", DASM_zpg, 0 },

	{ "eor", DASM_zpg, 0 },

	{ "lsr", DASM_zpg, 0 },

	{ "rmb", DASM_bzp, 0 },

	{ "pha", DASM_imp, 0 },

	{ "eor", DASM_imm, 0 },

	{ "lsr", DASM_acc, 0 },

	{ "nop", DASM_imp, 0 },

	{ "jmp", DASM_adr, 0 },

	{ "eor", DASM_aba, 0 },

	{ "lsr", DASM_aba, 0 },

	{ "bbr", DASM_zpb, 0 },

	{ "bvc", DASM_rel, 0 },

	{ "eor", DASM_idy, 0 },

	{ "eor", DASM_zpi, 0 },

	{ "nop", DASM_imp, 0 },

	{ "nop", DASM_zpx, 0 },

	{ "eor", DASM_zpx, 0 },

	{ "lsr", DASM_zpx, 0 },

	{ "rmb", DASM_bzp, 0 },

	{ "cli", DASM_imp, 0 },

	{ "eor", DASM_aby, 0 },

	{ "phy", DASM_imp, 0 },

	{ "nop", DASM_imp, 0 },

	{ "nop", DASM_aba, 0 },

	{ "eor", DASM_abx, 0 },

	{ "lsr", DASM_abx, 0 },

	{ "bbr", DASM_zpb, 0 },

	{ "rts", DASM_imp, DASMFLAG_STEP_OUT },

	{ "adc", DASM_idx, 0 },

	{ "nop", DASM_imm, 0 },

	{ "nop", DASM_imp, 0 },

	{ "stz", DASM_zpg, 0 },

	{ "adc", DASM_zpg, 0 },

	{ "ror", DASM_zpg, 0 },

	{ "rmb", DASM_bzp, 0 },

	{ "pla", DASM_imp, 0 },

	{ "adc", DASM_imm, 0 },

	{ "ror", DASM_acc, 0 },

	{ "nop", DASM_imp, 0 },

	{ "jmp", DASM_ind, 0 },

	{ "adc", DASM_aba, 0 },

	{ "ror", DASM_aba, 0 },

	{ "bbr", DASM_zpb, 0 },

	{ "bvs", DASM_rel, 0 },

	{ "adc", DASM_idy, 0 },

	{ "adc", DASM_zpi, 0 },

	{ "nop", DASM_imp, 0 },

	{ "stz", DASM_zpx, 0 },

	{ "adc", DASM_zpx, 0 },

	{ "ror", DASM_zpx, 0 },

	{ "rmb", DASM_bzp, 0 },

	{ "sei", DASM_imp, 0 },

	{ "adc", DASM_aby, 0 },

	{ "ply", DASM_imp, 0 },

	{ "nop", DASM_imp, 0 },

	{ "jmp", DASM_iax, 0 },

	{ "adc", DASM_abx, 0 },

	{ "ror", DASM_abx, 0 },

	{ "bbr", DASM_zpb, 0 },

	{ "bra", DASM_rel, 0 },

	{ "sta", DASM_idx, 0 },

	{ "nop", DASM_imm, 0 },

	{ "nop", DASM_imp, 0 },

	{ "sty", DASM_zpg, 0 },

	{ "sta", DASM_zpg, 0 },

	{ "stx", DASM_zpg, 0 },

	{ "smb", DASM_bzp, 0 },

	{ "dey", DASM_imp, 0 },

	{ "bit", DASM_imm, 0 },

	{ "txa", DASM_imp, 0 },

	{ "nop", DASM_imp, 0 },

	{ "sty", DASM_aba, 0 },

	{ "sta", DASM_aba, 0 },

	{ "stx", DASM_aba, 0 },

	{ "bbs", DASM_zpb, 0 },

	{ "bcc", DASM_rel, 0 },

	{ "sta", DASM_idy, 0 },

	{ "sta", DASM_zpi, 0 },

	{ "nop", DASM_imp, 0 },

	{ "sty", DASM_zpx, 0 },

	{ "sta", DASM_zpx, 0 },

	{ "stx", DASM_zpy, 0 },

	{ "smb", DASM_bzp, 0 },

	{ "tya", DASM_imp, 0 },

	{ "sta", DASM_aby, 0 },

	{ "txs", DASM_imp, 0 },

	{ "nop", DASM_imp, 0 },

	{ "stz", DASM_aba, 0 },

	{ "sta", DASM_abx, 0 },

	{ "stz", DASM_abx, 0 },

	{ "bbs", DASM_zpb, 0 },

	{ "ldy", DASM_imm, 0 },

	{ "lda", DASM_idx, 0 },

	{ "ldx", DASM_imm, 0 },

	{ "nop", DASM_imp, 0 },

	{ "ldy", DASM_zpg, 0 },

	{ "lda", DASM_zpg, 0 },

	{ "ldx", DASM_zpg, 0 },

	{ "smb", DASM_bzp, 0 },

	{ "tay", DASM_imp, 0 },

	{ "lda", DASM_imm, 0 },

	{ "tax", DASM_imp, 0 },

	{ "nop", DASM_imp, 0 },

	{ "ldy", DASM_aba, 0 },

	{ "lda", DASM_aba, 0 },

	{ "ldx", DASM_aba, 0 },

	{ "bbs", DASM_zpb, 0 },

	{ "bcs", DASM_rel, 0 },

	{ "lda", DASM_idy, 0 },

	{ "lda", DASM_zpi, 0 },

	{ "nop", DASM_imp, 0 },

	{ "ldy", DASM_zpx, 0 },

	{ "lda", DASM_zpx, 0 },

	{ "ldx", DASM_zpy, 0 },

	{ "smb", DASM_bzp, 0 },

	{ "clv", DASM_imp, 0 },

	{ "lda", DASM_aby, 0 },

	{ "tsx", DASM_imp, 0 },

	{ "nop", DASM_imp, 0 },

	{ "ldy", DASM_abx, 0 },

	{ "lda", DASM_abx, 0 },

	{ "ldx", DASM_aby, 0 },

	{ "bbs", DASM_zpb, 0 },

	{ "cpy", DASM_imm, 0 },

	{ "cmp", DASM_idx, 0 },

	{ "nop", DASM_imm, 0 },

	{ "nop", DASM_imp, 0 },

	{ "cpy", DASM_zpg, 0 },

	{ "cmp", DASM_zpg, 0 },

	{ "dec", DASM_zpg, 0 },

	{ "smb", DASM_bzp, 0 },

	{ "iny", DASM_imp, 0 },

	{ "cmp", DASM_imm, 0 },

	{ "dex", DASM_imp, 0 },

	{ "wai", DASM_imp, 0 },

	{ "cpy", DASM_aba, 0 },

	{ "cmp", DASM_aba, 0 },

	{ "dec", DASM_aba, 0 },

	{ "bbs", DASM_zpb, 0 },

	{ "bne", DASM_rel, 0 },

	{ "cmp", DASM_idy, 0 },

	{ "cmp", DASM_zpi, 0 },

	{ "nop", DASM_imp, 0 },

	{ "nop", DASM_zpx, 0 },

	{ "cmp", DASM_zpx, 0 },

	{ "dec", DASM_zpx, 0 },

	{ "smb", DASM_bzp, 0 },

	{ "cld", DASM_imp, 0 },

	{ "cmp", DASM_aby, 0 },

	{ "phx", DASM_imp, 0 },

	{ "stp", DASM_imp, 0 },

	{ "nop", DASM_abx, 0 },

	{ "cmp", DASM_abx, 0 },

	{ "dec", DASM_abx, 0 },

	{ "bbs", DASM_zpb, 0 },

	{ "cpx", DASM_imm, 0 },

	{ "sbc", DASM_idx, 0 },

	{ "nop", DASM_imm, 0 },

	{ "nop", DASM_imp, 0 },

	{ "cpx", DASM_zpg, 0 },

	{ "sbc", DASM_zpg, 0 },

	{ "inc", DASM_zpg, 0 },

	{ "smb", DASM_bzp, 0 },

	{ "inx", DASM_imp, 0 },

	{ "sbc", DASM_imm, 0 },

	{ "nop", DASM_imp, 0 },

	{ "nop", DASM_imp, 0 },

	{ "cpx", DASM_aba, 0 },

	{ "sbc", DASM_aba, 0 },

	{ "inc", DASM_aba, 0 },

	{ "bbs", DASM_zpb, 0 },

	{ "beq", DASM_rel, 0 },

	{ "sbc", DASM_idy, 0 },

	{ "sbc", DASM_zpi, 0 },

	{ "nop", DASM_imp, 0 },

	{ "nop", DASM_zpx, 0 },

	{ "sbc", DASM_zpx, 0 },

	{ "inc", DASM_zpx, 0 },

	{ "smb", DASM_bzp, 0 },

	{ "sed", DASM_imp, 0 },

	{ "sbc", DASM_aby, 0 },

	{ "plx", DASM_imp, 0 },

	{ "nop", DASM_imp, 0 },

	{ "nop", DASM_abx, 0 },

	{ "sbc", DASM_abx, 0 },

	{ "inc", DASM_abx, 0 },

	{ "bbs", DASM_zpb, 0 },

};

