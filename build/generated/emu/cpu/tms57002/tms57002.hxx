#ifdef DASM1
    case 0x01:
      util::stream_format(stream, "abs");
      break;

    case 0x02:
      util::stream_format(stream, "neg");
      break;

    case 0x03:
      util::stream_format(stream, "add %s,a", get_memadr(opcode, 'd'));
      break;

    case 0x04:
      util::stream_format(stream, "add %s,a", get_memadr(opcode, 'c'));
      break;

    case 0x05:
      util::stream_format(stream, "add %s,m", get_memadr(opcode, 'd'));
      break;

    case 0x06:
      util::stream_format(stream, "add %s,m", get_memadr(opcode, 'c'));
      break;

    case 0x07:
      util::stream_format(stream, "add %s,%s", get_memadr(opcode, 'd'), get_memadr(opcode, 'c'));
      break;

    case 0x08:
      util::stream_format(stream, "adds %s", get_memadr(opcode, 'd'));
      break;

    case 0x09:
      util::stream_format(stream, "sub %s,a", get_memadr(opcode, 'd'));
      break;

    case 0x0a:
      util::stream_format(stream, "sub %s,a", get_memadr(opcode, 'c'));
      break;

    case 0x0b:
      util::stream_format(stream, "sub %s,m", get_memadr(opcode, 'd'));
      break;

    case 0x0c:
      util::stream_format(stream, "sub %s,m", get_memadr(opcode, 'c'));
      break;

    case 0x0d:
      util::stream_format(stream, "sub %s,%s", get_memadr(opcode, 'd'), get_memadr(opcode, 'c'));
      break;

    case 0x10:
      util::stream_format(stream, "zacc");
      break;

    case 0x11:
      util::stream_format(stream, "lacd %s", get_memadr(opcode, 'd'));
      break;

    case 0x12:
      util::stream_format(stream, "lacc %s", get_memadr(opcode, 'c'));
      break;

    case 0x13:
      util::stream_format(stream, "cmpl");
      break;

    case 0x14:
      util::stream_format(stream, "and %s,a", get_memadr(opcode, 'd'));
      break;

    case 0x15:
      util::stream_format(stream, "and %s,a", get_memadr(opcode, 'c'));
      break;

    case 0x16:
      util::stream_format(stream, "and %s,%s", get_memadr(opcode, 'd'), get_memadr(opcode, 'c'));
      break;

    case 0x17:
      util::stream_format(stream, "or %s,a", get_memadr(opcode, 'd'));
      break;

    case 0x18:
      util::stream_format(stream, "or %s,a", get_memadr(opcode, 'c'));
      break;

    case 0x19:
      util::stream_format(stream, "or %s,%s", get_memadr(opcode, 'd'), get_memadr(opcode, 'c'));
      break;

    case 0x1a:
      util::stream_format(stream, "xor %s,a", get_memadr(opcode, 'd'));
      break;

    case 0x1b:
      util::stream_format(stream, "xor %s,a", get_memadr(opcode, 'c'));
      break;

    case 0x1c:
      util::stream_format(stream, "xor %s,%s", get_memadr(opcode, 'd'), get_memadr(opcode, 'c'));
      break;

    case 0x21:
      util::stream_format(stream, "mpy %s,%s", get_memadr(opcode, 'd'), get_memadr(opcode, 'c'));
      break;

    case 0x22:
      util::stream_format(stream, "mpy %s,a", get_memadr(opcode, 'c'));
      break;

    case 0x23:
      util::stream_format(stream, "mpy creg,%s", get_memadr(opcode, 'd'));
      break;

    case 0x24:
      util::stream_format(stream, "mac %s,%s", get_memadr(opcode, 'd'), get_memadr(opcode, 'c'));
      break;

    case 0x25:
      util::stream_format(stream, "mac a,%s", get_memadr(opcode, 'd'));
      break;

    case 0x26:
      util::stream_format(stream, "mac %s,a", get_memadr(opcode, 'c'));
      break;

    case 0x28:
      util::stream_format(stream, "mpyu %s,%s", get_memadr(opcode, 'd'), get_memadr(opcode, 'c'));
      break;

    case 0x29:
      util::stream_format(stream, "macu %s,%s", get_memadr(opcode, 'd'), get_memadr(opcode, 'c'));
      break;

    case 0x2a:
      util::stream_format(stream, "macu a,%s", get_memadr(opcode, 'd'));
      break;

    case 0x2c:
      util::stream_format(stream, "ampy %s,%s,a", get_memadr(opcode, 'd'), get_memadr(opcode, 'c'));
      break;

    case 0x2d:
      util::stream_format(stream, "amac %s,%s,a", get_memadr(opcode, 'd'), get_memadr(opcode, 'c'));
      break;

    case 0x2e:
      util::stream_format(stream, "macs %s,a", get_memadr(opcode, 'c'));
      break;

    case 0x30:
      util::stream_format(stream, "zmac");
      break;

    case 0x31:
      util::stream_format(stream, "lmhd %s", get_memadr(opcode, 'd'));
      break;

    case 0x32:
      util::stream_format(stream, "lmld %s", get_memadr(opcode, 'd'));
      break;

    case 0x33:
      util::stream_format(stream, "lmhc %s", get_memadr(opcode, 'c'));
      break;

    case 0x34:
      util::stream_format(stream, "sfml");
      break;

    case 0x35:
      util::stream_format(stream, "sfmr");
      break;

    case 0x38:
      util::stream_format(stream, "wre %s,%s", get_memadr(opcode, 'd'), get_memadr(opcode, 'c'));
      break;

    case 0x39:
      util::stream_format(stream, "rde %s", get_memadr(opcode, 'c'));
      break;

#endif

#ifdef DASM2
    case 0x01:
      util::stream_format(stream, "sacc %s", get_memadr(opcode, 'c'));
      break;

    case 0x02:
      util::stream_format(stream, "sacd %s", get_memadr(opcode, 'd'));
      break;

    case 0x03:
      util::stream_format(stream, "smhd %s", get_memadr(opcode, 'd'));
      break;

    case 0x04:
      util::stream_format(stream, "smld %s", get_memadr(opcode, 'd'));
      break;

    case 0x05:
      util::stream_format(stream, "smhc %s", get_memadr(opcode, 'c'));
      break;

    case 0x06:
      util::stream_format(stream, "slmh %s", get_memadr(opcode, 'd'));
      break;

    case 0x07:
      util::stream_format(stream, "slml %s", get_memadr(opcode, 'd'));
      break;

    case 0x08:
      util::stream_format(stream, "lcaa");
      break;

    case 0x09:
      util::stream_format(stream, "lira");
      break;

    case 0x0d:
      util::stream_format(stream, "std1 %s", get_memadr(opcode, 'd'));
      break;

    case 0x0e:
      util::stream_format(stream, "ref");
      break;

    case 0x0f:
      util::stream_format(stream, "srbd %s", get_memadr(opcode, 'd'));
      break;

    case 0x10:
      util::stream_format(stream, "dis si0_l,%s", get_memadr(opcode, 'd'));
      break;

    case 0x11:
      util::stream_format(stream, "dis si0_r,%s", get_memadr(opcode, 'd'));
      break;

    case 0x12:
      util::stream_format(stream, "dis si1_l,%s", get_memadr(opcode, 'd'));
      break;

    case 0x13:
      util::stream_format(stream, "dis si1_r,%s", get_memadr(opcode, 'd'));
      break;

    case 0x14:
      util::stream_format(stream, "dimh si0_l");
      break;

    case 0x15:
      util::stream_format(stream, "dimh si0_r");
      break;

    case 0x16:
      util::stream_format(stream, "dimh si1_l");
      break;

    case 0x17:
      util::stream_format(stream, "dimh si1_r");
      break;

    case 0x18:
      util::stream_format(stream, "diml si0_l");
      break;

    case 0x19:
      util::stream_format(stream, "diml si0_r");
      break;

    case 0x1a:
      util::stream_format(stream, "diml si1_l");
      break;

    case 0x1b:
      util::stream_format(stream, "diml si1_r");
      break;

    case 0x20:
      util::stream_format(stream, "domh so0_l");
      break;

    case 0x21:
      util::stream_format(stream, "domh so0_r");
      break;

    case 0x22:
      util::stream_format(stream, "domh so1_l");
      break;

    case 0x23:
      util::stream_format(stream, "domh so1_r");
      break;

    case 0x24:
      util::stream_format(stream, "doml so0_l");
      break;

    case 0x25:
      util::stream_format(stream, "doml so0_r");
      break;

    case 0x26:
      util::stream_format(stream, "doml so1_l");
      break;

    case 0x27:
      util::stream_format(stream, "doml so1_r");
      break;

    case 0x38:
      util::stream_format(stream, "raov");
      break;

    case 0x3a:
      util::stream_format(stream, "rmov");
      break;

    case 0x40:
      util::stream_format(stream, "rmom");
      break;

    case 0x41:
      util::stream_format(stream, "smom");
      break;

    case 0x42:
      util::stream_format(stream, "incd");
      break;

    case 0x44:
      util::stream_format(stream, "ldpk 0");
      break;

    case 0x45:
      util::stream_format(stream, "ldpk 1");
      break;

    case 0x48:
      util::stream_format(stream, "scrm 32");
      break;

    case 0x49:
      util::stream_format(stream, "scrm 16h");
      break;

    case 0x4a:
      util::stream_format(stream, "scrm 16l");
      break;

    case 0x4b:
      util::stream_format(stream, "scrm <3>");
      break;

    case 0x50:
      util::stream_format(stream, "sfao 0");
      break;

    case 0x51:
      util::stream_format(stream, "sfao 7");
      break;

    case 0x60:
      util::stream_format(stream, "sfmo 0");
      break;

    case 0x61:
      util::stream_format(stream, "sfmo 2");
      break;

    case 0x62:
      util::stream_format(stream, "sfmo 4");
      break;

    case 0x63:
      util::stream_format(stream, "sfmo -8");
      break;

    case 0x68:
      util::stream_format(stream, "rnd 48");
      break;

    case 0x69:
      util::stream_format(stream, "rnd 32");
      break;

    case 0x6a:
      util::stream_format(stream, "rnd 24");
      break;

    case 0x6b:
      util::stream_format(stream, "rnd 20");
      break;

    case 0x6c:
      util::stream_format(stream, "rnd 16");
      break;

    case 0x6d:
      util::stream_format(stream, "rnd <5>");
      break;

    case 0x6e:
      util::stream_format(stream, "rnd <6>");
      break;

    case 0x6f:
      util::stream_format(stream, "rnd <7>");
      break;

    case 0x0c:
      util::stream_format(stream, "ld0t %s", get_memadr(opcode, 'd'));
      break;

    case 0x1c:
      util::stream_format(stream, "dos so0_l,%s", get_memadr(opcode, 'd'));
      break;

    case 0x1d:
      util::stream_format(stream, "dos so0_r,%s", get_memadr(opcode, 'd'));
      break;

    case 0x1e:
      util::stream_format(stream, "dos so1_l,%s", get_memadr(opcode, 'd'));
      break;

    case 0x1f:
      util::stream_format(stream, "dos so1_r,%s", get_memadr(opcode, 'd'));
      break;

    case 0x30:
      util::stream_format(stream, "lpd %s", get_memadr(opcode, 'd'));
      break;

    case 0x31:
      util::stream_format(stream, "lpc %s", get_memadr(opcode, 'c'));
      break;

    case 0x54:
      util::stream_format(stream, "sfai 0");
      break;

    case 0x55:
      util::stream_format(stream, "sfai -1");
      break;

    case 0x58:
      util::stream_format(stream, "sfma 0");
      break;

    case 0x59:
      util::stream_format(stream, "sfma 2");
      break;

    case 0x5a:
      util::stream_format(stream, "sfma 4");
      break;

    case 0x5b:
      util::stream_format(stream, "sfma -16");
      break;

#endif

#ifdef DASM3
    case 0x08:
      util::stream_format(stream, "idle");
      break;

    case 0x10:
      util::stream_format(stream, "rptk %02x", opcode & 0xff);
      break;

    case 0x18:
      util::stream_format(stream, "lcak %02x", opcode & 0xff);
      break;

    case 0x20:
      util::stream_format(stream, "lirk %02x", opcode & 0xff);
      break;

    case 0x28:
      util::stream_format(stream, "lbrk %02x", opcode & 0xff);
      break;

    case 0x40:
      util::stream_format(stream, "lcac %02x", opcode & 0xff);
      break;

    case 0x48:
      util::stream_format(stream, "b %02x", opcode & 0xff);
      break;

    case 0x50:
      util::stream_format(stream, "bgz %02x", opcode & 0xff);
      break;

    case 0x58:
      util::stream_format(stream, "blz %02x", opcode & 0xff);
      break;

    case 0x60:
      util::stream_format(stream, "bnz %02x", opcode & 0xff);
      break;

    case 0x70:
      util::stream_format(stream, "bioz %02x", opcode & 0xff);
      break;

    case 0x78:
      util::stream_format(stream, "bv %02x", opcode & 0xff);
      break;

#endif

#ifdef CDEC1
case 0x01: // abs
  *op = 4 + sfao(st1);
  break;

case 0x03: // add
  *op = 6 + xmode(opcode, 'd', cs) + 2*dbp(st1) + 4*sfao(st1);
  break;

case 0x04: // add
  *op = 14 + xmode(opcode, 'c', cs) + 2*crm(st1) + 6*sfao(st1);
  break;

case 0x05: // add
  *op = 26 + xmode(opcode, 'd', cs) + 2*sfai(st1) + 4*dbp(st1) + 8*sfmo(st1) + 32*rnd(st1) + 160*movm(st1);
  break;

case 0x06: // add
  *op = 346 + xmode(opcode, 'c', cs) + 2*crm(st1) + 6*sfmo(st1) + 24*rnd(st1) + 120*movm(st1);
  break;

case 0x07: // add
  *op = 586 + xmode(opcode, 'c', cs) + 2*xmode(opcode, 'd', cs) + 4*crm(st1) + 12*dbp(st1);
  break;

case 0x09: // sub
  *op = 610 + xmode(opcode, 'd', cs) + 2*dbp(st1) + 4*sfao(st1);
  break;

case 0x0a: // sub
  *op = 618 + xmode(opcode, 'c', cs) + 2*crm(st1) + 6*sfao(st1);
  break;

case 0x0d: // sub
  *op = 630 + xmode(opcode, 'c', cs) + 2*xmode(opcode, 'd', cs) + 4*crm(st1) + 12*dbp(st1);
  break;

case 0x11: // lacd
  *op = 654 + xmode(opcode, 'd', cs) + 2*sfai(st1) + 4*dbp(st1);
  break;

case 0x12: // lacc
  *op = 662 + xmode(opcode, 'c', cs) + 2*crm(st1);
  break;

case 0x14: // and
  *op = 668 + xmode(opcode, 'd', cs) + 2*sfai(st1) + 4*dbp(st1);
  break;

case 0x15: // and
  *op = 676 + xmode(opcode, 'c', cs) + 2*crm(st1);
  break;

case 0x16: // and
  *op = 682 + xmode(opcode, 'c', cs) + 2*xmode(opcode, 'd', cs) + 4*sfai(st1) + 8*crm(st1) + 24*dbp(st1);
  break;

case 0x17: // or
  *op = 730 + xmode(opcode, 'd', cs) + 2*sfai(st1) + 4*dbp(st1);
  break;

case 0x18: // or
  *op = 738 + xmode(opcode, 'c', cs) + 2*crm(st1);
  break;

case 0x19: // or
  *op = 744 + xmode(opcode, 'c', cs) + 2*xmode(opcode, 'd', cs) + 4*sfai(st1) + 8*crm(st1) + 24*dbp(st1);
  break;

case 0x21: // mpy
  *op = 792 + xmode(opcode, 'c', cs) + 2*xmode(opcode, 'd', cs) + 4*crm(st1) + 12*dbp(st1);
  break;

case 0x22: // mpy
  *op = 816 + xmode(opcode, 'c', cs) + 2*crm(st1) + 6*sfao(st1);
  break;

case 0x24: // mac
  *op = 828 + xmode(opcode, 'c', cs) + 2*xmode(opcode, 'd', cs) + 4*crm(st1) + 12*dbp(st1) + 24*sfma(st1);
  break;

case 0x26: // mac
  *op = 924 + xmode(opcode, 'c', cs) + 2*crm(st1) + 6*sfao(st1) + 12*sfma(st1);
  break;

case 0x28: // mpyu
  *op = 972 + xmode(opcode, 'c', cs) + 2*xmode(opcode, 'd', cs) + 4*crm(st1) + 12*dbp(st1);
  break;

case 0x29: // macu
  *op = 996 + xmode(opcode, 'c', cs) + 2*xmode(opcode, 'd', cs) + 4*crm(st1) + 12*dbp(st1) + 24*sfma(st1);
  break;

case 0x2a: // macu
  *op = 1092 + xmode(opcode, 'd', cs) + 2*dbp(st1) + 4*sfao(st1) + 8*sfma(st1);
  break;

case 0x2e: // macs
  *op = 1124 + xmode(opcode, 'c', cs) + 2*crm(st1) + 6*sfao(st1) + 12*sfma(st1);
  break;

case 0x31: // lmhd
  *op = 1172 + xmode(opcode, 'd', cs) + 2*dbp(st1);
  break;

case 0x32: // lmld
  *op = 1176 + xmode(opcode, 'd', cs) + 2*dbp(st1);
  break;

case 0x33: // lmhc
  *op = 1180 + xmode(opcode, 'c', cs) + 2*crm(st1);
  break;

case 0x34: // sfml
  *op = 1186;
  break;

case 0x35: // sfmr
  *op = 1187;
  break;

case 0x38: // wre
  *op = 1188 + xmode(opcode, 'c', cs) + 2*xmode(opcode, 'd', cs) + 4*crm(st1) + 12*dbp(st1);
  break;

case 0x39: // rde
  *op = 1212 + xmode(opcode, 'c', cs) + 2*crm(st1);
  break;

#endif

#ifdef CDEC2A
case 0x01: // sacc
  *op = 1218 + xmode(opcode, 'c', cs) + 2*sfao(st1);
  break;

case 0x02: // sacd
  *op = 1222 + xmode(opcode, 'd', cs) + 2*dbp(st1) + 4*sfao(st1);
  break;

case 0x03: // smhd
  *op = 1230 + xmode(opcode, 'd', cs) + 2*dbp(st1) + 4*sfmo(st1) + 16*rnd(st1) + 80*movm(st1);
  break;

case 0x05: // smhc
  *op = 1390 + xmode(opcode, 'c', cs) + 2*sfmo(st1) + 8*rnd(st1) + 40*movm(st1);
  break;

case 0x06: // slmh
  *op = 1470 + xmode(opcode, 'd', cs) + 2*dbp(st1) + 4*sfmo(st1) + 16*movm(st1);
  break;

case 0x07: // slml
  *op = 1502 + xmode(opcode, 'd', cs) + 2*dbp(st1) + 4*sfmo(st1) + 16*movm(st1);
  break;

case 0x08: // lcaa
  *op = 1534 + sfao(st1);
  break;

case 0x09: // lira
  *op = 1536 + sfao(st1);
  break;

case 0x0e: // ref
  *op = 1538;
  break;

case 0x0f: // srbd
  *op = 1539 + xmode(opcode, 'd', cs) + 2*dbp(st1);
  break;

case 0x10: // dis
  *op = 1543 + xmode(opcode, 'd', cs) + 2*dbp(st1);
  break;

case 0x11: // dis
  *op = 1547 + xmode(opcode, 'd', cs) + 2*dbp(st1);
  break;

case 0x12: // dis
  *op = 1551 + xmode(opcode, 'd', cs) + 2*dbp(st1);
  break;

case 0x13: // dis
  *op = 1555 + xmode(opcode, 'd', cs) + 2*dbp(st1);
  break;

case 0x20: // domh
  *op = 1559 + sfmo(st1) + 4*rnd(st1) + 20*movm(st1);
  break;

case 0x21: // domh
  *op = 1599 + sfmo(st1) + 4*rnd(st1) + 20*movm(st1);
  break;

case 0x22: // domh
  *op = 1639 + sfmo(st1) + 4*rnd(st1) + 20*movm(st1);
  break;

case 0x23: // domh
  *op = 1679 + sfmo(st1) + 4*rnd(st1) + 20*movm(st1);
  break;

case 0x3a: // rmov
  *op = 1719;
  break;

case 0x40: // rmom
  *op = 1720;
	st1 &= ~ST1_MOVM;
  break;

case 0x41: // smom
  *op = 1721;
	st1 |= ST1_MOVM;
  break;

case 0x44: // ldpk
  *op = 1722;
	st1 &= ~ST1_DBP;
  break;

case 0x45: // ldpk
  *op = 1723;
	st1 |= ST1_DBP;
  break;

case 0x48: // scrm
  *op = 1724;
	st1 = (st1 & ~ST1_CRM) | (0 << ST1_CRM_SHIFT);
  break;

case 0x49: // scrm
  *op = 1725;
	st1 = (st1 & ~ST1_CRM) | (1 << ST1_CRM_SHIFT);
  break;

case 0x4a: // scrm
  *op = 1726;
	st1 = (st1 & ~ST1_CRM) | (2 << ST1_CRM_SHIFT);
  break;

case 0x4b: // scrm
  *op = 1727;
	st1 = (st1 & ~ST1_CRM) | (3 << ST1_CRM_SHIFT);
  break;

case 0x50: // sfao
  *op = 1728;
	st1 &= ~ST1_SFAO;
  break;

case 0x51: // sfao
  *op = 1729;
	st1 |= ST1_SFAI;
  break;

case 0x60: // sfmo
  *op = 1730;
	st1 = (st1 & ~ST1_SFMO) | (0 << ST1_SFMO_SHIFT);
  break;

case 0x61: // sfmo
  *op = 1731;
	st1 = (st1 & ~ST1_SFMO) | (1 << ST1_SFMO_SHIFT);
  break;

case 0x62: // sfmo
  *op = 1732;
	st1 = (st1 & ~ST1_SFMO) | (2 << ST1_SFMO_SHIFT);
  break;

case 0x63: // sfmo
  *op = 1733;
	st1 = (st1 & ~ST1_SFMO) | (3 << ST1_SFMO_SHIFT);
  break;

case 0x68: // rnd
  *op = 1734;
	st1 = (st1 & ~ST1_RND) | (0 << ST1_RND_SHIFT);
  break;

case 0x69: // rnd
  *op = 1735;
	st1 = (st1 & ~ST1_RND) | (1 << ST1_RND_SHIFT);
  break;

case 0x6a: // rnd
  *op = 1736;
	st1 = (st1 & ~ST1_RND) | (2 << ST1_RND_SHIFT);
  break;

case 0x6b: // rnd
  *op = 1737;
	st1 = (st1 & ~ST1_RND) | (3 << ST1_RND_SHIFT);
  break;

case 0x6c: // rnd
  *op = 1738;
	st1 = (st1 & ~ST1_RND) | (4 << ST1_RND_SHIFT);
  break;

case 0x6d: // rnd
  *op = 1739;
	st1 = (st1 & ~ST1_RND) | (5 << ST1_RND_SHIFT);
  break;

case 0x6e: // rnd
  *op = 1740;
	st1 = (st1 & ~ST1_RND) | (6 << ST1_RND_SHIFT);
  break;

case 0x6f: // rnd
  *op = 1741;
	st1 = (st1 & ~ST1_RND) | (7 << ST1_RND_SHIFT);
  break;

case 0x31: // lpc
  break;

case 0x54: // sfai
  break;

case 0x55: // sfai
  break;

case 0x58: // sfma
  break;

case 0x59: // sfma
  break;

case 0x5a: // sfma
  break;

case 0x5b: // sfma
  break;

#endif

#ifdef CDEC2B
case 0x01: // sacc
  break;

case 0x02: // sacd
  break;

case 0x03: // smhd
  break;

case 0x05: // smhc
  break;

case 0x06: // slmh
  break;

case 0x07: // slml
  break;

case 0x08: // lcaa
  break;

case 0x09: // lira
  break;

case 0x0e: // ref
  break;

case 0x0f: // srbd
  break;

case 0x10: // dis
  break;

case 0x11: // dis
  break;

case 0x12: // dis
  break;

case 0x13: // dis
  break;

case 0x20: // domh
  break;

case 0x21: // domh
  break;

case 0x22: // domh
  break;

case 0x23: // domh
  break;

case 0x3a: // rmov
  break;

case 0x40: // rmom
  break;

case 0x41: // smom
  break;

case 0x44: // ldpk
  break;

case 0x45: // ldpk
  break;

case 0x48: // scrm
  break;

case 0x49: // scrm
  break;

case 0x4a: // scrm
  break;

case 0x4b: // scrm
  break;

case 0x50: // sfao
  break;

case 0x51: // sfao
  break;

case 0x60: // sfmo
  break;

case 0x61: // sfmo
  break;

case 0x62: // sfmo
  break;

case 0x63: // sfmo
  break;

case 0x68: // rnd
  break;

case 0x69: // rnd
  break;

case 0x6a: // rnd
  break;

case 0x6b: // rnd
  break;

case 0x6c: // rnd
  break;

case 0x6d: // rnd
  break;

case 0x6e: // rnd
  break;

case 0x6f: // rnd
  break;

case 0x31: // lpc
  *op = 1742 + xmode(opcode, 'c', cs) + 2*crm(st1);
  break;

case 0x54: // sfai
  *op = 1748;
	st1 &= ~ST1_SFAI;
  break;

case 0x55: // sfai
  *op = 1749;
	st1 |= ST1_SFAI;
  break;

case 0x58: // sfma
  *op = 1750;
	st1 = (st1 & ~ST1_SFMA) | (0 << ST1_SFMA_SHIFT);
  break;

case 0x59: // sfma
  *op = 1751;
	st1 = (st1 & ~ST1_SFMA) | (1 << ST1_SFMA_SHIFT);
  break;

case 0x5a: // sfma
  *op = 1752;
	st1 = (st1 & ~ST1_SFMA) | (2 << ST1_SFMA_SHIFT);
  break;

case 0x5b: // sfma
  *op = 1753;
	st1 = (st1 & ~ST1_SFMA) | (3 << ST1_SFMA_SHIFT);
  break;

#endif

#ifdef CDEC3
case 0x08: // idle
  *op = 1754;
  cs->branch = BR_IDLE;
  break;

case 0x10: // rptk
  *op = 1755;
  break;

case 0x18: // lcak
  *op = 1756;
  break;

case 0x20: // lirk
  *op = 1757;
  break;

case 0x40: // lcac
  *op = 1758;
  break;

case 0x48: // b
  *op = 1759;
  cs->branch = BR_UB;
  break;

case 0x50: // bgz
  *op = 1760;
  cs->branch = BR_CB;
  break;

case 0x58: // blz
  *op = 1761;
  cs->branch = BR_CB;
  break;

case 0x60: // bnz
  *op = 1762;
  cs->branch = BR_CB;
  break;

case 0x78: // bv
  *op = 1763;
  cs->branch = BR_CB;
  break;

#endif

#ifdef CINTRP
case 4: // abs sfao=0
	if(((int32_t)aacc) < 0) {
	aacc = - aacc;
	if(((int32_t)aacc) < 0)
		st1 |= ST1_AOV;
	}
  break;

case 5: // abs sfao=1
	aacc = (aacc << 7);
	if(((int32_t)aacc) < 0) {
	aacc = - aacc;
	if(((int32_t)aacc) < 0)
		st1 |= ST1_AOV;
	}
  break;

case 6: // add dmode=0 dbp=0 sfao=0
	r = (int64_t)(int32_t)(dmem0[(i->param + ba0) & 0xff] << 8) + (int64_t)(int32_t)aacc;
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 7: // add dmode=1 dbp=0 sfao=0
	r = (int64_t)(int32_t)(dmem0[(id + ba0) & 0xff] << 8) + (int64_t)(int32_t)aacc;
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 8: // add dmode=0 dbp=1 sfao=0
	r = (int64_t)(int32_t)(dmem1[(i->param + ba1) & 0x1f] << 8) + (int64_t)(int32_t)aacc;
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 9: // add dmode=1 dbp=1 sfao=0
	r = (int64_t)(int32_t)(dmem1[(id + ba1) & 0x1f] << 8) + (int64_t)(int32_t)aacc;
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 10: // add dmode=0 dbp=0 sfao=1
	r = (int64_t)(int32_t)(dmem0[(i->param + ba0) & 0xff] << 8) + (int64_t)(int32_t)(aacc << 7);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 11: // add dmode=1 dbp=0 sfao=1
	r = (int64_t)(int32_t)(dmem0[(id + ba0) & 0xff] << 8) + (int64_t)(int32_t)(aacc << 7);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 12: // add dmode=0 dbp=1 sfao=1
	r = (int64_t)(int32_t)(dmem1[(i->param + ba1) & 0x1f] << 8) + (int64_t)(int32_t)(aacc << 7);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 13: // add dmode=1 dbp=1 sfao=1
	r = (int64_t)(int32_t)(dmem1[(id + ba1) & 0x1f] << 8) + (int64_t)(int32_t)(aacc << 7);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 14: // add cmode=0 crm=0 sfao=0
	r = (int64_t)(int32_t)cmem[i->param] + (int64_t)(int32_t)aacc;
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 15: // add cmode=1 crm=0 sfao=0
	r = (int64_t)(int32_t)cmem[ca] + (int64_t)(int32_t)aacc;
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 16: // add cmode=0 crm=1 sfao=0
	r = (int64_t)(int32_t)(cmem[i->param] & 0xffff0000) + (int64_t)(int32_t)aacc;
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 17: // add cmode=1 crm=1 sfao=0
	r = (int64_t)(int32_t)(cmem[ca] & 0xffff0000) + (int64_t)(int32_t)aacc;
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 18: // add cmode=0 crm=2 sfao=0
	r = (int64_t)(int32_t)(cmem[i->param] << 16) + (int64_t)(int32_t)aacc;
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 19: // add cmode=1 crm=2 sfao=0
	r = (int64_t)(int32_t)(cmem[ca] << 16) + (int64_t)(int32_t)aacc;
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 20: // add cmode=0 crm=0 sfao=1
	r = (int64_t)(int32_t)cmem[i->param] + (int64_t)(int32_t)(aacc << 7);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 21: // add cmode=1 crm=0 sfao=1
	r = (int64_t)(int32_t)cmem[ca] + (int64_t)(int32_t)(aacc << 7);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 22: // add cmode=0 crm=1 sfao=1
	r = (int64_t)(int32_t)(cmem[i->param] & 0xffff0000) + (int64_t)(int32_t)(aacc << 7);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 23: // add cmode=1 crm=1 sfao=1
	r = (int64_t)(int32_t)(cmem[ca] & 0xffff0000) + (int64_t)(int32_t)(aacc << 7);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 24: // add cmode=0 crm=2 sfao=1
	r = (int64_t)(int32_t)(cmem[i->param] << 16) + (int64_t)(int32_t)(aacc << 7);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 25: // add cmode=1 crm=2 sfao=1
	r = (int64_t)(int32_t)(cmem[ca] << 16) + (int64_t)(int32_t)(aacc << 7);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 26: // add dmode=0 sfai=0 dbp=0 sfmo=0 rnd=0 movm=0
	d =  (dmem0[(i->param + ba0) & 0xff] << 8);
	r = (int64_t)(int32_t)d + (macc_to_output_0(0x0000000000000000ULL, 0xffffffffffffffffULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 27: // add dmode=1 sfai=0 dbp=0 sfmo=0 rnd=0 movm=0
	d =  (dmem0[(id + ba0) & 0xff] << 8);
	r = (int64_t)(int32_t)d + (macc_to_output_0(0x0000000000000000ULL, 0xffffffffffffffffULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 28: // add dmode=0 sfai=1 dbp=0 sfmo=0 rnd=0 movm=0
	d = ((int32_t)( (dmem0[(i->param + ba0) & 0xff] << 8))) >> 1;
	r = (int64_t)(int32_t)d + (macc_to_output_0(0x0000000000000000ULL, 0xffffffffffffffffULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 29: // add dmode=1 sfai=1 dbp=0 sfmo=0 rnd=0 movm=0
	d = ((int32_t)( (dmem0[(id + ba0) & 0xff] << 8))) >> 1;
	r = (int64_t)(int32_t)d + (macc_to_output_0(0x0000000000000000ULL, 0xffffffffffffffffULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 30: // add dmode=0 sfai=0 dbp=1 sfmo=0 rnd=0 movm=0
	d =  (dmem1[(i->param + ba1) & 0x1f] << 8);
	r = (int64_t)(int32_t)d + (macc_to_output_0(0x0000000000000000ULL, 0xffffffffffffffffULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 31: // add dmode=1 sfai=0 dbp=1 sfmo=0 rnd=0 movm=0
	d =  (dmem1[(id + ba1) & 0x1f] << 8);
	r = (int64_t)(int32_t)d + (macc_to_output_0(0x0000000000000000ULL, 0xffffffffffffffffULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 32: // add dmode=0 sfai=1 dbp=1 sfmo=0 rnd=0 movm=0
	d = ((int32_t)( (dmem1[(i->param + ba1) & 0x1f] << 8))) >> 1;
	r = (int64_t)(int32_t)d + (macc_to_output_0(0x0000000000000000ULL, 0xffffffffffffffffULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 33: // add dmode=1 sfai=1 dbp=1 sfmo=0 rnd=0 movm=0
	d = ((int32_t)( (dmem1[(id + ba1) & 0x1f] << 8))) >> 1;
	r = (int64_t)(int32_t)d + (macc_to_output_0(0x0000000000000000ULL, 0xffffffffffffffffULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 34: // add dmode=0 sfai=0 dbp=0 sfmo=1 rnd=0 movm=0
	d =  (dmem0[(i->param + ba0) & 0xff] << 8);
	r = (int64_t)(int32_t)d + (macc_to_output_1(0x0000000000000000ULL, 0xffffffffffffffffULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 35: // add dmode=1 sfai=0 dbp=0 sfmo=1 rnd=0 movm=0
	d =  (dmem0[(id + ba0) & 0xff] << 8);
	r = (int64_t)(int32_t)d + (macc_to_output_1(0x0000000000000000ULL, 0xffffffffffffffffULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 36: // add dmode=0 sfai=1 dbp=0 sfmo=1 rnd=0 movm=0
	d = ((int32_t)( (dmem0[(i->param + ba0) & 0xff] << 8))) >> 1;
	r = (int64_t)(int32_t)d + (macc_to_output_1(0x0000000000000000ULL, 0xffffffffffffffffULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 37: // add dmode=1 sfai=1 dbp=0 sfmo=1 rnd=0 movm=0
	d = ((int32_t)( (dmem0[(id + ba0) & 0xff] << 8))) >> 1;
	r = (int64_t)(int32_t)d + (macc_to_output_1(0x0000000000000000ULL, 0xffffffffffffffffULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 38: // add dmode=0 sfai=0 dbp=1 sfmo=1 rnd=0 movm=0
	d =  (dmem1[(i->param + ba1) & 0x1f] << 8);
	r = (int64_t)(int32_t)d + (macc_to_output_1(0x0000000000000000ULL, 0xffffffffffffffffULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 39: // add dmode=1 sfai=0 dbp=1 sfmo=1 rnd=0 movm=0
	d =  (dmem1[(id + ba1) & 0x1f] << 8);
	r = (int64_t)(int32_t)d + (macc_to_output_1(0x0000000000000000ULL, 0xffffffffffffffffULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 40: // add dmode=0 sfai=1 dbp=1 sfmo=1 rnd=0 movm=0
	d = ((int32_t)( (dmem1[(i->param + ba1) & 0x1f] << 8))) >> 1;
	r = (int64_t)(int32_t)d + (macc_to_output_1(0x0000000000000000ULL, 0xffffffffffffffffULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 41: // add dmode=1 sfai=1 dbp=1 sfmo=1 rnd=0 movm=0
	d = ((int32_t)( (dmem1[(id + ba1) & 0x1f] << 8))) >> 1;
	r = (int64_t)(int32_t)d + (macc_to_output_1(0x0000000000000000ULL, 0xffffffffffffffffULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 42: // add dmode=0 sfai=0 dbp=0 sfmo=2 rnd=0 movm=0
	d =  (dmem0[(i->param + ba0) & 0xff] << 8);
	r = (int64_t)(int32_t)d + (macc_to_output_2(0x0000000000000000ULL, 0xffffffffffffffffULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 43: // add dmode=1 sfai=0 dbp=0 sfmo=2 rnd=0 movm=0
	d =  (dmem0[(id + ba0) & 0xff] << 8);
	r = (int64_t)(int32_t)d + (macc_to_output_2(0x0000000000000000ULL, 0xffffffffffffffffULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 44: // add dmode=0 sfai=1 dbp=0 sfmo=2 rnd=0 movm=0
	d = ((int32_t)( (dmem0[(i->param + ba0) & 0xff] << 8))) >> 1;
	r = (int64_t)(int32_t)d + (macc_to_output_2(0x0000000000000000ULL, 0xffffffffffffffffULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 45: // add dmode=1 sfai=1 dbp=0 sfmo=2 rnd=0 movm=0
	d = ((int32_t)( (dmem0[(id + ba0) & 0xff] << 8))) >> 1;
	r = (int64_t)(int32_t)d + (macc_to_output_2(0x0000000000000000ULL, 0xffffffffffffffffULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 46: // add dmode=0 sfai=0 dbp=1 sfmo=2 rnd=0 movm=0
	d =  (dmem1[(i->param + ba1) & 0x1f] << 8);
	r = (int64_t)(int32_t)d + (macc_to_output_2(0x0000000000000000ULL, 0xffffffffffffffffULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 47: // add dmode=1 sfai=0 dbp=1 sfmo=2 rnd=0 movm=0
	d =  (dmem1[(id + ba1) & 0x1f] << 8);
	r = (int64_t)(int32_t)d + (macc_to_output_2(0x0000000000000000ULL, 0xffffffffffffffffULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 48: // add dmode=0 sfai=1 dbp=1 sfmo=2 rnd=0 movm=0
	d = ((int32_t)( (dmem1[(i->param + ba1) & 0x1f] << 8))) >> 1;
	r = (int64_t)(int32_t)d + (macc_to_output_2(0x0000000000000000ULL, 0xffffffffffffffffULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 49: // add dmode=1 sfai=1 dbp=1 sfmo=2 rnd=0 movm=0
	d = ((int32_t)( (dmem1[(id + ba1) & 0x1f] << 8))) >> 1;
	r = (int64_t)(int32_t)d + (macc_to_output_2(0x0000000000000000ULL, 0xffffffffffffffffULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 50: // add dmode=0 sfai=0 dbp=0 sfmo=3 rnd=0 movm=0
	d =  (dmem0[(i->param + ba0) & 0xff] << 8);
	r = (int64_t)(int32_t)d + (macc_to_output_3(0x0000000000000000ULL, 0xffffffffffffffffULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 51: // add dmode=1 sfai=0 dbp=0 sfmo=3 rnd=0 movm=0
	d =  (dmem0[(id + ba0) & 0xff] << 8);
	r = (int64_t)(int32_t)d + (macc_to_output_3(0x0000000000000000ULL, 0xffffffffffffffffULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 52: // add dmode=0 sfai=1 dbp=0 sfmo=3 rnd=0 movm=0
	d = ((int32_t)( (dmem0[(i->param + ba0) & 0xff] << 8))) >> 1;
	r = (int64_t)(int32_t)d + (macc_to_output_3(0x0000000000000000ULL, 0xffffffffffffffffULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 53: // add dmode=1 sfai=1 dbp=0 sfmo=3 rnd=0 movm=0
	d = ((int32_t)( (dmem0[(id + ba0) & 0xff] << 8))) >> 1;
	r = (int64_t)(int32_t)d + (macc_to_output_3(0x0000000000000000ULL, 0xffffffffffffffffULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 54: // add dmode=0 sfai=0 dbp=1 sfmo=3 rnd=0 movm=0
	d =  (dmem1[(i->param + ba1) & 0x1f] << 8);
	r = (int64_t)(int32_t)d + (macc_to_output_3(0x0000000000000000ULL, 0xffffffffffffffffULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 55: // add dmode=1 sfai=0 dbp=1 sfmo=3 rnd=0 movm=0
	d =  (dmem1[(id + ba1) & 0x1f] << 8);
	r = (int64_t)(int32_t)d + (macc_to_output_3(0x0000000000000000ULL, 0xffffffffffffffffULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 56: // add dmode=0 sfai=1 dbp=1 sfmo=3 rnd=0 movm=0
	d = ((int32_t)( (dmem1[(i->param + ba1) & 0x1f] << 8))) >> 1;
	r = (int64_t)(int32_t)d + (macc_to_output_3(0x0000000000000000ULL, 0xffffffffffffffffULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 57: // add dmode=1 sfai=1 dbp=1 sfmo=3 rnd=0 movm=0
	d = ((int32_t)( (dmem1[(id + ba1) & 0x1f] << 8))) >> 1;
	r = (int64_t)(int32_t)d + (macc_to_output_3(0x0000000000000000ULL, 0xffffffffffffffffULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 58: // add dmode=0 sfai=0 dbp=0 sfmo=0 rnd=1 movm=0
	d =  (dmem0[(i->param + ba0) & 0xff] << 8);
	r = (int64_t)(int32_t)d + (macc_to_output_0(0x0000000000008000ULL, 0xffffffffffff0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 59: // add dmode=1 sfai=0 dbp=0 sfmo=0 rnd=1 movm=0
	d =  (dmem0[(id + ba0) & 0xff] << 8);
	r = (int64_t)(int32_t)d + (macc_to_output_0(0x0000000000008000ULL, 0xffffffffffff0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 60: // add dmode=0 sfai=1 dbp=0 sfmo=0 rnd=1 movm=0
	d = ((int32_t)( (dmem0[(i->param + ba0) & 0xff] << 8))) >> 1;
	r = (int64_t)(int32_t)d + (macc_to_output_0(0x0000000000008000ULL, 0xffffffffffff0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 61: // add dmode=1 sfai=1 dbp=0 sfmo=0 rnd=1 movm=0
	d = ((int32_t)( (dmem0[(id + ba0) & 0xff] << 8))) >> 1;
	r = (int64_t)(int32_t)d + (macc_to_output_0(0x0000000000008000ULL, 0xffffffffffff0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 62: // add dmode=0 sfai=0 dbp=1 sfmo=0 rnd=1 movm=0
	d =  (dmem1[(i->param + ba1) & 0x1f] << 8);
	r = (int64_t)(int32_t)d + (macc_to_output_0(0x0000000000008000ULL, 0xffffffffffff0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 63: // add dmode=1 sfai=0 dbp=1 sfmo=0 rnd=1 movm=0
	d =  (dmem1[(id + ba1) & 0x1f] << 8);
	r = (int64_t)(int32_t)d + (macc_to_output_0(0x0000000000008000ULL, 0xffffffffffff0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 64: // add dmode=0 sfai=1 dbp=1 sfmo=0 rnd=1 movm=0
	d = ((int32_t)( (dmem1[(i->param + ba1) & 0x1f] << 8))) >> 1;
	r = (int64_t)(int32_t)d + (macc_to_output_0(0x0000000000008000ULL, 0xffffffffffff0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 65: // add dmode=1 sfai=1 dbp=1 sfmo=0 rnd=1 movm=0
	d = ((int32_t)( (dmem1[(id + ba1) & 0x1f] << 8))) >> 1;
	r = (int64_t)(int32_t)d + (macc_to_output_0(0x0000000000008000ULL, 0xffffffffffff0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 66: // add dmode=0 sfai=0 dbp=0 sfmo=1 rnd=1 movm=0
	d =  (dmem0[(i->param + ba0) & 0xff] << 8);
	r = (int64_t)(int32_t)d + (macc_to_output_1(0x0000000000008000ULL, 0xffffffffffff0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 67: // add dmode=1 sfai=0 dbp=0 sfmo=1 rnd=1 movm=0
	d =  (dmem0[(id + ba0) & 0xff] << 8);
	r = (int64_t)(int32_t)d + (macc_to_output_1(0x0000000000008000ULL, 0xffffffffffff0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 68: // add dmode=0 sfai=1 dbp=0 sfmo=1 rnd=1 movm=0
	d = ((int32_t)( (dmem0[(i->param + ba0) & 0xff] << 8))) >> 1;
	r = (int64_t)(int32_t)d + (macc_to_output_1(0x0000000000008000ULL, 0xffffffffffff0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 69: // add dmode=1 sfai=1 dbp=0 sfmo=1 rnd=1 movm=0
	d = ((int32_t)( (dmem0[(id + ba0) & 0xff] << 8))) >> 1;
	r = (int64_t)(int32_t)d + (macc_to_output_1(0x0000000000008000ULL, 0xffffffffffff0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 70: // add dmode=0 sfai=0 dbp=1 sfmo=1 rnd=1 movm=0
	d =  (dmem1[(i->param + ba1) & 0x1f] << 8);
	r = (int64_t)(int32_t)d + (macc_to_output_1(0x0000000000008000ULL, 0xffffffffffff0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 71: // add dmode=1 sfai=0 dbp=1 sfmo=1 rnd=1 movm=0
	d =  (dmem1[(id + ba1) & 0x1f] << 8);
	r = (int64_t)(int32_t)d + (macc_to_output_1(0x0000000000008000ULL, 0xffffffffffff0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 72: // add dmode=0 sfai=1 dbp=1 sfmo=1 rnd=1 movm=0
	d = ((int32_t)( (dmem1[(i->param + ba1) & 0x1f] << 8))) >> 1;
	r = (int64_t)(int32_t)d + (macc_to_output_1(0x0000000000008000ULL, 0xffffffffffff0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 73: // add dmode=1 sfai=1 dbp=1 sfmo=1 rnd=1 movm=0
	d = ((int32_t)( (dmem1[(id + ba1) & 0x1f] << 8))) >> 1;
	r = (int64_t)(int32_t)d + (macc_to_output_1(0x0000000000008000ULL, 0xffffffffffff0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 74: // add dmode=0 sfai=0 dbp=0 sfmo=2 rnd=1 movm=0
	d =  (dmem0[(i->param + ba0) & 0xff] << 8);
	r = (int64_t)(int32_t)d + (macc_to_output_2(0x0000000000008000ULL, 0xffffffffffff0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 75: // add dmode=1 sfai=0 dbp=0 sfmo=2 rnd=1 movm=0
	d =  (dmem0[(id + ba0) & 0xff] << 8);
	r = (int64_t)(int32_t)d + (macc_to_output_2(0x0000000000008000ULL, 0xffffffffffff0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 76: // add dmode=0 sfai=1 dbp=0 sfmo=2 rnd=1 movm=0
	d = ((int32_t)( (dmem0[(i->param + ba0) & 0xff] << 8))) >> 1;
	r = (int64_t)(int32_t)d + (macc_to_output_2(0x0000000000008000ULL, 0xffffffffffff0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 77: // add dmode=1 sfai=1 dbp=0 sfmo=2 rnd=1 movm=0
	d = ((int32_t)( (dmem0[(id + ba0) & 0xff] << 8))) >> 1;
	r = (int64_t)(int32_t)d + (macc_to_output_2(0x0000000000008000ULL, 0xffffffffffff0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 78: // add dmode=0 sfai=0 dbp=1 sfmo=2 rnd=1 movm=0
	d =  (dmem1[(i->param + ba1) & 0x1f] << 8);
	r = (int64_t)(int32_t)d + (macc_to_output_2(0x0000000000008000ULL, 0xffffffffffff0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 79: // add dmode=1 sfai=0 dbp=1 sfmo=2 rnd=1 movm=0
	d =  (dmem1[(id + ba1) & 0x1f] << 8);
	r = (int64_t)(int32_t)d + (macc_to_output_2(0x0000000000008000ULL, 0xffffffffffff0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 80: // add dmode=0 sfai=1 dbp=1 sfmo=2 rnd=1 movm=0
	d = ((int32_t)( (dmem1[(i->param + ba1) & 0x1f] << 8))) >> 1;
	r = (int64_t)(int32_t)d + (macc_to_output_2(0x0000000000008000ULL, 0xffffffffffff0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 81: // add dmode=1 sfai=1 dbp=1 sfmo=2 rnd=1 movm=0
	d = ((int32_t)( (dmem1[(id + ba1) & 0x1f] << 8))) >> 1;
	r = (int64_t)(int32_t)d + (macc_to_output_2(0x0000000000008000ULL, 0xffffffffffff0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 82: // add dmode=0 sfai=0 dbp=0 sfmo=3 rnd=1 movm=0
	d =  (dmem0[(i->param + ba0) & 0xff] << 8);
	r = (int64_t)(int32_t)d + (macc_to_output_3(0x0000000000008000ULL, 0xffffffffffff0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 83: // add dmode=1 sfai=0 dbp=0 sfmo=3 rnd=1 movm=0
	d =  (dmem0[(id + ba0) & 0xff] << 8);
	r = (int64_t)(int32_t)d + (macc_to_output_3(0x0000000000008000ULL, 0xffffffffffff0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 84: // add dmode=0 sfai=1 dbp=0 sfmo=3 rnd=1 movm=0
	d = ((int32_t)( (dmem0[(i->param + ba0) & 0xff] << 8))) >> 1;
	r = (int64_t)(int32_t)d + (macc_to_output_3(0x0000000000008000ULL, 0xffffffffffff0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 85: // add dmode=1 sfai=1 dbp=0 sfmo=3 rnd=1 movm=0
	d = ((int32_t)( (dmem0[(id + ba0) & 0xff] << 8))) >> 1;
	r = (int64_t)(int32_t)d + (macc_to_output_3(0x0000000000008000ULL, 0xffffffffffff0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 86: // add dmode=0 sfai=0 dbp=1 sfmo=3 rnd=1 movm=0
	d =  (dmem1[(i->param + ba1) & 0x1f] << 8);
	r = (int64_t)(int32_t)d + (macc_to_output_3(0x0000000000008000ULL, 0xffffffffffff0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 87: // add dmode=1 sfai=0 dbp=1 sfmo=3 rnd=1 movm=0
	d =  (dmem1[(id + ba1) & 0x1f] << 8);
	r = (int64_t)(int32_t)d + (macc_to_output_3(0x0000000000008000ULL, 0xffffffffffff0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 88: // add dmode=0 sfai=1 dbp=1 sfmo=3 rnd=1 movm=0
	d = ((int32_t)( (dmem1[(i->param + ba1) & 0x1f] << 8))) >> 1;
	r = (int64_t)(int32_t)d + (macc_to_output_3(0x0000000000008000ULL, 0xffffffffffff0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 89: // add dmode=1 sfai=1 dbp=1 sfmo=3 rnd=1 movm=0
	d = ((int32_t)( (dmem1[(id + ba1) & 0x1f] << 8))) >> 1;
	r = (int64_t)(int32_t)d + (macc_to_output_3(0x0000000000008000ULL, 0xffffffffffff0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 90: // add dmode=0 sfai=0 dbp=0 sfmo=0 rnd=2 movm=0
	d =  (dmem0[(i->param + ba0) & 0xff] << 8);
	r = (int64_t)(int32_t)d + (macc_to_output_0(0x0000000000800000ULL, 0xffffffffff000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 91: // add dmode=1 sfai=0 dbp=0 sfmo=0 rnd=2 movm=0
	d =  (dmem0[(id + ba0) & 0xff] << 8);
	r = (int64_t)(int32_t)d + (macc_to_output_0(0x0000000000800000ULL, 0xffffffffff000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 92: // add dmode=0 sfai=1 dbp=0 sfmo=0 rnd=2 movm=0
	d = ((int32_t)( (dmem0[(i->param + ba0) & 0xff] << 8))) >> 1;
	r = (int64_t)(int32_t)d + (macc_to_output_0(0x0000000000800000ULL, 0xffffffffff000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 93: // add dmode=1 sfai=1 dbp=0 sfmo=0 rnd=2 movm=0
	d = ((int32_t)( (dmem0[(id + ba0) & 0xff] << 8))) >> 1;
	r = (int64_t)(int32_t)d + (macc_to_output_0(0x0000000000800000ULL, 0xffffffffff000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 94: // add dmode=0 sfai=0 dbp=1 sfmo=0 rnd=2 movm=0
	d =  (dmem1[(i->param + ba1) & 0x1f] << 8);
	r = (int64_t)(int32_t)d + (macc_to_output_0(0x0000000000800000ULL, 0xffffffffff000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 95: // add dmode=1 sfai=0 dbp=1 sfmo=0 rnd=2 movm=0
	d =  (dmem1[(id + ba1) & 0x1f] << 8);
	r = (int64_t)(int32_t)d + (macc_to_output_0(0x0000000000800000ULL, 0xffffffffff000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 96: // add dmode=0 sfai=1 dbp=1 sfmo=0 rnd=2 movm=0
	d = ((int32_t)( (dmem1[(i->param + ba1) & 0x1f] << 8))) >> 1;
	r = (int64_t)(int32_t)d + (macc_to_output_0(0x0000000000800000ULL, 0xffffffffff000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 97: // add dmode=1 sfai=1 dbp=1 sfmo=0 rnd=2 movm=0
	d = ((int32_t)( (dmem1[(id + ba1) & 0x1f] << 8))) >> 1;
	r = (int64_t)(int32_t)d + (macc_to_output_0(0x0000000000800000ULL, 0xffffffffff000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 98: // add dmode=0 sfai=0 dbp=0 sfmo=1 rnd=2 movm=0
	d =  (dmem0[(i->param + ba0) & 0xff] << 8);
	r = (int64_t)(int32_t)d + (macc_to_output_1(0x0000000000800000ULL, 0xffffffffff000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 99: // add dmode=1 sfai=0 dbp=0 sfmo=1 rnd=2 movm=0
	d =  (dmem0[(id + ba0) & 0xff] << 8);
	r = (int64_t)(int32_t)d + (macc_to_output_1(0x0000000000800000ULL, 0xffffffffff000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 100: // add dmode=0 sfai=1 dbp=0 sfmo=1 rnd=2 movm=0
	d = ((int32_t)( (dmem0[(i->param + ba0) & 0xff] << 8))) >> 1;
	r = (int64_t)(int32_t)d + (macc_to_output_1(0x0000000000800000ULL, 0xffffffffff000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 101: // add dmode=1 sfai=1 dbp=0 sfmo=1 rnd=2 movm=0
	d = ((int32_t)( (dmem0[(id + ba0) & 0xff] << 8))) >> 1;
	r = (int64_t)(int32_t)d + (macc_to_output_1(0x0000000000800000ULL, 0xffffffffff000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 102: // add dmode=0 sfai=0 dbp=1 sfmo=1 rnd=2 movm=0
	d =  (dmem1[(i->param + ba1) & 0x1f] << 8);
	r = (int64_t)(int32_t)d + (macc_to_output_1(0x0000000000800000ULL, 0xffffffffff000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 103: // add dmode=1 sfai=0 dbp=1 sfmo=1 rnd=2 movm=0
	d =  (dmem1[(id + ba1) & 0x1f] << 8);
	r = (int64_t)(int32_t)d + (macc_to_output_1(0x0000000000800000ULL, 0xffffffffff000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 104: // add dmode=0 sfai=1 dbp=1 sfmo=1 rnd=2 movm=0
	d = ((int32_t)( (dmem1[(i->param + ba1) & 0x1f] << 8))) >> 1;
	r = (int64_t)(int32_t)d + (macc_to_output_1(0x0000000000800000ULL, 0xffffffffff000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 105: // add dmode=1 sfai=1 dbp=1 sfmo=1 rnd=2 movm=0
	d = ((int32_t)( (dmem1[(id + ba1) & 0x1f] << 8))) >> 1;
	r = (int64_t)(int32_t)d + (macc_to_output_1(0x0000000000800000ULL, 0xffffffffff000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 106: // add dmode=0 sfai=0 dbp=0 sfmo=2 rnd=2 movm=0
	d =  (dmem0[(i->param + ba0) & 0xff] << 8);
	r = (int64_t)(int32_t)d + (macc_to_output_2(0x0000000000800000ULL, 0xffffffffff000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 107: // add dmode=1 sfai=0 dbp=0 sfmo=2 rnd=2 movm=0
	d =  (dmem0[(id + ba0) & 0xff] << 8);
	r = (int64_t)(int32_t)d + (macc_to_output_2(0x0000000000800000ULL, 0xffffffffff000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 108: // add dmode=0 sfai=1 dbp=0 sfmo=2 rnd=2 movm=0
	d = ((int32_t)( (dmem0[(i->param + ba0) & 0xff] << 8))) >> 1;
	r = (int64_t)(int32_t)d + (macc_to_output_2(0x0000000000800000ULL, 0xffffffffff000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 109: // add dmode=1 sfai=1 dbp=0 sfmo=2 rnd=2 movm=0
	d = ((int32_t)( (dmem0[(id + ba0) & 0xff] << 8))) >> 1;
	r = (int64_t)(int32_t)d + (macc_to_output_2(0x0000000000800000ULL, 0xffffffffff000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 110: // add dmode=0 sfai=0 dbp=1 sfmo=2 rnd=2 movm=0
	d =  (dmem1[(i->param + ba1) & 0x1f] << 8);
	r = (int64_t)(int32_t)d + (macc_to_output_2(0x0000000000800000ULL, 0xffffffffff000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 111: // add dmode=1 sfai=0 dbp=1 sfmo=2 rnd=2 movm=0
	d =  (dmem1[(id + ba1) & 0x1f] << 8);
	r = (int64_t)(int32_t)d + (macc_to_output_2(0x0000000000800000ULL, 0xffffffffff000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 112: // add dmode=0 sfai=1 dbp=1 sfmo=2 rnd=2 movm=0
	d = ((int32_t)( (dmem1[(i->param + ba1) & 0x1f] << 8))) >> 1;
	r = (int64_t)(int32_t)d + (macc_to_output_2(0x0000000000800000ULL, 0xffffffffff000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 113: // add dmode=1 sfai=1 dbp=1 sfmo=2 rnd=2 movm=0
	d = ((int32_t)( (dmem1[(id + ba1) & 0x1f] << 8))) >> 1;
	r = (int64_t)(int32_t)d + (macc_to_output_2(0x0000000000800000ULL, 0xffffffffff000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 114: // add dmode=0 sfai=0 dbp=0 sfmo=3 rnd=2 movm=0
	d =  (dmem0[(i->param + ba0) & 0xff] << 8);
	r = (int64_t)(int32_t)d + (macc_to_output_3(0x0000000000800000ULL, 0xffffffffff000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 115: // add dmode=1 sfai=0 dbp=0 sfmo=3 rnd=2 movm=0
	d =  (dmem0[(id + ba0) & 0xff] << 8);
	r = (int64_t)(int32_t)d + (macc_to_output_3(0x0000000000800000ULL, 0xffffffffff000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 116: // add dmode=0 sfai=1 dbp=0 sfmo=3 rnd=2 movm=0
	d = ((int32_t)( (dmem0[(i->param + ba0) & 0xff] << 8))) >> 1;
	r = (int64_t)(int32_t)d + (macc_to_output_3(0x0000000000800000ULL, 0xffffffffff000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 117: // add dmode=1 sfai=1 dbp=0 sfmo=3 rnd=2 movm=0
	d = ((int32_t)( (dmem0[(id + ba0) & 0xff] << 8))) >> 1;
	r = (int64_t)(int32_t)d + (macc_to_output_3(0x0000000000800000ULL, 0xffffffffff000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 118: // add dmode=0 sfai=0 dbp=1 sfmo=3 rnd=2 movm=0
	d =  (dmem1[(i->param + ba1) & 0x1f] << 8);
	r = (int64_t)(int32_t)d + (macc_to_output_3(0x0000000000800000ULL, 0xffffffffff000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 119: // add dmode=1 sfai=0 dbp=1 sfmo=3 rnd=2 movm=0
	d =  (dmem1[(id + ba1) & 0x1f] << 8);
	r = (int64_t)(int32_t)d + (macc_to_output_3(0x0000000000800000ULL, 0xffffffffff000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 120: // add dmode=0 sfai=1 dbp=1 sfmo=3 rnd=2 movm=0
	d = ((int32_t)( (dmem1[(i->param + ba1) & 0x1f] << 8))) >> 1;
	r = (int64_t)(int32_t)d + (macc_to_output_3(0x0000000000800000ULL, 0xffffffffff000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 121: // add dmode=1 sfai=1 dbp=1 sfmo=3 rnd=2 movm=0
	d = ((int32_t)( (dmem1[(id + ba1) & 0x1f] << 8))) >> 1;
	r = (int64_t)(int32_t)d + (macc_to_output_3(0x0000000000800000ULL, 0xffffffffff000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 122: // add dmode=0 sfai=0 dbp=0 sfmo=0 rnd=3 movm=0
	d =  (dmem0[(i->param + ba0) & 0xff] << 8);
	r = (int64_t)(int32_t)d + (macc_to_output_0(0x0000000000020000ULL, 0xfffffffffffc0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 123: // add dmode=1 sfai=0 dbp=0 sfmo=0 rnd=3 movm=0
	d =  (dmem0[(id + ba0) & 0xff] << 8);
	r = (int64_t)(int32_t)d + (macc_to_output_0(0x0000000000020000ULL, 0xfffffffffffc0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 124: // add dmode=0 sfai=1 dbp=0 sfmo=0 rnd=3 movm=0
	d = ((int32_t)( (dmem0[(i->param + ba0) & 0xff] << 8))) >> 1;
	r = (int64_t)(int32_t)d + (macc_to_output_0(0x0000000000020000ULL, 0xfffffffffffc0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 125: // add dmode=1 sfai=1 dbp=0 sfmo=0 rnd=3 movm=0
	d = ((int32_t)( (dmem0[(id + ba0) & 0xff] << 8))) >> 1;
	r = (int64_t)(int32_t)d + (macc_to_output_0(0x0000000000020000ULL, 0xfffffffffffc0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 126: // add dmode=0 sfai=0 dbp=1 sfmo=0 rnd=3 movm=0
	d =  (dmem1[(i->param + ba1) & 0x1f] << 8);
	r = (int64_t)(int32_t)d + (macc_to_output_0(0x0000000000020000ULL, 0xfffffffffffc0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 127: // add dmode=1 sfai=0 dbp=1 sfmo=0 rnd=3 movm=0
	d =  (dmem1[(id + ba1) & 0x1f] << 8);
	r = (int64_t)(int32_t)d + (macc_to_output_0(0x0000000000020000ULL, 0xfffffffffffc0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 128: // add dmode=0 sfai=1 dbp=1 sfmo=0 rnd=3 movm=0
	d = ((int32_t)( (dmem1[(i->param + ba1) & 0x1f] << 8))) >> 1;
	r = (int64_t)(int32_t)d + (macc_to_output_0(0x0000000000020000ULL, 0xfffffffffffc0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 129: // add dmode=1 sfai=1 dbp=1 sfmo=0 rnd=3 movm=0
	d = ((int32_t)( (dmem1[(id + ba1) & 0x1f] << 8))) >> 1;
	r = (int64_t)(int32_t)d + (macc_to_output_0(0x0000000000020000ULL, 0xfffffffffffc0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 130: // add dmode=0 sfai=0 dbp=0 sfmo=1 rnd=3 movm=0
	d =  (dmem0[(i->param + ba0) & 0xff] << 8);
	r = (int64_t)(int32_t)d + (macc_to_output_1(0x0000000000020000ULL, 0xfffffffffffc0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 131: // add dmode=1 sfai=0 dbp=0 sfmo=1 rnd=3 movm=0
	d =  (dmem0[(id + ba0) & 0xff] << 8);
	r = (int64_t)(int32_t)d + (macc_to_output_1(0x0000000000020000ULL, 0xfffffffffffc0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 132: // add dmode=0 sfai=1 dbp=0 sfmo=1 rnd=3 movm=0
	d = ((int32_t)( (dmem0[(i->param + ba0) & 0xff] << 8))) >> 1;
	r = (int64_t)(int32_t)d + (macc_to_output_1(0x0000000000020000ULL, 0xfffffffffffc0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 133: // add dmode=1 sfai=1 dbp=0 sfmo=1 rnd=3 movm=0
	d = ((int32_t)( (dmem0[(id + ba0) & 0xff] << 8))) >> 1;
	r = (int64_t)(int32_t)d + (macc_to_output_1(0x0000000000020000ULL, 0xfffffffffffc0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 134: // add dmode=0 sfai=0 dbp=1 sfmo=1 rnd=3 movm=0
	d =  (dmem1[(i->param + ba1) & 0x1f] << 8);
	r = (int64_t)(int32_t)d + (macc_to_output_1(0x0000000000020000ULL, 0xfffffffffffc0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 135: // add dmode=1 sfai=0 dbp=1 sfmo=1 rnd=3 movm=0
	d =  (dmem1[(id + ba1) & 0x1f] << 8);
	r = (int64_t)(int32_t)d + (macc_to_output_1(0x0000000000020000ULL, 0xfffffffffffc0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 136: // add dmode=0 sfai=1 dbp=1 sfmo=1 rnd=3 movm=0
	d = ((int32_t)( (dmem1[(i->param + ba1) & 0x1f] << 8))) >> 1;
	r = (int64_t)(int32_t)d + (macc_to_output_1(0x0000000000020000ULL, 0xfffffffffffc0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 137: // add dmode=1 sfai=1 dbp=1 sfmo=1 rnd=3 movm=0
	d = ((int32_t)( (dmem1[(id + ba1) & 0x1f] << 8))) >> 1;
	r = (int64_t)(int32_t)d + (macc_to_output_1(0x0000000000020000ULL, 0xfffffffffffc0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 138: // add dmode=0 sfai=0 dbp=0 sfmo=2 rnd=3 movm=0
	d =  (dmem0[(i->param + ba0) & 0xff] << 8);
	r = (int64_t)(int32_t)d + (macc_to_output_2(0x0000000000020000ULL, 0xfffffffffffc0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 139: // add dmode=1 sfai=0 dbp=0 sfmo=2 rnd=3 movm=0
	d =  (dmem0[(id + ba0) & 0xff] << 8);
	r = (int64_t)(int32_t)d + (macc_to_output_2(0x0000000000020000ULL, 0xfffffffffffc0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 140: // add dmode=0 sfai=1 dbp=0 sfmo=2 rnd=3 movm=0
	d = ((int32_t)( (dmem0[(i->param + ba0) & 0xff] << 8))) >> 1;
	r = (int64_t)(int32_t)d + (macc_to_output_2(0x0000000000020000ULL, 0xfffffffffffc0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 141: // add dmode=1 sfai=1 dbp=0 sfmo=2 rnd=3 movm=0
	d = ((int32_t)( (dmem0[(id + ba0) & 0xff] << 8))) >> 1;
	r = (int64_t)(int32_t)d + (macc_to_output_2(0x0000000000020000ULL, 0xfffffffffffc0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 142: // add dmode=0 sfai=0 dbp=1 sfmo=2 rnd=3 movm=0
	d =  (dmem1[(i->param + ba1) & 0x1f] << 8);
	r = (int64_t)(int32_t)d + (macc_to_output_2(0x0000000000020000ULL, 0xfffffffffffc0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 143: // add dmode=1 sfai=0 dbp=1 sfmo=2 rnd=3 movm=0
	d =  (dmem1[(id + ba1) & 0x1f] << 8);
	r = (int64_t)(int32_t)d + (macc_to_output_2(0x0000000000020000ULL, 0xfffffffffffc0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 144: // add dmode=0 sfai=1 dbp=1 sfmo=2 rnd=3 movm=0
	d = ((int32_t)( (dmem1[(i->param + ba1) & 0x1f] << 8))) >> 1;
	r = (int64_t)(int32_t)d + (macc_to_output_2(0x0000000000020000ULL, 0xfffffffffffc0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 145: // add dmode=1 sfai=1 dbp=1 sfmo=2 rnd=3 movm=0
	d = ((int32_t)( (dmem1[(id + ba1) & 0x1f] << 8))) >> 1;
	r = (int64_t)(int32_t)d + (macc_to_output_2(0x0000000000020000ULL, 0xfffffffffffc0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 146: // add dmode=0 sfai=0 dbp=0 sfmo=3 rnd=3 movm=0
	d =  (dmem0[(i->param + ba0) & 0xff] << 8);
	r = (int64_t)(int32_t)d + (macc_to_output_3(0x0000000000020000ULL, 0xfffffffffffc0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 147: // add dmode=1 sfai=0 dbp=0 sfmo=3 rnd=3 movm=0
	d =  (dmem0[(id + ba0) & 0xff] << 8);
	r = (int64_t)(int32_t)d + (macc_to_output_3(0x0000000000020000ULL, 0xfffffffffffc0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 148: // add dmode=0 sfai=1 dbp=0 sfmo=3 rnd=3 movm=0
	d = ((int32_t)( (dmem0[(i->param + ba0) & 0xff] << 8))) >> 1;
	r = (int64_t)(int32_t)d + (macc_to_output_3(0x0000000000020000ULL, 0xfffffffffffc0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 149: // add dmode=1 sfai=1 dbp=0 sfmo=3 rnd=3 movm=0
	d = ((int32_t)( (dmem0[(id + ba0) & 0xff] << 8))) >> 1;
	r = (int64_t)(int32_t)d + (macc_to_output_3(0x0000000000020000ULL, 0xfffffffffffc0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 150: // add dmode=0 sfai=0 dbp=1 sfmo=3 rnd=3 movm=0
	d =  (dmem1[(i->param + ba1) & 0x1f] << 8);
	r = (int64_t)(int32_t)d + (macc_to_output_3(0x0000000000020000ULL, 0xfffffffffffc0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 151: // add dmode=1 sfai=0 dbp=1 sfmo=3 rnd=3 movm=0
	d =  (dmem1[(id + ba1) & 0x1f] << 8);
	r = (int64_t)(int32_t)d + (macc_to_output_3(0x0000000000020000ULL, 0xfffffffffffc0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 152: // add dmode=0 sfai=1 dbp=1 sfmo=3 rnd=3 movm=0
	d = ((int32_t)( (dmem1[(i->param + ba1) & 0x1f] << 8))) >> 1;
	r = (int64_t)(int32_t)d + (macc_to_output_3(0x0000000000020000ULL, 0xfffffffffffc0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 153: // add dmode=1 sfai=1 dbp=1 sfmo=3 rnd=3 movm=0
	d = ((int32_t)( (dmem1[(id + ba1) & 0x1f] << 8))) >> 1;
	r = (int64_t)(int32_t)d + (macc_to_output_3(0x0000000000020000ULL, 0xfffffffffffc0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 154: // add dmode=0 sfai=0 dbp=0 sfmo=0 rnd=4 movm=0
	d =  (dmem0[(i->param + ba0) & 0xff] << 8);
	r = (int64_t)(int32_t)d + (macc_to_output_0(0x0000000080000000ULL, 0xffffffff00000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 155: // add dmode=1 sfai=0 dbp=0 sfmo=0 rnd=4 movm=0
	d =  (dmem0[(id + ba0) & 0xff] << 8);
	r = (int64_t)(int32_t)d + (macc_to_output_0(0x0000000080000000ULL, 0xffffffff00000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 156: // add dmode=0 sfai=1 dbp=0 sfmo=0 rnd=4 movm=0
	d = ((int32_t)( (dmem0[(i->param + ba0) & 0xff] << 8))) >> 1;
	r = (int64_t)(int32_t)d + (macc_to_output_0(0x0000000080000000ULL, 0xffffffff00000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 157: // add dmode=1 sfai=1 dbp=0 sfmo=0 rnd=4 movm=0
	d = ((int32_t)( (dmem0[(id + ba0) & 0xff] << 8))) >> 1;
	r = (int64_t)(int32_t)d + (macc_to_output_0(0x0000000080000000ULL, 0xffffffff00000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 158: // add dmode=0 sfai=0 dbp=1 sfmo=0 rnd=4 movm=0
	d =  (dmem1[(i->param + ba1) & 0x1f] << 8);
	r = (int64_t)(int32_t)d + (macc_to_output_0(0x0000000080000000ULL, 0xffffffff00000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 159: // add dmode=1 sfai=0 dbp=1 sfmo=0 rnd=4 movm=0
	d =  (dmem1[(id + ba1) & 0x1f] << 8);
	r = (int64_t)(int32_t)d + (macc_to_output_0(0x0000000080000000ULL, 0xffffffff00000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 160: // add dmode=0 sfai=1 dbp=1 sfmo=0 rnd=4 movm=0
	d = ((int32_t)( (dmem1[(i->param + ba1) & 0x1f] << 8))) >> 1;
	r = (int64_t)(int32_t)d + (macc_to_output_0(0x0000000080000000ULL, 0xffffffff00000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 161: // add dmode=1 sfai=1 dbp=1 sfmo=0 rnd=4 movm=0
	d = ((int32_t)( (dmem1[(id + ba1) & 0x1f] << 8))) >> 1;
	r = (int64_t)(int32_t)d + (macc_to_output_0(0x0000000080000000ULL, 0xffffffff00000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 162: // add dmode=0 sfai=0 dbp=0 sfmo=1 rnd=4 movm=0
	d =  (dmem0[(i->param + ba0) & 0xff] << 8);
	r = (int64_t)(int32_t)d + (macc_to_output_1(0x0000000080000000ULL, 0xffffffff00000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 163: // add dmode=1 sfai=0 dbp=0 sfmo=1 rnd=4 movm=0
	d =  (dmem0[(id + ba0) & 0xff] << 8);
	r = (int64_t)(int32_t)d + (macc_to_output_1(0x0000000080000000ULL, 0xffffffff00000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 164: // add dmode=0 sfai=1 dbp=0 sfmo=1 rnd=4 movm=0
	d = ((int32_t)( (dmem0[(i->param + ba0) & 0xff] << 8))) >> 1;
	r = (int64_t)(int32_t)d + (macc_to_output_1(0x0000000080000000ULL, 0xffffffff00000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 165: // add dmode=1 sfai=1 dbp=0 sfmo=1 rnd=4 movm=0
	d = ((int32_t)( (dmem0[(id + ba0) & 0xff] << 8))) >> 1;
	r = (int64_t)(int32_t)d + (macc_to_output_1(0x0000000080000000ULL, 0xffffffff00000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 166: // add dmode=0 sfai=0 dbp=1 sfmo=1 rnd=4 movm=0
	d =  (dmem1[(i->param + ba1) & 0x1f] << 8);
	r = (int64_t)(int32_t)d + (macc_to_output_1(0x0000000080000000ULL, 0xffffffff00000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 167: // add dmode=1 sfai=0 dbp=1 sfmo=1 rnd=4 movm=0
	d =  (dmem1[(id + ba1) & 0x1f] << 8);
	r = (int64_t)(int32_t)d + (macc_to_output_1(0x0000000080000000ULL, 0xffffffff00000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 168: // add dmode=0 sfai=1 dbp=1 sfmo=1 rnd=4 movm=0
	d = ((int32_t)( (dmem1[(i->param + ba1) & 0x1f] << 8))) >> 1;
	r = (int64_t)(int32_t)d + (macc_to_output_1(0x0000000080000000ULL, 0xffffffff00000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 169: // add dmode=1 sfai=1 dbp=1 sfmo=1 rnd=4 movm=0
	d = ((int32_t)( (dmem1[(id + ba1) & 0x1f] << 8))) >> 1;
	r = (int64_t)(int32_t)d + (macc_to_output_1(0x0000000080000000ULL, 0xffffffff00000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 170: // add dmode=0 sfai=0 dbp=0 sfmo=2 rnd=4 movm=0
	d =  (dmem0[(i->param + ba0) & 0xff] << 8);
	r = (int64_t)(int32_t)d + (macc_to_output_2(0x0000000080000000ULL, 0xffffffff00000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 171: // add dmode=1 sfai=0 dbp=0 sfmo=2 rnd=4 movm=0
	d =  (dmem0[(id + ba0) & 0xff] << 8);
	r = (int64_t)(int32_t)d + (macc_to_output_2(0x0000000080000000ULL, 0xffffffff00000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 172: // add dmode=0 sfai=1 dbp=0 sfmo=2 rnd=4 movm=0
	d = ((int32_t)( (dmem0[(i->param + ba0) & 0xff] << 8))) >> 1;
	r = (int64_t)(int32_t)d + (macc_to_output_2(0x0000000080000000ULL, 0xffffffff00000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 173: // add dmode=1 sfai=1 dbp=0 sfmo=2 rnd=4 movm=0
	d = ((int32_t)( (dmem0[(id + ba0) & 0xff] << 8))) >> 1;
	r = (int64_t)(int32_t)d + (macc_to_output_2(0x0000000080000000ULL, 0xffffffff00000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 174: // add dmode=0 sfai=0 dbp=1 sfmo=2 rnd=4 movm=0
	d =  (dmem1[(i->param + ba1) & 0x1f] << 8);
	r = (int64_t)(int32_t)d + (macc_to_output_2(0x0000000080000000ULL, 0xffffffff00000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 175: // add dmode=1 sfai=0 dbp=1 sfmo=2 rnd=4 movm=0
	d =  (dmem1[(id + ba1) & 0x1f] << 8);
	r = (int64_t)(int32_t)d + (macc_to_output_2(0x0000000080000000ULL, 0xffffffff00000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 176: // add dmode=0 sfai=1 dbp=1 sfmo=2 rnd=4 movm=0
	d = ((int32_t)( (dmem1[(i->param + ba1) & 0x1f] << 8))) >> 1;
	r = (int64_t)(int32_t)d + (macc_to_output_2(0x0000000080000000ULL, 0xffffffff00000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 177: // add dmode=1 sfai=1 dbp=1 sfmo=2 rnd=4 movm=0
	d = ((int32_t)( (dmem1[(id + ba1) & 0x1f] << 8))) >> 1;
	r = (int64_t)(int32_t)d + (macc_to_output_2(0x0000000080000000ULL, 0xffffffff00000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 178: // add dmode=0 sfai=0 dbp=0 sfmo=3 rnd=4 movm=0
	d =  (dmem0[(i->param + ba0) & 0xff] << 8);
	r = (int64_t)(int32_t)d + (macc_to_output_3(0x0000000080000000ULL, 0xffffffff00000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 179: // add dmode=1 sfai=0 dbp=0 sfmo=3 rnd=4 movm=0
	d =  (dmem0[(id + ba0) & 0xff] << 8);
	r = (int64_t)(int32_t)d + (macc_to_output_3(0x0000000080000000ULL, 0xffffffff00000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 180: // add dmode=0 sfai=1 dbp=0 sfmo=3 rnd=4 movm=0
	d = ((int32_t)( (dmem0[(i->param + ba0) & 0xff] << 8))) >> 1;
	r = (int64_t)(int32_t)d + (macc_to_output_3(0x0000000080000000ULL, 0xffffffff00000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 181: // add dmode=1 sfai=1 dbp=0 sfmo=3 rnd=4 movm=0
	d = ((int32_t)( (dmem0[(id + ba0) & 0xff] << 8))) >> 1;
	r = (int64_t)(int32_t)d + (macc_to_output_3(0x0000000080000000ULL, 0xffffffff00000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 182: // add dmode=0 sfai=0 dbp=1 sfmo=3 rnd=4 movm=0
	d =  (dmem1[(i->param + ba1) & 0x1f] << 8);
	r = (int64_t)(int32_t)d + (macc_to_output_3(0x0000000080000000ULL, 0xffffffff00000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 183: // add dmode=1 sfai=0 dbp=1 sfmo=3 rnd=4 movm=0
	d =  (dmem1[(id + ba1) & 0x1f] << 8);
	r = (int64_t)(int32_t)d + (macc_to_output_3(0x0000000080000000ULL, 0xffffffff00000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 184: // add dmode=0 sfai=1 dbp=1 sfmo=3 rnd=4 movm=0
	d = ((int32_t)( (dmem1[(i->param + ba1) & 0x1f] << 8))) >> 1;
	r = (int64_t)(int32_t)d + (macc_to_output_3(0x0000000080000000ULL, 0xffffffff00000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 185: // add dmode=1 sfai=1 dbp=1 sfmo=3 rnd=4 movm=0
	d = ((int32_t)( (dmem1[(id + ba1) & 0x1f] << 8))) >> 1;
	r = (int64_t)(int32_t)d + (macc_to_output_3(0x0000000080000000ULL, 0xffffffff00000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 186: // add dmode=0 sfai=0 dbp=0 sfmo=0 rnd=0 movm=1
	d =  (dmem0[(i->param + ba0) & 0xff] << 8);
	r = (int64_t)(int32_t)d + (macc_to_output_0s(0x0000000000000000ULL, 0xffffffffffffffffULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 187: // add dmode=1 sfai=0 dbp=0 sfmo=0 rnd=0 movm=1
	d =  (dmem0[(id + ba0) & 0xff] << 8);
	r = (int64_t)(int32_t)d + (macc_to_output_0s(0x0000000000000000ULL, 0xffffffffffffffffULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 188: // add dmode=0 sfai=1 dbp=0 sfmo=0 rnd=0 movm=1
	d = ((int32_t)( (dmem0[(i->param + ba0) & 0xff] << 8))) >> 1;
	r = (int64_t)(int32_t)d + (macc_to_output_0s(0x0000000000000000ULL, 0xffffffffffffffffULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 189: // add dmode=1 sfai=1 dbp=0 sfmo=0 rnd=0 movm=1
	d = ((int32_t)( (dmem0[(id + ba0) & 0xff] << 8))) >> 1;
	r = (int64_t)(int32_t)d + (macc_to_output_0s(0x0000000000000000ULL, 0xffffffffffffffffULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 190: // add dmode=0 sfai=0 dbp=1 sfmo=0 rnd=0 movm=1
	d =  (dmem1[(i->param + ba1) & 0x1f] << 8);
	r = (int64_t)(int32_t)d + (macc_to_output_0s(0x0000000000000000ULL, 0xffffffffffffffffULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 191: // add dmode=1 sfai=0 dbp=1 sfmo=0 rnd=0 movm=1
	d =  (dmem1[(id + ba1) & 0x1f] << 8);
	r = (int64_t)(int32_t)d + (macc_to_output_0s(0x0000000000000000ULL, 0xffffffffffffffffULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 192: // add dmode=0 sfai=1 dbp=1 sfmo=0 rnd=0 movm=1
	d = ((int32_t)( (dmem1[(i->param + ba1) & 0x1f] << 8))) >> 1;
	r = (int64_t)(int32_t)d + (macc_to_output_0s(0x0000000000000000ULL, 0xffffffffffffffffULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 193: // add dmode=1 sfai=1 dbp=1 sfmo=0 rnd=0 movm=1
	d = ((int32_t)( (dmem1[(id + ba1) & 0x1f] << 8))) >> 1;
	r = (int64_t)(int32_t)d + (macc_to_output_0s(0x0000000000000000ULL, 0xffffffffffffffffULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 194: // add dmode=0 sfai=0 dbp=0 sfmo=1 rnd=0 movm=1
	d =  (dmem0[(i->param + ba0) & 0xff] << 8);
	r = (int64_t)(int32_t)d + (macc_to_output_1s(0x0000000000000000ULL, 0xffffffffffffffffULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 195: // add dmode=1 sfai=0 dbp=0 sfmo=1 rnd=0 movm=1
	d =  (dmem0[(id + ba0) & 0xff] << 8);
	r = (int64_t)(int32_t)d + (macc_to_output_1s(0x0000000000000000ULL, 0xffffffffffffffffULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 196: // add dmode=0 sfai=1 dbp=0 sfmo=1 rnd=0 movm=1
	d = ((int32_t)( (dmem0[(i->param + ba0) & 0xff] << 8))) >> 1;
	r = (int64_t)(int32_t)d + (macc_to_output_1s(0x0000000000000000ULL, 0xffffffffffffffffULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 197: // add dmode=1 sfai=1 dbp=0 sfmo=1 rnd=0 movm=1
	d = ((int32_t)( (dmem0[(id + ba0) & 0xff] << 8))) >> 1;
	r = (int64_t)(int32_t)d + (macc_to_output_1s(0x0000000000000000ULL, 0xffffffffffffffffULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 198: // add dmode=0 sfai=0 dbp=1 sfmo=1 rnd=0 movm=1
	d =  (dmem1[(i->param + ba1) & 0x1f] << 8);
	r = (int64_t)(int32_t)d + (macc_to_output_1s(0x0000000000000000ULL, 0xffffffffffffffffULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 199: // add dmode=1 sfai=0 dbp=1 sfmo=1 rnd=0 movm=1
	d =  (dmem1[(id + ba1) & 0x1f] << 8);
	r = (int64_t)(int32_t)d + (macc_to_output_1s(0x0000000000000000ULL, 0xffffffffffffffffULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 200: // add dmode=0 sfai=1 dbp=1 sfmo=1 rnd=0 movm=1
	d = ((int32_t)( (dmem1[(i->param + ba1) & 0x1f] << 8))) >> 1;
	r = (int64_t)(int32_t)d + (macc_to_output_1s(0x0000000000000000ULL, 0xffffffffffffffffULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 201: // add dmode=1 sfai=1 dbp=1 sfmo=1 rnd=0 movm=1
	d = ((int32_t)( (dmem1[(id + ba1) & 0x1f] << 8))) >> 1;
	r = (int64_t)(int32_t)d + (macc_to_output_1s(0x0000000000000000ULL, 0xffffffffffffffffULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 202: // add dmode=0 sfai=0 dbp=0 sfmo=2 rnd=0 movm=1
	d =  (dmem0[(i->param + ba0) & 0xff] << 8);
	r = (int64_t)(int32_t)d + (macc_to_output_2s(0x0000000000000000ULL, 0xffffffffffffffffULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 203: // add dmode=1 sfai=0 dbp=0 sfmo=2 rnd=0 movm=1
	d =  (dmem0[(id + ba0) & 0xff] << 8);
	r = (int64_t)(int32_t)d + (macc_to_output_2s(0x0000000000000000ULL, 0xffffffffffffffffULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 204: // add dmode=0 sfai=1 dbp=0 sfmo=2 rnd=0 movm=1
	d = ((int32_t)( (dmem0[(i->param + ba0) & 0xff] << 8))) >> 1;
	r = (int64_t)(int32_t)d + (macc_to_output_2s(0x0000000000000000ULL, 0xffffffffffffffffULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 205: // add dmode=1 sfai=1 dbp=0 sfmo=2 rnd=0 movm=1
	d = ((int32_t)( (dmem0[(id + ba0) & 0xff] << 8))) >> 1;
	r = (int64_t)(int32_t)d + (macc_to_output_2s(0x0000000000000000ULL, 0xffffffffffffffffULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 206: // add dmode=0 sfai=0 dbp=1 sfmo=2 rnd=0 movm=1
	d =  (dmem1[(i->param + ba1) & 0x1f] << 8);
	r = (int64_t)(int32_t)d + (macc_to_output_2s(0x0000000000000000ULL, 0xffffffffffffffffULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 207: // add dmode=1 sfai=0 dbp=1 sfmo=2 rnd=0 movm=1
	d =  (dmem1[(id + ba1) & 0x1f] << 8);
	r = (int64_t)(int32_t)d + (macc_to_output_2s(0x0000000000000000ULL, 0xffffffffffffffffULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 208: // add dmode=0 sfai=1 dbp=1 sfmo=2 rnd=0 movm=1
	d = ((int32_t)( (dmem1[(i->param + ba1) & 0x1f] << 8))) >> 1;
	r = (int64_t)(int32_t)d + (macc_to_output_2s(0x0000000000000000ULL, 0xffffffffffffffffULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 209: // add dmode=1 sfai=1 dbp=1 sfmo=2 rnd=0 movm=1
	d = ((int32_t)( (dmem1[(id + ba1) & 0x1f] << 8))) >> 1;
	r = (int64_t)(int32_t)d + (macc_to_output_2s(0x0000000000000000ULL, 0xffffffffffffffffULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 210: // add dmode=0 sfai=0 dbp=0 sfmo=3 rnd=0 movm=1
	d =  (dmem0[(i->param + ba0) & 0xff] << 8);
	r = (int64_t)(int32_t)d + (macc_to_output_3s(0x0000000000000000ULL, 0xffffffffffffffffULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 211: // add dmode=1 sfai=0 dbp=0 sfmo=3 rnd=0 movm=1
	d =  (dmem0[(id + ba0) & 0xff] << 8);
	r = (int64_t)(int32_t)d + (macc_to_output_3s(0x0000000000000000ULL, 0xffffffffffffffffULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 212: // add dmode=0 sfai=1 dbp=0 sfmo=3 rnd=0 movm=1
	d = ((int32_t)( (dmem0[(i->param + ba0) & 0xff] << 8))) >> 1;
	r = (int64_t)(int32_t)d + (macc_to_output_3s(0x0000000000000000ULL, 0xffffffffffffffffULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 213: // add dmode=1 sfai=1 dbp=0 sfmo=3 rnd=0 movm=1
	d = ((int32_t)( (dmem0[(id + ba0) & 0xff] << 8))) >> 1;
	r = (int64_t)(int32_t)d + (macc_to_output_3s(0x0000000000000000ULL, 0xffffffffffffffffULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 214: // add dmode=0 sfai=0 dbp=1 sfmo=3 rnd=0 movm=1
	d =  (dmem1[(i->param + ba1) & 0x1f] << 8);
	r = (int64_t)(int32_t)d + (macc_to_output_3s(0x0000000000000000ULL, 0xffffffffffffffffULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 215: // add dmode=1 sfai=0 dbp=1 sfmo=3 rnd=0 movm=1
	d =  (dmem1[(id + ba1) & 0x1f] << 8);
	r = (int64_t)(int32_t)d + (macc_to_output_3s(0x0000000000000000ULL, 0xffffffffffffffffULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 216: // add dmode=0 sfai=1 dbp=1 sfmo=3 rnd=0 movm=1
	d = ((int32_t)( (dmem1[(i->param + ba1) & 0x1f] << 8))) >> 1;
	r = (int64_t)(int32_t)d + (macc_to_output_3s(0x0000000000000000ULL, 0xffffffffffffffffULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 217: // add dmode=1 sfai=1 dbp=1 sfmo=3 rnd=0 movm=1
	d = ((int32_t)( (dmem1[(id + ba1) & 0x1f] << 8))) >> 1;
	r = (int64_t)(int32_t)d + (macc_to_output_3s(0x0000000000000000ULL, 0xffffffffffffffffULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 218: // add dmode=0 sfai=0 dbp=0 sfmo=0 rnd=1 movm=1
	d =  (dmem0[(i->param + ba0) & 0xff] << 8);
	r = (int64_t)(int32_t)d + (macc_to_output_0s(0x0000000000008000ULL, 0xffffffffffff0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 219: // add dmode=1 sfai=0 dbp=0 sfmo=0 rnd=1 movm=1
	d =  (dmem0[(id + ba0) & 0xff] << 8);
	r = (int64_t)(int32_t)d + (macc_to_output_0s(0x0000000000008000ULL, 0xffffffffffff0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 220: // add dmode=0 sfai=1 dbp=0 sfmo=0 rnd=1 movm=1
	d = ((int32_t)( (dmem0[(i->param + ba0) & 0xff] << 8))) >> 1;
	r = (int64_t)(int32_t)d + (macc_to_output_0s(0x0000000000008000ULL, 0xffffffffffff0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 221: // add dmode=1 sfai=1 dbp=0 sfmo=0 rnd=1 movm=1
	d = ((int32_t)( (dmem0[(id + ba0) & 0xff] << 8))) >> 1;
	r = (int64_t)(int32_t)d + (macc_to_output_0s(0x0000000000008000ULL, 0xffffffffffff0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 222: // add dmode=0 sfai=0 dbp=1 sfmo=0 rnd=1 movm=1
	d =  (dmem1[(i->param + ba1) & 0x1f] << 8);
	r = (int64_t)(int32_t)d + (macc_to_output_0s(0x0000000000008000ULL, 0xffffffffffff0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 223: // add dmode=1 sfai=0 dbp=1 sfmo=0 rnd=1 movm=1
	d =  (dmem1[(id + ba1) & 0x1f] << 8);
	r = (int64_t)(int32_t)d + (macc_to_output_0s(0x0000000000008000ULL, 0xffffffffffff0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 224: // add dmode=0 sfai=1 dbp=1 sfmo=0 rnd=1 movm=1
	d = ((int32_t)( (dmem1[(i->param + ba1) & 0x1f] << 8))) >> 1;
	r = (int64_t)(int32_t)d + (macc_to_output_0s(0x0000000000008000ULL, 0xffffffffffff0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 225: // add dmode=1 sfai=1 dbp=1 sfmo=0 rnd=1 movm=1
	d = ((int32_t)( (dmem1[(id + ba1) & 0x1f] << 8))) >> 1;
	r = (int64_t)(int32_t)d + (macc_to_output_0s(0x0000000000008000ULL, 0xffffffffffff0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 226: // add dmode=0 sfai=0 dbp=0 sfmo=1 rnd=1 movm=1
	d =  (dmem0[(i->param + ba0) & 0xff] << 8);
	r = (int64_t)(int32_t)d + (macc_to_output_1s(0x0000000000008000ULL, 0xffffffffffff0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 227: // add dmode=1 sfai=0 dbp=0 sfmo=1 rnd=1 movm=1
	d =  (dmem0[(id + ba0) & 0xff] << 8);
	r = (int64_t)(int32_t)d + (macc_to_output_1s(0x0000000000008000ULL, 0xffffffffffff0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 228: // add dmode=0 sfai=1 dbp=0 sfmo=1 rnd=1 movm=1
	d = ((int32_t)( (dmem0[(i->param + ba0) & 0xff] << 8))) >> 1;
	r = (int64_t)(int32_t)d + (macc_to_output_1s(0x0000000000008000ULL, 0xffffffffffff0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 229: // add dmode=1 sfai=1 dbp=0 sfmo=1 rnd=1 movm=1
	d = ((int32_t)( (dmem0[(id + ba0) & 0xff] << 8))) >> 1;
	r = (int64_t)(int32_t)d + (macc_to_output_1s(0x0000000000008000ULL, 0xffffffffffff0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 230: // add dmode=0 sfai=0 dbp=1 sfmo=1 rnd=1 movm=1
	d =  (dmem1[(i->param + ba1) & 0x1f] << 8);
	r = (int64_t)(int32_t)d + (macc_to_output_1s(0x0000000000008000ULL, 0xffffffffffff0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 231: // add dmode=1 sfai=0 dbp=1 sfmo=1 rnd=1 movm=1
	d =  (dmem1[(id + ba1) & 0x1f] << 8);
	r = (int64_t)(int32_t)d + (macc_to_output_1s(0x0000000000008000ULL, 0xffffffffffff0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 232: // add dmode=0 sfai=1 dbp=1 sfmo=1 rnd=1 movm=1
	d = ((int32_t)( (dmem1[(i->param + ba1) & 0x1f] << 8))) >> 1;
	r = (int64_t)(int32_t)d + (macc_to_output_1s(0x0000000000008000ULL, 0xffffffffffff0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 233: // add dmode=1 sfai=1 dbp=1 sfmo=1 rnd=1 movm=1
	d = ((int32_t)( (dmem1[(id + ba1) & 0x1f] << 8))) >> 1;
	r = (int64_t)(int32_t)d + (macc_to_output_1s(0x0000000000008000ULL, 0xffffffffffff0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 234: // add dmode=0 sfai=0 dbp=0 sfmo=2 rnd=1 movm=1
	d =  (dmem0[(i->param + ba0) & 0xff] << 8);
	r = (int64_t)(int32_t)d + (macc_to_output_2s(0x0000000000008000ULL, 0xffffffffffff0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 235: // add dmode=1 sfai=0 dbp=0 sfmo=2 rnd=1 movm=1
	d =  (dmem0[(id + ba0) & 0xff] << 8);
	r = (int64_t)(int32_t)d + (macc_to_output_2s(0x0000000000008000ULL, 0xffffffffffff0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 236: // add dmode=0 sfai=1 dbp=0 sfmo=2 rnd=1 movm=1
	d = ((int32_t)( (dmem0[(i->param + ba0) & 0xff] << 8))) >> 1;
	r = (int64_t)(int32_t)d + (macc_to_output_2s(0x0000000000008000ULL, 0xffffffffffff0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 237: // add dmode=1 sfai=1 dbp=0 sfmo=2 rnd=1 movm=1
	d = ((int32_t)( (dmem0[(id + ba0) & 0xff] << 8))) >> 1;
	r = (int64_t)(int32_t)d + (macc_to_output_2s(0x0000000000008000ULL, 0xffffffffffff0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 238: // add dmode=0 sfai=0 dbp=1 sfmo=2 rnd=1 movm=1
	d =  (dmem1[(i->param + ba1) & 0x1f] << 8);
	r = (int64_t)(int32_t)d + (macc_to_output_2s(0x0000000000008000ULL, 0xffffffffffff0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 239: // add dmode=1 sfai=0 dbp=1 sfmo=2 rnd=1 movm=1
	d =  (dmem1[(id + ba1) & 0x1f] << 8);
	r = (int64_t)(int32_t)d + (macc_to_output_2s(0x0000000000008000ULL, 0xffffffffffff0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 240: // add dmode=0 sfai=1 dbp=1 sfmo=2 rnd=1 movm=1
	d = ((int32_t)( (dmem1[(i->param + ba1) & 0x1f] << 8))) >> 1;
	r = (int64_t)(int32_t)d + (macc_to_output_2s(0x0000000000008000ULL, 0xffffffffffff0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 241: // add dmode=1 sfai=1 dbp=1 sfmo=2 rnd=1 movm=1
	d = ((int32_t)( (dmem1[(id + ba1) & 0x1f] << 8))) >> 1;
	r = (int64_t)(int32_t)d + (macc_to_output_2s(0x0000000000008000ULL, 0xffffffffffff0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 242: // add dmode=0 sfai=0 dbp=0 sfmo=3 rnd=1 movm=1
	d =  (dmem0[(i->param + ba0) & 0xff] << 8);
	r = (int64_t)(int32_t)d + (macc_to_output_3s(0x0000000000008000ULL, 0xffffffffffff0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 243: // add dmode=1 sfai=0 dbp=0 sfmo=3 rnd=1 movm=1
	d =  (dmem0[(id + ba0) & 0xff] << 8);
	r = (int64_t)(int32_t)d + (macc_to_output_3s(0x0000000000008000ULL, 0xffffffffffff0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 244: // add dmode=0 sfai=1 dbp=0 sfmo=3 rnd=1 movm=1
	d = ((int32_t)( (dmem0[(i->param + ba0) & 0xff] << 8))) >> 1;
	r = (int64_t)(int32_t)d + (macc_to_output_3s(0x0000000000008000ULL, 0xffffffffffff0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 245: // add dmode=1 sfai=1 dbp=0 sfmo=3 rnd=1 movm=1
	d = ((int32_t)( (dmem0[(id + ba0) & 0xff] << 8))) >> 1;
	r = (int64_t)(int32_t)d + (macc_to_output_3s(0x0000000000008000ULL, 0xffffffffffff0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 246: // add dmode=0 sfai=0 dbp=1 sfmo=3 rnd=1 movm=1
	d =  (dmem1[(i->param + ba1) & 0x1f] << 8);
	r = (int64_t)(int32_t)d + (macc_to_output_3s(0x0000000000008000ULL, 0xffffffffffff0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 247: // add dmode=1 sfai=0 dbp=1 sfmo=3 rnd=1 movm=1
	d =  (dmem1[(id + ba1) & 0x1f] << 8);
	r = (int64_t)(int32_t)d + (macc_to_output_3s(0x0000000000008000ULL, 0xffffffffffff0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 248: // add dmode=0 sfai=1 dbp=1 sfmo=3 rnd=1 movm=1
	d = ((int32_t)( (dmem1[(i->param + ba1) & 0x1f] << 8))) >> 1;
	r = (int64_t)(int32_t)d + (macc_to_output_3s(0x0000000000008000ULL, 0xffffffffffff0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 249: // add dmode=1 sfai=1 dbp=1 sfmo=3 rnd=1 movm=1
	d = ((int32_t)( (dmem1[(id + ba1) & 0x1f] << 8))) >> 1;
	r = (int64_t)(int32_t)d + (macc_to_output_3s(0x0000000000008000ULL, 0xffffffffffff0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 250: // add dmode=0 sfai=0 dbp=0 sfmo=0 rnd=2 movm=1
	d =  (dmem0[(i->param + ba0) & 0xff] << 8);
	r = (int64_t)(int32_t)d + (macc_to_output_0s(0x0000000000800000ULL, 0xffffffffff000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 251: // add dmode=1 sfai=0 dbp=0 sfmo=0 rnd=2 movm=1
	d =  (dmem0[(id + ba0) & 0xff] << 8);
	r = (int64_t)(int32_t)d + (macc_to_output_0s(0x0000000000800000ULL, 0xffffffffff000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 252: // add dmode=0 sfai=1 dbp=0 sfmo=0 rnd=2 movm=1
	d = ((int32_t)( (dmem0[(i->param + ba0) & 0xff] << 8))) >> 1;
	r = (int64_t)(int32_t)d + (macc_to_output_0s(0x0000000000800000ULL, 0xffffffffff000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 253: // add dmode=1 sfai=1 dbp=0 sfmo=0 rnd=2 movm=1
	d = ((int32_t)( (dmem0[(id + ba0) & 0xff] << 8))) >> 1;
	r = (int64_t)(int32_t)d + (macc_to_output_0s(0x0000000000800000ULL, 0xffffffffff000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 254: // add dmode=0 sfai=0 dbp=1 sfmo=0 rnd=2 movm=1
	d =  (dmem1[(i->param + ba1) & 0x1f] << 8);
	r = (int64_t)(int32_t)d + (macc_to_output_0s(0x0000000000800000ULL, 0xffffffffff000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 255: // add dmode=1 sfai=0 dbp=1 sfmo=0 rnd=2 movm=1
	d =  (dmem1[(id + ba1) & 0x1f] << 8);
	r = (int64_t)(int32_t)d + (macc_to_output_0s(0x0000000000800000ULL, 0xffffffffff000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 256: // add dmode=0 sfai=1 dbp=1 sfmo=0 rnd=2 movm=1
	d = ((int32_t)( (dmem1[(i->param + ba1) & 0x1f] << 8))) >> 1;
	r = (int64_t)(int32_t)d + (macc_to_output_0s(0x0000000000800000ULL, 0xffffffffff000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 257: // add dmode=1 sfai=1 dbp=1 sfmo=0 rnd=2 movm=1
	d = ((int32_t)( (dmem1[(id + ba1) & 0x1f] << 8))) >> 1;
	r = (int64_t)(int32_t)d + (macc_to_output_0s(0x0000000000800000ULL, 0xffffffffff000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 258: // add dmode=0 sfai=0 dbp=0 sfmo=1 rnd=2 movm=1
	d =  (dmem0[(i->param + ba0) & 0xff] << 8);
	r = (int64_t)(int32_t)d + (macc_to_output_1s(0x0000000000800000ULL, 0xffffffffff000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 259: // add dmode=1 sfai=0 dbp=0 sfmo=1 rnd=2 movm=1
	d =  (dmem0[(id + ba0) & 0xff] << 8);
	r = (int64_t)(int32_t)d + (macc_to_output_1s(0x0000000000800000ULL, 0xffffffffff000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 260: // add dmode=0 sfai=1 dbp=0 sfmo=1 rnd=2 movm=1
	d = ((int32_t)( (dmem0[(i->param + ba0) & 0xff] << 8))) >> 1;
	r = (int64_t)(int32_t)d + (macc_to_output_1s(0x0000000000800000ULL, 0xffffffffff000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 261: // add dmode=1 sfai=1 dbp=0 sfmo=1 rnd=2 movm=1
	d = ((int32_t)( (dmem0[(id + ba0) & 0xff] << 8))) >> 1;
	r = (int64_t)(int32_t)d + (macc_to_output_1s(0x0000000000800000ULL, 0xffffffffff000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 262: // add dmode=0 sfai=0 dbp=1 sfmo=1 rnd=2 movm=1
	d =  (dmem1[(i->param + ba1) & 0x1f] << 8);
	r = (int64_t)(int32_t)d + (macc_to_output_1s(0x0000000000800000ULL, 0xffffffffff000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 263: // add dmode=1 sfai=0 dbp=1 sfmo=1 rnd=2 movm=1
	d =  (dmem1[(id + ba1) & 0x1f] << 8);
	r = (int64_t)(int32_t)d + (macc_to_output_1s(0x0000000000800000ULL, 0xffffffffff000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 264: // add dmode=0 sfai=1 dbp=1 sfmo=1 rnd=2 movm=1
	d = ((int32_t)( (dmem1[(i->param + ba1) & 0x1f] << 8))) >> 1;
	r = (int64_t)(int32_t)d + (macc_to_output_1s(0x0000000000800000ULL, 0xffffffffff000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 265: // add dmode=1 sfai=1 dbp=1 sfmo=1 rnd=2 movm=1
	d = ((int32_t)( (dmem1[(id + ba1) & 0x1f] << 8))) >> 1;
	r = (int64_t)(int32_t)d + (macc_to_output_1s(0x0000000000800000ULL, 0xffffffffff000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 266: // add dmode=0 sfai=0 dbp=0 sfmo=2 rnd=2 movm=1
	d =  (dmem0[(i->param + ba0) & 0xff] << 8);
	r = (int64_t)(int32_t)d + (macc_to_output_2s(0x0000000000800000ULL, 0xffffffffff000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 267: // add dmode=1 sfai=0 dbp=0 sfmo=2 rnd=2 movm=1
	d =  (dmem0[(id + ba0) & 0xff] << 8);
	r = (int64_t)(int32_t)d + (macc_to_output_2s(0x0000000000800000ULL, 0xffffffffff000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 268: // add dmode=0 sfai=1 dbp=0 sfmo=2 rnd=2 movm=1
	d = ((int32_t)( (dmem0[(i->param + ba0) & 0xff] << 8))) >> 1;
	r = (int64_t)(int32_t)d + (macc_to_output_2s(0x0000000000800000ULL, 0xffffffffff000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 269: // add dmode=1 sfai=1 dbp=0 sfmo=2 rnd=2 movm=1
	d = ((int32_t)( (dmem0[(id + ba0) & 0xff] << 8))) >> 1;
	r = (int64_t)(int32_t)d + (macc_to_output_2s(0x0000000000800000ULL, 0xffffffffff000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 270: // add dmode=0 sfai=0 dbp=1 sfmo=2 rnd=2 movm=1
	d =  (dmem1[(i->param + ba1) & 0x1f] << 8);
	r = (int64_t)(int32_t)d + (macc_to_output_2s(0x0000000000800000ULL, 0xffffffffff000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 271: // add dmode=1 sfai=0 dbp=1 sfmo=2 rnd=2 movm=1
	d =  (dmem1[(id + ba1) & 0x1f] << 8);
	r = (int64_t)(int32_t)d + (macc_to_output_2s(0x0000000000800000ULL, 0xffffffffff000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 272: // add dmode=0 sfai=1 dbp=1 sfmo=2 rnd=2 movm=1
	d = ((int32_t)( (dmem1[(i->param + ba1) & 0x1f] << 8))) >> 1;
	r = (int64_t)(int32_t)d + (macc_to_output_2s(0x0000000000800000ULL, 0xffffffffff000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 273: // add dmode=1 sfai=1 dbp=1 sfmo=2 rnd=2 movm=1
	d = ((int32_t)( (dmem1[(id + ba1) & 0x1f] << 8))) >> 1;
	r = (int64_t)(int32_t)d + (macc_to_output_2s(0x0000000000800000ULL, 0xffffffffff000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 274: // add dmode=0 sfai=0 dbp=0 sfmo=3 rnd=2 movm=1
	d =  (dmem0[(i->param + ba0) & 0xff] << 8);
	r = (int64_t)(int32_t)d + (macc_to_output_3s(0x0000000000800000ULL, 0xffffffffff000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 275: // add dmode=1 sfai=0 dbp=0 sfmo=3 rnd=2 movm=1
	d =  (dmem0[(id + ba0) & 0xff] << 8);
	r = (int64_t)(int32_t)d + (macc_to_output_3s(0x0000000000800000ULL, 0xffffffffff000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 276: // add dmode=0 sfai=1 dbp=0 sfmo=3 rnd=2 movm=1
	d = ((int32_t)( (dmem0[(i->param + ba0) & 0xff] << 8))) >> 1;
	r = (int64_t)(int32_t)d + (macc_to_output_3s(0x0000000000800000ULL, 0xffffffffff000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 277: // add dmode=1 sfai=1 dbp=0 sfmo=3 rnd=2 movm=1
	d = ((int32_t)( (dmem0[(id + ba0) & 0xff] << 8))) >> 1;
	r = (int64_t)(int32_t)d + (macc_to_output_3s(0x0000000000800000ULL, 0xffffffffff000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 278: // add dmode=0 sfai=0 dbp=1 sfmo=3 rnd=2 movm=1
	d =  (dmem1[(i->param + ba1) & 0x1f] << 8);
	r = (int64_t)(int32_t)d + (macc_to_output_3s(0x0000000000800000ULL, 0xffffffffff000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 279: // add dmode=1 sfai=0 dbp=1 sfmo=3 rnd=2 movm=1
	d =  (dmem1[(id + ba1) & 0x1f] << 8);
	r = (int64_t)(int32_t)d + (macc_to_output_3s(0x0000000000800000ULL, 0xffffffffff000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 280: // add dmode=0 sfai=1 dbp=1 sfmo=3 rnd=2 movm=1
	d = ((int32_t)( (dmem1[(i->param + ba1) & 0x1f] << 8))) >> 1;
	r = (int64_t)(int32_t)d + (macc_to_output_3s(0x0000000000800000ULL, 0xffffffffff000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 281: // add dmode=1 sfai=1 dbp=1 sfmo=3 rnd=2 movm=1
	d = ((int32_t)( (dmem1[(id + ba1) & 0x1f] << 8))) >> 1;
	r = (int64_t)(int32_t)d + (macc_to_output_3s(0x0000000000800000ULL, 0xffffffffff000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 282: // add dmode=0 sfai=0 dbp=0 sfmo=0 rnd=3 movm=1
	d =  (dmem0[(i->param + ba0) & 0xff] << 8);
	r = (int64_t)(int32_t)d + (macc_to_output_0s(0x0000000000020000ULL, 0xfffffffffffc0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 283: // add dmode=1 sfai=0 dbp=0 sfmo=0 rnd=3 movm=1
	d =  (dmem0[(id + ba0) & 0xff] << 8);
	r = (int64_t)(int32_t)d + (macc_to_output_0s(0x0000000000020000ULL, 0xfffffffffffc0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 284: // add dmode=0 sfai=1 dbp=0 sfmo=0 rnd=3 movm=1
	d = ((int32_t)( (dmem0[(i->param + ba0) & 0xff] << 8))) >> 1;
	r = (int64_t)(int32_t)d + (macc_to_output_0s(0x0000000000020000ULL, 0xfffffffffffc0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 285: // add dmode=1 sfai=1 dbp=0 sfmo=0 rnd=3 movm=1
	d = ((int32_t)( (dmem0[(id + ba0) & 0xff] << 8))) >> 1;
	r = (int64_t)(int32_t)d + (macc_to_output_0s(0x0000000000020000ULL, 0xfffffffffffc0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 286: // add dmode=0 sfai=0 dbp=1 sfmo=0 rnd=3 movm=1
	d =  (dmem1[(i->param + ba1) & 0x1f] << 8);
	r = (int64_t)(int32_t)d + (macc_to_output_0s(0x0000000000020000ULL, 0xfffffffffffc0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 287: // add dmode=1 sfai=0 dbp=1 sfmo=0 rnd=3 movm=1
	d =  (dmem1[(id + ba1) & 0x1f] << 8);
	r = (int64_t)(int32_t)d + (macc_to_output_0s(0x0000000000020000ULL, 0xfffffffffffc0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 288: // add dmode=0 sfai=1 dbp=1 sfmo=0 rnd=3 movm=1
	d = ((int32_t)( (dmem1[(i->param + ba1) & 0x1f] << 8))) >> 1;
	r = (int64_t)(int32_t)d + (macc_to_output_0s(0x0000000000020000ULL, 0xfffffffffffc0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 289: // add dmode=1 sfai=1 dbp=1 sfmo=0 rnd=3 movm=1
	d = ((int32_t)( (dmem1[(id + ba1) & 0x1f] << 8))) >> 1;
	r = (int64_t)(int32_t)d + (macc_to_output_0s(0x0000000000020000ULL, 0xfffffffffffc0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 290: // add dmode=0 sfai=0 dbp=0 sfmo=1 rnd=3 movm=1
	d =  (dmem0[(i->param + ba0) & 0xff] << 8);
	r = (int64_t)(int32_t)d + (macc_to_output_1s(0x0000000000020000ULL, 0xfffffffffffc0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 291: // add dmode=1 sfai=0 dbp=0 sfmo=1 rnd=3 movm=1
	d =  (dmem0[(id + ba0) & 0xff] << 8);
	r = (int64_t)(int32_t)d + (macc_to_output_1s(0x0000000000020000ULL, 0xfffffffffffc0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 292: // add dmode=0 sfai=1 dbp=0 sfmo=1 rnd=3 movm=1
	d = ((int32_t)( (dmem0[(i->param + ba0) & 0xff] << 8))) >> 1;
	r = (int64_t)(int32_t)d + (macc_to_output_1s(0x0000000000020000ULL, 0xfffffffffffc0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 293: // add dmode=1 sfai=1 dbp=0 sfmo=1 rnd=3 movm=1
	d = ((int32_t)( (dmem0[(id + ba0) & 0xff] << 8))) >> 1;
	r = (int64_t)(int32_t)d + (macc_to_output_1s(0x0000000000020000ULL, 0xfffffffffffc0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 294: // add dmode=0 sfai=0 dbp=1 sfmo=1 rnd=3 movm=1
	d =  (dmem1[(i->param + ba1) & 0x1f] << 8);
	r = (int64_t)(int32_t)d + (macc_to_output_1s(0x0000000000020000ULL, 0xfffffffffffc0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 295: // add dmode=1 sfai=0 dbp=1 sfmo=1 rnd=3 movm=1
	d =  (dmem1[(id + ba1) & 0x1f] << 8);
	r = (int64_t)(int32_t)d + (macc_to_output_1s(0x0000000000020000ULL, 0xfffffffffffc0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 296: // add dmode=0 sfai=1 dbp=1 sfmo=1 rnd=3 movm=1
	d = ((int32_t)( (dmem1[(i->param + ba1) & 0x1f] << 8))) >> 1;
	r = (int64_t)(int32_t)d + (macc_to_output_1s(0x0000000000020000ULL, 0xfffffffffffc0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 297: // add dmode=1 sfai=1 dbp=1 sfmo=1 rnd=3 movm=1
	d = ((int32_t)( (dmem1[(id + ba1) & 0x1f] << 8))) >> 1;
	r = (int64_t)(int32_t)d + (macc_to_output_1s(0x0000000000020000ULL, 0xfffffffffffc0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 298: // add dmode=0 sfai=0 dbp=0 sfmo=2 rnd=3 movm=1
	d =  (dmem0[(i->param + ba0) & 0xff] << 8);
	r = (int64_t)(int32_t)d + (macc_to_output_2s(0x0000000000020000ULL, 0xfffffffffffc0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 299: // add dmode=1 sfai=0 dbp=0 sfmo=2 rnd=3 movm=1
	d =  (dmem0[(id + ba0) & 0xff] << 8);
	r = (int64_t)(int32_t)d + (macc_to_output_2s(0x0000000000020000ULL, 0xfffffffffffc0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 300: // add dmode=0 sfai=1 dbp=0 sfmo=2 rnd=3 movm=1
	d = ((int32_t)( (dmem0[(i->param + ba0) & 0xff] << 8))) >> 1;
	r = (int64_t)(int32_t)d + (macc_to_output_2s(0x0000000000020000ULL, 0xfffffffffffc0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 301: // add dmode=1 sfai=1 dbp=0 sfmo=2 rnd=3 movm=1
	d = ((int32_t)( (dmem0[(id + ba0) & 0xff] << 8))) >> 1;
	r = (int64_t)(int32_t)d + (macc_to_output_2s(0x0000000000020000ULL, 0xfffffffffffc0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 302: // add dmode=0 sfai=0 dbp=1 sfmo=2 rnd=3 movm=1
	d =  (dmem1[(i->param + ba1) & 0x1f] << 8);
	r = (int64_t)(int32_t)d + (macc_to_output_2s(0x0000000000020000ULL, 0xfffffffffffc0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 303: // add dmode=1 sfai=0 dbp=1 sfmo=2 rnd=3 movm=1
	d =  (dmem1[(id + ba1) & 0x1f] << 8);
	r = (int64_t)(int32_t)d + (macc_to_output_2s(0x0000000000020000ULL, 0xfffffffffffc0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 304: // add dmode=0 sfai=1 dbp=1 sfmo=2 rnd=3 movm=1
	d = ((int32_t)( (dmem1[(i->param + ba1) & 0x1f] << 8))) >> 1;
	r = (int64_t)(int32_t)d + (macc_to_output_2s(0x0000000000020000ULL, 0xfffffffffffc0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 305: // add dmode=1 sfai=1 dbp=1 sfmo=2 rnd=3 movm=1
	d = ((int32_t)( (dmem1[(id + ba1) & 0x1f] << 8))) >> 1;
	r = (int64_t)(int32_t)d + (macc_to_output_2s(0x0000000000020000ULL, 0xfffffffffffc0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 306: // add dmode=0 sfai=0 dbp=0 sfmo=3 rnd=3 movm=1
	d =  (dmem0[(i->param + ba0) & 0xff] << 8);
	r = (int64_t)(int32_t)d + (macc_to_output_3s(0x0000000000020000ULL, 0xfffffffffffc0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 307: // add dmode=1 sfai=0 dbp=0 sfmo=3 rnd=3 movm=1
	d =  (dmem0[(id + ba0) & 0xff] << 8);
	r = (int64_t)(int32_t)d + (macc_to_output_3s(0x0000000000020000ULL, 0xfffffffffffc0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 308: // add dmode=0 sfai=1 dbp=0 sfmo=3 rnd=3 movm=1
	d = ((int32_t)( (dmem0[(i->param + ba0) & 0xff] << 8))) >> 1;
	r = (int64_t)(int32_t)d + (macc_to_output_3s(0x0000000000020000ULL, 0xfffffffffffc0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 309: // add dmode=1 sfai=1 dbp=0 sfmo=3 rnd=3 movm=1
	d = ((int32_t)( (dmem0[(id + ba0) & 0xff] << 8))) >> 1;
	r = (int64_t)(int32_t)d + (macc_to_output_3s(0x0000000000020000ULL, 0xfffffffffffc0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 310: // add dmode=0 sfai=0 dbp=1 sfmo=3 rnd=3 movm=1
	d =  (dmem1[(i->param + ba1) & 0x1f] << 8);
	r = (int64_t)(int32_t)d + (macc_to_output_3s(0x0000000000020000ULL, 0xfffffffffffc0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 311: // add dmode=1 sfai=0 dbp=1 sfmo=3 rnd=3 movm=1
	d =  (dmem1[(id + ba1) & 0x1f] << 8);
	r = (int64_t)(int32_t)d + (macc_to_output_3s(0x0000000000020000ULL, 0xfffffffffffc0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 312: // add dmode=0 sfai=1 dbp=1 sfmo=3 rnd=3 movm=1
	d = ((int32_t)( (dmem1[(i->param + ba1) & 0x1f] << 8))) >> 1;
	r = (int64_t)(int32_t)d + (macc_to_output_3s(0x0000000000020000ULL, 0xfffffffffffc0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 313: // add dmode=1 sfai=1 dbp=1 sfmo=3 rnd=3 movm=1
	d = ((int32_t)( (dmem1[(id + ba1) & 0x1f] << 8))) >> 1;
	r = (int64_t)(int32_t)d + (macc_to_output_3s(0x0000000000020000ULL, 0xfffffffffffc0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 314: // add dmode=0 sfai=0 dbp=0 sfmo=0 rnd=4 movm=1
	d =  (dmem0[(i->param + ba0) & 0xff] << 8);
	r = (int64_t)(int32_t)d + (macc_to_output_0s(0x0000000080000000ULL, 0xffffffff00000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 315: // add dmode=1 sfai=0 dbp=0 sfmo=0 rnd=4 movm=1
	d =  (dmem0[(id + ba0) & 0xff] << 8);
	r = (int64_t)(int32_t)d + (macc_to_output_0s(0x0000000080000000ULL, 0xffffffff00000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 316: // add dmode=0 sfai=1 dbp=0 sfmo=0 rnd=4 movm=1
	d = ((int32_t)( (dmem0[(i->param + ba0) & 0xff] << 8))) >> 1;
	r = (int64_t)(int32_t)d + (macc_to_output_0s(0x0000000080000000ULL, 0xffffffff00000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 317: // add dmode=1 sfai=1 dbp=0 sfmo=0 rnd=4 movm=1
	d = ((int32_t)( (dmem0[(id + ba0) & 0xff] << 8))) >> 1;
	r = (int64_t)(int32_t)d + (macc_to_output_0s(0x0000000080000000ULL, 0xffffffff00000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 318: // add dmode=0 sfai=0 dbp=1 sfmo=0 rnd=4 movm=1
	d =  (dmem1[(i->param + ba1) & 0x1f] << 8);
	r = (int64_t)(int32_t)d + (macc_to_output_0s(0x0000000080000000ULL, 0xffffffff00000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 319: // add dmode=1 sfai=0 dbp=1 sfmo=0 rnd=4 movm=1
	d =  (dmem1[(id + ba1) & 0x1f] << 8);
	r = (int64_t)(int32_t)d + (macc_to_output_0s(0x0000000080000000ULL, 0xffffffff00000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 320: // add dmode=0 sfai=1 dbp=1 sfmo=0 rnd=4 movm=1
	d = ((int32_t)( (dmem1[(i->param + ba1) & 0x1f] << 8))) >> 1;
	r = (int64_t)(int32_t)d + (macc_to_output_0s(0x0000000080000000ULL, 0xffffffff00000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 321: // add dmode=1 sfai=1 dbp=1 sfmo=0 rnd=4 movm=1
	d = ((int32_t)( (dmem1[(id + ba1) & 0x1f] << 8))) >> 1;
	r = (int64_t)(int32_t)d + (macc_to_output_0s(0x0000000080000000ULL, 0xffffffff00000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 322: // add dmode=0 sfai=0 dbp=0 sfmo=1 rnd=4 movm=1
	d =  (dmem0[(i->param + ba0) & 0xff] << 8);
	r = (int64_t)(int32_t)d + (macc_to_output_1s(0x0000000080000000ULL, 0xffffffff00000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 323: // add dmode=1 sfai=0 dbp=0 sfmo=1 rnd=4 movm=1
	d =  (dmem0[(id + ba0) & 0xff] << 8);
	r = (int64_t)(int32_t)d + (macc_to_output_1s(0x0000000080000000ULL, 0xffffffff00000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 324: // add dmode=0 sfai=1 dbp=0 sfmo=1 rnd=4 movm=1
	d = ((int32_t)( (dmem0[(i->param + ba0) & 0xff] << 8))) >> 1;
	r = (int64_t)(int32_t)d + (macc_to_output_1s(0x0000000080000000ULL, 0xffffffff00000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 325: // add dmode=1 sfai=1 dbp=0 sfmo=1 rnd=4 movm=1
	d = ((int32_t)( (dmem0[(id + ba0) & 0xff] << 8))) >> 1;
	r = (int64_t)(int32_t)d + (macc_to_output_1s(0x0000000080000000ULL, 0xffffffff00000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 326: // add dmode=0 sfai=0 dbp=1 sfmo=1 rnd=4 movm=1
	d =  (dmem1[(i->param + ba1) & 0x1f] << 8);
	r = (int64_t)(int32_t)d + (macc_to_output_1s(0x0000000080000000ULL, 0xffffffff00000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 327: // add dmode=1 sfai=0 dbp=1 sfmo=1 rnd=4 movm=1
	d =  (dmem1[(id + ba1) & 0x1f] << 8);
	r = (int64_t)(int32_t)d + (macc_to_output_1s(0x0000000080000000ULL, 0xffffffff00000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 328: // add dmode=0 sfai=1 dbp=1 sfmo=1 rnd=4 movm=1
	d = ((int32_t)( (dmem1[(i->param + ba1) & 0x1f] << 8))) >> 1;
	r = (int64_t)(int32_t)d + (macc_to_output_1s(0x0000000080000000ULL, 0xffffffff00000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 329: // add dmode=1 sfai=1 dbp=1 sfmo=1 rnd=4 movm=1
	d = ((int32_t)( (dmem1[(id + ba1) & 0x1f] << 8))) >> 1;
	r = (int64_t)(int32_t)d + (macc_to_output_1s(0x0000000080000000ULL, 0xffffffff00000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 330: // add dmode=0 sfai=0 dbp=0 sfmo=2 rnd=4 movm=1
	d =  (dmem0[(i->param + ba0) & 0xff] << 8);
	r = (int64_t)(int32_t)d + (macc_to_output_2s(0x0000000080000000ULL, 0xffffffff00000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 331: // add dmode=1 sfai=0 dbp=0 sfmo=2 rnd=4 movm=1
	d =  (dmem0[(id + ba0) & 0xff] << 8);
	r = (int64_t)(int32_t)d + (macc_to_output_2s(0x0000000080000000ULL, 0xffffffff00000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 332: // add dmode=0 sfai=1 dbp=0 sfmo=2 rnd=4 movm=1
	d = ((int32_t)( (dmem0[(i->param + ba0) & 0xff] << 8))) >> 1;
	r = (int64_t)(int32_t)d + (macc_to_output_2s(0x0000000080000000ULL, 0xffffffff00000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 333: // add dmode=1 sfai=1 dbp=0 sfmo=2 rnd=4 movm=1
	d = ((int32_t)( (dmem0[(id + ba0) & 0xff] << 8))) >> 1;
	r = (int64_t)(int32_t)d + (macc_to_output_2s(0x0000000080000000ULL, 0xffffffff00000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 334: // add dmode=0 sfai=0 dbp=1 sfmo=2 rnd=4 movm=1
	d =  (dmem1[(i->param + ba1) & 0x1f] << 8);
	r = (int64_t)(int32_t)d + (macc_to_output_2s(0x0000000080000000ULL, 0xffffffff00000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 335: // add dmode=1 sfai=0 dbp=1 sfmo=2 rnd=4 movm=1
	d =  (dmem1[(id + ba1) & 0x1f] << 8);
	r = (int64_t)(int32_t)d + (macc_to_output_2s(0x0000000080000000ULL, 0xffffffff00000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 336: // add dmode=0 sfai=1 dbp=1 sfmo=2 rnd=4 movm=1
	d = ((int32_t)( (dmem1[(i->param + ba1) & 0x1f] << 8))) >> 1;
	r = (int64_t)(int32_t)d + (macc_to_output_2s(0x0000000080000000ULL, 0xffffffff00000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 337: // add dmode=1 sfai=1 dbp=1 sfmo=2 rnd=4 movm=1
	d = ((int32_t)( (dmem1[(id + ba1) & 0x1f] << 8))) >> 1;
	r = (int64_t)(int32_t)d + (macc_to_output_2s(0x0000000080000000ULL, 0xffffffff00000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 338: // add dmode=0 sfai=0 dbp=0 sfmo=3 rnd=4 movm=1
	d =  (dmem0[(i->param + ba0) & 0xff] << 8);
	r = (int64_t)(int32_t)d + (macc_to_output_3s(0x0000000080000000ULL, 0xffffffff00000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 339: // add dmode=1 sfai=0 dbp=0 sfmo=3 rnd=4 movm=1
	d =  (dmem0[(id + ba0) & 0xff] << 8);
	r = (int64_t)(int32_t)d + (macc_to_output_3s(0x0000000080000000ULL, 0xffffffff00000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 340: // add dmode=0 sfai=1 dbp=0 sfmo=3 rnd=4 movm=1
	d = ((int32_t)( (dmem0[(i->param + ba0) & 0xff] << 8))) >> 1;
	r = (int64_t)(int32_t)d + (macc_to_output_3s(0x0000000080000000ULL, 0xffffffff00000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 341: // add dmode=1 sfai=1 dbp=0 sfmo=3 rnd=4 movm=1
	d = ((int32_t)( (dmem0[(id + ba0) & 0xff] << 8))) >> 1;
	r = (int64_t)(int32_t)d + (macc_to_output_3s(0x0000000080000000ULL, 0xffffffff00000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 342: // add dmode=0 sfai=0 dbp=1 sfmo=3 rnd=4 movm=1
	d =  (dmem1[(i->param + ba1) & 0x1f] << 8);
	r = (int64_t)(int32_t)d + (macc_to_output_3s(0x0000000080000000ULL, 0xffffffff00000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 343: // add dmode=1 sfai=0 dbp=1 sfmo=3 rnd=4 movm=1
	d =  (dmem1[(id + ba1) & 0x1f] << 8);
	r = (int64_t)(int32_t)d + (macc_to_output_3s(0x0000000080000000ULL, 0xffffffff00000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 344: // add dmode=0 sfai=1 dbp=1 sfmo=3 rnd=4 movm=1
	d = ((int32_t)( (dmem1[(i->param + ba1) & 0x1f] << 8))) >> 1;
	r = (int64_t)(int32_t)d + (macc_to_output_3s(0x0000000080000000ULL, 0xffffffff00000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 345: // add dmode=1 sfai=1 dbp=1 sfmo=3 rnd=4 movm=1
	d = ((int32_t)( (dmem1[(id + ba1) & 0x1f] << 8))) >> 1;
	r = (int64_t)(int32_t)d + (macc_to_output_3s(0x0000000080000000ULL, 0xffffffff00000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 346: // add cmode=0 crm=0 sfmo=0 rnd=0 movm=0
	r = (int64_t)(int32_t)cmem[i->param] + (macc_to_output_0(0x0000000000000000ULL, 0xffffffffffffffffULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 347: // add cmode=1 crm=0 sfmo=0 rnd=0 movm=0
	r = (int64_t)(int32_t)cmem[ca] + (macc_to_output_0(0x0000000000000000ULL, 0xffffffffffffffffULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 348: // add cmode=0 crm=1 sfmo=0 rnd=0 movm=0
	r = (int64_t)(int32_t)(cmem[i->param] & 0xffff0000) + (macc_to_output_0(0x0000000000000000ULL, 0xffffffffffffffffULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 349: // add cmode=1 crm=1 sfmo=0 rnd=0 movm=0
	r = (int64_t)(int32_t)(cmem[ca] & 0xffff0000) + (macc_to_output_0(0x0000000000000000ULL, 0xffffffffffffffffULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 350: // add cmode=0 crm=2 sfmo=0 rnd=0 movm=0
	r = (int64_t)(int32_t)(cmem[i->param] << 16) + (macc_to_output_0(0x0000000000000000ULL, 0xffffffffffffffffULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 351: // add cmode=1 crm=2 sfmo=0 rnd=0 movm=0
	r = (int64_t)(int32_t)(cmem[ca] << 16) + (macc_to_output_0(0x0000000000000000ULL, 0xffffffffffffffffULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 352: // add cmode=0 crm=0 sfmo=1 rnd=0 movm=0
	r = (int64_t)(int32_t)cmem[i->param] + (macc_to_output_1(0x0000000000000000ULL, 0xffffffffffffffffULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 353: // add cmode=1 crm=0 sfmo=1 rnd=0 movm=0
	r = (int64_t)(int32_t)cmem[ca] + (macc_to_output_1(0x0000000000000000ULL, 0xffffffffffffffffULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 354: // add cmode=0 crm=1 sfmo=1 rnd=0 movm=0
	r = (int64_t)(int32_t)(cmem[i->param] & 0xffff0000) + (macc_to_output_1(0x0000000000000000ULL, 0xffffffffffffffffULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 355: // add cmode=1 crm=1 sfmo=1 rnd=0 movm=0
	r = (int64_t)(int32_t)(cmem[ca] & 0xffff0000) + (macc_to_output_1(0x0000000000000000ULL, 0xffffffffffffffffULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 356: // add cmode=0 crm=2 sfmo=1 rnd=0 movm=0
	r = (int64_t)(int32_t)(cmem[i->param] << 16) + (macc_to_output_1(0x0000000000000000ULL, 0xffffffffffffffffULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 357: // add cmode=1 crm=2 sfmo=1 rnd=0 movm=0
	r = (int64_t)(int32_t)(cmem[ca] << 16) + (macc_to_output_1(0x0000000000000000ULL, 0xffffffffffffffffULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 358: // add cmode=0 crm=0 sfmo=2 rnd=0 movm=0
	r = (int64_t)(int32_t)cmem[i->param] + (macc_to_output_2(0x0000000000000000ULL, 0xffffffffffffffffULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 359: // add cmode=1 crm=0 sfmo=2 rnd=0 movm=0
	r = (int64_t)(int32_t)cmem[ca] + (macc_to_output_2(0x0000000000000000ULL, 0xffffffffffffffffULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 360: // add cmode=0 crm=1 sfmo=2 rnd=0 movm=0
	r = (int64_t)(int32_t)(cmem[i->param] & 0xffff0000) + (macc_to_output_2(0x0000000000000000ULL, 0xffffffffffffffffULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 361: // add cmode=1 crm=1 sfmo=2 rnd=0 movm=0
	r = (int64_t)(int32_t)(cmem[ca] & 0xffff0000) + (macc_to_output_2(0x0000000000000000ULL, 0xffffffffffffffffULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 362: // add cmode=0 crm=2 sfmo=2 rnd=0 movm=0
	r = (int64_t)(int32_t)(cmem[i->param] << 16) + (macc_to_output_2(0x0000000000000000ULL, 0xffffffffffffffffULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 363: // add cmode=1 crm=2 sfmo=2 rnd=0 movm=0
	r = (int64_t)(int32_t)(cmem[ca] << 16) + (macc_to_output_2(0x0000000000000000ULL, 0xffffffffffffffffULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 364: // add cmode=0 crm=0 sfmo=3 rnd=0 movm=0
	r = (int64_t)(int32_t)cmem[i->param] + (macc_to_output_3(0x0000000000000000ULL, 0xffffffffffffffffULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 365: // add cmode=1 crm=0 sfmo=3 rnd=0 movm=0
	r = (int64_t)(int32_t)cmem[ca] + (macc_to_output_3(0x0000000000000000ULL, 0xffffffffffffffffULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 366: // add cmode=0 crm=1 sfmo=3 rnd=0 movm=0
	r = (int64_t)(int32_t)(cmem[i->param] & 0xffff0000) + (macc_to_output_3(0x0000000000000000ULL, 0xffffffffffffffffULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 367: // add cmode=1 crm=1 sfmo=3 rnd=0 movm=0
	r = (int64_t)(int32_t)(cmem[ca] & 0xffff0000) + (macc_to_output_3(0x0000000000000000ULL, 0xffffffffffffffffULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 368: // add cmode=0 crm=2 sfmo=3 rnd=0 movm=0
	r = (int64_t)(int32_t)(cmem[i->param] << 16) + (macc_to_output_3(0x0000000000000000ULL, 0xffffffffffffffffULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 369: // add cmode=1 crm=2 sfmo=3 rnd=0 movm=0
	r = (int64_t)(int32_t)(cmem[ca] << 16) + (macc_to_output_3(0x0000000000000000ULL, 0xffffffffffffffffULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 370: // add cmode=0 crm=0 sfmo=0 rnd=1 movm=0
	r = (int64_t)(int32_t)cmem[i->param] + (macc_to_output_0(0x0000000000008000ULL, 0xffffffffffff0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 371: // add cmode=1 crm=0 sfmo=0 rnd=1 movm=0
	r = (int64_t)(int32_t)cmem[ca] + (macc_to_output_0(0x0000000000008000ULL, 0xffffffffffff0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 372: // add cmode=0 crm=1 sfmo=0 rnd=1 movm=0
	r = (int64_t)(int32_t)(cmem[i->param] & 0xffff0000) + (macc_to_output_0(0x0000000000008000ULL, 0xffffffffffff0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 373: // add cmode=1 crm=1 sfmo=0 rnd=1 movm=0
	r = (int64_t)(int32_t)(cmem[ca] & 0xffff0000) + (macc_to_output_0(0x0000000000008000ULL, 0xffffffffffff0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 374: // add cmode=0 crm=2 sfmo=0 rnd=1 movm=0
	r = (int64_t)(int32_t)(cmem[i->param] << 16) + (macc_to_output_0(0x0000000000008000ULL, 0xffffffffffff0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 375: // add cmode=1 crm=2 sfmo=0 rnd=1 movm=0
	r = (int64_t)(int32_t)(cmem[ca] << 16) + (macc_to_output_0(0x0000000000008000ULL, 0xffffffffffff0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 376: // add cmode=0 crm=0 sfmo=1 rnd=1 movm=0
	r = (int64_t)(int32_t)cmem[i->param] + (macc_to_output_1(0x0000000000008000ULL, 0xffffffffffff0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 377: // add cmode=1 crm=0 sfmo=1 rnd=1 movm=0
	r = (int64_t)(int32_t)cmem[ca] + (macc_to_output_1(0x0000000000008000ULL, 0xffffffffffff0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 378: // add cmode=0 crm=1 sfmo=1 rnd=1 movm=0
	r = (int64_t)(int32_t)(cmem[i->param] & 0xffff0000) + (macc_to_output_1(0x0000000000008000ULL, 0xffffffffffff0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 379: // add cmode=1 crm=1 sfmo=1 rnd=1 movm=0
	r = (int64_t)(int32_t)(cmem[ca] & 0xffff0000) + (macc_to_output_1(0x0000000000008000ULL, 0xffffffffffff0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 380: // add cmode=0 crm=2 sfmo=1 rnd=1 movm=0
	r = (int64_t)(int32_t)(cmem[i->param] << 16) + (macc_to_output_1(0x0000000000008000ULL, 0xffffffffffff0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 381: // add cmode=1 crm=2 sfmo=1 rnd=1 movm=0
	r = (int64_t)(int32_t)(cmem[ca] << 16) + (macc_to_output_1(0x0000000000008000ULL, 0xffffffffffff0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 382: // add cmode=0 crm=0 sfmo=2 rnd=1 movm=0
	r = (int64_t)(int32_t)cmem[i->param] + (macc_to_output_2(0x0000000000008000ULL, 0xffffffffffff0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 383: // add cmode=1 crm=0 sfmo=2 rnd=1 movm=0
	r = (int64_t)(int32_t)cmem[ca] + (macc_to_output_2(0x0000000000008000ULL, 0xffffffffffff0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 384: // add cmode=0 crm=1 sfmo=2 rnd=1 movm=0
	r = (int64_t)(int32_t)(cmem[i->param] & 0xffff0000) + (macc_to_output_2(0x0000000000008000ULL, 0xffffffffffff0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 385: // add cmode=1 crm=1 sfmo=2 rnd=1 movm=0
	r = (int64_t)(int32_t)(cmem[ca] & 0xffff0000) + (macc_to_output_2(0x0000000000008000ULL, 0xffffffffffff0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 386: // add cmode=0 crm=2 sfmo=2 rnd=1 movm=0
	r = (int64_t)(int32_t)(cmem[i->param] << 16) + (macc_to_output_2(0x0000000000008000ULL, 0xffffffffffff0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 387: // add cmode=1 crm=2 sfmo=2 rnd=1 movm=0
	r = (int64_t)(int32_t)(cmem[ca] << 16) + (macc_to_output_2(0x0000000000008000ULL, 0xffffffffffff0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 388: // add cmode=0 crm=0 sfmo=3 rnd=1 movm=0
	r = (int64_t)(int32_t)cmem[i->param] + (macc_to_output_3(0x0000000000008000ULL, 0xffffffffffff0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 389: // add cmode=1 crm=0 sfmo=3 rnd=1 movm=0
	r = (int64_t)(int32_t)cmem[ca] + (macc_to_output_3(0x0000000000008000ULL, 0xffffffffffff0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 390: // add cmode=0 crm=1 sfmo=3 rnd=1 movm=0
	r = (int64_t)(int32_t)(cmem[i->param] & 0xffff0000) + (macc_to_output_3(0x0000000000008000ULL, 0xffffffffffff0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 391: // add cmode=1 crm=1 sfmo=3 rnd=1 movm=0
	r = (int64_t)(int32_t)(cmem[ca] & 0xffff0000) + (macc_to_output_3(0x0000000000008000ULL, 0xffffffffffff0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 392: // add cmode=0 crm=2 sfmo=3 rnd=1 movm=0
	r = (int64_t)(int32_t)(cmem[i->param] << 16) + (macc_to_output_3(0x0000000000008000ULL, 0xffffffffffff0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 393: // add cmode=1 crm=2 sfmo=3 rnd=1 movm=0
	r = (int64_t)(int32_t)(cmem[ca] << 16) + (macc_to_output_3(0x0000000000008000ULL, 0xffffffffffff0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 394: // add cmode=0 crm=0 sfmo=0 rnd=2 movm=0
	r = (int64_t)(int32_t)cmem[i->param] + (macc_to_output_0(0x0000000000800000ULL, 0xffffffffff000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 395: // add cmode=1 crm=0 sfmo=0 rnd=2 movm=0
	r = (int64_t)(int32_t)cmem[ca] + (macc_to_output_0(0x0000000000800000ULL, 0xffffffffff000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 396: // add cmode=0 crm=1 sfmo=0 rnd=2 movm=0
	r = (int64_t)(int32_t)(cmem[i->param] & 0xffff0000) + (macc_to_output_0(0x0000000000800000ULL, 0xffffffffff000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 397: // add cmode=1 crm=1 sfmo=0 rnd=2 movm=0
	r = (int64_t)(int32_t)(cmem[ca] & 0xffff0000) + (macc_to_output_0(0x0000000000800000ULL, 0xffffffffff000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 398: // add cmode=0 crm=2 sfmo=0 rnd=2 movm=0
	r = (int64_t)(int32_t)(cmem[i->param] << 16) + (macc_to_output_0(0x0000000000800000ULL, 0xffffffffff000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 399: // add cmode=1 crm=2 sfmo=0 rnd=2 movm=0
	r = (int64_t)(int32_t)(cmem[ca] << 16) + (macc_to_output_0(0x0000000000800000ULL, 0xffffffffff000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 400: // add cmode=0 crm=0 sfmo=1 rnd=2 movm=0
	r = (int64_t)(int32_t)cmem[i->param] + (macc_to_output_1(0x0000000000800000ULL, 0xffffffffff000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 401: // add cmode=1 crm=0 sfmo=1 rnd=2 movm=0
	r = (int64_t)(int32_t)cmem[ca] + (macc_to_output_1(0x0000000000800000ULL, 0xffffffffff000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 402: // add cmode=0 crm=1 sfmo=1 rnd=2 movm=0
	r = (int64_t)(int32_t)(cmem[i->param] & 0xffff0000) + (macc_to_output_1(0x0000000000800000ULL, 0xffffffffff000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 403: // add cmode=1 crm=1 sfmo=1 rnd=2 movm=0
	r = (int64_t)(int32_t)(cmem[ca] & 0xffff0000) + (macc_to_output_1(0x0000000000800000ULL, 0xffffffffff000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 404: // add cmode=0 crm=2 sfmo=1 rnd=2 movm=0
	r = (int64_t)(int32_t)(cmem[i->param] << 16) + (macc_to_output_1(0x0000000000800000ULL, 0xffffffffff000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 405: // add cmode=1 crm=2 sfmo=1 rnd=2 movm=0
	r = (int64_t)(int32_t)(cmem[ca] << 16) + (macc_to_output_1(0x0000000000800000ULL, 0xffffffffff000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 406: // add cmode=0 crm=0 sfmo=2 rnd=2 movm=0
	r = (int64_t)(int32_t)cmem[i->param] + (macc_to_output_2(0x0000000000800000ULL, 0xffffffffff000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 407: // add cmode=1 crm=0 sfmo=2 rnd=2 movm=0
	r = (int64_t)(int32_t)cmem[ca] + (macc_to_output_2(0x0000000000800000ULL, 0xffffffffff000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 408: // add cmode=0 crm=1 sfmo=2 rnd=2 movm=0
	r = (int64_t)(int32_t)(cmem[i->param] & 0xffff0000) + (macc_to_output_2(0x0000000000800000ULL, 0xffffffffff000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 409: // add cmode=1 crm=1 sfmo=2 rnd=2 movm=0
	r = (int64_t)(int32_t)(cmem[ca] & 0xffff0000) + (macc_to_output_2(0x0000000000800000ULL, 0xffffffffff000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 410: // add cmode=0 crm=2 sfmo=2 rnd=2 movm=0
	r = (int64_t)(int32_t)(cmem[i->param] << 16) + (macc_to_output_2(0x0000000000800000ULL, 0xffffffffff000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 411: // add cmode=1 crm=2 sfmo=2 rnd=2 movm=0
	r = (int64_t)(int32_t)(cmem[ca] << 16) + (macc_to_output_2(0x0000000000800000ULL, 0xffffffffff000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 412: // add cmode=0 crm=0 sfmo=3 rnd=2 movm=0
	r = (int64_t)(int32_t)cmem[i->param] + (macc_to_output_3(0x0000000000800000ULL, 0xffffffffff000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 413: // add cmode=1 crm=0 sfmo=3 rnd=2 movm=0
	r = (int64_t)(int32_t)cmem[ca] + (macc_to_output_3(0x0000000000800000ULL, 0xffffffffff000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 414: // add cmode=0 crm=1 sfmo=3 rnd=2 movm=0
	r = (int64_t)(int32_t)(cmem[i->param] & 0xffff0000) + (macc_to_output_3(0x0000000000800000ULL, 0xffffffffff000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 415: // add cmode=1 crm=1 sfmo=3 rnd=2 movm=0
	r = (int64_t)(int32_t)(cmem[ca] & 0xffff0000) + (macc_to_output_3(0x0000000000800000ULL, 0xffffffffff000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 416: // add cmode=0 crm=2 sfmo=3 rnd=2 movm=0
	r = (int64_t)(int32_t)(cmem[i->param] << 16) + (macc_to_output_3(0x0000000000800000ULL, 0xffffffffff000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 417: // add cmode=1 crm=2 sfmo=3 rnd=2 movm=0
	r = (int64_t)(int32_t)(cmem[ca] << 16) + (macc_to_output_3(0x0000000000800000ULL, 0xffffffffff000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 418: // add cmode=0 crm=0 sfmo=0 rnd=3 movm=0
	r = (int64_t)(int32_t)cmem[i->param] + (macc_to_output_0(0x0000000000020000ULL, 0xfffffffffffc0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 419: // add cmode=1 crm=0 sfmo=0 rnd=3 movm=0
	r = (int64_t)(int32_t)cmem[ca] + (macc_to_output_0(0x0000000000020000ULL, 0xfffffffffffc0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 420: // add cmode=0 crm=1 sfmo=0 rnd=3 movm=0
	r = (int64_t)(int32_t)(cmem[i->param] & 0xffff0000) + (macc_to_output_0(0x0000000000020000ULL, 0xfffffffffffc0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 421: // add cmode=1 crm=1 sfmo=0 rnd=3 movm=0
	r = (int64_t)(int32_t)(cmem[ca] & 0xffff0000) + (macc_to_output_0(0x0000000000020000ULL, 0xfffffffffffc0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 422: // add cmode=0 crm=2 sfmo=0 rnd=3 movm=0
	r = (int64_t)(int32_t)(cmem[i->param] << 16) + (macc_to_output_0(0x0000000000020000ULL, 0xfffffffffffc0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 423: // add cmode=1 crm=2 sfmo=0 rnd=3 movm=0
	r = (int64_t)(int32_t)(cmem[ca] << 16) + (macc_to_output_0(0x0000000000020000ULL, 0xfffffffffffc0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 424: // add cmode=0 crm=0 sfmo=1 rnd=3 movm=0
	r = (int64_t)(int32_t)cmem[i->param] + (macc_to_output_1(0x0000000000020000ULL, 0xfffffffffffc0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 425: // add cmode=1 crm=0 sfmo=1 rnd=3 movm=0
	r = (int64_t)(int32_t)cmem[ca] + (macc_to_output_1(0x0000000000020000ULL, 0xfffffffffffc0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 426: // add cmode=0 crm=1 sfmo=1 rnd=3 movm=0
	r = (int64_t)(int32_t)(cmem[i->param] & 0xffff0000) + (macc_to_output_1(0x0000000000020000ULL, 0xfffffffffffc0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 427: // add cmode=1 crm=1 sfmo=1 rnd=3 movm=0
	r = (int64_t)(int32_t)(cmem[ca] & 0xffff0000) + (macc_to_output_1(0x0000000000020000ULL, 0xfffffffffffc0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 428: // add cmode=0 crm=2 sfmo=1 rnd=3 movm=0
	r = (int64_t)(int32_t)(cmem[i->param] << 16) + (macc_to_output_1(0x0000000000020000ULL, 0xfffffffffffc0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 429: // add cmode=1 crm=2 sfmo=1 rnd=3 movm=0
	r = (int64_t)(int32_t)(cmem[ca] << 16) + (macc_to_output_1(0x0000000000020000ULL, 0xfffffffffffc0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 430: // add cmode=0 crm=0 sfmo=2 rnd=3 movm=0
	r = (int64_t)(int32_t)cmem[i->param] + (macc_to_output_2(0x0000000000020000ULL, 0xfffffffffffc0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 431: // add cmode=1 crm=0 sfmo=2 rnd=3 movm=0
	r = (int64_t)(int32_t)cmem[ca] + (macc_to_output_2(0x0000000000020000ULL, 0xfffffffffffc0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 432: // add cmode=0 crm=1 sfmo=2 rnd=3 movm=0
	r = (int64_t)(int32_t)(cmem[i->param] & 0xffff0000) + (macc_to_output_2(0x0000000000020000ULL, 0xfffffffffffc0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 433: // add cmode=1 crm=1 sfmo=2 rnd=3 movm=0
	r = (int64_t)(int32_t)(cmem[ca] & 0xffff0000) + (macc_to_output_2(0x0000000000020000ULL, 0xfffffffffffc0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 434: // add cmode=0 crm=2 sfmo=2 rnd=3 movm=0
	r = (int64_t)(int32_t)(cmem[i->param] << 16) + (macc_to_output_2(0x0000000000020000ULL, 0xfffffffffffc0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 435: // add cmode=1 crm=2 sfmo=2 rnd=3 movm=0
	r = (int64_t)(int32_t)(cmem[ca] << 16) + (macc_to_output_2(0x0000000000020000ULL, 0xfffffffffffc0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 436: // add cmode=0 crm=0 sfmo=3 rnd=3 movm=0
	r = (int64_t)(int32_t)cmem[i->param] + (macc_to_output_3(0x0000000000020000ULL, 0xfffffffffffc0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 437: // add cmode=1 crm=0 sfmo=3 rnd=3 movm=0
	r = (int64_t)(int32_t)cmem[ca] + (macc_to_output_3(0x0000000000020000ULL, 0xfffffffffffc0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 438: // add cmode=0 crm=1 sfmo=3 rnd=3 movm=0
	r = (int64_t)(int32_t)(cmem[i->param] & 0xffff0000) + (macc_to_output_3(0x0000000000020000ULL, 0xfffffffffffc0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 439: // add cmode=1 crm=1 sfmo=3 rnd=3 movm=0
	r = (int64_t)(int32_t)(cmem[ca] & 0xffff0000) + (macc_to_output_3(0x0000000000020000ULL, 0xfffffffffffc0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 440: // add cmode=0 crm=2 sfmo=3 rnd=3 movm=0
	r = (int64_t)(int32_t)(cmem[i->param] << 16) + (macc_to_output_3(0x0000000000020000ULL, 0xfffffffffffc0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 441: // add cmode=1 crm=2 sfmo=3 rnd=3 movm=0
	r = (int64_t)(int32_t)(cmem[ca] << 16) + (macc_to_output_3(0x0000000000020000ULL, 0xfffffffffffc0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 442: // add cmode=0 crm=0 sfmo=0 rnd=4 movm=0
	r = (int64_t)(int32_t)cmem[i->param] + (macc_to_output_0(0x0000000080000000ULL, 0xffffffff00000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 443: // add cmode=1 crm=0 sfmo=0 rnd=4 movm=0
	r = (int64_t)(int32_t)cmem[ca] + (macc_to_output_0(0x0000000080000000ULL, 0xffffffff00000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 444: // add cmode=0 crm=1 sfmo=0 rnd=4 movm=0
	r = (int64_t)(int32_t)(cmem[i->param] & 0xffff0000) + (macc_to_output_0(0x0000000080000000ULL, 0xffffffff00000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 445: // add cmode=1 crm=1 sfmo=0 rnd=4 movm=0
	r = (int64_t)(int32_t)(cmem[ca] & 0xffff0000) + (macc_to_output_0(0x0000000080000000ULL, 0xffffffff00000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 446: // add cmode=0 crm=2 sfmo=0 rnd=4 movm=0
	r = (int64_t)(int32_t)(cmem[i->param] << 16) + (macc_to_output_0(0x0000000080000000ULL, 0xffffffff00000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 447: // add cmode=1 crm=2 sfmo=0 rnd=4 movm=0
	r = (int64_t)(int32_t)(cmem[ca] << 16) + (macc_to_output_0(0x0000000080000000ULL, 0xffffffff00000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 448: // add cmode=0 crm=0 sfmo=1 rnd=4 movm=0
	r = (int64_t)(int32_t)cmem[i->param] + (macc_to_output_1(0x0000000080000000ULL, 0xffffffff00000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 449: // add cmode=1 crm=0 sfmo=1 rnd=4 movm=0
	r = (int64_t)(int32_t)cmem[ca] + (macc_to_output_1(0x0000000080000000ULL, 0xffffffff00000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 450: // add cmode=0 crm=1 sfmo=1 rnd=4 movm=0
	r = (int64_t)(int32_t)(cmem[i->param] & 0xffff0000) + (macc_to_output_1(0x0000000080000000ULL, 0xffffffff00000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 451: // add cmode=1 crm=1 sfmo=1 rnd=4 movm=0
	r = (int64_t)(int32_t)(cmem[ca] & 0xffff0000) + (macc_to_output_1(0x0000000080000000ULL, 0xffffffff00000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 452: // add cmode=0 crm=2 sfmo=1 rnd=4 movm=0
	r = (int64_t)(int32_t)(cmem[i->param] << 16) + (macc_to_output_1(0x0000000080000000ULL, 0xffffffff00000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 453: // add cmode=1 crm=2 sfmo=1 rnd=4 movm=0
	r = (int64_t)(int32_t)(cmem[ca] << 16) + (macc_to_output_1(0x0000000080000000ULL, 0xffffffff00000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 454: // add cmode=0 crm=0 sfmo=2 rnd=4 movm=0
	r = (int64_t)(int32_t)cmem[i->param] + (macc_to_output_2(0x0000000080000000ULL, 0xffffffff00000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 455: // add cmode=1 crm=0 sfmo=2 rnd=4 movm=0
	r = (int64_t)(int32_t)cmem[ca] + (macc_to_output_2(0x0000000080000000ULL, 0xffffffff00000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 456: // add cmode=0 crm=1 sfmo=2 rnd=4 movm=0
	r = (int64_t)(int32_t)(cmem[i->param] & 0xffff0000) + (macc_to_output_2(0x0000000080000000ULL, 0xffffffff00000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 457: // add cmode=1 crm=1 sfmo=2 rnd=4 movm=0
	r = (int64_t)(int32_t)(cmem[ca] & 0xffff0000) + (macc_to_output_2(0x0000000080000000ULL, 0xffffffff00000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 458: // add cmode=0 crm=2 sfmo=2 rnd=4 movm=0
	r = (int64_t)(int32_t)(cmem[i->param] << 16) + (macc_to_output_2(0x0000000080000000ULL, 0xffffffff00000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 459: // add cmode=1 crm=2 sfmo=2 rnd=4 movm=0
	r = (int64_t)(int32_t)(cmem[ca] << 16) + (macc_to_output_2(0x0000000080000000ULL, 0xffffffff00000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 460: // add cmode=0 crm=0 sfmo=3 rnd=4 movm=0
	r = (int64_t)(int32_t)cmem[i->param] + (macc_to_output_3(0x0000000080000000ULL, 0xffffffff00000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 461: // add cmode=1 crm=0 sfmo=3 rnd=4 movm=0
	r = (int64_t)(int32_t)cmem[ca] + (macc_to_output_3(0x0000000080000000ULL, 0xffffffff00000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 462: // add cmode=0 crm=1 sfmo=3 rnd=4 movm=0
	r = (int64_t)(int32_t)(cmem[i->param] & 0xffff0000) + (macc_to_output_3(0x0000000080000000ULL, 0xffffffff00000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 463: // add cmode=1 crm=1 sfmo=3 rnd=4 movm=0
	r = (int64_t)(int32_t)(cmem[ca] & 0xffff0000) + (macc_to_output_3(0x0000000080000000ULL, 0xffffffff00000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 464: // add cmode=0 crm=2 sfmo=3 rnd=4 movm=0
	r = (int64_t)(int32_t)(cmem[i->param] << 16) + (macc_to_output_3(0x0000000080000000ULL, 0xffffffff00000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 465: // add cmode=1 crm=2 sfmo=3 rnd=4 movm=0
	r = (int64_t)(int32_t)(cmem[ca] << 16) + (macc_to_output_3(0x0000000080000000ULL, 0xffffffff00000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 466: // add cmode=0 crm=0 sfmo=0 rnd=0 movm=1
	r = (int64_t)(int32_t)cmem[i->param] + (macc_to_output_0s(0x0000000000000000ULL, 0xffffffffffffffffULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 467: // add cmode=1 crm=0 sfmo=0 rnd=0 movm=1
	r = (int64_t)(int32_t)cmem[ca] + (macc_to_output_0s(0x0000000000000000ULL, 0xffffffffffffffffULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 468: // add cmode=0 crm=1 sfmo=0 rnd=0 movm=1
	r = (int64_t)(int32_t)(cmem[i->param] & 0xffff0000) + (macc_to_output_0s(0x0000000000000000ULL, 0xffffffffffffffffULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 469: // add cmode=1 crm=1 sfmo=0 rnd=0 movm=1
	r = (int64_t)(int32_t)(cmem[ca] & 0xffff0000) + (macc_to_output_0s(0x0000000000000000ULL, 0xffffffffffffffffULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 470: // add cmode=0 crm=2 sfmo=0 rnd=0 movm=1
	r = (int64_t)(int32_t)(cmem[i->param] << 16) + (macc_to_output_0s(0x0000000000000000ULL, 0xffffffffffffffffULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 471: // add cmode=1 crm=2 sfmo=0 rnd=0 movm=1
	r = (int64_t)(int32_t)(cmem[ca] << 16) + (macc_to_output_0s(0x0000000000000000ULL, 0xffffffffffffffffULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 472: // add cmode=0 crm=0 sfmo=1 rnd=0 movm=1
	r = (int64_t)(int32_t)cmem[i->param] + (macc_to_output_1s(0x0000000000000000ULL, 0xffffffffffffffffULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 473: // add cmode=1 crm=0 sfmo=1 rnd=0 movm=1
	r = (int64_t)(int32_t)cmem[ca] + (macc_to_output_1s(0x0000000000000000ULL, 0xffffffffffffffffULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 474: // add cmode=0 crm=1 sfmo=1 rnd=0 movm=1
	r = (int64_t)(int32_t)(cmem[i->param] & 0xffff0000) + (macc_to_output_1s(0x0000000000000000ULL, 0xffffffffffffffffULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 475: // add cmode=1 crm=1 sfmo=1 rnd=0 movm=1
	r = (int64_t)(int32_t)(cmem[ca] & 0xffff0000) + (macc_to_output_1s(0x0000000000000000ULL, 0xffffffffffffffffULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 476: // add cmode=0 crm=2 sfmo=1 rnd=0 movm=1
	r = (int64_t)(int32_t)(cmem[i->param] << 16) + (macc_to_output_1s(0x0000000000000000ULL, 0xffffffffffffffffULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 477: // add cmode=1 crm=2 sfmo=1 rnd=0 movm=1
	r = (int64_t)(int32_t)(cmem[ca] << 16) + (macc_to_output_1s(0x0000000000000000ULL, 0xffffffffffffffffULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 478: // add cmode=0 crm=0 sfmo=2 rnd=0 movm=1
	r = (int64_t)(int32_t)cmem[i->param] + (macc_to_output_2s(0x0000000000000000ULL, 0xffffffffffffffffULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 479: // add cmode=1 crm=0 sfmo=2 rnd=0 movm=1
	r = (int64_t)(int32_t)cmem[ca] + (macc_to_output_2s(0x0000000000000000ULL, 0xffffffffffffffffULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 480: // add cmode=0 crm=1 sfmo=2 rnd=0 movm=1
	r = (int64_t)(int32_t)(cmem[i->param] & 0xffff0000) + (macc_to_output_2s(0x0000000000000000ULL, 0xffffffffffffffffULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 481: // add cmode=1 crm=1 sfmo=2 rnd=0 movm=1
	r = (int64_t)(int32_t)(cmem[ca] & 0xffff0000) + (macc_to_output_2s(0x0000000000000000ULL, 0xffffffffffffffffULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 482: // add cmode=0 crm=2 sfmo=2 rnd=0 movm=1
	r = (int64_t)(int32_t)(cmem[i->param] << 16) + (macc_to_output_2s(0x0000000000000000ULL, 0xffffffffffffffffULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 483: // add cmode=1 crm=2 sfmo=2 rnd=0 movm=1
	r = (int64_t)(int32_t)(cmem[ca] << 16) + (macc_to_output_2s(0x0000000000000000ULL, 0xffffffffffffffffULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 484: // add cmode=0 crm=0 sfmo=3 rnd=0 movm=1
	r = (int64_t)(int32_t)cmem[i->param] + (macc_to_output_3s(0x0000000000000000ULL, 0xffffffffffffffffULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 485: // add cmode=1 crm=0 sfmo=3 rnd=0 movm=1
	r = (int64_t)(int32_t)cmem[ca] + (macc_to_output_3s(0x0000000000000000ULL, 0xffffffffffffffffULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 486: // add cmode=0 crm=1 sfmo=3 rnd=0 movm=1
	r = (int64_t)(int32_t)(cmem[i->param] & 0xffff0000) + (macc_to_output_3s(0x0000000000000000ULL, 0xffffffffffffffffULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 487: // add cmode=1 crm=1 sfmo=3 rnd=0 movm=1
	r = (int64_t)(int32_t)(cmem[ca] & 0xffff0000) + (macc_to_output_3s(0x0000000000000000ULL, 0xffffffffffffffffULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 488: // add cmode=0 crm=2 sfmo=3 rnd=0 movm=1
	r = (int64_t)(int32_t)(cmem[i->param] << 16) + (macc_to_output_3s(0x0000000000000000ULL, 0xffffffffffffffffULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 489: // add cmode=1 crm=2 sfmo=3 rnd=0 movm=1
	r = (int64_t)(int32_t)(cmem[ca] << 16) + (macc_to_output_3s(0x0000000000000000ULL, 0xffffffffffffffffULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 490: // add cmode=0 crm=0 sfmo=0 rnd=1 movm=1
	r = (int64_t)(int32_t)cmem[i->param] + (macc_to_output_0s(0x0000000000008000ULL, 0xffffffffffff0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 491: // add cmode=1 crm=0 sfmo=0 rnd=1 movm=1
	r = (int64_t)(int32_t)cmem[ca] + (macc_to_output_0s(0x0000000000008000ULL, 0xffffffffffff0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 492: // add cmode=0 crm=1 sfmo=0 rnd=1 movm=1
	r = (int64_t)(int32_t)(cmem[i->param] & 0xffff0000) + (macc_to_output_0s(0x0000000000008000ULL, 0xffffffffffff0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 493: // add cmode=1 crm=1 sfmo=0 rnd=1 movm=1
	r = (int64_t)(int32_t)(cmem[ca] & 0xffff0000) + (macc_to_output_0s(0x0000000000008000ULL, 0xffffffffffff0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 494: // add cmode=0 crm=2 sfmo=0 rnd=1 movm=1
	r = (int64_t)(int32_t)(cmem[i->param] << 16) + (macc_to_output_0s(0x0000000000008000ULL, 0xffffffffffff0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 495: // add cmode=1 crm=2 sfmo=0 rnd=1 movm=1
	r = (int64_t)(int32_t)(cmem[ca] << 16) + (macc_to_output_0s(0x0000000000008000ULL, 0xffffffffffff0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 496: // add cmode=0 crm=0 sfmo=1 rnd=1 movm=1
	r = (int64_t)(int32_t)cmem[i->param] + (macc_to_output_1s(0x0000000000008000ULL, 0xffffffffffff0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 497: // add cmode=1 crm=0 sfmo=1 rnd=1 movm=1
	r = (int64_t)(int32_t)cmem[ca] + (macc_to_output_1s(0x0000000000008000ULL, 0xffffffffffff0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 498: // add cmode=0 crm=1 sfmo=1 rnd=1 movm=1
	r = (int64_t)(int32_t)(cmem[i->param] & 0xffff0000) + (macc_to_output_1s(0x0000000000008000ULL, 0xffffffffffff0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 499: // add cmode=1 crm=1 sfmo=1 rnd=1 movm=1
	r = (int64_t)(int32_t)(cmem[ca] & 0xffff0000) + (macc_to_output_1s(0x0000000000008000ULL, 0xffffffffffff0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 500: // add cmode=0 crm=2 sfmo=1 rnd=1 movm=1
	r = (int64_t)(int32_t)(cmem[i->param] << 16) + (macc_to_output_1s(0x0000000000008000ULL, 0xffffffffffff0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 501: // add cmode=1 crm=2 sfmo=1 rnd=1 movm=1
	r = (int64_t)(int32_t)(cmem[ca] << 16) + (macc_to_output_1s(0x0000000000008000ULL, 0xffffffffffff0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 502: // add cmode=0 crm=0 sfmo=2 rnd=1 movm=1
	r = (int64_t)(int32_t)cmem[i->param] + (macc_to_output_2s(0x0000000000008000ULL, 0xffffffffffff0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 503: // add cmode=1 crm=0 sfmo=2 rnd=1 movm=1
	r = (int64_t)(int32_t)cmem[ca] + (macc_to_output_2s(0x0000000000008000ULL, 0xffffffffffff0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 504: // add cmode=0 crm=1 sfmo=2 rnd=1 movm=1
	r = (int64_t)(int32_t)(cmem[i->param] & 0xffff0000) + (macc_to_output_2s(0x0000000000008000ULL, 0xffffffffffff0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 505: // add cmode=1 crm=1 sfmo=2 rnd=1 movm=1
	r = (int64_t)(int32_t)(cmem[ca] & 0xffff0000) + (macc_to_output_2s(0x0000000000008000ULL, 0xffffffffffff0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 506: // add cmode=0 crm=2 sfmo=2 rnd=1 movm=1
	r = (int64_t)(int32_t)(cmem[i->param] << 16) + (macc_to_output_2s(0x0000000000008000ULL, 0xffffffffffff0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 507: // add cmode=1 crm=2 sfmo=2 rnd=1 movm=1
	r = (int64_t)(int32_t)(cmem[ca] << 16) + (macc_to_output_2s(0x0000000000008000ULL, 0xffffffffffff0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 508: // add cmode=0 crm=0 sfmo=3 rnd=1 movm=1
	r = (int64_t)(int32_t)cmem[i->param] + (macc_to_output_3s(0x0000000000008000ULL, 0xffffffffffff0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 509: // add cmode=1 crm=0 sfmo=3 rnd=1 movm=1
	r = (int64_t)(int32_t)cmem[ca] + (macc_to_output_3s(0x0000000000008000ULL, 0xffffffffffff0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 510: // add cmode=0 crm=1 sfmo=3 rnd=1 movm=1
	r = (int64_t)(int32_t)(cmem[i->param] & 0xffff0000) + (macc_to_output_3s(0x0000000000008000ULL, 0xffffffffffff0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 511: // add cmode=1 crm=1 sfmo=3 rnd=1 movm=1
	r = (int64_t)(int32_t)(cmem[ca] & 0xffff0000) + (macc_to_output_3s(0x0000000000008000ULL, 0xffffffffffff0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 512: // add cmode=0 crm=2 sfmo=3 rnd=1 movm=1
	r = (int64_t)(int32_t)(cmem[i->param] << 16) + (macc_to_output_3s(0x0000000000008000ULL, 0xffffffffffff0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 513: // add cmode=1 crm=2 sfmo=3 rnd=1 movm=1
	r = (int64_t)(int32_t)(cmem[ca] << 16) + (macc_to_output_3s(0x0000000000008000ULL, 0xffffffffffff0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 514: // add cmode=0 crm=0 sfmo=0 rnd=2 movm=1
	r = (int64_t)(int32_t)cmem[i->param] + (macc_to_output_0s(0x0000000000800000ULL, 0xffffffffff000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 515: // add cmode=1 crm=0 sfmo=0 rnd=2 movm=1
	r = (int64_t)(int32_t)cmem[ca] + (macc_to_output_0s(0x0000000000800000ULL, 0xffffffffff000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 516: // add cmode=0 crm=1 sfmo=0 rnd=2 movm=1
	r = (int64_t)(int32_t)(cmem[i->param] & 0xffff0000) + (macc_to_output_0s(0x0000000000800000ULL, 0xffffffffff000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 517: // add cmode=1 crm=1 sfmo=0 rnd=2 movm=1
	r = (int64_t)(int32_t)(cmem[ca] & 0xffff0000) + (macc_to_output_0s(0x0000000000800000ULL, 0xffffffffff000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 518: // add cmode=0 crm=2 sfmo=0 rnd=2 movm=1
	r = (int64_t)(int32_t)(cmem[i->param] << 16) + (macc_to_output_0s(0x0000000000800000ULL, 0xffffffffff000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 519: // add cmode=1 crm=2 sfmo=0 rnd=2 movm=1
	r = (int64_t)(int32_t)(cmem[ca] << 16) + (macc_to_output_0s(0x0000000000800000ULL, 0xffffffffff000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 520: // add cmode=0 crm=0 sfmo=1 rnd=2 movm=1
	r = (int64_t)(int32_t)cmem[i->param] + (macc_to_output_1s(0x0000000000800000ULL, 0xffffffffff000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 521: // add cmode=1 crm=0 sfmo=1 rnd=2 movm=1
	r = (int64_t)(int32_t)cmem[ca] + (macc_to_output_1s(0x0000000000800000ULL, 0xffffffffff000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 522: // add cmode=0 crm=1 sfmo=1 rnd=2 movm=1
	r = (int64_t)(int32_t)(cmem[i->param] & 0xffff0000) + (macc_to_output_1s(0x0000000000800000ULL, 0xffffffffff000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 523: // add cmode=1 crm=1 sfmo=1 rnd=2 movm=1
	r = (int64_t)(int32_t)(cmem[ca] & 0xffff0000) + (macc_to_output_1s(0x0000000000800000ULL, 0xffffffffff000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 524: // add cmode=0 crm=2 sfmo=1 rnd=2 movm=1
	r = (int64_t)(int32_t)(cmem[i->param] << 16) + (macc_to_output_1s(0x0000000000800000ULL, 0xffffffffff000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 525: // add cmode=1 crm=2 sfmo=1 rnd=2 movm=1
	r = (int64_t)(int32_t)(cmem[ca] << 16) + (macc_to_output_1s(0x0000000000800000ULL, 0xffffffffff000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 526: // add cmode=0 crm=0 sfmo=2 rnd=2 movm=1
	r = (int64_t)(int32_t)cmem[i->param] + (macc_to_output_2s(0x0000000000800000ULL, 0xffffffffff000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 527: // add cmode=1 crm=0 sfmo=2 rnd=2 movm=1
	r = (int64_t)(int32_t)cmem[ca] + (macc_to_output_2s(0x0000000000800000ULL, 0xffffffffff000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 528: // add cmode=0 crm=1 sfmo=2 rnd=2 movm=1
	r = (int64_t)(int32_t)(cmem[i->param] & 0xffff0000) + (macc_to_output_2s(0x0000000000800000ULL, 0xffffffffff000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 529: // add cmode=1 crm=1 sfmo=2 rnd=2 movm=1
	r = (int64_t)(int32_t)(cmem[ca] & 0xffff0000) + (macc_to_output_2s(0x0000000000800000ULL, 0xffffffffff000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 530: // add cmode=0 crm=2 sfmo=2 rnd=2 movm=1
	r = (int64_t)(int32_t)(cmem[i->param] << 16) + (macc_to_output_2s(0x0000000000800000ULL, 0xffffffffff000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 531: // add cmode=1 crm=2 sfmo=2 rnd=2 movm=1
	r = (int64_t)(int32_t)(cmem[ca] << 16) + (macc_to_output_2s(0x0000000000800000ULL, 0xffffffffff000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 532: // add cmode=0 crm=0 sfmo=3 rnd=2 movm=1
	r = (int64_t)(int32_t)cmem[i->param] + (macc_to_output_3s(0x0000000000800000ULL, 0xffffffffff000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 533: // add cmode=1 crm=0 sfmo=3 rnd=2 movm=1
	r = (int64_t)(int32_t)cmem[ca] + (macc_to_output_3s(0x0000000000800000ULL, 0xffffffffff000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 534: // add cmode=0 crm=1 sfmo=3 rnd=2 movm=1
	r = (int64_t)(int32_t)(cmem[i->param] & 0xffff0000) + (macc_to_output_3s(0x0000000000800000ULL, 0xffffffffff000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 535: // add cmode=1 crm=1 sfmo=3 rnd=2 movm=1
	r = (int64_t)(int32_t)(cmem[ca] & 0xffff0000) + (macc_to_output_3s(0x0000000000800000ULL, 0xffffffffff000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 536: // add cmode=0 crm=2 sfmo=3 rnd=2 movm=1
	r = (int64_t)(int32_t)(cmem[i->param] << 16) + (macc_to_output_3s(0x0000000000800000ULL, 0xffffffffff000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 537: // add cmode=1 crm=2 sfmo=3 rnd=2 movm=1
	r = (int64_t)(int32_t)(cmem[ca] << 16) + (macc_to_output_3s(0x0000000000800000ULL, 0xffffffffff000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 538: // add cmode=0 crm=0 sfmo=0 rnd=3 movm=1
	r = (int64_t)(int32_t)cmem[i->param] + (macc_to_output_0s(0x0000000000020000ULL, 0xfffffffffffc0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 539: // add cmode=1 crm=0 sfmo=0 rnd=3 movm=1
	r = (int64_t)(int32_t)cmem[ca] + (macc_to_output_0s(0x0000000000020000ULL, 0xfffffffffffc0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 540: // add cmode=0 crm=1 sfmo=0 rnd=3 movm=1
	r = (int64_t)(int32_t)(cmem[i->param] & 0xffff0000) + (macc_to_output_0s(0x0000000000020000ULL, 0xfffffffffffc0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 541: // add cmode=1 crm=1 sfmo=0 rnd=3 movm=1
	r = (int64_t)(int32_t)(cmem[ca] & 0xffff0000) + (macc_to_output_0s(0x0000000000020000ULL, 0xfffffffffffc0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 542: // add cmode=0 crm=2 sfmo=0 rnd=3 movm=1
	r = (int64_t)(int32_t)(cmem[i->param] << 16) + (macc_to_output_0s(0x0000000000020000ULL, 0xfffffffffffc0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 543: // add cmode=1 crm=2 sfmo=0 rnd=3 movm=1
	r = (int64_t)(int32_t)(cmem[ca] << 16) + (macc_to_output_0s(0x0000000000020000ULL, 0xfffffffffffc0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 544: // add cmode=0 crm=0 sfmo=1 rnd=3 movm=1
	r = (int64_t)(int32_t)cmem[i->param] + (macc_to_output_1s(0x0000000000020000ULL, 0xfffffffffffc0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 545: // add cmode=1 crm=0 sfmo=1 rnd=3 movm=1
	r = (int64_t)(int32_t)cmem[ca] + (macc_to_output_1s(0x0000000000020000ULL, 0xfffffffffffc0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 546: // add cmode=0 crm=1 sfmo=1 rnd=3 movm=1
	r = (int64_t)(int32_t)(cmem[i->param] & 0xffff0000) + (macc_to_output_1s(0x0000000000020000ULL, 0xfffffffffffc0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 547: // add cmode=1 crm=1 sfmo=1 rnd=3 movm=1
	r = (int64_t)(int32_t)(cmem[ca] & 0xffff0000) + (macc_to_output_1s(0x0000000000020000ULL, 0xfffffffffffc0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 548: // add cmode=0 crm=2 sfmo=1 rnd=3 movm=1
	r = (int64_t)(int32_t)(cmem[i->param] << 16) + (macc_to_output_1s(0x0000000000020000ULL, 0xfffffffffffc0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 549: // add cmode=1 crm=2 sfmo=1 rnd=3 movm=1
	r = (int64_t)(int32_t)(cmem[ca] << 16) + (macc_to_output_1s(0x0000000000020000ULL, 0xfffffffffffc0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 550: // add cmode=0 crm=0 sfmo=2 rnd=3 movm=1
	r = (int64_t)(int32_t)cmem[i->param] + (macc_to_output_2s(0x0000000000020000ULL, 0xfffffffffffc0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 551: // add cmode=1 crm=0 sfmo=2 rnd=3 movm=1
	r = (int64_t)(int32_t)cmem[ca] + (macc_to_output_2s(0x0000000000020000ULL, 0xfffffffffffc0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 552: // add cmode=0 crm=1 sfmo=2 rnd=3 movm=1
	r = (int64_t)(int32_t)(cmem[i->param] & 0xffff0000) + (macc_to_output_2s(0x0000000000020000ULL, 0xfffffffffffc0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 553: // add cmode=1 crm=1 sfmo=2 rnd=3 movm=1
	r = (int64_t)(int32_t)(cmem[ca] & 0xffff0000) + (macc_to_output_2s(0x0000000000020000ULL, 0xfffffffffffc0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 554: // add cmode=0 crm=2 sfmo=2 rnd=3 movm=1
	r = (int64_t)(int32_t)(cmem[i->param] << 16) + (macc_to_output_2s(0x0000000000020000ULL, 0xfffffffffffc0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 555: // add cmode=1 crm=2 sfmo=2 rnd=3 movm=1
	r = (int64_t)(int32_t)(cmem[ca] << 16) + (macc_to_output_2s(0x0000000000020000ULL, 0xfffffffffffc0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 556: // add cmode=0 crm=0 sfmo=3 rnd=3 movm=1
	r = (int64_t)(int32_t)cmem[i->param] + (macc_to_output_3s(0x0000000000020000ULL, 0xfffffffffffc0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 557: // add cmode=1 crm=0 sfmo=3 rnd=3 movm=1
	r = (int64_t)(int32_t)cmem[ca] + (macc_to_output_3s(0x0000000000020000ULL, 0xfffffffffffc0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 558: // add cmode=0 crm=1 sfmo=3 rnd=3 movm=1
	r = (int64_t)(int32_t)(cmem[i->param] & 0xffff0000) + (macc_to_output_3s(0x0000000000020000ULL, 0xfffffffffffc0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 559: // add cmode=1 crm=1 sfmo=3 rnd=3 movm=1
	r = (int64_t)(int32_t)(cmem[ca] & 0xffff0000) + (macc_to_output_3s(0x0000000000020000ULL, 0xfffffffffffc0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 560: // add cmode=0 crm=2 sfmo=3 rnd=3 movm=1
	r = (int64_t)(int32_t)(cmem[i->param] << 16) + (macc_to_output_3s(0x0000000000020000ULL, 0xfffffffffffc0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 561: // add cmode=1 crm=2 sfmo=3 rnd=3 movm=1
	r = (int64_t)(int32_t)(cmem[ca] << 16) + (macc_to_output_3s(0x0000000000020000ULL, 0xfffffffffffc0000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 562: // add cmode=0 crm=0 sfmo=0 rnd=4 movm=1
	r = (int64_t)(int32_t)cmem[i->param] + (macc_to_output_0s(0x0000000080000000ULL, 0xffffffff00000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 563: // add cmode=1 crm=0 sfmo=0 rnd=4 movm=1
	r = (int64_t)(int32_t)cmem[ca] + (macc_to_output_0s(0x0000000080000000ULL, 0xffffffff00000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 564: // add cmode=0 crm=1 sfmo=0 rnd=4 movm=1
	r = (int64_t)(int32_t)(cmem[i->param] & 0xffff0000) + (macc_to_output_0s(0x0000000080000000ULL, 0xffffffff00000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 565: // add cmode=1 crm=1 sfmo=0 rnd=4 movm=1
	r = (int64_t)(int32_t)(cmem[ca] & 0xffff0000) + (macc_to_output_0s(0x0000000080000000ULL, 0xffffffff00000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 566: // add cmode=0 crm=2 sfmo=0 rnd=4 movm=1
	r = (int64_t)(int32_t)(cmem[i->param] << 16) + (macc_to_output_0s(0x0000000080000000ULL, 0xffffffff00000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 567: // add cmode=1 crm=2 sfmo=0 rnd=4 movm=1
	r = (int64_t)(int32_t)(cmem[ca] << 16) + (macc_to_output_0s(0x0000000080000000ULL, 0xffffffff00000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 568: // add cmode=0 crm=0 sfmo=1 rnd=4 movm=1
	r = (int64_t)(int32_t)cmem[i->param] + (macc_to_output_1s(0x0000000080000000ULL, 0xffffffff00000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 569: // add cmode=1 crm=0 sfmo=1 rnd=4 movm=1
	r = (int64_t)(int32_t)cmem[ca] + (macc_to_output_1s(0x0000000080000000ULL, 0xffffffff00000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 570: // add cmode=0 crm=1 sfmo=1 rnd=4 movm=1
	r = (int64_t)(int32_t)(cmem[i->param] & 0xffff0000) + (macc_to_output_1s(0x0000000080000000ULL, 0xffffffff00000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 571: // add cmode=1 crm=1 sfmo=1 rnd=4 movm=1
	r = (int64_t)(int32_t)(cmem[ca] & 0xffff0000) + (macc_to_output_1s(0x0000000080000000ULL, 0xffffffff00000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 572: // add cmode=0 crm=2 sfmo=1 rnd=4 movm=1
	r = (int64_t)(int32_t)(cmem[i->param] << 16) + (macc_to_output_1s(0x0000000080000000ULL, 0xffffffff00000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 573: // add cmode=1 crm=2 sfmo=1 rnd=4 movm=1
	r = (int64_t)(int32_t)(cmem[ca] << 16) + (macc_to_output_1s(0x0000000080000000ULL, 0xffffffff00000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 574: // add cmode=0 crm=0 sfmo=2 rnd=4 movm=1
	r = (int64_t)(int32_t)cmem[i->param] + (macc_to_output_2s(0x0000000080000000ULL, 0xffffffff00000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 575: // add cmode=1 crm=0 sfmo=2 rnd=4 movm=1
	r = (int64_t)(int32_t)cmem[ca] + (macc_to_output_2s(0x0000000080000000ULL, 0xffffffff00000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 576: // add cmode=0 crm=1 sfmo=2 rnd=4 movm=1
	r = (int64_t)(int32_t)(cmem[i->param] & 0xffff0000) + (macc_to_output_2s(0x0000000080000000ULL, 0xffffffff00000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 577: // add cmode=1 crm=1 sfmo=2 rnd=4 movm=1
	r = (int64_t)(int32_t)(cmem[ca] & 0xffff0000) + (macc_to_output_2s(0x0000000080000000ULL, 0xffffffff00000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 578: // add cmode=0 crm=2 sfmo=2 rnd=4 movm=1
	r = (int64_t)(int32_t)(cmem[i->param] << 16) + (macc_to_output_2s(0x0000000080000000ULL, 0xffffffff00000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 579: // add cmode=1 crm=2 sfmo=2 rnd=4 movm=1
	r = (int64_t)(int32_t)(cmem[ca] << 16) + (macc_to_output_2s(0x0000000080000000ULL, 0xffffffff00000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 580: // add cmode=0 crm=0 sfmo=3 rnd=4 movm=1
	r = (int64_t)(int32_t)cmem[i->param] + (macc_to_output_3s(0x0000000080000000ULL, 0xffffffff00000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 581: // add cmode=1 crm=0 sfmo=3 rnd=4 movm=1
	r = (int64_t)(int32_t)cmem[ca] + (macc_to_output_3s(0x0000000080000000ULL, 0xffffffff00000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 582: // add cmode=0 crm=1 sfmo=3 rnd=4 movm=1
	r = (int64_t)(int32_t)(cmem[i->param] & 0xffff0000) + (macc_to_output_3s(0x0000000080000000ULL, 0xffffffff00000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 583: // add cmode=1 crm=1 sfmo=3 rnd=4 movm=1
	r = (int64_t)(int32_t)(cmem[ca] & 0xffff0000) + (macc_to_output_3s(0x0000000080000000ULL, 0xffffffff00000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 584: // add cmode=0 crm=2 sfmo=3 rnd=4 movm=1
	r = (int64_t)(int32_t)(cmem[i->param] << 16) + (macc_to_output_3s(0x0000000080000000ULL, 0xffffffff00000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 585: // add cmode=1 crm=2 sfmo=3 rnd=4 movm=1
	r = (int64_t)(int32_t)(cmem[ca] << 16) + (macc_to_output_3s(0x0000000080000000ULL, 0xffffffff00000000ULL) >> 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 586: // add cmode=0 dmode=0 crm=0 dbp=0
	r = (int64_t)(int32_t)(dmem0[(i->param + ba0) & 0xff] << 8) + (int64_t)(int32_t)cmem[i->param];
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 587: // add cmode=1 dmode=0 crm=0 dbp=0
	r = (int64_t)(int32_t)(dmem0[(i->param + ba0) & 0xff] << 8) + (int64_t)(int32_t)cmem[ca];
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 588: // add cmode=0 dmode=1 crm=0 dbp=0
	r = (int64_t)(int32_t)(dmem0[(id + ba0) & 0xff] << 8) + (int64_t)(int32_t)cmem[i->param];
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 589: // add cmode=1 dmode=1 crm=0 dbp=0
	r = (int64_t)(int32_t)(dmem0[(id + ba0) & 0xff] << 8) + (int64_t)(int32_t)cmem[ca];
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 590: // add cmode=0 dmode=0 crm=1 dbp=0
	r = (int64_t)(int32_t)(dmem0[(i->param + ba0) & 0xff] << 8) + (int64_t)(int32_t)(cmem[i->param] & 0xffff0000);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 591: // add cmode=1 dmode=0 crm=1 dbp=0
	r = (int64_t)(int32_t)(dmem0[(i->param + ba0) & 0xff] << 8) + (int64_t)(int32_t)(cmem[ca] & 0xffff0000);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 592: // add cmode=0 dmode=1 crm=1 dbp=0
	r = (int64_t)(int32_t)(dmem0[(id + ba0) & 0xff] << 8) + (int64_t)(int32_t)(cmem[i->param] & 0xffff0000);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 593: // add cmode=1 dmode=1 crm=1 dbp=0
	r = (int64_t)(int32_t)(dmem0[(id + ba0) & 0xff] << 8) + (int64_t)(int32_t)(cmem[ca] & 0xffff0000);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 594: // add cmode=0 dmode=0 crm=2 dbp=0
	r = (int64_t)(int32_t)(dmem0[(i->param + ba0) & 0xff] << 8) + (int64_t)(int32_t)(cmem[i->param] << 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 595: // add cmode=1 dmode=0 crm=2 dbp=0
	r = (int64_t)(int32_t)(dmem0[(i->param + ba0) & 0xff] << 8) + (int64_t)(int32_t)(cmem[ca] << 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 596: // add cmode=0 dmode=1 crm=2 dbp=0
	r = (int64_t)(int32_t)(dmem0[(id + ba0) & 0xff] << 8) + (int64_t)(int32_t)(cmem[i->param] << 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 597: // add cmode=1 dmode=1 crm=2 dbp=0
	r = (int64_t)(int32_t)(dmem0[(id + ba0) & 0xff] << 8) + (int64_t)(int32_t)(cmem[ca] << 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 598: // add cmode=0 dmode=0 crm=0 dbp=1
	r = (int64_t)(int32_t)(dmem1[(i->param + ba1) & 0x1f] << 8) + (int64_t)(int32_t)cmem[i->param];
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 599: // add cmode=1 dmode=0 crm=0 dbp=1
	r = (int64_t)(int32_t)(dmem1[(i->param + ba1) & 0x1f] << 8) + (int64_t)(int32_t)cmem[ca];
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 600: // add cmode=0 dmode=1 crm=0 dbp=1
	r = (int64_t)(int32_t)(dmem1[(id + ba1) & 0x1f] << 8) + (int64_t)(int32_t)cmem[i->param];
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 601: // add cmode=1 dmode=1 crm=0 dbp=1
	r = (int64_t)(int32_t)(dmem1[(id + ba1) & 0x1f] << 8) + (int64_t)(int32_t)cmem[ca];
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 602: // add cmode=0 dmode=0 crm=1 dbp=1
	r = (int64_t)(int32_t)(dmem1[(i->param + ba1) & 0x1f] << 8) + (int64_t)(int32_t)(cmem[i->param] & 0xffff0000);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 603: // add cmode=1 dmode=0 crm=1 dbp=1
	r = (int64_t)(int32_t)(dmem1[(i->param + ba1) & 0x1f] << 8) + (int64_t)(int32_t)(cmem[ca] & 0xffff0000);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 604: // add cmode=0 dmode=1 crm=1 dbp=1
	r = (int64_t)(int32_t)(dmem1[(id + ba1) & 0x1f] << 8) + (int64_t)(int32_t)(cmem[i->param] & 0xffff0000);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 605: // add cmode=1 dmode=1 crm=1 dbp=1
	r = (int64_t)(int32_t)(dmem1[(id + ba1) & 0x1f] << 8) + (int64_t)(int32_t)(cmem[ca] & 0xffff0000);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 606: // add cmode=0 dmode=0 crm=2 dbp=1
	r = (int64_t)(int32_t)(dmem1[(i->param + ba1) & 0x1f] << 8) + (int64_t)(int32_t)(cmem[i->param] << 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 607: // add cmode=1 dmode=0 crm=2 dbp=1
	r = (int64_t)(int32_t)(dmem1[(i->param + ba1) & 0x1f] << 8) + (int64_t)(int32_t)(cmem[ca] << 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 608: // add cmode=0 dmode=1 crm=2 dbp=1
	r = (int64_t)(int32_t)(dmem1[(id + ba1) & 0x1f] << 8) + (int64_t)(int32_t)(cmem[i->param] << 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 609: // add cmode=1 dmode=1 crm=2 dbp=1
	r = (int64_t)(int32_t)(dmem1[(id + ba1) & 0x1f] << 8) + (int64_t)(int32_t)(cmem[ca] << 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 610: // sub dmode=0 dbp=0 sfao=0
	r = (int64_t)(int32_t)(dmem0[(i->param + ba0) & 0xff] << 8) - (int64_t)(int32_t)aacc;
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 611: // sub dmode=1 dbp=0 sfao=0
	r = (int64_t)(int32_t)(dmem0[(id + ba0) & 0xff] << 8) - (int64_t)(int32_t)aacc;
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 612: // sub dmode=0 dbp=1 sfao=0
	r = (int64_t)(int32_t)(dmem1[(i->param + ba1) & 0x1f] << 8) - (int64_t)(int32_t)aacc;
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 613: // sub dmode=1 dbp=1 sfao=0
	r = (int64_t)(int32_t)(dmem1[(id + ba1) & 0x1f] << 8) - (int64_t)(int32_t)aacc;
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 614: // sub dmode=0 dbp=0 sfao=1
	r = (int64_t)(int32_t)(dmem0[(i->param + ba0) & 0xff] << 8) - (int64_t)(int32_t)(aacc << 7);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 615: // sub dmode=1 dbp=0 sfao=1
	r = (int64_t)(int32_t)(dmem0[(id + ba0) & 0xff] << 8) - (int64_t)(int32_t)(aacc << 7);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 616: // sub dmode=0 dbp=1 sfao=1
	r = (int64_t)(int32_t)(dmem1[(i->param + ba1) & 0x1f] << 8) - (int64_t)(int32_t)(aacc << 7);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 617: // sub dmode=1 dbp=1 sfao=1
	r = (int64_t)(int32_t)(dmem1[(id + ba1) & 0x1f] << 8) - (int64_t)(int32_t)(aacc << 7);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 618: // sub cmode=0 crm=0 sfao=0
	r = (int64_t)(int32_t)cmem[i->param] - (int64_t)(int32_t)aacc;
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 619: // sub cmode=1 crm=0 sfao=0
	r = (int64_t)(int32_t)cmem[ca] - (int64_t)(int32_t)aacc;
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 620: // sub cmode=0 crm=1 sfao=0
	r = (int64_t)(int32_t)(cmem[i->param] & 0xffff0000) - (int64_t)(int32_t)aacc;
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 621: // sub cmode=1 crm=1 sfao=0
	r = (int64_t)(int32_t)(cmem[ca] & 0xffff0000) - (int64_t)(int32_t)aacc;
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 622: // sub cmode=0 crm=2 sfao=0
	r = (int64_t)(int32_t)(cmem[i->param] << 16) - (int64_t)(int32_t)aacc;
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 623: // sub cmode=1 crm=2 sfao=0
	r = (int64_t)(int32_t)(cmem[ca] << 16) - (int64_t)(int32_t)aacc;
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 624: // sub cmode=0 crm=0 sfao=1
	r = (int64_t)(int32_t)cmem[i->param] - (int64_t)(int32_t)(aacc << 7);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 625: // sub cmode=1 crm=0 sfao=1
	r = (int64_t)(int32_t)cmem[ca] - (int64_t)(int32_t)(aacc << 7);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 626: // sub cmode=0 crm=1 sfao=1
	r = (int64_t)(int32_t)(cmem[i->param] & 0xffff0000) - (int64_t)(int32_t)(aacc << 7);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 627: // sub cmode=1 crm=1 sfao=1
	r = (int64_t)(int32_t)(cmem[ca] & 0xffff0000) - (int64_t)(int32_t)(aacc << 7);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 628: // sub cmode=0 crm=2 sfao=1
	r = (int64_t)(int32_t)(cmem[i->param] << 16) - (int64_t)(int32_t)(aacc << 7);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 629: // sub cmode=1 crm=2 sfao=1
	r = (int64_t)(int32_t)(cmem[ca] << 16) - (int64_t)(int32_t)(aacc << 7);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 630: // sub cmode=0 dmode=0 crm=0 dbp=0
	r = (int64_t)(int32_t)(dmem0[(i->param + ba0) & 0xff] << 8) - (int64_t)(int32_t)cmem[i->param];
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 631: // sub cmode=1 dmode=0 crm=0 dbp=0
	r = (int64_t)(int32_t)(dmem0[(i->param + ba0) & 0xff] << 8) - (int64_t)(int32_t)cmem[ca];
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 632: // sub cmode=0 dmode=1 crm=0 dbp=0
	r = (int64_t)(int32_t)(dmem0[(id + ba0) & 0xff] << 8) - (int64_t)(int32_t)cmem[i->param];
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 633: // sub cmode=1 dmode=1 crm=0 dbp=0
	r = (int64_t)(int32_t)(dmem0[(id + ba0) & 0xff] << 8) - (int64_t)(int32_t)cmem[ca];
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 634: // sub cmode=0 dmode=0 crm=1 dbp=0
	r = (int64_t)(int32_t)(dmem0[(i->param + ba0) & 0xff] << 8) - (int64_t)(int32_t)(cmem[i->param] & 0xffff0000);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 635: // sub cmode=1 dmode=0 crm=1 dbp=0
	r = (int64_t)(int32_t)(dmem0[(i->param + ba0) & 0xff] << 8) - (int64_t)(int32_t)(cmem[ca] & 0xffff0000);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 636: // sub cmode=0 dmode=1 crm=1 dbp=0
	r = (int64_t)(int32_t)(dmem0[(id + ba0) & 0xff] << 8) - (int64_t)(int32_t)(cmem[i->param] & 0xffff0000);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 637: // sub cmode=1 dmode=1 crm=1 dbp=0
	r = (int64_t)(int32_t)(dmem0[(id + ba0) & 0xff] << 8) - (int64_t)(int32_t)(cmem[ca] & 0xffff0000);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 638: // sub cmode=0 dmode=0 crm=2 dbp=0
	r = (int64_t)(int32_t)(dmem0[(i->param + ba0) & 0xff] << 8) - (int64_t)(int32_t)(cmem[i->param] << 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 639: // sub cmode=1 dmode=0 crm=2 dbp=0
	r = (int64_t)(int32_t)(dmem0[(i->param + ba0) & 0xff] << 8) - (int64_t)(int32_t)(cmem[ca] << 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 640: // sub cmode=0 dmode=1 crm=2 dbp=0
	r = (int64_t)(int32_t)(dmem0[(id + ba0) & 0xff] << 8) - (int64_t)(int32_t)(cmem[i->param] << 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 641: // sub cmode=1 dmode=1 crm=2 dbp=0
	r = (int64_t)(int32_t)(dmem0[(id + ba0) & 0xff] << 8) - (int64_t)(int32_t)(cmem[ca] << 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 642: // sub cmode=0 dmode=0 crm=0 dbp=1
	r = (int64_t)(int32_t)(dmem1[(i->param + ba1) & 0x1f] << 8) - (int64_t)(int32_t)cmem[i->param];
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 643: // sub cmode=1 dmode=0 crm=0 dbp=1
	r = (int64_t)(int32_t)(dmem1[(i->param + ba1) & 0x1f] << 8) - (int64_t)(int32_t)cmem[ca];
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 644: // sub cmode=0 dmode=1 crm=0 dbp=1
	r = (int64_t)(int32_t)(dmem1[(id + ba1) & 0x1f] << 8) - (int64_t)(int32_t)cmem[i->param];
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 645: // sub cmode=1 dmode=1 crm=0 dbp=1
	r = (int64_t)(int32_t)(dmem1[(id + ba1) & 0x1f] << 8) - (int64_t)(int32_t)cmem[ca];
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 646: // sub cmode=0 dmode=0 crm=1 dbp=1
	r = (int64_t)(int32_t)(dmem1[(i->param + ba1) & 0x1f] << 8) - (int64_t)(int32_t)(cmem[i->param] & 0xffff0000);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 647: // sub cmode=1 dmode=0 crm=1 dbp=1
	r = (int64_t)(int32_t)(dmem1[(i->param + ba1) & 0x1f] << 8) - (int64_t)(int32_t)(cmem[ca] & 0xffff0000);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 648: // sub cmode=0 dmode=1 crm=1 dbp=1
	r = (int64_t)(int32_t)(dmem1[(id + ba1) & 0x1f] << 8) - (int64_t)(int32_t)(cmem[i->param] & 0xffff0000);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 649: // sub cmode=1 dmode=1 crm=1 dbp=1
	r = (int64_t)(int32_t)(dmem1[(id + ba1) & 0x1f] << 8) - (int64_t)(int32_t)(cmem[ca] & 0xffff0000);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 650: // sub cmode=0 dmode=0 crm=2 dbp=1
	r = (int64_t)(int32_t)(dmem1[(i->param + ba1) & 0x1f] << 8) - (int64_t)(int32_t)(cmem[i->param] << 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 651: // sub cmode=1 dmode=0 crm=2 dbp=1
	r = (int64_t)(int32_t)(dmem1[(i->param + ba1) & 0x1f] << 8) - (int64_t)(int32_t)(cmem[ca] << 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 652: // sub cmode=0 dmode=1 crm=2 dbp=1
	r = (int64_t)(int32_t)(dmem1[(id + ba1) & 0x1f] << 8) - (int64_t)(int32_t)(cmem[i->param] << 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 653: // sub cmode=1 dmode=1 crm=2 dbp=1
	r = (int64_t)(int32_t)(dmem1[(id + ba1) & 0x1f] << 8) - (int64_t)(int32_t)(cmem[ca] << 16);
  if(r < -0x80000000 || r > 0x7fffffff)
    st1 |= ST1_AOV;
  aacc = r;
  break;

case 654: // lacd dmode=0 sfai=0 dbp=0
	d =  (dmem0[(i->param + ba0) & 0xff] << 8);
	aacc = d;
  break;

case 655: // lacd dmode=1 sfai=0 dbp=0
	d =  (dmem0[(id + ba0) & 0xff] << 8);
	aacc = d;
  break;

case 656: // lacd dmode=0 sfai=1 dbp=0
	d = ((int32_t)( (dmem0[(i->param + ba0) & 0xff] << 8))) >> 1;
	aacc = d;
  break;

case 657: // lacd dmode=1 sfai=1 dbp=0
	d = ((int32_t)( (dmem0[(id + ba0) & 0xff] << 8))) >> 1;
	aacc = d;
  break;

case 658: // lacd dmode=0 sfai=0 dbp=1
	d =  (dmem1[(i->param + ba1) & 0x1f] << 8);
	aacc = d;
  break;

case 659: // lacd dmode=1 sfai=0 dbp=1
	d =  (dmem1[(id + ba1) & 0x1f] << 8);
	aacc = d;
  break;

case 660: // lacd dmode=0 sfai=1 dbp=1
	d = ((int32_t)( (dmem1[(i->param + ba1) & 0x1f] << 8))) >> 1;
	aacc = d;
  break;

case 661: // lacd dmode=1 sfai=1 dbp=1
	d = ((int32_t)( (dmem1[(id + ba1) & 0x1f] << 8))) >> 1;
	aacc = d;
  break;

case 662: // lacc cmode=0 crm=0
	aacc = cmem[i->param];
  break;

case 663: // lacc cmode=1 crm=0
	aacc = cmem[ca];
  break;

case 664: // lacc cmode=0 crm=1
	aacc = (cmem[i->param] & 0xffff0000);
  break;

case 665: // lacc cmode=1 crm=1
	aacc = (cmem[ca] & 0xffff0000);
  break;

case 666: // lacc cmode=0 crm=2
	aacc = (cmem[i->param] << 16);
  break;

case 667: // lacc cmode=1 crm=2
	aacc = (cmem[ca] << 16);
  break;

case 668: // and dmode=0 sfai=0 dbp=0
	d =  (dmem0[(i->param + ba0) & 0xff] << 8);
	aacc &= d;
  break;

case 669: // and dmode=1 sfai=0 dbp=0
	d =  (dmem0[(id + ba0) & 0xff] << 8);
	aacc &= d;
  break;

case 670: // and dmode=0 sfai=1 dbp=0
	d = ((int32_t)( (dmem0[(i->param + ba0) & 0xff] << 8))) >> 1;
	aacc &= d;
  break;

case 671: // and dmode=1 sfai=1 dbp=0
	d = ((int32_t)( (dmem0[(id + ba0) & 0xff] << 8))) >> 1;
	aacc &= d;
  break;

case 672: // and dmode=0 sfai=0 dbp=1
	d =  (dmem1[(i->param + ba1) & 0x1f] << 8);
	aacc &= d;
  break;

case 673: // and dmode=1 sfai=0 dbp=1
	d =  (dmem1[(id + ba1) & 0x1f] << 8);
	aacc &= d;
  break;

case 674: // and dmode=0 sfai=1 dbp=1
	d = ((int32_t)( (dmem1[(i->param + ba1) & 0x1f] << 8))) >> 1;
	aacc &= d;
  break;

case 675: // and dmode=1 sfai=1 dbp=1
	d = ((int32_t)( (dmem1[(id + ba1) & 0x1f] << 8))) >> 1;
	aacc &= d;
  break;

case 676: // and cmode=0 crm=0
	aacc &= cmem[i->param];
  break;

case 677: // and cmode=1 crm=0
	aacc &= cmem[ca];
  break;

case 678: // and cmode=0 crm=1
	aacc &= (cmem[i->param] & 0xffff0000);
  break;

case 679: // and cmode=1 crm=1
	aacc &= (cmem[ca] & 0xffff0000);
  break;

case 680: // and cmode=0 crm=2
	aacc &= (cmem[i->param] << 16);
  break;

case 681: // and cmode=1 crm=2
	aacc &= (cmem[ca] << 16);
  break;

case 682: // and cmode=0 dmode=0 sfai=0 crm=0 dbp=0
	d =  (dmem0[(i->param + ba0) & 0xff] << 8);
	aacc = cmem[i->param] & d;
  break;

case 683: // and cmode=1 dmode=0 sfai=0 crm=0 dbp=0
	d =  (dmem0[(i->param + ba0) & 0xff] << 8);
	aacc = cmem[ca] & d;
  break;

case 684: // and cmode=0 dmode=1 sfai=0 crm=0 dbp=0
	d =  (dmem0[(id + ba0) & 0xff] << 8);
	aacc = cmem[i->param] & d;
  break;

case 685: // and cmode=1 dmode=1 sfai=0 crm=0 dbp=0
	d =  (dmem0[(id + ba0) & 0xff] << 8);
	aacc = cmem[ca] & d;
  break;

case 686: // and cmode=0 dmode=0 sfai=1 crm=0 dbp=0
	d = ((int32_t)( (dmem0[(i->param + ba0) & 0xff] << 8))) >> 1;
	aacc = cmem[i->param] & d;
  break;

case 687: // and cmode=1 dmode=0 sfai=1 crm=0 dbp=0
	d = ((int32_t)( (dmem0[(i->param + ba0) & 0xff] << 8))) >> 1;
	aacc = cmem[ca] & d;
  break;

case 688: // and cmode=0 dmode=1 sfai=1 crm=0 dbp=0
	d = ((int32_t)( (dmem0[(id + ba0) & 0xff] << 8))) >> 1;
	aacc = cmem[i->param] & d;
  break;

case 689: // and cmode=1 dmode=1 sfai=1 crm=0 dbp=0
	d = ((int32_t)( (dmem0[(id + ba0) & 0xff] << 8))) >> 1;
	aacc = cmem[ca] & d;
  break;

case 690: // and cmode=0 dmode=0 sfai=0 crm=1 dbp=0
	d =  (dmem0[(i->param + ba0) & 0xff] << 8);
	aacc = (cmem[i->param] & 0xffff0000) & d;
  break;

case 691: // and cmode=1 dmode=0 sfai=0 crm=1 dbp=0
	d =  (dmem0[(i->param + ba0) & 0xff] << 8);
	aacc = (cmem[ca] & 0xffff0000) & d;
  break;

case 692: // and cmode=0 dmode=1 sfai=0 crm=1 dbp=0
	d =  (dmem0[(id + ba0) & 0xff] << 8);
	aacc = (cmem[i->param] & 0xffff0000) & d;
  break;

case 693: // and cmode=1 dmode=1 sfai=0 crm=1 dbp=0
	d =  (dmem0[(id + ba0) & 0xff] << 8);
	aacc = (cmem[ca] & 0xffff0000) & d;
  break;

case 694: // and cmode=0 dmode=0 sfai=1 crm=1 dbp=0
	d = ((int32_t)( (dmem0[(i->param + ba0) & 0xff] << 8))) >> 1;
	aacc = (cmem[i->param] & 0xffff0000) & d;
  break;

case 695: // and cmode=1 dmode=0 sfai=1 crm=1 dbp=0
	d = ((int32_t)( (dmem0[(i->param + ba0) & 0xff] << 8))) >> 1;
	aacc = (cmem[ca] & 0xffff0000) & d;
  break;

case 696: // and cmode=0 dmode=1 sfai=1 crm=1 dbp=0
	d = ((int32_t)( (dmem0[(id + ba0) & 0xff] << 8))) >> 1;
	aacc = (cmem[i->param] & 0xffff0000) & d;
  break;

case 697: // and cmode=1 dmode=1 sfai=1 crm=1 dbp=0
	d = ((int32_t)( (dmem0[(id + ba0) & 0xff] << 8))) >> 1;
	aacc = (cmem[ca] & 0xffff0000) & d;
  break;

case 698: // and cmode=0 dmode=0 sfai=0 crm=2 dbp=0
	d =  (dmem0[(i->param + ba0) & 0xff] << 8);
	aacc = (cmem[i->param] << 16) & d;
  break;

case 699: // and cmode=1 dmode=0 sfai=0 crm=2 dbp=0
	d =  (dmem0[(i->param + ba0) & 0xff] << 8);
	aacc = (cmem[ca] << 16) & d;
  break;

case 700: // and cmode=0 dmode=1 sfai=0 crm=2 dbp=0
	d =  (dmem0[(id + ba0) & 0xff] << 8);
	aacc = (cmem[i->param] << 16) & d;
  break;

case 701: // and cmode=1 dmode=1 sfai=0 crm=2 dbp=0
	d =  (dmem0[(id + ba0) & 0xff] << 8);
	aacc = (cmem[ca] << 16) & d;
  break;

case 702: // and cmode=0 dmode=0 sfai=1 crm=2 dbp=0
	d = ((int32_t)( (dmem0[(i->param + ba0) & 0xff] << 8))) >> 1;
	aacc = (cmem[i->param] << 16) & d;
  break;

case 703: // and cmode=1 dmode=0 sfai=1 crm=2 dbp=0
	d = ((int32_t)( (dmem0[(i->param + ba0) & 0xff] << 8))) >> 1;
	aacc = (cmem[ca] << 16) & d;
  break;

case 704: // and cmode=0 dmode=1 sfai=1 crm=2 dbp=0
	d = ((int32_t)( (dmem0[(id + ba0) & 0xff] << 8))) >> 1;
	aacc = (cmem[i->param] << 16) & d;
  break;

case 705: // and cmode=1 dmode=1 sfai=1 crm=2 dbp=0
	d = ((int32_t)( (dmem0[(id + ba0) & 0xff] << 8))) >> 1;
	aacc = (cmem[ca] << 16) & d;
  break;

case 706: // and cmode=0 dmode=0 sfai=0 crm=0 dbp=1
	d =  (dmem1[(i->param + ba1) & 0x1f] << 8);
	aacc = cmem[i->param] & d;
  break;

case 707: // and cmode=1 dmode=0 sfai=0 crm=0 dbp=1
	d =  (dmem1[(i->param + ba1) & 0x1f] << 8);
	aacc = cmem[ca] & d;
  break;

case 708: // and cmode=0 dmode=1 sfai=0 crm=0 dbp=1
	d =  (dmem1[(id + ba1) & 0x1f] << 8);
	aacc = cmem[i->param] & d;
  break;

case 709: // and cmode=1 dmode=1 sfai=0 crm=0 dbp=1
	d =  (dmem1[(id + ba1) & 0x1f] << 8);
	aacc = cmem[ca] & d;
  break;

case 710: // and cmode=0 dmode=0 sfai=1 crm=0 dbp=1
	d = ((int32_t)( (dmem1[(i->param + ba1) & 0x1f] << 8))) >> 1;
	aacc = cmem[i->param] & d;
  break;

case 711: // and cmode=1 dmode=0 sfai=1 crm=0 dbp=1
	d = ((int32_t)( (dmem1[(i->param + ba1) & 0x1f] << 8))) >> 1;
	aacc = cmem[ca] & d;
  break;

case 712: // and cmode=0 dmode=1 sfai=1 crm=0 dbp=1
	d = ((int32_t)( (dmem1[(id + ba1) & 0x1f] << 8))) >> 1;
	aacc = cmem[i->param] & d;
  break;

case 713: // and cmode=1 dmode=1 sfai=1 crm=0 dbp=1
	d = ((int32_t)( (dmem1[(id + ba1) & 0x1f] << 8))) >> 1;
	aacc = cmem[ca] & d;
  break;

case 714: // and cmode=0 dmode=0 sfai=0 crm=1 dbp=1
	d =  (dmem1[(i->param + ba1) & 0x1f] << 8);
	aacc = (cmem[i->param] & 0xffff0000) & d;
  break;

case 715: // and cmode=1 dmode=0 sfai=0 crm=1 dbp=1
	d =  (dmem1[(i->param + ba1) & 0x1f] << 8);
	aacc = (cmem[ca] & 0xffff0000) & d;
  break;

case 716: // and cmode=0 dmode=1 sfai=0 crm=1 dbp=1
	d =  (dmem1[(id + ba1) & 0x1f] << 8);
	aacc = (cmem[i->param] & 0xffff0000) & d;
  break;

case 717: // and cmode=1 dmode=1 sfai=0 crm=1 dbp=1
	d =  (dmem1[(id + ba1) & 0x1f] << 8);
	aacc = (cmem[ca] & 0xffff0000) & d;
  break;

case 718: // and cmode=0 dmode=0 sfai=1 crm=1 dbp=1
	d = ((int32_t)( (dmem1[(i->param + ba1) & 0x1f] << 8))) >> 1;
	aacc = (cmem[i->param] & 0xffff0000) & d;
  break;

case 719: // and cmode=1 dmode=0 sfai=1 crm=1 dbp=1
	d = ((int32_t)( (dmem1[(i->param + ba1) & 0x1f] << 8))) >> 1;
	aacc = (cmem[ca] & 0xffff0000) & d;
  break;

case 720: // and cmode=0 dmode=1 sfai=1 crm=1 dbp=1
	d = ((int32_t)( (dmem1[(id + ba1) & 0x1f] << 8))) >> 1;
	aacc = (cmem[i->param] & 0xffff0000) & d;
  break;

case 721: // and cmode=1 dmode=1 sfai=1 crm=1 dbp=1
	d = ((int32_t)( (dmem1[(id + ba1) & 0x1f] << 8))) >> 1;
	aacc = (cmem[ca] & 0xffff0000) & d;
  break;

case 722: // and cmode=0 dmode=0 sfai=0 crm=2 dbp=1
	d =  (dmem1[(i->param + ba1) & 0x1f] << 8);
	aacc = (cmem[i->param] << 16) & d;
  break;

case 723: // and cmode=1 dmode=0 sfai=0 crm=2 dbp=1
	d =  (dmem1[(i->param + ba1) & 0x1f] << 8);
	aacc = (cmem[ca] << 16) & d;
  break;

case 724: // and cmode=0 dmode=1 sfai=0 crm=2 dbp=1
	d =  (dmem1[(id + ba1) & 0x1f] << 8);
	aacc = (cmem[i->param] << 16) & d;
  break;

case 725: // and cmode=1 dmode=1 sfai=0 crm=2 dbp=1
	d =  (dmem1[(id + ba1) & 0x1f] << 8);
	aacc = (cmem[ca] << 16) & d;
  break;

case 726: // and cmode=0 dmode=0 sfai=1 crm=2 dbp=1
	d = ((int32_t)( (dmem1[(i->param + ba1) & 0x1f] << 8))) >> 1;
	aacc = (cmem[i->param] << 16) & d;
  break;

case 727: // and cmode=1 dmode=0 sfai=1 crm=2 dbp=1
	d = ((int32_t)( (dmem1[(i->param + ba1) & 0x1f] << 8))) >> 1;
	aacc = (cmem[ca] << 16) & d;
  break;

case 728: // and cmode=0 dmode=1 sfai=1 crm=2 dbp=1
	d = ((int32_t)( (dmem1[(id + ba1) & 0x1f] << 8))) >> 1;
	aacc = (cmem[i->param] << 16) & d;
  break;

case 729: // and cmode=1 dmode=1 sfai=1 crm=2 dbp=1
	d = ((int32_t)( (dmem1[(id + ba1) & 0x1f] << 8))) >> 1;
	aacc = (cmem[ca] << 16) & d;
  break;

case 730: // or dmode=0 sfai=0 dbp=0
	d =  (dmem0[(i->param + ba0) & 0xff] << 8);
	aacc |= d;
  break;

case 731: // or dmode=1 sfai=0 dbp=0
	d =  (dmem0[(id + ba0) & 0xff] << 8);
	aacc |= d;
  break;

case 732: // or dmode=0 sfai=1 dbp=0
	d = ((int32_t)( (dmem0[(i->param + ba0) & 0xff] << 8))) >> 1;
	aacc |= d;
  break;

case 733: // or dmode=1 sfai=1 dbp=0
	d = ((int32_t)( (dmem0[(id + ba0) & 0xff] << 8))) >> 1;
	aacc |= d;
  break;

case 734: // or dmode=0 sfai=0 dbp=1
	d =  (dmem1[(i->param + ba1) & 0x1f] << 8);
	aacc |= d;
  break;

case 735: // or dmode=1 sfai=0 dbp=1
	d =  (dmem1[(id + ba1) & 0x1f] << 8);
	aacc |= d;
  break;

case 736: // or dmode=0 sfai=1 dbp=1
	d = ((int32_t)( (dmem1[(i->param + ba1) & 0x1f] << 8))) >> 1;
	aacc |= d;
  break;

case 737: // or dmode=1 sfai=1 dbp=1
	d = ((int32_t)( (dmem1[(id + ba1) & 0x1f] << 8))) >> 1;
	aacc |= d;
  break;

case 738: // or cmode=0 crm=0
	aacc |= cmem[i->param];
  break;

case 739: // or cmode=1 crm=0
	aacc |= cmem[ca];
  break;

case 740: // or cmode=0 crm=1
	aacc |= (cmem[i->param] & 0xffff0000);
  break;

case 741: // or cmode=1 crm=1
	aacc |= (cmem[ca] & 0xffff0000);
  break;

case 742: // or cmode=0 crm=2
	aacc |= (cmem[i->param] << 16);
  break;

case 743: // or cmode=1 crm=2
	aacc |= (cmem[ca] << 16);
  break;

case 744: // or cmode=0 dmode=0 sfai=0 crm=0 dbp=0
	d =  (dmem0[(i->param + ba0) & 0xff] << 8);
	aacc = cmem[i->param] | d;
  break;

case 745: // or cmode=1 dmode=0 sfai=0 crm=0 dbp=0
	d =  (dmem0[(i->param + ba0) & 0xff] << 8);
	aacc = cmem[ca] | d;
  break;

case 746: // or cmode=0 dmode=1 sfai=0 crm=0 dbp=0
	d =  (dmem0[(id + ba0) & 0xff] << 8);
	aacc = cmem[i->param] | d;
  break;

case 747: // or cmode=1 dmode=1 sfai=0 crm=0 dbp=0
	d =  (dmem0[(id + ba0) & 0xff] << 8);
	aacc = cmem[ca] | d;
  break;

case 748: // or cmode=0 dmode=0 sfai=1 crm=0 dbp=0
	d = ((int32_t)( (dmem0[(i->param + ba0) & 0xff] << 8))) >> 1;
	aacc = cmem[i->param] | d;
  break;

case 749: // or cmode=1 dmode=0 sfai=1 crm=0 dbp=0
	d = ((int32_t)( (dmem0[(i->param + ba0) & 0xff] << 8))) >> 1;
	aacc = cmem[ca] | d;
  break;

case 750: // or cmode=0 dmode=1 sfai=1 crm=0 dbp=0
	d = ((int32_t)( (dmem0[(id + ba0) & 0xff] << 8))) >> 1;
	aacc = cmem[i->param] | d;
  break;

case 751: // or cmode=1 dmode=1 sfai=1 crm=0 dbp=0
	d = ((int32_t)( (dmem0[(id + ba0) & 0xff] << 8))) >> 1;
	aacc = cmem[ca] | d;
  break;

case 752: // or cmode=0 dmode=0 sfai=0 crm=1 dbp=0
	d =  (dmem0[(i->param + ba0) & 0xff] << 8);
	aacc = (cmem[i->param] & 0xffff0000) | d;
  break;

case 753: // or cmode=1 dmode=0 sfai=0 crm=1 dbp=0
	d =  (dmem0[(i->param + ba0) & 0xff] << 8);
	aacc = (cmem[ca] & 0xffff0000) | d;
  break;

case 754: // or cmode=0 dmode=1 sfai=0 crm=1 dbp=0
	d =  (dmem0[(id + ba0) & 0xff] << 8);
	aacc = (cmem[i->param] & 0xffff0000) | d;
  break;

case 755: // or cmode=1 dmode=1 sfai=0 crm=1 dbp=0
	d =  (dmem0[(id + ba0) & 0xff] << 8);
	aacc = (cmem[ca] & 0xffff0000) | d;
  break;

case 756: // or cmode=0 dmode=0 sfai=1 crm=1 dbp=0
	d = ((int32_t)( (dmem0[(i->param + ba0) & 0xff] << 8))) >> 1;
	aacc = (cmem[i->param] & 0xffff0000) | d;
  break;

case 757: // or cmode=1 dmode=0 sfai=1 crm=1 dbp=0
	d = ((int32_t)( (dmem0[(i->param + ba0) & 0xff] << 8))) >> 1;
	aacc = (cmem[ca] & 0xffff0000) | d;
  break;

case 758: // or cmode=0 dmode=1 sfai=1 crm=1 dbp=0
	d = ((int32_t)( (dmem0[(id + ba0) & 0xff] << 8))) >> 1;
	aacc = (cmem[i->param] & 0xffff0000) | d;
  break;

case 759: // or cmode=1 dmode=1 sfai=1 crm=1 dbp=0
	d = ((int32_t)( (dmem0[(id + ba0) & 0xff] << 8))) >> 1;
	aacc = (cmem[ca] & 0xffff0000) | d;
  break;

case 760: // or cmode=0 dmode=0 sfai=0 crm=2 dbp=0
	d =  (dmem0[(i->param + ba0) & 0xff] << 8);
	aacc = (cmem[i->param] << 16) | d;
  break;

case 761: // or cmode=1 dmode=0 sfai=0 crm=2 dbp=0
	d =  (dmem0[(i->param + ba0) & 0xff] << 8);
	aacc = (cmem[ca] << 16) | d;
  break;

case 762: // or cmode=0 dmode=1 sfai=0 crm=2 dbp=0
	d =  (dmem0[(id + ba0) & 0xff] << 8);
	aacc = (cmem[i->param] << 16) | d;
  break;

case 763: // or cmode=1 dmode=1 sfai=0 crm=2 dbp=0
	d =  (dmem0[(id + ba0) & 0xff] << 8);
	aacc = (cmem[ca] << 16) | d;
  break;

case 764: // or cmode=0 dmode=0 sfai=1 crm=2 dbp=0
	d = ((int32_t)( (dmem0[(i->param + ba0) & 0xff] << 8))) >> 1;
	aacc = (cmem[i->param] << 16) | d;
  break;

case 765: // or cmode=1 dmode=0 sfai=1 crm=2 dbp=0
	d = ((int32_t)( (dmem0[(i->param + ba0) & 0xff] << 8))) >> 1;
	aacc = (cmem[ca] << 16) | d;
  break;

case 766: // or cmode=0 dmode=1 sfai=1 crm=2 dbp=0
	d = ((int32_t)( (dmem0[(id + ba0) & 0xff] << 8))) >> 1;
	aacc = (cmem[i->param] << 16) | d;
  break;

case 767: // or cmode=1 dmode=1 sfai=1 crm=2 dbp=0
	d = ((int32_t)( (dmem0[(id + ba0) & 0xff] << 8))) >> 1;
	aacc = (cmem[ca] << 16) | d;
  break;

case 768: // or cmode=0 dmode=0 sfai=0 crm=0 dbp=1
	d =  (dmem1[(i->param + ba1) & 0x1f] << 8);
	aacc = cmem[i->param] | d;
  break;

case 769: // or cmode=1 dmode=0 sfai=0 crm=0 dbp=1
	d =  (dmem1[(i->param + ba1) & 0x1f] << 8);
	aacc = cmem[ca] | d;
  break;

case 770: // or cmode=0 dmode=1 sfai=0 crm=0 dbp=1
	d =  (dmem1[(id + ba1) & 0x1f] << 8);
	aacc = cmem[i->param] | d;
  break;

case 771: // or cmode=1 dmode=1 sfai=0 crm=0 dbp=1
	d =  (dmem1[(id + ba1) & 0x1f] << 8);
	aacc = cmem[ca] | d;
  break;

case 772: // or cmode=0 dmode=0 sfai=1 crm=0 dbp=1
	d = ((int32_t)( (dmem1[(i->param + ba1) & 0x1f] << 8))) >> 1;
	aacc = cmem[i->param] | d;
  break;

case 773: // or cmode=1 dmode=0 sfai=1 crm=0 dbp=1
	d = ((int32_t)( (dmem1[(i->param + ba1) & 0x1f] << 8))) >> 1;
	aacc = cmem[ca] | d;
  break;

case 774: // or cmode=0 dmode=1 sfai=1 crm=0 dbp=1
	d = ((int32_t)( (dmem1[(id + ba1) & 0x1f] << 8))) >> 1;
	aacc = cmem[i->param] | d;
  break;

case 775: // or cmode=1 dmode=1 sfai=1 crm=0 dbp=1
	d = ((int32_t)( (dmem1[(id + ba1) & 0x1f] << 8))) >> 1;
	aacc = cmem[ca] | d;
  break;

case 776: // or cmode=0 dmode=0 sfai=0 crm=1 dbp=1
	d =  (dmem1[(i->param + ba1) & 0x1f] << 8);
	aacc = (cmem[i->param] & 0xffff0000) | d;
  break;

case 777: // or cmode=1 dmode=0 sfai=0 crm=1 dbp=1
	d =  (dmem1[(i->param + ba1) & 0x1f] << 8);
	aacc = (cmem[ca] & 0xffff0000) | d;
  break;

case 778: // or cmode=0 dmode=1 sfai=0 crm=1 dbp=1
	d =  (dmem1[(id + ba1) & 0x1f] << 8);
	aacc = (cmem[i->param] & 0xffff0000) | d;
  break;

case 779: // or cmode=1 dmode=1 sfai=0 crm=1 dbp=1
	d =  (dmem1[(id + ba1) & 0x1f] << 8);
	aacc = (cmem[ca] & 0xffff0000) | d;
  break;

case 780: // or cmode=0 dmode=0 sfai=1 crm=1 dbp=1
	d = ((int32_t)( (dmem1[(i->param + ba1) & 0x1f] << 8))) >> 1;
	aacc = (cmem[i->param] & 0xffff0000) | d;
  break;

case 781: // or cmode=1 dmode=0 sfai=1 crm=1 dbp=1
	d = ((int32_t)( (dmem1[(i->param + ba1) & 0x1f] << 8))) >> 1;
	aacc = (cmem[ca] & 0xffff0000) | d;
  break;

case 782: // or cmode=0 dmode=1 sfai=1 crm=1 dbp=1
	d = ((int32_t)( (dmem1[(id + ba1) & 0x1f] << 8))) >> 1;
	aacc = (cmem[i->param] & 0xffff0000) | d;
  break;

case 783: // or cmode=1 dmode=1 sfai=1 crm=1 dbp=1
	d = ((int32_t)( (dmem1[(id + ba1) & 0x1f] << 8))) >> 1;
	aacc = (cmem[ca] & 0xffff0000) | d;
  break;

case 784: // or cmode=0 dmode=0 sfai=0 crm=2 dbp=1
	d =  (dmem1[(i->param + ba1) & 0x1f] << 8);
	aacc = (cmem[i->param] << 16) | d;
  break;

case 785: // or cmode=1 dmode=0 sfai=0 crm=2 dbp=1
	d =  (dmem1[(i->param + ba1) & 0x1f] << 8);
	aacc = (cmem[ca] << 16) | d;
  break;

case 786: // or cmode=0 dmode=1 sfai=0 crm=2 dbp=1
	d =  (dmem1[(id + ba1) & 0x1f] << 8);
	aacc = (cmem[i->param] << 16) | d;
  break;

case 787: // or cmode=1 dmode=1 sfai=0 crm=2 dbp=1
	d =  (dmem1[(id + ba1) & 0x1f] << 8);
	aacc = (cmem[ca] << 16) | d;
  break;

case 788: // or cmode=0 dmode=0 sfai=1 crm=2 dbp=1
	d = ((int32_t)( (dmem1[(i->param + ba1) & 0x1f] << 8))) >> 1;
	aacc = (cmem[i->param] << 16) | d;
  break;

case 789: // or cmode=1 dmode=0 sfai=1 crm=2 dbp=1
	d = ((int32_t)( (dmem1[(i->param + ba1) & 0x1f] << 8))) >> 1;
	aacc = (cmem[ca] << 16) | d;
  break;

case 790: // or cmode=0 dmode=1 sfai=1 crm=2 dbp=1
	d = ((int32_t)( (dmem1[(id + ba1) & 0x1f] << 8))) >> 1;
	aacc = (cmem[i->param] << 16) | d;
  break;

case 791: // or cmode=1 dmode=1 sfai=1 crm=2 dbp=1
	d = ((int32_t)( (dmem1[(id + ba1) & 0x1f] << 8))) >> 1;
	aacc = (cmem[ca] << 16) | d;
  break;

case 792: // mpy cmode=0 dmode=0 crm=0 dbp=0
	d = dmem0[(i->param + ba0) & 0xff];
	if(d & 0x00800000)
	d |= 0xff000000;
	creg = c = cmem[i->param];
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)d;
	macc = r >> 7;
  break;

case 793: // mpy cmode=1 dmode=0 crm=0 dbp=0
	d = dmem0[(i->param + ba0) & 0xff];
	if(d & 0x00800000)
	d |= 0xff000000;
	creg = c = cmem[ca];
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)d;
	macc = r >> 7;
  break;

case 794: // mpy cmode=0 dmode=1 crm=0 dbp=0
	d = dmem0[(id + ba0) & 0xff];
	if(d & 0x00800000)
	d |= 0xff000000;
	creg = c = cmem[i->param];
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)d;
	macc = r >> 7;
  break;

case 795: // mpy cmode=1 dmode=1 crm=0 dbp=0
	d = dmem0[(id + ba0) & 0xff];
	if(d & 0x00800000)
	d |= 0xff000000;
	creg = c = cmem[ca];
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)d;
	macc = r >> 7;
  break;

case 796: // mpy cmode=0 dmode=0 crm=1 dbp=0
	d = dmem0[(i->param + ba0) & 0xff];
	if(d & 0x00800000)
	d |= 0xff000000;
	creg = c = (cmem[i->param] & 0xffff0000);
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)d;
	macc = r >> 7;
  break;

case 797: // mpy cmode=1 dmode=0 crm=1 dbp=0
	d = dmem0[(i->param + ba0) & 0xff];
	if(d & 0x00800000)
	d |= 0xff000000;
	creg = c = (cmem[ca] & 0xffff0000);
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)d;
	macc = r >> 7;
  break;

case 798: // mpy cmode=0 dmode=1 crm=1 dbp=0
	d = dmem0[(id + ba0) & 0xff];
	if(d & 0x00800000)
	d |= 0xff000000;
	creg = c = (cmem[i->param] & 0xffff0000);
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)d;
	macc = r >> 7;
  break;

case 799: // mpy cmode=1 dmode=1 crm=1 dbp=0
	d = dmem0[(id + ba0) & 0xff];
	if(d & 0x00800000)
	d |= 0xff000000;
	creg = c = (cmem[ca] & 0xffff0000);
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)d;
	macc = r >> 7;
  break;

case 800: // mpy cmode=0 dmode=0 crm=2 dbp=0
	d = dmem0[(i->param + ba0) & 0xff];
	if(d & 0x00800000)
	d |= 0xff000000;
	creg = c = (cmem[i->param] << 16);
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)d;
	macc = r >> 7;
  break;

case 801: // mpy cmode=1 dmode=0 crm=2 dbp=0
	d = dmem0[(i->param + ba0) & 0xff];
	if(d & 0x00800000)
	d |= 0xff000000;
	creg = c = (cmem[ca] << 16);
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)d;
	macc = r >> 7;
  break;

case 802: // mpy cmode=0 dmode=1 crm=2 dbp=0
	d = dmem0[(id + ba0) & 0xff];
	if(d & 0x00800000)
	d |= 0xff000000;
	creg = c = (cmem[i->param] << 16);
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)d;
	macc = r >> 7;
  break;

case 803: // mpy cmode=1 dmode=1 crm=2 dbp=0
	d = dmem0[(id + ba0) & 0xff];
	if(d & 0x00800000)
	d |= 0xff000000;
	creg = c = (cmem[ca] << 16);
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)d;
	macc = r >> 7;
  break;

case 804: // mpy cmode=0 dmode=0 crm=0 dbp=1
	d = dmem1[(i->param + ba1) & 0x1f];
	if(d & 0x00800000)
	d |= 0xff000000;
	creg = c = cmem[i->param];
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)d;
	macc = r >> 7;
  break;

case 805: // mpy cmode=1 dmode=0 crm=0 dbp=1
	d = dmem1[(i->param + ba1) & 0x1f];
	if(d & 0x00800000)
	d |= 0xff000000;
	creg = c = cmem[ca];
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)d;
	macc = r >> 7;
  break;

case 806: // mpy cmode=0 dmode=1 crm=0 dbp=1
	d = dmem1[(id + ba1) & 0x1f];
	if(d & 0x00800000)
	d |= 0xff000000;
	creg = c = cmem[i->param];
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)d;
	macc = r >> 7;
  break;

case 807: // mpy cmode=1 dmode=1 crm=0 dbp=1
	d = dmem1[(id + ba1) & 0x1f];
	if(d & 0x00800000)
	d |= 0xff000000;
	creg = c = cmem[ca];
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)d;
	macc = r >> 7;
  break;

case 808: // mpy cmode=0 dmode=0 crm=1 dbp=1
	d = dmem1[(i->param + ba1) & 0x1f];
	if(d & 0x00800000)
	d |= 0xff000000;
	creg = c = (cmem[i->param] & 0xffff0000);
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)d;
	macc = r >> 7;
  break;

case 809: // mpy cmode=1 dmode=0 crm=1 dbp=1
	d = dmem1[(i->param + ba1) & 0x1f];
	if(d & 0x00800000)
	d |= 0xff000000;
	creg = c = (cmem[ca] & 0xffff0000);
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)d;
	macc = r >> 7;
  break;

case 810: // mpy cmode=0 dmode=1 crm=1 dbp=1
	d = dmem1[(id + ba1) & 0x1f];
	if(d & 0x00800000)
	d |= 0xff000000;
	creg = c = (cmem[i->param] & 0xffff0000);
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)d;
	macc = r >> 7;
  break;

case 811: // mpy cmode=1 dmode=1 crm=1 dbp=1
	d = dmem1[(id + ba1) & 0x1f];
	if(d & 0x00800000)
	d |= 0xff000000;
	creg = c = (cmem[ca] & 0xffff0000);
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)d;
	macc = r >> 7;
  break;

case 812: // mpy cmode=0 dmode=0 crm=2 dbp=1
	d = dmem1[(i->param + ba1) & 0x1f];
	if(d & 0x00800000)
	d |= 0xff000000;
	creg = c = (cmem[i->param] << 16);
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)d;
	macc = r >> 7;
  break;

case 813: // mpy cmode=1 dmode=0 crm=2 dbp=1
	d = dmem1[(i->param + ba1) & 0x1f];
	if(d & 0x00800000)
	d |= 0xff000000;
	creg = c = (cmem[ca] << 16);
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)d;
	macc = r >> 7;
  break;

case 814: // mpy cmode=0 dmode=1 crm=2 dbp=1
	d = dmem1[(id + ba1) & 0x1f];
	if(d & 0x00800000)
	d |= 0xff000000;
	creg = c = (cmem[i->param] << 16);
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)d;
	macc = r >> 7;
  break;

case 815: // mpy cmode=1 dmode=1 crm=2 dbp=1
	d = dmem1[(id + ba1) & 0x1f];
	if(d & 0x00800000)
	d |= 0xff000000;
	creg = c = (cmem[ca] << 16);
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)d;
	macc = r >> 7;
  break;

case 816: // mpy cmode=0 crm=0 sfao=0
	creg = c = cmem[i->param];
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)aacc;
	macc = r >> 15;
  break;

case 817: // mpy cmode=1 crm=0 sfao=0
	creg = c = cmem[ca];
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)aacc;
	macc = r >> 15;
  break;

case 818: // mpy cmode=0 crm=1 sfao=0
	creg = c = (cmem[i->param] & 0xffff0000);
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)aacc;
	macc = r >> 15;
  break;

case 819: // mpy cmode=1 crm=1 sfao=0
	creg = c = (cmem[ca] & 0xffff0000);
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)aacc;
	macc = r >> 15;
  break;

case 820: // mpy cmode=0 crm=2 sfao=0
	creg = c = (cmem[i->param] << 16);
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)aacc;
	macc = r >> 15;
  break;

case 821: // mpy cmode=1 crm=2 sfao=0
	creg = c = (cmem[ca] << 16);
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)aacc;
	macc = r >> 15;
  break;

case 822: // mpy cmode=0 crm=0 sfao=1
	creg = c = cmem[i->param];
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)(aacc << 7);
	macc = r >> 15;
  break;

case 823: // mpy cmode=1 crm=0 sfao=1
	creg = c = cmem[ca];
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)(aacc << 7);
	macc = r >> 15;
  break;

case 824: // mpy cmode=0 crm=1 sfao=1
	creg = c = (cmem[i->param] & 0xffff0000);
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)(aacc << 7);
	macc = r >> 15;
  break;

case 825: // mpy cmode=1 crm=1 sfao=1
	creg = c = (cmem[ca] & 0xffff0000);
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)(aacc << 7);
	macc = r >> 15;
  break;

case 826: // mpy cmode=0 crm=2 sfao=1
	creg = c = (cmem[i->param] << 16);
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)(aacc << 7);
	macc = r >> 15;
  break;

case 827: // mpy cmode=1 crm=2 sfao=1
	creg = c = (cmem[ca] << 16);
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)(aacc << 7);
	macc = r >> 15;
  break;

case 828: // mac cmode=0 dmode=0 crm=0 dbp=0 sfma=0
	d = dmem0[(i->param + ba0) & 0xff];
	if(d & 0x00800000)
	d |= 0xff000000;
	creg = c = cmem[i->param];
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)d;
	macc = macc + (r >> 7);
  break;

case 829: // mac cmode=1 dmode=0 crm=0 dbp=0 sfma=0
	d = dmem0[(i->param + ba0) & 0xff];
	if(d & 0x00800000)
	d |= 0xff000000;
	creg = c = cmem[ca];
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)d;
	macc = macc + (r >> 7);
  break;

case 830: // mac cmode=0 dmode=1 crm=0 dbp=0 sfma=0
	d = dmem0[(id + ba0) & 0xff];
	if(d & 0x00800000)
	d |= 0xff000000;
	creg = c = cmem[i->param];
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)d;
	macc = macc + (r >> 7);
  break;

case 831: // mac cmode=1 dmode=1 crm=0 dbp=0 sfma=0
	d = dmem0[(id + ba0) & 0xff];
	if(d & 0x00800000)
	d |= 0xff000000;
	creg = c = cmem[ca];
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)d;
	macc = macc + (r >> 7);
  break;

case 832: // mac cmode=0 dmode=0 crm=1 dbp=0 sfma=0
	d = dmem0[(i->param + ba0) & 0xff];
	if(d & 0x00800000)
	d |= 0xff000000;
	creg = c = (cmem[i->param] & 0xffff0000);
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)d;
	macc = macc + (r >> 7);
  break;

case 833: // mac cmode=1 dmode=0 crm=1 dbp=0 sfma=0
	d = dmem0[(i->param + ba0) & 0xff];
	if(d & 0x00800000)
	d |= 0xff000000;
	creg = c = (cmem[ca] & 0xffff0000);
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)d;
	macc = macc + (r >> 7);
  break;

case 834: // mac cmode=0 dmode=1 crm=1 dbp=0 sfma=0
	d = dmem0[(id + ba0) & 0xff];
	if(d & 0x00800000)
	d |= 0xff000000;
	creg = c = (cmem[i->param] & 0xffff0000);
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)d;
	macc = macc + (r >> 7);
  break;

case 835: // mac cmode=1 dmode=1 crm=1 dbp=0 sfma=0
	d = dmem0[(id + ba0) & 0xff];
	if(d & 0x00800000)
	d |= 0xff000000;
	creg = c = (cmem[ca] & 0xffff0000);
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)d;
	macc = macc + (r >> 7);
  break;

case 836: // mac cmode=0 dmode=0 crm=2 dbp=0 sfma=0
	d = dmem0[(i->param + ba0) & 0xff];
	if(d & 0x00800000)
	d |= 0xff000000;
	creg = c = (cmem[i->param] << 16);
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)d;
	macc = macc + (r >> 7);
  break;

case 837: // mac cmode=1 dmode=0 crm=2 dbp=0 sfma=0
	d = dmem0[(i->param + ba0) & 0xff];
	if(d & 0x00800000)
	d |= 0xff000000;
	creg = c = (cmem[ca] << 16);
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)d;
	macc = macc + (r >> 7);
  break;

case 838: // mac cmode=0 dmode=1 crm=2 dbp=0 sfma=0
	d = dmem0[(id + ba0) & 0xff];
	if(d & 0x00800000)
	d |= 0xff000000;
	creg = c = (cmem[i->param] << 16);
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)d;
	macc = macc + (r >> 7);
  break;

case 839: // mac cmode=1 dmode=1 crm=2 dbp=0 sfma=0
	d = dmem0[(id + ba0) & 0xff];
	if(d & 0x00800000)
	d |= 0xff000000;
	creg = c = (cmem[ca] << 16);
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)d;
	macc = macc + (r >> 7);
  break;

case 840: // mac cmode=0 dmode=0 crm=0 dbp=1 sfma=0
	d = dmem1[(i->param + ba1) & 0x1f];
	if(d & 0x00800000)
	d |= 0xff000000;
	creg = c = cmem[i->param];
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)d;
	macc = macc + (r >> 7);
  break;

case 841: // mac cmode=1 dmode=0 crm=0 dbp=1 sfma=0
	d = dmem1[(i->param + ba1) & 0x1f];
	if(d & 0x00800000)
	d |= 0xff000000;
	creg = c = cmem[ca];
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)d;
	macc = macc + (r >> 7);
  break;

case 842: // mac cmode=0 dmode=1 crm=0 dbp=1 sfma=0
	d = dmem1[(id + ba1) & 0x1f];
	if(d & 0x00800000)
	d |= 0xff000000;
	creg = c = cmem[i->param];
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)d;
	macc = macc + (r >> 7);
  break;

case 843: // mac cmode=1 dmode=1 crm=0 dbp=1 sfma=0
	d = dmem1[(id + ba1) & 0x1f];
	if(d & 0x00800000)
	d |= 0xff000000;
	creg = c = cmem[ca];
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)d;
	macc = macc + (r >> 7);
  break;

case 844: // mac cmode=0 dmode=0 crm=1 dbp=1 sfma=0
	d = dmem1[(i->param + ba1) & 0x1f];
	if(d & 0x00800000)
	d |= 0xff000000;
	creg = c = (cmem[i->param] & 0xffff0000);
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)d;
	macc = macc + (r >> 7);
  break;

case 845: // mac cmode=1 dmode=0 crm=1 dbp=1 sfma=0
	d = dmem1[(i->param + ba1) & 0x1f];
	if(d & 0x00800000)
	d |= 0xff000000;
	creg = c = (cmem[ca] & 0xffff0000);
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)d;
	macc = macc + (r >> 7);
  break;

case 846: // mac cmode=0 dmode=1 crm=1 dbp=1 sfma=0
	d = dmem1[(id + ba1) & 0x1f];
	if(d & 0x00800000)
	d |= 0xff000000;
	creg = c = (cmem[i->param] & 0xffff0000);
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)d;
	macc = macc + (r >> 7);
  break;

case 847: // mac cmode=1 dmode=1 crm=1 dbp=1 sfma=0
	d = dmem1[(id + ba1) & 0x1f];
	if(d & 0x00800000)
	d |= 0xff000000;
	creg = c = (cmem[ca] & 0xffff0000);
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)d;
	macc = macc + (r >> 7);
  break;

case 848: // mac cmode=0 dmode=0 crm=2 dbp=1 sfma=0
	d = dmem1[(i->param + ba1) & 0x1f];
	if(d & 0x00800000)
	d |= 0xff000000;
	creg = c = (cmem[i->param] << 16);
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)d;
	macc = macc + (r >> 7);
  break;

case 849: // mac cmode=1 dmode=0 crm=2 dbp=1 sfma=0
	d = dmem1[(i->param + ba1) & 0x1f];
	if(d & 0x00800000)
	d |= 0xff000000;
	creg = c = (cmem[ca] << 16);
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)d;
	macc = macc + (r >> 7);
  break;

case 850: // mac cmode=0 dmode=1 crm=2 dbp=1 sfma=0
	d = dmem1[(id + ba1) & 0x1f];
	if(d & 0x00800000)
	d |= 0xff000000;
	creg = c = (cmem[i->param] << 16);
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)d;
	macc = macc + (r >> 7);
  break;

case 851: // mac cmode=1 dmode=1 crm=2 dbp=1 sfma=0
	d = dmem1[(id + ba1) & 0x1f];
	if(d & 0x00800000)
	d |= 0xff000000;
	creg = c = (cmem[ca] << 16);
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)d;
	macc = macc + (r >> 7);
  break;

case 852: // mac cmode=0 dmode=0 crm=0 dbp=0 sfma=1
	d = dmem0[(i->param + ba0) & 0xff];
	if(d & 0x00800000)
	d |= 0xff000000;
	creg = c = cmem[i->param];
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)d;
	macc = (macc << 2) + (r >> 7);
  break;

case 853: // mac cmode=1 dmode=0 crm=0 dbp=0 sfma=1
	d = dmem0[(i->param + ba0) & 0xff];
	if(d & 0x00800000)
	d |= 0xff000000;
	creg = c = cmem[ca];
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)d;
	macc = (macc << 2) + (r >> 7);
  break;

case 854: // mac cmode=0 dmode=1 crm=0 dbp=0 sfma=1
	d = dmem0[(id + ba0) & 0xff];
	if(d & 0x00800000)
	d |= 0xff000000;
	creg = c = cmem[i->param];
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)d;
	macc = (macc << 2) + (r >> 7);
  break;

case 855: // mac cmode=1 dmode=1 crm=0 dbp=0 sfma=1
	d = dmem0[(id + ba0) & 0xff];
	if(d & 0x00800000)
	d |= 0xff000000;
	creg = c = cmem[ca];
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)d;
	macc = (macc << 2) + (r >> 7);
  break;

case 856: // mac cmode=0 dmode=0 crm=1 dbp=0 sfma=1
	d = dmem0[(i->param + ba0) & 0xff];
	if(d & 0x00800000)
	d |= 0xff000000;
	creg = c = (cmem[i->param] & 0xffff0000);
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)d;
	macc = (macc << 2) + (r >> 7);
  break;

case 857: // mac cmode=1 dmode=0 crm=1 dbp=0 sfma=1
	d = dmem0[(i->param + ba0) & 0xff];
	if(d & 0x00800000)
	d |= 0xff000000;
	creg = c = (cmem[ca] & 0xffff0000);
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)d;
	macc = (macc << 2) + (r >> 7);
  break;

case 858: // mac cmode=0 dmode=1 crm=1 dbp=0 sfma=1
	d = dmem0[(id + ba0) & 0xff];
	if(d & 0x00800000)
	d |= 0xff000000;
	creg = c = (cmem[i->param] & 0xffff0000);
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)d;
	macc = (macc << 2) + (r >> 7);
  break;

case 859: // mac cmode=1 dmode=1 crm=1 dbp=0 sfma=1
	d = dmem0[(id + ba0) & 0xff];
	if(d & 0x00800000)
	d |= 0xff000000;
	creg = c = (cmem[ca] & 0xffff0000);
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)d;
	macc = (macc << 2) + (r >> 7);
  break;

case 860: // mac cmode=0 dmode=0 crm=2 dbp=0 sfma=1
	d = dmem0[(i->param + ba0) & 0xff];
	if(d & 0x00800000)
	d |= 0xff000000;
	creg = c = (cmem[i->param] << 16);
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)d;
	macc = (macc << 2) + (r >> 7);
  break;

case 861: // mac cmode=1 dmode=0 crm=2 dbp=0 sfma=1
	d = dmem0[(i->param + ba0) & 0xff];
	if(d & 0x00800000)
	d |= 0xff000000;
	creg = c = (cmem[ca] << 16);
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)d;
	macc = (macc << 2) + (r >> 7);
  break;

case 862: // mac cmode=0 dmode=1 crm=2 dbp=0 sfma=1
	d = dmem0[(id + ba0) & 0xff];
	if(d & 0x00800000)
	d |= 0xff000000;
	creg = c = (cmem[i->param] << 16);
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)d;
	macc = (macc << 2) + (r >> 7);
  break;

case 863: // mac cmode=1 dmode=1 crm=2 dbp=0 sfma=1
	d = dmem0[(id + ba0) & 0xff];
	if(d & 0x00800000)
	d |= 0xff000000;
	creg = c = (cmem[ca] << 16);
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)d;
	macc = (macc << 2) + (r >> 7);
  break;

case 864: // mac cmode=0 dmode=0 crm=0 dbp=1 sfma=1
	d = dmem1[(i->param + ba1) & 0x1f];
	if(d & 0x00800000)
	d |= 0xff000000;
	creg = c = cmem[i->param];
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)d;
	macc = (macc << 2) + (r >> 7);
  break;

case 865: // mac cmode=1 dmode=0 crm=0 dbp=1 sfma=1
	d = dmem1[(i->param + ba1) & 0x1f];
	if(d & 0x00800000)
	d |= 0xff000000;
	creg = c = cmem[ca];
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)d;
	macc = (macc << 2) + (r >> 7);
  break;

case 866: // mac cmode=0 dmode=1 crm=0 dbp=1 sfma=1
	d = dmem1[(id + ba1) & 0x1f];
	if(d & 0x00800000)
	d |= 0xff000000;
	creg = c = cmem[i->param];
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)d;
	macc = (macc << 2) + (r >> 7);
  break;

case 867: // mac cmode=1 dmode=1 crm=0 dbp=1 sfma=1
	d = dmem1[(id + ba1) & 0x1f];
	if(d & 0x00800000)
	d |= 0xff000000;
	creg = c = cmem[ca];
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)d;
	macc = (macc << 2) + (r >> 7);
  break;

case 868: // mac cmode=0 dmode=0 crm=1 dbp=1 sfma=1
	d = dmem1[(i->param + ba1) & 0x1f];
	if(d & 0x00800000)
	d |= 0xff000000;
	creg = c = (cmem[i->param] & 0xffff0000);
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)d;
	macc = (macc << 2) + (r >> 7);
  break;

case 869: // mac cmode=1 dmode=0 crm=1 dbp=1 sfma=1
	d = dmem1[(i->param + ba1) & 0x1f];
	if(d & 0x00800000)
	d |= 0xff000000;
	creg = c = (cmem[ca] & 0xffff0000);
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)d;
	macc = (macc << 2) + (r >> 7);
  break;

case 870: // mac cmode=0 dmode=1 crm=1 dbp=1 sfma=1
	d = dmem1[(id + ba1) & 0x1f];
	if(d & 0x00800000)
	d |= 0xff000000;
	creg = c = (cmem[i->param] & 0xffff0000);
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)d;
	macc = (macc << 2) + (r >> 7);
  break;

case 871: // mac cmode=1 dmode=1 crm=1 dbp=1 sfma=1
	d = dmem1[(id + ba1) & 0x1f];
	if(d & 0x00800000)
	d |= 0xff000000;
	creg = c = (cmem[ca] & 0xffff0000);
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)d;
	macc = (macc << 2) + (r >> 7);
  break;

case 872: // mac cmode=0 dmode=0 crm=2 dbp=1 sfma=1
	d = dmem1[(i->param + ba1) & 0x1f];
	if(d & 0x00800000)
	d |= 0xff000000;
	creg = c = (cmem[i->param] << 16);
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)d;
	macc = (macc << 2) + (r >> 7);
  break;

case 873: // mac cmode=1 dmode=0 crm=2 dbp=1 sfma=1
	d = dmem1[(i->param + ba1) & 0x1f];
	if(d & 0x00800000)
	d |= 0xff000000;
	creg = c = (cmem[ca] << 16);
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)d;
	macc = (macc << 2) + (r >> 7);
  break;

case 874: // mac cmode=0 dmode=1 crm=2 dbp=1 sfma=1
	d = dmem1[(id + ba1) & 0x1f];
	if(d & 0x00800000)
	d |= 0xff000000;
	creg = c = (cmem[i->param] << 16);
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)d;
	macc = (macc << 2) + (r >> 7);
  break;

case 875: // mac cmode=1 dmode=1 crm=2 dbp=1 sfma=1
	d = dmem1[(id + ba1) & 0x1f];
	if(d & 0x00800000)
	d |= 0xff000000;
	creg = c = (cmem[ca] << 16);
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)d;
	macc = (macc << 2) + (r >> 7);
  break;

case 876: // mac cmode=0 dmode=0 crm=0 dbp=0 sfma=2
	d = dmem0[(i->param + ba0) & 0xff];
	if(d & 0x00800000)
	d |= 0xff000000;
	creg = c = cmem[i->param];
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)d;
	macc = (macc << 4) + (r >> 7);
  break;

case 877: // mac cmode=1 dmode=0 crm=0 dbp=0 sfma=2
	d = dmem0[(i->param + ba0) & 0xff];
	if(d & 0x00800000)
	d |= 0xff000000;
	creg = c = cmem[ca];
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)d;
	macc = (macc << 4) + (r >> 7);
  break;

case 878: // mac cmode=0 dmode=1 crm=0 dbp=0 sfma=2
	d = dmem0[(id + ba0) & 0xff];
	if(d & 0x00800000)
	d |= 0xff000000;
	creg = c = cmem[i->param];
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)d;
	macc = (macc << 4) + (r >> 7);
  break;

case 879: // mac cmode=1 dmode=1 crm=0 dbp=0 sfma=2
	d = dmem0[(id + ba0) & 0xff];
	if(d & 0x00800000)
	d |= 0xff000000;
	creg = c = cmem[ca];
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)d;
	macc = (macc << 4) + (r >> 7);
  break;

case 880: // mac cmode=0 dmode=0 crm=1 dbp=0 sfma=2
	d = dmem0[(i->param + ba0) & 0xff];
	if(d & 0x00800000)
	d |= 0xff000000;
	creg = c = (cmem[i->param] & 0xffff0000);
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)d;
	macc = (macc << 4) + (r >> 7);
  break;

case 881: // mac cmode=1 dmode=0 crm=1 dbp=0 sfma=2
	d = dmem0[(i->param + ba0) & 0xff];
	if(d & 0x00800000)
	d |= 0xff000000;
	creg = c = (cmem[ca] & 0xffff0000);
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)d;
	macc = (macc << 4) + (r >> 7);
  break;

case 882: // mac cmode=0 dmode=1 crm=1 dbp=0 sfma=2
	d = dmem0[(id + ba0) & 0xff];
	if(d & 0x00800000)
	d |= 0xff000000;
	creg = c = (cmem[i->param] & 0xffff0000);
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)d;
	macc = (macc << 4) + (r >> 7);
  break;

case 883: // mac cmode=1 dmode=1 crm=1 dbp=0 sfma=2
	d = dmem0[(id + ba0) & 0xff];
	if(d & 0x00800000)
	d |= 0xff000000;
	creg = c = (cmem[ca] & 0xffff0000);
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)d;
	macc = (macc << 4) + (r >> 7);
  break;

case 884: // mac cmode=0 dmode=0 crm=2 dbp=0 sfma=2
	d = dmem0[(i->param + ba0) & 0xff];
	if(d & 0x00800000)
	d |= 0xff000000;
	creg = c = (cmem[i->param] << 16);
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)d;
	macc = (macc << 4) + (r >> 7);
  break;

case 885: // mac cmode=1 dmode=0 crm=2 dbp=0 sfma=2
	d = dmem0[(i->param + ba0) & 0xff];
	if(d & 0x00800000)
	d |= 0xff000000;
	creg = c = (cmem[ca] << 16);
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)d;
	macc = (macc << 4) + (r >> 7);
  break;

case 886: // mac cmode=0 dmode=1 crm=2 dbp=0 sfma=2
	d = dmem0[(id + ba0) & 0xff];
	if(d & 0x00800000)
	d |= 0xff000000;
	creg = c = (cmem[i->param] << 16);
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)d;
	macc = (macc << 4) + (r >> 7);
  break;

case 887: // mac cmode=1 dmode=1 crm=2 dbp=0 sfma=2
	d = dmem0[(id + ba0) & 0xff];
	if(d & 0x00800000)
	d |= 0xff000000;
	creg = c = (cmem[ca] << 16);
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)d;
	macc = (macc << 4) + (r >> 7);
  break;

case 888: // mac cmode=0 dmode=0 crm=0 dbp=1 sfma=2
	d = dmem1[(i->param + ba1) & 0x1f];
	if(d & 0x00800000)
	d |= 0xff000000;
	creg = c = cmem[i->param];
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)d;
	macc = (macc << 4) + (r >> 7);
  break;

case 889: // mac cmode=1 dmode=0 crm=0 dbp=1 sfma=2
	d = dmem1[(i->param + ba1) & 0x1f];
	if(d & 0x00800000)
	d |= 0xff000000;
	creg = c = cmem[ca];
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)d;
	macc = (macc << 4) + (r >> 7);
  break;

case 890: // mac cmode=0 dmode=1 crm=0 dbp=1 sfma=2
	d = dmem1[(id + ba1) & 0x1f];
	if(d & 0x00800000)
	d |= 0xff000000;
	creg = c = cmem[i->param];
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)d;
	macc = (macc << 4) + (r >> 7);
  break;

case 891: // mac cmode=1 dmode=1 crm=0 dbp=1 sfma=2
	d = dmem1[(id + ba1) & 0x1f];
	if(d & 0x00800000)
	d |= 0xff000000;
	creg = c = cmem[ca];
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)d;
	macc = (macc << 4) + (r >> 7);
  break;

case 892: // mac cmode=0 dmode=0 crm=1 dbp=1 sfma=2
	d = dmem1[(i->param + ba1) & 0x1f];
	if(d & 0x00800000)
	d |= 0xff000000;
	creg = c = (cmem[i->param] & 0xffff0000);
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)d;
	macc = (macc << 4) + (r >> 7);
  break;

case 893: // mac cmode=1 dmode=0 crm=1 dbp=1 sfma=2
	d = dmem1[(i->param + ba1) & 0x1f];
	if(d & 0x00800000)
	d |= 0xff000000;
	creg = c = (cmem[ca] & 0xffff0000);
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)d;
	macc = (macc << 4) + (r >> 7);
  break;

case 894: // mac cmode=0 dmode=1 crm=1 dbp=1 sfma=2
	d = dmem1[(id + ba1) & 0x1f];
	if(d & 0x00800000)
	d |= 0xff000000;
	creg = c = (cmem[i->param] & 0xffff0000);
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)d;
	macc = (macc << 4) + (r >> 7);
  break;

case 895: // mac cmode=1 dmode=1 crm=1 dbp=1 sfma=2
	d = dmem1[(id + ba1) & 0x1f];
	if(d & 0x00800000)
	d |= 0xff000000;
	creg = c = (cmem[ca] & 0xffff0000);
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)d;
	macc = (macc << 4) + (r >> 7);
  break;

case 896: // mac cmode=0 dmode=0 crm=2 dbp=1 sfma=2
	d = dmem1[(i->param + ba1) & 0x1f];
	if(d & 0x00800000)
	d |= 0xff000000;
	creg = c = (cmem[i->param] << 16);
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)d;
	macc = (macc << 4) + (r >> 7);
  break;

case 897: // mac cmode=1 dmode=0 crm=2 dbp=1 sfma=2
	d = dmem1[(i->param + ba1) & 0x1f];
	if(d & 0x00800000)
	d |= 0xff000000;
	creg = c = (cmem[ca] << 16);
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)d;
	macc = (macc << 4) + (r >> 7);
  break;

case 898: // mac cmode=0 dmode=1 crm=2 dbp=1 sfma=2
	d = dmem1[(id + ba1) & 0x1f];
	if(d & 0x00800000)
	d |= 0xff000000;
	creg = c = (cmem[i->param] << 16);
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)d;
	macc = (macc << 4) + (r >> 7);
  break;

case 899: // mac cmode=1 dmode=1 crm=2 dbp=1 sfma=2
	d = dmem1[(id + ba1) & 0x1f];
	if(d & 0x00800000)
	d |= 0xff000000;
	creg = c = (cmem[ca] << 16);
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)d;
	macc = (macc << 4) + (r >> 7);
  break;

case 900: // mac cmode=0 dmode=0 crm=0 dbp=0 sfma=3
	d = dmem0[(i->param + ba0) & 0xff];
	if(d & 0x00800000)
	d |= 0xff000000;
	creg = c = cmem[i->param];
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)d;
	macc = (macc >> 16) + (r >> 7);
  break;

case 901: // mac cmode=1 dmode=0 crm=0 dbp=0 sfma=3
	d = dmem0[(i->param + ba0) & 0xff];
	if(d & 0x00800000)
	d |= 0xff000000;
	creg = c = cmem[ca];
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)d;
	macc = (macc >> 16) + (r >> 7);
  break;

case 902: // mac cmode=0 dmode=1 crm=0 dbp=0 sfma=3
	d = dmem0[(id + ba0) & 0xff];
	if(d & 0x00800000)
	d |= 0xff000000;
	creg = c = cmem[i->param];
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)d;
	macc = (macc >> 16) + (r >> 7);
  break;

case 903: // mac cmode=1 dmode=1 crm=0 dbp=0 sfma=3
	d = dmem0[(id + ba0) & 0xff];
	if(d & 0x00800000)
	d |= 0xff000000;
	creg = c = cmem[ca];
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)d;
	macc = (macc >> 16) + (r >> 7);
  break;

case 904: // mac cmode=0 dmode=0 crm=1 dbp=0 sfma=3
	d = dmem0[(i->param + ba0) & 0xff];
	if(d & 0x00800000)
	d |= 0xff000000;
	creg = c = (cmem[i->param] & 0xffff0000);
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)d;
	macc = (macc >> 16) + (r >> 7);
  break;

case 905: // mac cmode=1 dmode=0 crm=1 dbp=0 sfma=3
	d = dmem0[(i->param + ba0) & 0xff];
	if(d & 0x00800000)
	d |= 0xff000000;
	creg = c = (cmem[ca] & 0xffff0000);
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)d;
	macc = (macc >> 16) + (r >> 7);
  break;

case 906: // mac cmode=0 dmode=1 crm=1 dbp=0 sfma=3
	d = dmem0[(id + ba0) & 0xff];
	if(d & 0x00800000)
	d |= 0xff000000;
	creg = c = (cmem[i->param] & 0xffff0000);
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)d;
	macc = (macc >> 16) + (r >> 7);
  break;

case 907: // mac cmode=1 dmode=1 crm=1 dbp=0 sfma=3
	d = dmem0[(id + ba0) & 0xff];
	if(d & 0x00800000)
	d |= 0xff000000;
	creg = c = (cmem[ca] & 0xffff0000);
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)d;
	macc = (macc >> 16) + (r >> 7);
  break;

case 908: // mac cmode=0 dmode=0 crm=2 dbp=0 sfma=3
	d = dmem0[(i->param + ba0) & 0xff];
	if(d & 0x00800000)
	d |= 0xff000000;
	creg = c = (cmem[i->param] << 16);
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)d;
	macc = (macc >> 16) + (r >> 7);
  break;

case 909: // mac cmode=1 dmode=0 crm=2 dbp=0 sfma=3
	d = dmem0[(i->param + ba0) & 0xff];
	if(d & 0x00800000)
	d |= 0xff000000;
	creg = c = (cmem[ca] << 16);
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)d;
	macc = (macc >> 16) + (r >> 7);
  break;

case 910: // mac cmode=0 dmode=1 crm=2 dbp=0 sfma=3
	d = dmem0[(id + ba0) & 0xff];
	if(d & 0x00800000)
	d |= 0xff000000;
	creg = c = (cmem[i->param] << 16);
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)d;
	macc = (macc >> 16) + (r >> 7);
  break;

case 911: // mac cmode=1 dmode=1 crm=2 dbp=0 sfma=3
	d = dmem0[(id + ba0) & 0xff];
	if(d & 0x00800000)
	d |= 0xff000000;
	creg = c = (cmem[ca] << 16);
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)d;
	macc = (macc >> 16) + (r >> 7);
  break;

case 912: // mac cmode=0 dmode=0 crm=0 dbp=1 sfma=3
	d = dmem1[(i->param + ba1) & 0x1f];
	if(d & 0x00800000)
	d |= 0xff000000;
	creg = c = cmem[i->param];
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)d;
	macc = (macc >> 16) + (r >> 7);
  break;

case 913: // mac cmode=1 dmode=0 crm=0 dbp=1 sfma=3
	d = dmem1[(i->param + ba1) & 0x1f];
	if(d & 0x00800000)
	d |= 0xff000000;
	creg = c = cmem[ca];
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)d;
	macc = (macc >> 16) + (r >> 7);
  break;

case 914: // mac cmode=0 dmode=1 crm=0 dbp=1 sfma=3
	d = dmem1[(id + ba1) & 0x1f];
	if(d & 0x00800000)
	d |= 0xff000000;
	creg = c = cmem[i->param];
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)d;
	macc = (macc >> 16) + (r >> 7);
  break;

case 915: // mac cmode=1 dmode=1 crm=0 dbp=1 sfma=3
	d = dmem1[(id + ba1) & 0x1f];
	if(d & 0x00800000)
	d |= 0xff000000;
	creg = c = cmem[ca];
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)d;
	macc = (macc >> 16) + (r >> 7);
  break;

case 916: // mac cmode=0 dmode=0 crm=1 dbp=1 sfma=3
	d = dmem1[(i->param + ba1) & 0x1f];
	if(d & 0x00800000)
	d |= 0xff000000;
	creg = c = (cmem[i->param] & 0xffff0000);
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)d;
	macc = (macc >> 16) + (r >> 7);
  break;

case 917: // mac cmode=1 dmode=0 crm=1 dbp=1 sfma=3
	d = dmem1[(i->param + ba1) & 0x1f];
	if(d & 0x00800000)
	d |= 0xff000000;
	creg = c = (cmem[ca] & 0xffff0000);
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)d;
	macc = (macc >> 16) + (r >> 7);
  break;

case 918: // mac cmode=0 dmode=1 crm=1 dbp=1 sfma=3
	d = dmem1[(id + ba1) & 0x1f];
	if(d & 0x00800000)
	d |= 0xff000000;
	creg = c = (cmem[i->param] & 0xffff0000);
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)d;
	macc = (macc >> 16) + (r >> 7);
  break;

case 919: // mac cmode=1 dmode=1 crm=1 dbp=1 sfma=3
	d = dmem1[(id + ba1) & 0x1f];
	if(d & 0x00800000)
	d |= 0xff000000;
	creg = c = (cmem[ca] & 0xffff0000);
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)d;
	macc = (macc >> 16) + (r >> 7);
  break;

case 920: // mac cmode=0 dmode=0 crm=2 dbp=1 sfma=3
	d = dmem1[(i->param + ba1) & 0x1f];
	if(d & 0x00800000)
	d |= 0xff000000;
	creg = c = (cmem[i->param] << 16);
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)d;
	macc = (macc >> 16) + (r >> 7);
  break;

case 921: // mac cmode=1 dmode=0 crm=2 dbp=1 sfma=3
	d = dmem1[(i->param + ba1) & 0x1f];
	if(d & 0x00800000)
	d |= 0xff000000;
	creg = c = (cmem[ca] << 16);
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)d;
	macc = (macc >> 16) + (r >> 7);
  break;

case 922: // mac cmode=0 dmode=1 crm=2 dbp=1 sfma=3
	d = dmem1[(id + ba1) & 0x1f];
	if(d & 0x00800000)
	d |= 0xff000000;
	creg = c = (cmem[i->param] << 16);
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)d;
	macc = (macc >> 16) + (r >> 7);
  break;

case 923: // mac cmode=1 dmode=1 crm=2 dbp=1 sfma=3
	d = dmem1[(id + ba1) & 0x1f];
	if(d & 0x00800000)
	d |= 0xff000000;
	creg = c = (cmem[ca] << 16);
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)d;
	macc = (macc >> 16) + (r >> 7);
  break;

case 924: // mac cmode=0 crm=0 sfao=0 sfma=0
	creg = c = cmem[i->param];
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)aacc;
	macc = macc + (r >> 15);
  break;

case 925: // mac cmode=1 crm=0 sfao=0 sfma=0
	creg = c = cmem[ca];
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)aacc;
	macc = macc + (r >> 15);
  break;

case 926: // mac cmode=0 crm=1 sfao=0 sfma=0
	creg = c = (cmem[i->param] & 0xffff0000);
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)aacc;
	macc = macc + (r >> 15);
  break;

case 927: // mac cmode=1 crm=1 sfao=0 sfma=0
	creg = c = (cmem[ca] & 0xffff0000);
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)aacc;
	macc = macc + (r >> 15);
  break;

case 928: // mac cmode=0 crm=2 sfao=0 sfma=0
	creg = c = (cmem[i->param] << 16);
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)aacc;
	macc = macc + (r >> 15);
  break;

case 929: // mac cmode=1 crm=2 sfao=0 sfma=0
	creg = c = (cmem[ca] << 16);
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)aacc;
	macc = macc + (r >> 15);
  break;

case 930: // mac cmode=0 crm=0 sfao=1 sfma=0
	creg = c = cmem[i->param];
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)(aacc << 7);
	macc = macc + (r >> 15);
  break;

case 931: // mac cmode=1 crm=0 sfao=1 sfma=0
	creg = c = cmem[ca];
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)(aacc << 7);
	macc = macc + (r >> 15);
  break;

case 932: // mac cmode=0 crm=1 sfao=1 sfma=0
	creg = c = (cmem[i->param] & 0xffff0000);
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)(aacc << 7);
	macc = macc + (r >> 15);
  break;

case 933: // mac cmode=1 crm=1 sfao=1 sfma=0
	creg = c = (cmem[ca] & 0xffff0000);
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)(aacc << 7);
	macc = macc + (r >> 15);
  break;

case 934: // mac cmode=0 crm=2 sfao=1 sfma=0
	creg = c = (cmem[i->param] << 16);
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)(aacc << 7);
	macc = macc + (r >> 15);
  break;

case 935: // mac cmode=1 crm=2 sfao=1 sfma=0
	creg = c = (cmem[ca] << 16);
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)(aacc << 7);
	macc = macc + (r >> 15);
  break;

case 936: // mac cmode=0 crm=0 sfao=0 sfma=1
	creg = c = cmem[i->param];
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)aacc;
	macc = (macc << 2) + (r >> 15);
  break;

case 937: // mac cmode=1 crm=0 sfao=0 sfma=1
	creg = c = cmem[ca];
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)aacc;
	macc = (macc << 2) + (r >> 15);
  break;

case 938: // mac cmode=0 crm=1 sfao=0 sfma=1
	creg = c = (cmem[i->param] & 0xffff0000);
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)aacc;
	macc = (macc << 2) + (r >> 15);
  break;

case 939: // mac cmode=1 crm=1 sfao=0 sfma=1
	creg = c = (cmem[ca] & 0xffff0000);
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)aacc;
	macc = (macc << 2) + (r >> 15);
  break;

case 940: // mac cmode=0 crm=2 sfao=0 sfma=1
	creg = c = (cmem[i->param] << 16);
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)aacc;
	macc = (macc << 2) + (r >> 15);
  break;

case 941: // mac cmode=1 crm=2 sfao=0 sfma=1
	creg = c = (cmem[ca] << 16);
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)aacc;
	macc = (macc << 2) + (r >> 15);
  break;

case 942: // mac cmode=0 crm=0 sfao=1 sfma=1
	creg = c = cmem[i->param];
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)(aacc << 7);
	macc = (macc << 2) + (r >> 15);
  break;

case 943: // mac cmode=1 crm=0 sfao=1 sfma=1
	creg = c = cmem[ca];
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)(aacc << 7);
	macc = (macc << 2) + (r >> 15);
  break;

case 944: // mac cmode=0 crm=1 sfao=1 sfma=1
	creg = c = (cmem[i->param] & 0xffff0000);
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)(aacc << 7);
	macc = (macc << 2) + (r >> 15);
  break;

case 945: // mac cmode=1 crm=1 sfao=1 sfma=1
	creg = c = (cmem[ca] & 0xffff0000);
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)(aacc << 7);
	macc = (macc << 2) + (r >> 15);
  break;

case 946: // mac cmode=0 crm=2 sfao=1 sfma=1
	creg = c = (cmem[i->param] << 16);
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)(aacc << 7);
	macc = (macc << 2) + (r >> 15);
  break;

case 947: // mac cmode=1 crm=2 sfao=1 sfma=1
	creg = c = (cmem[ca] << 16);
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)(aacc << 7);
	macc = (macc << 2) + (r >> 15);
  break;

case 948: // mac cmode=0 crm=0 sfao=0 sfma=2
	creg = c = cmem[i->param];
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)aacc;
	macc = (macc << 4) + (r >> 15);
  break;

case 949: // mac cmode=1 crm=0 sfao=0 sfma=2
	creg = c = cmem[ca];
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)aacc;
	macc = (macc << 4) + (r >> 15);
  break;

case 950: // mac cmode=0 crm=1 sfao=0 sfma=2
	creg = c = (cmem[i->param] & 0xffff0000);
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)aacc;
	macc = (macc << 4) + (r >> 15);
  break;

case 951: // mac cmode=1 crm=1 sfao=0 sfma=2
	creg = c = (cmem[ca] & 0xffff0000);
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)aacc;
	macc = (macc << 4) + (r >> 15);
  break;

case 952: // mac cmode=0 crm=2 sfao=0 sfma=2
	creg = c = (cmem[i->param] << 16);
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)aacc;
	macc = (macc << 4) + (r >> 15);
  break;

case 953: // mac cmode=1 crm=2 sfao=0 sfma=2
	creg = c = (cmem[ca] << 16);
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)aacc;
	macc = (macc << 4) + (r >> 15);
  break;

case 954: // mac cmode=0 crm=0 sfao=1 sfma=2
	creg = c = cmem[i->param];
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)(aacc << 7);
	macc = (macc << 4) + (r >> 15);
  break;

case 955: // mac cmode=1 crm=0 sfao=1 sfma=2
	creg = c = cmem[ca];
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)(aacc << 7);
	macc = (macc << 4) + (r >> 15);
  break;

case 956: // mac cmode=0 crm=1 sfao=1 sfma=2
	creg = c = (cmem[i->param] & 0xffff0000);
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)(aacc << 7);
	macc = (macc << 4) + (r >> 15);
  break;

case 957: // mac cmode=1 crm=1 sfao=1 sfma=2
	creg = c = (cmem[ca] & 0xffff0000);
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)(aacc << 7);
	macc = (macc << 4) + (r >> 15);
  break;

case 958: // mac cmode=0 crm=2 sfao=1 sfma=2
	creg = c = (cmem[i->param] << 16);
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)(aacc << 7);
	macc = (macc << 4) + (r >> 15);
  break;

case 959: // mac cmode=1 crm=2 sfao=1 sfma=2
	creg = c = (cmem[ca] << 16);
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)(aacc << 7);
	macc = (macc << 4) + (r >> 15);
  break;

case 960: // mac cmode=0 crm=0 sfao=0 sfma=3
	creg = c = cmem[i->param];
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)aacc;
	macc = (macc >> 16) + (r >> 15);
  break;

case 961: // mac cmode=1 crm=0 sfao=0 sfma=3
	creg = c = cmem[ca];
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)aacc;
	macc = (macc >> 16) + (r >> 15);
  break;

case 962: // mac cmode=0 crm=1 sfao=0 sfma=3
	creg = c = (cmem[i->param] & 0xffff0000);
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)aacc;
	macc = (macc >> 16) + (r >> 15);
  break;

case 963: // mac cmode=1 crm=1 sfao=0 sfma=3
	creg = c = (cmem[ca] & 0xffff0000);
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)aacc;
	macc = (macc >> 16) + (r >> 15);
  break;

case 964: // mac cmode=0 crm=2 sfao=0 sfma=3
	creg = c = (cmem[i->param] << 16);
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)aacc;
	macc = (macc >> 16) + (r >> 15);
  break;

case 965: // mac cmode=1 crm=2 sfao=0 sfma=3
	creg = c = (cmem[ca] << 16);
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)aacc;
	macc = (macc >> 16) + (r >> 15);
  break;

case 966: // mac cmode=0 crm=0 sfao=1 sfma=3
	creg = c = cmem[i->param];
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)(aacc << 7);
	macc = (macc >> 16) + (r >> 15);
  break;

case 967: // mac cmode=1 crm=0 sfao=1 sfma=3
	creg = c = cmem[ca];
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)(aacc << 7);
	macc = (macc >> 16) + (r >> 15);
  break;

case 968: // mac cmode=0 crm=1 sfao=1 sfma=3
	creg = c = (cmem[i->param] & 0xffff0000);
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)(aacc << 7);
	macc = (macc >> 16) + (r >> 15);
  break;

case 969: // mac cmode=1 crm=1 sfao=1 sfma=3
	creg = c = (cmem[ca] & 0xffff0000);
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)(aacc << 7);
	macc = (macc >> 16) + (r >> 15);
  break;

case 970: // mac cmode=0 crm=2 sfao=1 sfma=3
	creg = c = (cmem[i->param] << 16);
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)(aacc << 7);
	macc = (macc >> 16) + (r >> 15);
  break;

case 971: // mac cmode=1 crm=2 sfao=1 sfma=3
	creg = c = (cmem[ca] << 16);
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)(aacc << 7);
	macc = (macc >> 16) + (r >> 15);
  break;

case 972: // mpyu cmode=0 dmode=0 crm=0 dbp=0
	creg = c = cmem[i->param];
	d = dmem0[(i->param + ba0) & 0xff]; // d is 24bits unsigned
	r = (int64_t)(int32_t)c * (int64_t)d;
	macc = r >> 7;
  break;

case 973: // mpyu cmode=1 dmode=0 crm=0 dbp=0
	creg = c = cmem[ca];
	d = dmem0[(i->param + ba0) & 0xff]; // d is 24bits unsigned
	r = (int64_t)(int32_t)c * (int64_t)d;
	macc = r >> 7;
  break;

case 974: // mpyu cmode=0 dmode=1 crm=0 dbp=0
	creg = c = cmem[i->param];
	d = dmem0[(id + ba0) & 0xff]; // d is 24bits unsigned
	r = (int64_t)(int32_t)c * (int64_t)d;
	macc = r >> 7;
  break;

case 975: // mpyu cmode=1 dmode=1 crm=0 dbp=0
	creg = c = cmem[ca];
	d = dmem0[(id + ba0) & 0xff]; // d is 24bits unsigned
	r = (int64_t)(int32_t)c * (int64_t)d;
	macc = r >> 7;
  break;

case 976: // mpyu cmode=0 dmode=0 crm=1 dbp=0
	creg = c = (cmem[i->param] & 0xffff0000);
	d = dmem0[(i->param + ba0) & 0xff]; // d is 24bits unsigned
	r = (int64_t)(int32_t)c * (int64_t)d;
	macc = r >> 7;
  break;

case 977: // mpyu cmode=1 dmode=0 crm=1 dbp=0
	creg = c = (cmem[ca] & 0xffff0000);
	d = dmem0[(i->param + ba0) & 0xff]; // d is 24bits unsigned
	r = (int64_t)(int32_t)c * (int64_t)d;
	macc = r >> 7;
  break;

case 978: // mpyu cmode=0 dmode=1 crm=1 dbp=0
	creg = c = (cmem[i->param] & 0xffff0000);
	d = dmem0[(id + ba0) & 0xff]; // d is 24bits unsigned
	r = (int64_t)(int32_t)c * (int64_t)d;
	macc = r >> 7;
  break;

case 979: // mpyu cmode=1 dmode=1 crm=1 dbp=0
	creg = c = (cmem[ca] & 0xffff0000);
	d = dmem0[(id + ba0) & 0xff]; // d is 24bits unsigned
	r = (int64_t)(int32_t)c * (int64_t)d;
	macc = r >> 7;
  break;

case 980: // mpyu cmode=0 dmode=0 crm=2 dbp=0
	creg = c = (cmem[i->param] << 16);
	d = dmem0[(i->param + ba0) & 0xff]; // d is 24bits unsigned
	r = (int64_t)(int32_t)c * (int64_t)d;
	macc = r >> 7;
  break;

case 981: // mpyu cmode=1 dmode=0 crm=2 dbp=0
	creg = c = (cmem[ca] << 16);
	d = dmem0[(i->param + ba0) & 0xff]; // d is 24bits unsigned
	r = (int64_t)(int32_t)c * (int64_t)d;
	macc = r >> 7;
  break;

case 982: // mpyu cmode=0 dmode=1 crm=2 dbp=0
	creg = c = (cmem[i->param] << 16);
	d = dmem0[(id + ba0) & 0xff]; // d is 24bits unsigned
	r = (int64_t)(int32_t)c * (int64_t)d;
	macc = r >> 7;
  break;

case 983: // mpyu cmode=1 dmode=1 crm=2 dbp=0
	creg = c = (cmem[ca] << 16);
	d = dmem0[(id + ba0) & 0xff]; // d is 24bits unsigned
	r = (int64_t)(int32_t)c * (int64_t)d;
	macc = r >> 7;
  break;

case 984: // mpyu cmode=0 dmode=0 crm=0 dbp=1
	creg = c = cmem[i->param];
	d = dmem1[(i->param + ba1) & 0x1f]; // d is 24bits unsigned
	r = (int64_t)(int32_t)c * (int64_t)d;
	macc = r >> 7;
  break;

case 985: // mpyu cmode=1 dmode=0 crm=0 dbp=1
	creg = c = cmem[ca];
	d = dmem1[(i->param + ba1) & 0x1f]; // d is 24bits unsigned
	r = (int64_t)(int32_t)c * (int64_t)d;
	macc = r >> 7;
  break;

case 986: // mpyu cmode=0 dmode=1 crm=0 dbp=1
	creg = c = cmem[i->param];
	d = dmem1[(id + ba1) & 0x1f]; // d is 24bits unsigned
	r = (int64_t)(int32_t)c * (int64_t)d;
	macc = r >> 7;
  break;

case 987: // mpyu cmode=1 dmode=1 crm=0 dbp=1
	creg = c = cmem[ca];
	d = dmem1[(id + ba1) & 0x1f]; // d is 24bits unsigned
	r = (int64_t)(int32_t)c * (int64_t)d;
	macc = r >> 7;
  break;

case 988: // mpyu cmode=0 dmode=0 crm=1 dbp=1
	creg = c = (cmem[i->param] & 0xffff0000);
	d = dmem1[(i->param + ba1) & 0x1f]; // d is 24bits unsigned
	r = (int64_t)(int32_t)c * (int64_t)d;
	macc = r >> 7;
  break;

case 989: // mpyu cmode=1 dmode=0 crm=1 dbp=1
	creg = c = (cmem[ca] & 0xffff0000);
	d = dmem1[(i->param + ba1) & 0x1f]; // d is 24bits unsigned
	r = (int64_t)(int32_t)c * (int64_t)d;
	macc = r >> 7;
  break;

case 990: // mpyu cmode=0 dmode=1 crm=1 dbp=1
	creg = c = (cmem[i->param] & 0xffff0000);
	d = dmem1[(id + ba1) & 0x1f]; // d is 24bits unsigned
	r = (int64_t)(int32_t)c * (int64_t)d;
	macc = r >> 7;
  break;

case 991: // mpyu cmode=1 dmode=1 crm=1 dbp=1
	creg = c = (cmem[ca] & 0xffff0000);
	d = dmem1[(id + ba1) & 0x1f]; // d is 24bits unsigned
	r = (int64_t)(int32_t)c * (int64_t)d;
	macc = r >> 7;
  break;

case 992: // mpyu cmode=0 dmode=0 crm=2 dbp=1
	creg = c = (cmem[i->param] << 16);
	d = dmem1[(i->param + ba1) & 0x1f]; // d is 24bits unsigned
	r = (int64_t)(int32_t)c * (int64_t)d;
	macc = r >> 7;
  break;

case 993: // mpyu cmode=1 dmode=0 crm=2 dbp=1
	creg = c = (cmem[ca] << 16);
	d = dmem1[(i->param + ba1) & 0x1f]; // d is 24bits unsigned
	r = (int64_t)(int32_t)c * (int64_t)d;
	macc = r >> 7;
  break;

case 994: // mpyu cmode=0 dmode=1 crm=2 dbp=1
	creg = c = (cmem[i->param] << 16);
	d = dmem1[(id + ba1) & 0x1f]; // d is 24bits unsigned
	r = (int64_t)(int32_t)c * (int64_t)d;
	macc = r >> 7;
  break;

case 995: // mpyu cmode=1 dmode=1 crm=2 dbp=1
	creg = c = (cmem[ca] << 16);
	d = dmem1[(id + ba1) & 0x1f]; // d is 24bits unsigned
	r = (int64_t)(int32_t)c * (int64_t)d;
	macc = r >> 7;
  break;

case 996: // macu cmode=0 dmode=0 crm=0 dbp=0 sfma=0
	d = dmem0[(i->param + ba0) & 0xff]; // d is 24bits unsigned
	creg = c = cmem[i->param];
	r = (int64_t)(int32_t)c * (int64_t)d;
	macc = macc + (r >> 7);
  break;

case 997: // macu cmode=1 dmode=0 crm=0 dbp=0 sfma=0
	d = dmem0[(i->param + ba0) & 0xff]; // d is 24bits unsigned
	creg = c = cmem[ca];
	r = (int64_t)(int32_t)c * (int64_t)d;
	macc = macc + (r >> 7);
  break;

case 998: // macu cmode=0 dmode=1 crm=0 dbp=0 sfma=0
	d = dmem0[(id + ba0) & 0xff]; // d is 24bits unsigned
	creg = c = cmem[i->param];
	r = (int64_t)(int32_t)c * (int64_t)d;
	macc = macc + (r >> 7);
  break;

case 999: // macu cmode=1 dmode=1 crm=0 dbp=0 sfma=0
	d = dmem0[(id + ba0) & 0xff]; // d is 24bits unsigned
	creg = c = cmem[ca];
	r = (int64_t)(int32_t)c * (int64_t)d;
	macc = macc + (r >> 7);
  break;

case 1000: // macu cmode=0 dmode=0 crm=1 dbp=0 sfma=0
	d = dmem0[(i->param + ba0) & 0xff]; // d is 24bits unsigned
	creg = c = (cmem[i->param] & 0xffff0000);
	r = (int64_t)(int32_t)c * (int64_t)d;
	macc = macc + (r >> 7);
  break;

case 1001: // macu cmode=1 dmode=0 crm=1 dbp=0 sfma=0
	d = dmem0[(i->param + ba0) & 0xff]; // d is 24bits unsigned
	creg = c = (cmem[ca] & 0xffff0000);
	r = (int64_t)(int32_t)c * (int64_t)d;
	macc = macc + (r >> 7);
  break;

case 1002: // macu cmode=0 dmode=1 crm=1 dbp=0 sfma=0
	d = dmem0[(id + ba0) & 0xff]; // d is 24bits unsigned
	creg = c = (cmem[i->param] & 0xffff0000);
	r = (int64_t)(int32_t)c * (int64_t)d;
	macc = macc + (r >> 7);
  break;

case 1003: // macu cmode=1 dmode=1 crm=1 dbp=0 sfma=0
	d = dmem0[(id + ba0) & 0xff]; // d is 24bits unsigned
	creg = c = (cmem[ca] & 0xffff0000);
	r = (int64_t)(int32_t)c * (int64_t)d;
	macc = macc + (r >> 7);
  break;

case 1004: // macu cmode=0 dmode=0 crm=2 dbp=0 sfma=0
	d = dmem0[(i->param + ba0) & 0xff]; // d is 24bits unsigned
	creg = c = (cmem[i->param] << 16);
	r = (int64_t)(int32_t)c * (int64_t)d;
	macc = macc + (r >> 7);
  break;

case 1005: // macu cmode=1 dmode=0 crm=2 dbp=0 sfma=0
	d = dmem0[(i->param + ba0) & 0xff]; // d is 24bits unsigned
	creg = c = (cmem[ca] << 16);
	r = (int64_t)(int32_t)c * (int64_t)d;
	macc = macc + (r >> 7);
  break;

case 1006: // macu cmode=0 dmode=1 crm=2 dbp=0 sfma=0
	d = dmem0[(id + ba0) & 0xff]; // d is 24bits unsigned
	creg = c = (cmem[i->param] << 16);
	r = (int64_t)(int32_t)c * (int64_t)d;
	macc = macc + (r >> 7);
  break;

case 1007: // macu cmode=1 dmode=1 crm=2 dbp=0 sfma=0
	d = dmem0[(id + ba0) & 0xff]; // d is 24bits unsigned
	creg = c = (cmem[ca] << 16);
	r = (int64_t)(int32_t)c * (int64_t)d;
	macc = macc + (r >> 7);
  break;

case 1008: // macu cmode=0 dmode=0 crm=0 dbp=1 sfma=0
	d = dmem1[(i->param + ba1) & 0x1f]; // d is 24bits unsigned
	creg = c = cmem[i->param];
	r = (int64_t)(int32_t)c * (int64_t)d;
	macc = macc + (r >> 7);
  break;

case 1009: // macu cmode=1 dmode=0 crm=0 dbp=1 sfma=0
	d = dmem1[(i->param + ba1) & 0x1f]; // d is 24bits unsigned
	creg = c = cmem[ca];
	r = (int64_t)(int32_t)c * (int64_t)d;
	macc = macc + (r >> 7);
  break;

case 1010: // macu cmode=0 dmode=1 crm=0 dbp=1 sfma=0
	d = dmem1[(id + ba1) & 0x1f]; // d is 24bits unsigned
	creg = c = cmem[i->param];
	r = (int64_t)(int32_t)c * (int64_t)d;
	macc = macc + (r >> 7);
  break;

case 1011: // macu cmode=1 dmode=1 crm=0 dbp=1 sfma=0
	d = dmem1[(id + ba1) & 0x1f]; // d is 24bits unsigned
	creg = c = cmem[ca];
	r = (int64_t)(int32_t)c * (int64_t)d;
	macc = macc + (r >> 7);
  break;

case 1012: // macu cmode=0 dmode=0 crm=1 dbp=1 sfma=0
	d = dmem1[(i->param + ba1) & 0x1f]; // d is 24bits unsigned
	creg = c = (cmem[i->param] & 0xffff0000);
	r = (int64_t)(int32_t)c * (int64_t)d;
	macc = macc + (r >> 7);
  break;

case 1013: // macu cmode=1 dmode=0 crm=1 dbp=1 sfma=0
	d = dmem1[(i->param + ba1) & 0x1f]; // d is 24bits unsigned
	creg = c = (cmem[ca] & 0xffff0000);
	r = (int64_t)(int32_t)c * (int64_t)d;
	macc = macc + (r >> 7);
  break;

case 1014: // macu cmode=0 dmode=1 crm=1 dbp=1 sfma=0
	d = dmem1[(id + ba1) & 0x1f]; // d is 24bits unsigned
	creg = c = (cmem[i->param] & 0xffff0000);
	r = (int64_t)(int32_t)c * (int64_t)d;
	macc = macc + (r >> 7);
  break;

case 1015: // macu cmode=1 dmode=1 crm=1 dbp=1 sfma=0
	d = dmem1[(id + ba1) & 0x1f]; // d is 24bits unsigned
	creg = c = (cmem[ca] & 0xffff0000);
	r = (int64_t)(int32_t)c * (int64_t)d;
	macc = macc + (r >> 7);
  break;

case 1016: // macu cmode=0 dmode=0 crm=2 dbp=1 sfma=0
	d = dmem1[(i->param + ba1) & 0x1f]; // d is 24bits unsigned
	creg = c = (cmem[i->param] << 16);
	r = (int64_t)(int32_t)c * (int64_t)d;
	macc = macc + (r >> 7);
  break;

case 1017: // macu cmode=1 dmode=0 crm=2 dbp=1 sfma=0
	d = dmem1[(i->param + ba1) & 0x1f]; // d is 24bits unsigned
	creg = c = (cmem[ca] << 16);
	r = (int64_t)(int32_t)c * (int64_t)d;
	macc = macc + (r >> 7);
  break;

case 1018: // macu cmode=0 dmode=1 crm=2 dbp=1 sfma=0
	d = dmem1[(id + ba1) & 0x1f]; // d is 24bits unsigned
	creg = c = (cmem[i->param] << 16);
	r = (int64_t)(int32_t)c * (int64_t)d;
	macc = macc + (r >> 7);
  break;

case 1019: // macu cmode=1 dmode=1 crm=2 dbp=1 sfma=0
	d = dmem1[(id + ba1) & 0x1f]; // d is 24bits unsigned
	creg = c = (cmem[ca] << 16);
	r = (int64_t)(int32_t)c * (int64_t)d;
	macc = macc + (r >> 7);
  break;

case 1020: // macu cmode=0 dmode=0 crm=0 dbp=0 sfma=1
	d = dmem0[(i->param + ba0) & 0xff]; // d is 24bits unsigned
	creg = c = cmem[i->param];
	r = (int64_t)(int32_t)c * (int64_t)d;
	macc = (macc << 2) + (r >> 7);
  break;

case 1021: // macu cmode=1 dmode=0 crm=0 dbp=0 sfma=1
	d = dmem0[(i->param + ba0) & 0xff]; // d is 24bits unsigned
	creg = c = cmem[ca];
	r = (int64_t)(int32_t)c * (int64_t)d;
	macc = (macc << 2) + (r >> 7);
  break;

case 1022: // macu cmode=0 dmode=1 crm=0 dbp=0 sfma=1
	d = dmem0[(id + ba0) & 0xff]; // d is 24bits unsigned
	creg = c = cmem[i->param];
	r = (int64_t)(int32_t)c * (int64_t)d;
	macc = (macc << 2) + (r >> 7);
  break;

case 1023: // macu cmode=1 dmode=1 crm=0 dbp=0 sfma=1
	d = dmem0[(id + ba0) & 0xff]; // d is 24bits unsigned
	creg = c = cmem[ca];
	r = (int64_t)(int32_t)c * (int64_t)d;
	macc = (macc << 2) + (r >> 7);
  break;

case 1024: // macu cmode=0 dmode=0 crm=1 dbp=0 sfma=1
	d = dmem0[(i->param + ba0) & 0xff]; // d is 24bits unsigned
	creg = c = (cmem[i->param] & 0xffff0000);
	r = (int64_t)(int32_t)c * (int64_t)d;
	macc = (macc << 2) + (r >> 7);
  break;

case 1025: // macu cmode=1 dmode=0 crm=1 dbp=0 sfma=1
	d = dmem0[(i->param + ba0) & 0xff]; // d is 24bits unsigned
	creg = c = (cmem[ca] & 0xffff0000);
	r = (int64_t)(int32_t)c * (int64_t)d;
	macc = (macc << 2) + (r >> 7);
  break;

case 1026: // macu cmode=0 dmode=1 crm=1 dbp=0 sfma=1
	d = dmem0[(id + ba0) & 0xff]; // d is 24bits unsigned
	creg = c = (cmem[i->param] & 0xffff0000);
	r = (int64_t)(int32_t)c * (int64_t)d;
	macc = (macc << 2) + (r >> 7);
  break;

case 1027: // macu cmode=1 dmode=1 crm=1 dbp=0 sfma=1
	d = dmem0[(id + ba0) & 0xff]; // d is 24bits unsigned
	creg = c = (cmem[ca] & 0xffff0000);
	r = (int64_t)(int32_t)c * (int64_t)d;
	macc = (macc << 2) + (r >> 7);
  break;

case 1028: // macu cmode=0 dmode=0 crm=2 dbp=0 sfma=1
	d = dmem0[(i->param + ba0) & 0xff]; // d is 24bits unsigned
	creg = c = (cmem[i->param] << 16);
	r = (int64_t)(int32_t)c * (int64_t)d;
	macc = (macc << 2) + (r >> 7);
  break;

case 1029: // macu cmode=1 dmode=0 crm=2 dbp=0 sfma=1
	d = dmem0[(i->param + ba0) & 0xff]; // d is 24bits unsigned
	creg = c = (cmem[ca] << 16);
	r = (int64_t)(int32_t)c * (int64_t)d;
	macc = (macc << 2) + (r >> 7);
  break;

case 1030: // macu cmode=0 dmode=1 crm=2 dbp=0 sfma=1
	d = dmem0[(id + ba0) & 0xff]; // d is 24bits unsigned
	creg = c = (cmem[i->param] << 16);
	r = (int64_t)(int32_t)c * (int64_t)d;
	macc = (macc << 2) + (r >> 7);
  break;

case 1031: // macu cmode=1 dmode=1 crm=2 dbp=0 sfma=1
	d = dmem0[(id + ba0) & 0xff]; // d is 24bits unsigned
	creg = c = (cmem[ca] << 16);
	r = (int64_t)(int32_t)c * (int64_t)d;
	macc = (macc << 2) + (r >> 7);
  break;

case 1032: // macu cmode=0 dmode=0 crm=0 dbp=1 sfma=1
	d = dmem1[(i->param + ba1) & 0x1f]; // d is 24bits unsigned
	creg = c = cmem[i->param];
	r = (int64_t)(int32_t)c * (int64_t)d;
	macc = (macc << 2) + (r >> 7);
  break;

case 1033: // macu cmode=1 dmode=0 crm=0 dbp=1 sfma=1
	d = dmem1[(i->param + ba1) & 0x1f]; // d is 24bits unsigned
	creg = c = cmem[ca];
	r = (int64_t)(int32_t)c * (int64_t)d;
	macc = (macc << 2) + (r >> 7);
  break;

case 1034: // macu cmode=0 dmode=1 crm=0 dbp=1 sfma=1
	d = dmem1[(id + ba1) & 0x1f]; // d is 24bits unsigned
	creg = c = cmem[i->param];
	r = (int64_t)(int32_t)c * (int64_t)d;
	macc = (macc << 2) + (r >> 7);
  break;

case 1035: // macu cmode=1 dmode=1 crm=0 dbp=1 sfma=1
	d = dmem1[(id + ba1) & 0x1f]; // d is 24bits unsigned
	creg = c = cmem[ca];
	r = (int64_t)(int32_t)c * (int64_t)d;
	macc = (macc << 2) + (r >> 7);
  break;

case 1036: // macu cmode=0 dmode=0 crm=1 dbp=1 sfma=1
	d = dmem1[(i->param + ba1) & 0x1f]; // d is 24bits unsigned
	creg = c = (cmem[i->param] & 0xffff0000);
	r = (int64_t)(int32_t)c * (int64_t)d;
	macc = (macc << 2) + (r >> 7);
  break;

case 1037: // macu cmode=1 dmode=0 crm=1 dbp=1 sfma=1
	d = dmem1[(i->param + ba1) & 0x1f]; // d is 24bits unsigned
	creg = c = (cmem[ca] & 0xffff0000);
	r = (int64_t)(int32_t)c * (int64_t)d;
	macc = (macc << 2) + (r >> 7);
  break;

case 1038: // macu cmode=0 dmode=1 crm=1 dbp=1 sfma=1
	d = dmem1[(id + ba1) & 0x1f]; // d is 24bits unsigned
	creg = c = (cmem[i->param] & 0xffff0000);
	r = (int64_t)(int32_t)c * (int64_t)d;
	macc = (macc << 2) + (r >> 7);
  break;

case 1039: // macu cmode=1 dmode=1 crm=1 dbp=1 sfma=1
	d = dmem1[(id + ba1) & 0x1f]; // d is 24bits unsigned
	creg = c = (cmem[ca] & 0xffff0000);
	r = (int64_t)(int32_t)c * (int64_t)d;
	macc = (macc << 2) + (r >> 7);
  break;

case 1040: // macu cmode=0 dmode=0 crm=2 dbp=1 sfma=1
	d = dmem1[(i->param + ba1) & 0x1f]; // d is 24bits unsigned
	creg = c = (cmem[i->param] << 16);
	r = (int64_t)(int32_t)c * (int64_t)d;
	macc = (macc << 2) + (r >> 7);
  break;

case 1041: // macu cmode=1 dmode=0 crm=2 dbp=1 sfma=1
	d = dmem1[(i->param + ba1) & 0x1f]; // d is 24bits unsigned
	creg = c = (cmem[ca] << 16);
	r = (int64_t)(int32_t)c * (int64_t)d;
	macc = (macc << 2) + (r >> 7);
  break;

case 1042: // macu cmode=0 dmode=1 crm=2 dbp=1 sfma=1
	d = dmem1[(id + ba1) & 0x1f]; // d is 24bits unsigned
	creg = c = (cmem[i->param] << 16);
	r = (int64_t)(int32_t)c * (int64_t)d;
	macc = (macc << 2) + (r >> 7);
  break;

case 1043: // macu cmode=1 dmode=1 crm=2 dbp=1 sfma=1
	d = dmem1[(id + ba1) & 0x1f]; // d is 24bits unsigned
	creg = c = (cmem[ca] << 16);
	r = (int64_t)(int32_t)c * (int64_t)d;
	macc = (macc << 2) + (r >> 7);
  break;

case 1044: // macu cmode=0 dmode=0 crm=0 dbp=0 sfma=2
	d = dmem0[(i->param + ba0) & 0xff]; // d is 24bits unsigned
	creg = c = cmem[i->param];
	r = (int64_t)(int32_t)c * (int64_t)d;
	macc = (macc << 4) + (r >> 7);
  break;

case 1045: // macu cmode=1 dmode=0 crm=0 dbp=0 sfma=2
	d = dmem0[(i->param + ba0) & 0xff]; // d is 24bits unsigned
	creg = c = cmem[ca];
	r = (int64_t)(int32_t)c * (int64_t)d;
	macc = (macc << 4) + (r >> 7);
  break;

case 1046: // macu cmode=0 dmode=1 crm=0 dbp=0 sfma=2
	d = dmem0[(id + ba0) & 0xff]; // d is 24bits unsigned
	creg = c = cmem[i->param];
	r = (int64_t)(int32_t)c * (int64_t)d;
	macc = (macc << 4) + (r >> 7);
  break;

case 1047: // macu cmode=1 dmode=1 crm=0 dbp=0 sfma=2
	d = dmem0[(id + ba0) & 0xff]; // d is 24bits unsigned
	creg = c = cmem[ca];
	r = (int64_t)(int32_t)c * (int64_t)d;
	macc = (macc << 4) + (r >> 7);
  break;

case 1048: // macu cmode=0 dmode=0 crm=1 dbp=0 sfma=2
	d = dmem0[(i->param + ba0) & 0xff]; // d is 24bits unsigned
	creg = c = (cmem[i->param] & 0xffff0000);
	r = (int64_t)(int32_t)c * (int64_t)d;
	macc = (macc << 4) + (r >> 7);
  break;

case 1049: // macu cmode=1 dmode=0 crm=1 dbp=0 sfma=2
	d = dmem0[(i->param + ba0) & 0xff]; // d is 24bits unsigned
	creg = c = (cmem[ca] & 0xffff0000);
	r = (int64_t)(int32_t)c * (int64_t)d;
	macc = (macc << 4) + (r >> 7);
  break;

case 1050: // macu cmode=0 dmode=1 crm=1 dbp=0 sfma=2
	d = dmem0[(id + ba0) & 0xff]; // d is 24bits unsigned
	creg = c = (cmem[i->param] & 0xffff0000);
	r = (int64_t)(int32_t)c * (int64_t)d;
	macc = (macc << 4) + (r >> 7);
  break;

case 1051: // macu cmode=1 dmode=1 crm=1 dbp=0 sfma=2
	d = dmem0[(id + ba0) & 0xff]; // d is 24bits unsigned
	creg = c = (cmem[ca] & 0xffff0000);
	r = (int64_t)(int32_t)c * (int64_t)d;
	macc = (macc << 4) + (r >> 7);
  break;

case 1052: // macu cmode=0 dmode=0 crm=2 dbp=0 sfma=2
	d = dmem0[(i->param + ba0) & 0xff]; // d is 24bits unsigned
	creg = c = (cmem[i->param] << 16);
	r = (int64_t)(int32_t)c * (int64_t)d;
	macc = (macc << 4) + (r >> 7);
  break;

case 1053: // macu cmode=1 dmode=0 crm=2 dbp=0 sfma=2
	d = dmem0[(i->param + ba0) & 0xff]; // d is 24bits unsigned
	creg = c = (cmem[ca] << 16);
	r = (int64_t)(int32_t)c * (int64_t)d;
	macc = (macc << 4) + (r >> 7);
  break;

case 1054: // macu cmode=0 dmode=1 crm=2 dbp=0 sfma=2
	d = dmem0[(id + ba0) & 0xff]; // d is 24bits unsigned
	creg = c = (cmem[i->param] << 16);
	r = (int64_t)(int32_t)c * (int64_t)d;
	macc = (macc << 4) + (r >> 7);
  break;

case 1055: // macu cmode=1 dmode=1 crm=2 dbp=0 sfma=2
	d = dmem0[(id + ba0) & 0xff]; // d is 24bits unsigned
	creg = c = (cmem[ca] << 16);
	r = (int64_t)(int32_t)c * (int64_t)d;
	macc = (macc << 4) + (r >> 7);
  break;

case 1056: // macu cmode=0 dmode=0 crm=0 dbp=1 sfma=2
	d = dmem1[(i->param + ba1) & 0x1f]; // d is 24bits unsigned
	creg = c = cmem[i->param];
	r = (int64_t)(int32_t)c * (int64_t)d;
	macc = (macc << 4) + (r >> 7);
  break;

case 1057: // macu cmode=1 dmode=0 crm=0 dbp=1 sfma=2
	d = dmem1[(i->param + ba1) & 0x1f]; // d is 24bits unsigned
	creg = c = cmem[ca];
	r = (int64_t)(int32_t)c * (int64_t)d;
	macc = (macc << 4) + (r >> 7);
  break;

case 1058: // macu cmode=0 dmode=1 crm=0 dbp=1 sfma=2
	d = dmem1[(id + ba1) & 0x1f]; // d is 24bits unsigned
	creg = c = cmem[i->param];
	r = (int64_t)(int32_t)c * (int64_t)d;
	macc = (macc << 4) + (r >> 7);
  break;

case 1059: // macu cmode=1 dmode=1 crm=0 dbp=1 sfma=2
	d = dmem1[(id + ba1) & 0x1f]; // d is 24bits unsigned
	creg = c = cmem[ca];
	r = (int64_t)(int32_t)c * (int64_t)d;
	macc = (macc << 4) + (r >> 7);
  break;

case 1060: // macu cmode=0 dmode=0 crm=1 dbp=1 sfma=2
	d = dmem1[(i->param + ba1) & 0x1f]; // d is 24bits unsigned
	creg = c = (cmem[i->param] & 0xffff0000);
	r = (int64_t)(int32_t)c * (int64_t)d;
	macc = (macc << 4) + (r >> 7);
  break;

case 1061: // macu cmode=1 dmode=0 crm=1 dbp=1 sfma=2
	d = dmem1[(i->param + ba1) & 0x1f]; // d is 24bits unsigned
	creg = c = (cmem[ca] & 0xffff0000);
	r = (int64_t)(int32_t)c * (int64_t)d;
	macc = (macc << 4) + (r >> 7);
  break;

case 1062: // macu cmode=0 dmode=1 crm=1 dbp=1 sfma=2
	d = dmem1[(id + ba1) & 0x1f]; // d is 24bits unsigned
	creg = c = (cmem[i->param] & 0xffff0000);
	r = (int64_t)(int32_t)c * (int64_t)d;
	macc = (macc << 4) + (r >> 7);
  break;

case 1063: // macu cmode=1 dmode=1 crm=1 dbp=1 sfma=2
	d = dmem1[(id + ba1) & 0x1f]; // d is 24bits unsigned
	creg = c = (cmem[ca] & 0xffff0000);
	r = (int64_t)(int32_t)c * (int64_t)d;
	macc = (macc << 4) + (r >> 7);
  break;

case 1064: // macu cmode=0 dmode=0 crm=2 dbp=1 sfma=2
	d = dmem1[(i->param + ba1) & 0x1f]; // d is 24bits unsigned
	creg = c = (cmem[i->param] << 16);
	r = (int64_t)(int32_t)c * (int64_t)d;
	macc = (macc << 4) + (r >> 7);
  break;

case 1065: // macu cmode=1 dmode=0 crm=2 dbp=1 sfma=2
	d = dmem1[(i->param + ba1) & 0x1f]; // d is 24bits unsigned
	creg = c = (cmem[ca] << 16);
	r = (int64_t)(int32_t)c * (int64_t)d;
	macc = (macc << 4) + (r >> 7);
  break;

case 1066: // macu cmode=0 dmode=1 crm=2 dbp=1 sfma=2
	d = dmem1[(id + ba1) & 0x1f]; // d is 24bits unsigned
	creg = c = (cmem[i->param] << 16);
	r = (int64_t)(int32_t)c * (int64_t)d;
	macc = (macc << 4) + (r >> 7);
  break;

case 1067: // macu cmode=1 dmode=1 crm=2 dbp=1 sfma=2
	d = dmem1[(id + ba1) & 0x1f]; // d is 24bits unsigned
	creg = c = (cmem[ca] << 16);
	r = (int64_t)(int32_t)c * (int64_t)d;
	macc = (macc << 4) + (r >> 7);
  break;

case 1068: // macu cmode=0 dmode=0 crm=0 dbp=0 sfma=3
	d = dmem0[(i->param + ba0) & 0xff]; // d is 24bits unsigned
	creg = c = cmem[i->param];
	r = (int64_t)(int32_t)c * (int64_t)d;
	macc = (macc >> 16) + (r >> 7);
  break;

case 1069: // macu cmode=1 dmode=0 crm=0 dbp=0 sfma=3
	d = dmem0[(i->param + ba0) & 0xff]; // d is 24bits unsigned
	creg = c = cmem[ca];
	r = (int64_t)(int32_t)c * (int64_t)d;
	macc = (macc >> 16) + (r >> 7);
  break;

case 1070: // macu cmode=0 dmode=1 crm=0 dbp=0 sfma=3
	d = dmem0[(id + ba0) & 0xff]; // d is 24bits unsigned
	creg = c = cmem[i->param];
	r = (int64_t)(int32_t)c * (int64_t)d;
	macc = (macc >> 16) + (r >> 7);
  break;

case 1071: // macu cmode=1 dmode=1 crm=0 dbp=0 sfma=3
	d = dmem0[(id + ba0) & 0xff]; // d is 24bits unsigned
	creg = c = cmem[ca];
	r = (int64_t)(int32_t)c * (int64_t)d;
	macc = (macc >> 16) + (r >> 7);
  break;

case 1072: // macu cmode=0 dmode=0 crm=1 dbp=0 sfma=3
	d = dmem0[(i->param + ba0) & 0xff]; // d is 24bits unsigned
	creg = c = (cmem[i->param] & 0xffff0000);
	r = (int64_t)(int32_t)c * (int64_t)d;
	macc = (macc >> 16) + (r >> 7);
  break;

case 1073: // macu cmode=1 dmode=0 crm=1 dbp=0 sfma=3
	d = dmem0[(i->param + ba0) & 0xff]; // d is 24bits unsigned
	creg = c = (cmem[ca] & 0xffff0000);
	r = (int64_t)(int32_t)c * (int64_t)d;
	macc = (macc >> 16) + (r >> 7);
  break;

case 1074: // macu cmode=0 dmode=1 crm=1 dbp=0 sfma=3
	d = dmem0[(id + ba0) & 0xff]; // d is 24bits unsigned
	creg = c = (cmem[i->param] & 0xffff0000);
	r = (int64_t)(int32_t)c * (int64_t)d;
	macc = (macc >> 16) + (r >> 7);
  break;

case 1075: // macu cmode=1 dmode=1 crm=1 dbp=0 sfma=3
	d = dmem0[(id + ba0) & 0xff]; // d is 24bits unsigned
	creg = c = (cmem[ca] & 0xffff0000);
	r = (int64_t)(int32_t)c * (int64_t)d;
	macc = (macc >> 16) + (r >> 7);
  break;

case 1076: // macu cmode=0 dmode=0 crm=2 dbp=0 sfma=3
	d = dmem0[(i->param + ba0) & 0xff]; // d is 24bits unsigned
	creg = c = (cmem[i->param] << 16);
	r = (int64_t)(int32_t)c * (int64_t)d;
	macc = (macc >> 16) + (r >> 7);
  break;

case 1077: // macu cmode=1 dmode=0 crm=2 dbp=0 sfma=3
	d = dmem0[(i->param + ba0) & 0xff]; // d is 24bits unsigned
	creg = c = (cmem[ca] << 16);
	r = (int64_t)(int32_t)c * (int64_t)d;
	macc = (macc >> 16) + (r >> 7);
  break;

case 1078: // macu cmode=0 dmode=1 crm=2 dbp=0 sfma=3
	d = dmem0[(id + ba0) & 0xff]; // d is 24bits unsigned
	creg = c = (cmem[i->param] << 16);
	r = (int64_t)(int32_t)c * (int64_t)d;
	macc = (macc >> 16) + (r >> 7);
  break;

case 1079: // macu cmode=1 dmode=1 crm=2 dbp=0 sfma=3
	d = dmem0[(id + ba0) & 0xff]; // d is 24bits unsigned
	creg = c = (cmem[ca] << 16);
	r = (int64_t)(int32_t)c * (int64_t)d;
	macc = (macc >> 16) + (r >> 7);
  break;

case 1080: // macu cmode=0 dmode=0 crm=0 dbp=1 sfma=3
	d = dmem1[(i->param + ba1) & 0x1f]; // d is 24bits unsigned
	creg = c = cmem[i->param];
	r = (int64_t)(int32_t)c * (int64_t)d;
	macc = (macc >> 16) + (r >> 7);
  break;

case 1081: // macu cmode=1 dmode=0 crm=0 dbp=1 sfma=3
	d = dmem1[(i->param + ba1) & 0x1f]; // d is 24bits unsigned
	creg = c = cmem[ca];
	r = (int64_t)(int32_t)c * (int64_t)d;
	macc = (macc >> 16) + (r >> 7);
  break;

case 1082: // macu cmode=0 dmode=1 crm=0 dbp=1 sfma=3
	d = dmem1[(id + ba1) & 0x1f]; // d is 24bits unsigned
	creg = c = cmem[i->param];
	r = (int64_t)(int32_t)c * (int64_t)d;
	macc = (macc >> 16) + (r >> 7);
  break;

case 1083: // macu cmode=1 dmode=1 crm=0 dbp=1 sfma=3
	d = dmem1[(id + ba1) & 0x1f]; // d is 24bits unsigned
	creg = c = cmem[ca];
	r = (int64_t)(int32_t)c * (int64_t)d;
	macc = (macc >> 16) + (r >> 7);
  break;

case 1084: // macu cmode=0 dmode=0 crm=1 dbp=1 sfma=3
	d = dmem1[(i->param + ba1) & 0x1f]; // d is 24bits unsigned
	creg = c = (cmem[i->param] & 0xffff0000);
	r = (int64_t)(int32_t)c * (int64_t)d;
	macc = (macc >> 16) + (r >> 7);
  break;

case 1085: // macu cmode=1 dmode=0 crm=1 dbp=1 sfma=3
	d = dmem1[(i->param + ba1) & 0x1f]; // d is 24bits unsigned
	creg = c = (cmem[ca] & 0xffff0000);
	r = (int64_t)(int32_t)c * (int64_t)d;
	macc = (macc >> 16) + (r >> 7);
  break;

case 1086: // macu cmode=0 dmode=1 crm=1 dbp=1 sfma=3
	d = dmem1[(id + ba1) & 0x1f]; // d is 24bits unsigned
	creg = c = (cmem[i->param] & 0xffff0000);
	r = (int64_t)(int32_t)c * (int64_t)d;
	macc = (macc >> 16) + (r >> 7);
  break;

case 1087: // macu cmode=1 dmode=1 crm=1 dbp=1 sfma=3
	d = dmem1[(id + ba1) & 0x1f]; // d is 24bits unsigned
	creg = c = (cmem[ca] & 0xffff0000);
	r = (int64_t)(int32_t)c * (int64_t)d;
	macc = (macc >> 16) + (r >> 7);
  break;

case 1088: // macu cmode=0 dmode=0 crm=2 dbp=1 sfma=3
	d = dmem1[(i->param + ba1) & 0x1f]; // d is 24bits unsigned
	creg = c = (cmem[i->param] << 16);
	r = (int64_t)(int32_t)c * (int64_t)d;
	macc = (macc >> 16) + (r >> 7);
  break;

case 1089: // macu cmode=1 dmode=0 crm=2 dbp=1 sfma=3
	d = dmem1[(i->param + ba1) & 0x1f]; // d is 24bits unsigned
	creg = c = (cmem[ca] << 16);
	r = (int64_t)(int32_t)c * (int64_t)d;
	macc = (macc >> 16) + (r >> 7);
  break;

case 1090: // macu cmode=0 dmode=1 crm=2 dbp=1 sfma=3
	d = dmem1[(id + ba1) & 0x1f]; // d is 24bits unsigned
	creg = c = (cmem[i->param] << 16);
	r = (int64_t)(int32_t)c * (int64_t)d;
	macc = (macc >> 16) + (r >> 7);
  break;

case 1091: // macu cmode=1 dmode=1 crm=2 dbp=1 sfma=3
	d = dmem1[(id + ba1) & 0x1f]; // d is 24bits unsigned
	creg = c = (cmem[ca] << 16);
	r = (int64_t)(int32_t)c * (int64_t)d;
	macc = (macc >> 16) + (r >> 7);
  break;

case 1092: // macu dmode=0 dbp=0 sfao=0 sfma=0
	d = dmem0[(i->param + ba0) & 0xff]; // d is 24bits unsigned
	creg = c = aacc;
	r = (int64_t)(int32_t)c * (int64_t)d;
	macc = macc + (r >> 7);
  break;

case 1093: // macu dmode=1 dbp=0 sfao=0 sfma=0
	d = dmem0[(id + ba0) & 0xff]; // d is 24bits unsigned
	creg = c = aacc;
	r = (int64_t)(int32_t)c * (int64_t)d;
	macc = macc + (r >> 7);
  break;

case 1094: // macu dmode=0 dbp=1 sfao=0 sfma=0
	d = dmem1[(i->param + ba1) & 0x1f]; // d is 24bits unsigned
	creg = c = aacc;
	r = (int64_t)(int32_t)c * (int64_t)d;
	macc = macc + (r >> 7);
  break;

case 1095: // macu dmode=1 dbp=1 sfao=0 sfma=0
	d = dmem1[(id + ba1) & 0x1f]; // d is 24bits unsigned
	creg = c = aacc;
	r = (int64_t)(int32_t)c * (int64_t)d;
	macc = macc + (r >> 7);
  break;

case 1096: // macu dmode=0 dbp=0 sfao=1 sfma=0
	d = dmem0[(i->param + ba0) & 0xff]; // d is 24bits unsigned
	creg = c = (aacc << 7);
	r = (int64_t)(int32_t)c * (int64_t)d;
	macc = macc + (r >> 7);
  break;

case 1097: // macu dmode=1 dbp=0 sfao=1 sfma=0
	d = dmem0[(id + ba0) & 0xff]; // d is 24bits unsigned
	creg = c = (aacc << 7);
	r = (int64_t)(int32_t)c * (int64_t)d;
	macc = macc + (r >> 7);
  break;

case 1098: // macu dmode=0 dbp=1 sfao=1 sfma=0
	d = dmem1[(i->param + ba1) & 0x1f]; // d is 24bits unsigned
	creg = c = (aacc << 7);
	r = (int64_t)(int32_t)c * (int64_t)d;
	macc = macc + (r >> 7);
  break;

case 1099: // macu dmode=1 dbp=1 sfao=1 sfma=0
	d = dmem1[(id + ba1) & 0x1f]; // d is 24bits unsigned
	creg = c = (aacc << 7);
	r = (int64_t)(int32_t)c * (int64_t)d;
	macc = macc + (r >> 7);
  break;

case 1100: // macu dmode=0 dbp=0 sfao=0 sfma=1
	d = dmem0[(i->param + ba0) & 0xff]; // d is 24bits unsigned
	creg = c = aacc;
	r = (int64_t)(int32_t)c * (int64_t)d;
	macc = (macc << 2) + (r >> 7);
  break;

case 1101: // macu dmode=1 dbp=0 sfao=0 sfma=1
	d = dmem0[(id + ba0) & 0xff]; // d is 24bits unsigned
	creg = c = aacc;
	r = (int64_t)(int32_t)c * (int64_t)d;
	macc = (macc << 2) + (r >> 7);
  break;

case 1102: // macu dmode=0 dbp=1 sfao=0 sfma=1
	d = dmem1[(i->param + ba1) & 0x1f]; // d is 24bits unsigned
	creg = c = aacc;
	r = (int64_t)(int32_t)c * (int64_t)d;
	macc = (macc << 2) + (r >> 7);
  break;

case 1103: // macu dmode=1 dbp=1 sfao=0 sfma=1
	d = dmem1[(id + ba1) & 0x1f]; // d is 24bits unsigned
	creg = c = aacc;
	r = (int64_t)(int32_t)c * (int64_t)d;
	macc = (macc << 2) + (r >> 7);
  break;

case 1104: // macu dmode=0 dbp=0 sfao=1 sfma=1
	d = dmem0[(i->param + ba0) & 0xff]; // d is 24bits unsigned
	creg = c = (aacc << 7);
	r = (int64_t)(int32_t)c * (int64_t)d;
	macc = (macc << 2) + (r >> 7);
  break;

case 1105: // macu dmode=1 dbp=0 sfao=1 sfma=1
	d = dmem0[(id + ba0) & 0xff]; // d is 24bits unsigned
	creg = c = (aacc << 7);
	r = (int64_t)(int32_t)c * (int64_t)d;
	macc = (macc << 2) + (r >> 7);
  break;

case 1106: // macu dmode=0 dbp=1 sfao=1 sfma=1
	d = dmem1[(i->param + ba1) & 0x1f]; // d is 24bits unsigned
	creg = c = (aacc << 7);
	r = (int64_t)(int32_t)c * (int64_t)d;
	macc = (macc << 2) + (r >> 7);
  break;

case 1107: // macu dmode=1 dbp=1 sfao=1 sfma=1
	d = dmem1[(id + ba1) & 0x1f]; // d is 24bits unsigned
	creg = c = (aacc << 7);
	r = (int64_t)(int32_t)c * (int64_t)d;
	macc = (macc << 2) + (r >> 7);
  break;

case 1108: // macu dmode=0 dbp=0 sfao=0 sfma=2
	d = dmem0[(i->param + ba0) & 0xff]; // d is 24bits unsigned
	creg = c = aacc;
	r = (int64_t)(int32_t)c * (int64_t)d;
	macc = (macc << 4) + (r >> 7);
  break;

case 1109: // macu dmode=1 dbp=0 sfao=0 sfma=2
	d = dmem0[(id + ba0) & 0xff]; // d is 24bits unsigned
	creg = c = aacc;
	r = (int64_t)(int32_t)c * (int64_t)d;
	macc = (macc << 4) + (r >> 7);
  break;

case 1110: // macu dmode=0 dbp=1 sfao=0 sfma=2
	d = dmem1[(i->param + ba1) & 0x1f]; // d is 24bits unsigned
	creg = c = aacc;
	r = (int64_t)(int32_t)c * (int64_t)d;
	macc = (macc << 4) + (r >> 7);
  break;

case 1111: // macu dmode=1 dbp=1 sfao=0 sfma=2
	d = dmem1[(id + ba1) & 0x1f]; // d is 24bits unsigned
	creg = c = aacc;
	r = (int64_t)(int32_t)c * (int64_t)d;
	macc = (macc << 4) + (r >> 7);
  break;

case 1112: // macu dmode=0 dbp=0 sfao=1 sfma=2
	d = dmem0[(i->param + ba0) & 0xff]; // d is 24bits unsigned
	creg = c = (aacc << 7);
	r = (int64_t)(int32_t)c * (int64_t)d;
	macc = (macc << 4) + (r >> 7);
  break;

case 1113: // macu dmode=1 dbp=0 sfao=1 sfma=2
	d = dmem0[(id + ba0) & 0xff]; // d is 24bits unsigned
	creg = c = (aacc << 7);
	r = (int64_t)(int32_t)c * (int64_t)d;
	macc = (macc << 4) + (r >> 7);
  break;

case 1114: // macu dmode=0 dbp=1 sfao=1 sfma=2
	d = dmem1[(i->param + ba1) & 0x1f]; // d is 24bits unsigned
	creg = c = (aacc << 7);
	r = (int64_t)(int32_t)c * (int64_t)d;
	macc = (macc << 4) + (r >> 7);
  break;

case 1115: // macu dmode=1 dbp=1 sfao=1 sfma=2
	d = dmem1[(id + ba1) & 0x1f]; // d is 24bits unsigned
	creg = c = (aacc << 7);
	r = (int64_t)(int32_t)c * (int64_t)d;
	macc = (macc << 4) + (r >> 7);
  break;

case 1116: // macu dmode=0 dbp=0 sfao=0 sfma=3
	d = dmem0[(i->param + ba0) & 0xff]; // d is 24bits unsigned
	creg = c = aacc;
	r = (int64_t)(int32_t)c * (int64_t)d;
	macc = (macc >> 16) + (r >> 7);
  break;

case 1117: // macu dmode=1 dbp=0 sfao=0 sfma=3
	d = dmem0[(id + ba0) & 0xff]; // d is 24bits unsigned
	creg = c = aacc;
	r = (int64_t)(int32_t)c * (int64_t)d;
	macc = (macc >> 16) + (r >> 7);
  break;

case 1118: // macu dmode=0 dbp=1 sfao=0 sfma=3
	d = dmem1[(i->param + ba1) & 0x1f]; // d is 24bits unsigned
	creg = c = aacc;
	r = (int64_t)(int32_t)c * (int64_t)d;
	macc = (macc >> 16) + (r >> 7);
  break;

case 1119: // macu dmode=1 dbp=1 sfao=0 sfma=3
	d = dmem1[(id + ba1) & 0x1f]; // d is 24bits unsigned
	creg = c = aacc;
	r = (int64_t)(int32_t)c * (int64_t)d;
	macc = (macc >> 16) + (r >> 7);
  break;

case 1120: // macu dmode=0 dbp=0 sfao=1 sfma=3
	d = dmem0[(i->param + ba0) & 0xff]; // d is 24bits unsigned
	creg = c = (aacc << 7);
	r = (int64_t)(int32_t)c * (int64_t)d;
	macc = (macc >> 16) + (r >> 7);
  break;

case 1121: // macu dmode=1 dbp=0 sfao=1 sfma=3
	d = dmem0[(id + ba0) & 0xff]; // d is 24bits unsigned
	creg = c = (aacc << 7);
	r = (int64_t)(int32_t)c * (int64_t)d;
	macc = (macc >> 16) + (r >> 7);
  break;

case 1122: // macu dmode=0 dbp=1 sfao=1 sfma=3
	d = dmem1[(i->param + ba1) & 0x1f]; // d is 24bits unsigned
	creg = c = (aacc << 7);
	r = (int64_t)(int32_t)c * (int64_t)d;
	macc = (macc >> 16) + (r >> 7);
  break;

case 1123: // macu dmode=1 dbp=1 sfao=1 sfma=3
	d = dmem1[(id + ba1) & 0x1f]; // d is 24bits unsigned
	creg = c = (aacc << 7);
	r = (int64_t)(int32_t)c * (int64_t)d;
	macc = (macc >> 16) + (r >> 7);
  break;

case 1124: // macs cmode=0 crm=0 sfao=0 sfma=0
	creg = c = cmem[i->param];
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)aacc;
	macc = macc + (r >> 14);
  break;

case 1125: // macs cmode=1 crm=0 sfao=0 sfma=0
	creg = c = cmem[ca];
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)aacc;
	macc = macc + (r >> 14);
  break;

case 1126: // macs cmode=0 crm=1 sfao=0 sfma=0
	creg = c = (cmem[i->param] & 0xffff0000);
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)aacc;
	macc = macc + (r >> 14);
  break;

case 1127: // macs cmode=1 crm=1 sfao=0 sfma=0
	creg = c = (cmem[ca] & 0xffff0000);
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)aacc;
	macc = macc + (r >> 14);
  break;

case 1128: // macs cmode=0 crm=2 sfao=0 sfma=0
	creg = c = (cmem[i->param] << 16);
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)aacc;
	macc = macc + (r >> 14);
  break;

case 1129: // macs cmode=1 crm=2 sfao=0 sfma=0
	creg = c = (cmem[ca] << 16);
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)aacc;
	macc = macc + (r >> 14);
  break;

case 1130: // macs cmode=0 crm=0 sfao=1 sfma=0
	creg = c = cmem[i->param];
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)(aacc << 7);
	macc = macc + (r >> 14);
  break;

case 1131: // macs cmode=1 crm=0 sfao=1 sfma=0
	creg = c = cmem[ca];
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)(aacc << 7);
	macc = macc + (r >> 14);
  break;

case 1132: // macs cmode=0 crm=1 sfao=1 sfma=0
	creg = c = (cmem[i->param] & 0xffff0000);
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)(aacc << 7);
	macc = macc + (r >> 14);
  break;

case 1133: // macs cmode=1 crm=1 sfao=1 sfma=0
	creg = c = (cmem[ca] & 0xffff0000);
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)(aacc << 7);
	macc = macc + (r >> 14);
  break;

case 1134: // macs cmode=0 crm=2 sfao=1 sfma=0
	creg = c = (cmem[i->param] << 16);
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)(aacc << 7);
	macc = macc + (r >> 14);
  break;

case 1135: // macs cmode=1 crm=2 sfao=1 sfma=0
	creg = c = (cmem[ca] << 16);
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)(aacc << 7);
	macc = macc + (r >> 14);
  break;

case 1136: // macs cmode=0 crm=0 sfao=0 sfma=1
	creg = c = cmem[i->param];
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)aacc;
	macc = (macc << 2) + (r >> 14);
  break;

case 1137: // macs cmode=1 crm=0 sfao=0 sfma=1
	creg = c = cmem[ca];
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)aacc;
	macc = (macc << 2) + (r >> 14);
  break;

case 1138: // macs cmode=0 crm=1 sfao=0 sfma=1
	creg = c = (cmem[i->param] & 0xffff0000);
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)aacc;
	macc = (macc << 2) + (r >> 14);
  break;

case 1139: // macs cmode=1 crm=1 sfao=0 sfma=1
	creg = c = (cmem[ca] & 0xffff0000);
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)aacc;
	macc = (macc << 2) + (r >> 14);
  break;

case 1140: // macs cmode=0 crm=2 sfao=0 sfma=1
	creg = c = (cmem[i->param] << 16);
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)aacc;
	macc = (macc << 2) + (r >> 14);
  break;

case 1141: // macs cmode=1 crm=2 sfao=0 sfma=1
	creg = c = (cmem[ca] << 16);
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)aacc;
	macc = (macc << 2) + (r >> 14);
  break;

case 1142: // macs cmode=0 crm=0 sfao=1 sfma=1
	creg = c = cmem[i->param];
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)(aacc << 7);
	macc = (macc << 2) + (r >> 14);
  break;

case 1143: // macs cmode=1 crm=0 sfao=1 sfma=1
	creg = c = cmem[ca];
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)(aacc << 7);
	macc = (macc << 2) + (r >> 14);
  break;

case 1144: // macs cmode=0 crm=1 sfao=1 sfma=1
	creg = c = (cmem[i->param] & 0xffff0000);
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)(aacc << 7);
	macc = (macc << 2) + (r >> 14);
  break;

case 1145: // macs cmode=1 crm=1 sfao=1 sfma=1
	creg = c = (cmem[ca] & 0xffff0000);
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)(aacc << 7);
	macc = (macc << 2) + (r >> 14);
  break;

case 1146: // macs cmode=0 crm=2 sfao=1 sfma=1
	creg = c = (cmem[i->param] << 16);
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)(aacc << 7);
	macc = (macc << 2) + (r >> 14);
  break;

case 1147: // macs cmode=1 crm=2 sfao=1 sfma=1
	creg = c = (cmem[ca] << 16);
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)(aacc << 7);
	macc = (macc << 2) + (r >> 14);
  break;

case 1148: // macs cmode=0 crm=0 sfao=0 sfma=2
	creg = c = cmem[i->param];
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)aacc;
	macc = (macc << 4) + (r >> 14);
  break;

case 1149: // macs cmode=1 crm=0 sfao=0 sfma=2
	creg = c = cmem[ca];
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)aacc;
	macc = (macc << 4) + (r >> 14);
  break;

case 1150: // macs cmode=0 crm=1 sfao=0 sfma=2
	creg = c = (cmem[i->param] & 0xffff0000);
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)aacc;
	macc = (macc << 4) + (r >> 14);
  break;

case 1151: // macs cmode=1 crm=1 sfao=0 sfma=2
	creg = c = (cmem[ca] & 0xffff0000);
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)aacc;
	macc = (macc << 4) + (r >> 14);
  break;

case 1152: // macs cmode=0 crm=2 sfao=0 sfma=2
	creg = c = (cmem[i->param] << 16);
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)aacc;
	macc = (macc << 4) + (r >> 14);
  break;

case 1153: // macs cmode=1 crm=2 sfao=0 sfma=2
	creg = c = (cmem[ca] << 16);
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)aacc;
	macc = (macc << 4) + (r >> 14);
  break;

case 1154: // macs cmode=0 crm=0 sfao=1 sfma=2
	creg = c = cmem[i->param];
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)(aacc << 7);
	macc = (macc << 4) + (r >> 14);
  break;

case 1155: // macs cmode=1 crm=0 sfao=1 sfma=2
	creg = c = cmem[ca];
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)(aacc << 7);
	macc = (macc << 4) + (r >> 14);
  break;

case 1156: // macs cmode=0 crm=1 sfao=1 sfma=2
	creg = c = (cmem[i->param] & 0xffff0000);
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)(aacc << 7);
	macc = (macc << 4) + (r >> 14);
  break;

case 1157: // macs cmode=1 crm=1 sfao=1 sfma=2
	creg = c = (cmem[ca] & 0xffff0000);
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)(aacc << 7);
	macc = (macc << 4) + (r >> 14);
  break;

case 1158: // macs cmode=0 crm=2 sfao=1 sfma=2
	creg = c = (cmem[i->param] << 16);
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)(aacc << 7);
	macc = (macc << 4) + (r >> 14);
  break;

case 1159: // macs cmode=1 crm=2 sfao=1 sfma=2
	creg = c = (cmem[ca] << 16);
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)(aacc << 7);
	macc = (macc << 4) + (r >> 14);
  break;

case 1160: // macs cmode=0 crm=0 sfao=0 sfma=3
	creg = c = cmem[i->param];
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)aacc;
	macc = (macc >> 16) + (r >> 14);
  break;

case 1161: // macs cmode=1 crm=0 sfao=0 sfma=3
	creg = c = cmem[ca];
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)aacc;
	macc = (macc >> 16) + (r >> 14);
  break;

case 1162: // macs cmode=0 crm=1 sfao=0 sfma=3
	creg = c = (cmem[i->param] & 0xffff0000);
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)aacc;
	macc = (macc >> 16) + (r >> 14);
  break;

case 1163: // macs cmode=1 crm=1 sfao=0 sfma=3
	creg = c = (cmem[ca] & 0xffff0000);
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)aacc;
	macc = (macc >> 16) + (r >> 14);
  break;

case 1164: // macs cmode=0 crm=2 sfao=0 sfma=3
	creg = c = (cmem[i->param] << 16);
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)aacc;
	macc = (macc >> 16) + (r >> 14);
  break;

case 1165: // macs cmode=1 crm=2 sfao=0 sfma=3
	creg = c = (cmem[ca] << 16);
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)aacc;
	macc = (macc >> 16) + (r >> 14);
  break;

case 1166: // macs cmode=0 crm=0 sfao=1 sfma=3
	creg = c = cmem[i->param];
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)(aacc << 7);
	macc = (macc >> 16) + (r >> 14);
  break;

case 1167: // macs cmode=1 crm=0 sfao=1 sfma=3
	creg = c = cmem[ca];
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)(aacc << 7);
	macc = (macc >> 16) + (r >> 14);
  break;

case 1168: // macs cmode=0 crm=1 sfao=1 sfma=3
	creg = c = (cmem[i->param] & 0xffff0000);
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)(aacc << 7);
	macc = (macc >> 16) + (r >> 14);
  break;

case 1169: // macs cmode=1 crm=1 sfao=1 sfma=3
	creg = c = (cmem[ca] & 0xffff0000);
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)(aacc << 7);
	macc = (macc >> 16) + (r >> 14);
  break;

case 1170: // macs cmode=0 crm=2 sfao=1 sfma=3
	creg = c = (cmem[i->param] << 16);
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)(aacc << 7);
	macc = (macc >> 16) + (r >> 14);
  break;

case 1171: // macs cmode=1 crm=2 sfao=1 sfma=3
	creg = c = (cmem[ca] << 16);
	r = (int64_t)(int32_t)c * (int64_t)(int32_t)(aacc << 7);
	macc = (macc >> 16) + (r >> 14);
  break;

case 1172: // lmhd dmode=0 dbp=0
	macc = ((int64_t)(int32_t)(dmem0[(i->param + ba0) & 0xff] << 8)) << 16;
  break;

case 1173: // lmhd dmode=1 dbp=0
	macc = ((int64_t)(int32_t)(dmem0[(id + ba0) & 0xff] << 8)) << 16;
  break;

case 1174: // lmhd dmode=0 dbp=1
	macc = ((int64_t)(int32_t)(dmem1[(i->param + ba1) & 0x1f] << 8)) << 16;
  break;

case 1175: // lmhd dmode=1 dbp=1
	macc = ((int64_t)(int32_t)(dmem1[(id + ba1) & 0x1f] << 8)) << 16;
  break;

case 1176: // lmld dmode=0 dbp=0
	macc = (macc & ~0xffffffULL) | dmem0[(i->param + ba0) & 0xff];
  break;

case 1177: // lmld dmode=1 dbp=0
	macc = (macc & ~0xffffffULL) | dmem0[(id + ba0) & 0xff];
  break;

case 1178: // lmld dmode=0 dbp=1
	macc = (macc & ~0xffffffULL) | dmem1[(i->param + ba1) & 0x1f];
  break;

case 1179: // lmld dmode=1 dbp=1
	macc = (macc & ~0xffffffULL) | dmem1[(id + ba1) & 0x1f];
  break;

case 1180: // lmhc cmode=0 crm=0
	macc = ((int64_t)(int32_t)cmem[i->param]) << 16;
  break;

case 1181: // lmhc cmode=1 crm=0
	macc = ((int64_t)(int32_t)cmem[ca]) << 16;
  break;

case 1182: // lmhc cmode=0 crm=1
	macc = ((int64_t)(int32_t)(cmem[i->param] & 0xffff0000)) << 16;
  break;

case 1183: // lmhc cmode=1 crm=1
	macc = ((int64_t)(int32_t)(cmem[ca] & 0xffff0000)) << 16;
  break;

case 1184: // lmhc cmode=0 crm=2
	macc = ((int64_t)(int32_t)(cmem[i->param] << 16)) << 16;
  break;

case 1185: // lmhc cmode=1 crm=2
	macc = ((int64_t)(int32_t)(cmem[ca] << 16)) << 16;
  break;

case 1186: // sfml 
	macc = (macc & 0x8000000000000ULL) | ((macc << 1) & 0x7ffffffffffffULL);
  break;

case 1187: // sfmr 
	macc = (macc & 0x8000000000000ULL) | ((macc >> 1) & 0x7ffffffffffffULL);
  break;

case 1188: // wre cmode=0 dmode=0 crm=0 dbp=0
	if(sti & (S_READ|S_WRITE))
	break;
	xwr = dmem0[(i->param + ba0) & 0xff];
	xoa = cmem[i->param];
	xm_init();
	sti |= S_WRITE;
  break;

case 1189: // wre cmode=1 dmode=0 crm=0 dbp=0
	if(sti & (S_READ|S_WRITE))
	break;
	xwr = dmem0[(i->param + ba0) & 0xff];
	xoa = cmem[ca];
	xm_init();
	sti |= S_WRITE;
  break;

case 1190: // wre cmode=0 dmode=1 crm=0 dbp=0
	if(sti & (S_READ|S_WRITE))
	break;
	xwr = dmem0[(id + ba0) & 0xff];
	xoa = cmem[i->param];
	xm_init();
	sti |= S_WRITE;
  break;

case 1191: // wre cmode=1 dmode=1 crm=0 dbp=0
	if(sti & (S_READ|S_WRITE))
	break;
	xwr = dmem0[(id + ba0) & 0xff];
	xoa = cmem[ca];
	xm_init();
	sti |= S_WRITE;
  break;

case 1192: // wre cmode=0 dmode=0 crm=1 dbp=0
	if(sti & (S_READ|S_WRITE))
	break;
	xwr = dmem0[(i->param + ba0) & 0xff];
	xoa = (cmem[i->param] & 0xffff0000);
	xm_init();
	sti |= S_WRITE;
  break;

case 1193: // wre cmode=1 dmode=0 crm=1 dbp=0
	if(sti & (S_READ|S_WRITE))
	break;
	xwr = dmem0[(i->param + ba0) & 0xff];
	xoa = (cmem[ca] & 0xffff0000);
	xm_init();
	sti |= S_WRITE;
  break;

case 1194: // wre cmode=0 dmode=1 crm=1 dbp=0
	if(sti & (S_READ|S_WRITE))
	break;
	xwr = dmem0[(id + ba0) & 0xff];
	xoa = (cmem[i->param] & 0xffff0000);
	xm_init();
	sti |= S_WRITE;
  break;

case 1195: // wre cmode=1 dmode=1 crm=1 dbp=0
	if(sti & (S_READ|S_WRITE))
	break;
	xwr = dmem0[(id + ba0) & 0xff];
	xoa = (cmem[ca] & 0xffff0000);
	xm_init();
	sti |= S_WRITE;
  break;

case 1196: // wre cmode=0 dmode=0 crm=2 dbp=0
	if(sti & (S_READ|S_WRITE))
	break;
	xwr = dmem0[(i->param + ba0) & 0xff];
	xoa = (cmem[i->param] << 16);
	xm_init();
	sti |= S_WRITE;
  break;

case 1197: // wre cmode=1 dmode=0 crm=2 dbp=0
	if(sti & (S_READ|S_WRITE))
	break;
	xwr = dmem0[(i->param + ba0) & 0xff];
	xoa = (cmem[ca] << 16);
	xm_init();
	sti |= S_WRITE;
  break;

case 1198: // wre cmode=0 dmode=1 crm=2 dbp=0
	if(sti & (S_READ|S_WRITE))
	break;
	xwr = dmem0[(id + ba0) & 0xff];
	xoa = (cmem[i->param] << 16);
	xm_init();
	sti |= S_WRITE;
  break;

case 1199: // wre cmode=1 dmode=1 crm=2 dbp=0
	if(sti & (S_READ|S_WRITE))
	break;
	xwr = dmem0[(id + ba0) & 0xff];
	xoa = (cmem[ca] << 16);
	xm_init();
	sti |= S_WRITE;
  break;

case 1200: // wre cmode=0 dmode=0 crm=0 dbp=1
	if(sti & (S_READ|S_WRITE))
	break;
	xwr = dmem1[(i->param + ba1) & 0x1f];
	xoa = cmem[i->param];
	xm_init();
	sti |= S_WRITE;
  break;

case 1201: // wre cmode=1 dmode=0 crm=0 dbp=1
	if(sti & (S_READ|S_WRITE))
	break;
	xwr = dmem1[(i->param + ba1) & 0x1f];
	xoa = cmem[ca];
	xm_init();
	sti |= S_WRITE;
  break;

case 1202: // wre cmode=0 dmode=1 crm=0 dbp=1
	if(sti & (S_READ|S_WRITE))
	break;
	xwr = dmem1[(id + ba1) & 0x1f];
	xoa = cmem[i->param];
	xm_init();
	sti |= S_WRITE;
  break;

case 1203: // wre cmode=1 dmode=1 crm=0 dbp=1
	if(sti & (S_READ|S_WRITE))
	break;
	xwr = dmem1[(id + ba1) & 0x1f];
	xoa = cmem[ca];
	xm_init();
	sti |= S_WRITE;
  break;

case 1204: // wre cmode=0 dmode=0 crm=1 dbp=1
	if(sti & (S_READ|S_WRITE))
	break;
	xwr = dmem1[(i->param + ba1) & 0x1f];
	xoa = (cmem[i->param] & 0xffff0000);
	xm_init();
	sti |= S_WRITE;
  break;

case 1205: // wre cmode=1 dmode=0 crm=1 dbp=1
	if(sti & (S_READ|S_WRITE))
	break;
	xwr = dmem1[(i->param + ba1) & 0x1f];
	xoa = (cmem[ca] & 0xffff0000);
	xm_init();
	sti |= S_WRITE;
  break;

case 1206: // wre cmode=0 dmode=1 crm=1 dbp=1
	if(sti & (S_READ|S_WRITE))
	break;
	xwr = dmem1[(id + ba1) & 0x1f];
	xoa = (cmem[i->param] & 0xffff0000);
	xm_init();
	sti |= S_WRITE;
  break;

case 1207: // wre cmode=1 dmode=1 crm=1 dbp=1
	if(sti & (S_READ|S_WRITE))
	break;
	xwr = dmem1[(id + ba1) & 0x1f];
	xoa = (cmem[ca] & 0xffff0000);
	xm_init();
	sti |= S_WRITE;
  break;

case 1208: // wre cmode=0 dmode=0 crm=2 dbp=1
	if(sti & (S_READ|S_WRITE))
	break;
	xwr = dmem1[(i->param + ba1) & 0x1f];
	xoa = (cmem[i->param] << 16);
	xm_init();
	sti |= S_WRITE;
  break;

case 1209: // wre cmode=1 dmode=0 crm=2 dbp=1
	if(sti & (S_READ|S_WRITE))
	break;
	xwr = dmem1[(i->param + ba1) & 0x1f];
	xoa = (cmem[ca] << 16);
	xm_init();
	sti |= S_WRITE;
  break;

case 1210: // wre cmode=0 dmode=1 crm=2 dbp=1
	if(sti & (S_READ|S_WRITE))
	break;
	xwr = dmem1[(id + ba1) & 0x1f];
	xoa = (cmem[i->param] << 16);
	xm_init();
	sti |= S_WRITE;
  break;

case 1211: // wre cmode=1 dmode=1 crm=2 dbp=1
	if(sti & (S_READ|S_WRITE))
	break;
	xwr = dmem1[(id + ba1) & 0x1f];
	xoa = (cmem[ca] << 16);
	xm_init();
	sti |= S_WRITE;
  break;

case 1212: // rde cmode=0 crm=0
	if(sti & (S_READ|S_WRITE))
	break;
	xoa = cmem[i->param];
	xm_init();
	sti |= S_READ;
  break;

case 1213: // rde cmode=1 crm=0
	if(sti & (S_READ|S_WRITE))
	break;
	xoa = cmem[ca];
	xm_init();
	sti |= S_READ;
  break;

case 1214: // rde cmode=0 crm=1
	if(sti & (S_READ|S_WRITE))
	break;
	xoa = (cmem[i->param] & 0xffff0000);
	xm_init();
	sti |= S_READ;
  break;

case 1215: // rde cmode=1 crm=1
	if(sti & (S_READ|S_WRITE))
	break;
	xoa = (cmem[ca] & 0xffff0000);
	xm_init();
	sti |= S_READ;
  break;

case 1216: // rde cmode=0 crm=2
	if(sti & (S_READ|S_WRITE))
	break;
	xoa = (cmem[i->param] << 16);
	xm_init();
	sti |= S_READ;
  break;

case 1217: // rde cmode=1 crm=2
	if(sti & (S_READ|S_WRITE))
	break;
	xoa = (cmem[ca] << 16);
	xm_init();
	sti |= S_READ;
  break;

case 1218: // sacc cmode=0 sfao=0
	cmem[i->param] = aacc;
  break;

case 1219: // sacc cmode=1 sfao=0
	cmem[ca] = aacc;
  break;

case 1220: // sacc cmode=0 sfao=1
	cmem[i->param] = (aacc << 7);
  break;

case 1221: // sacc cmode=1 sfao=1
	cmem[ca] = (aacc << 7);
  break;

case 1222: // sacd dmode=0 dbp=0 sfao=0
	dmem0[(i->param + ba0) & 0xff] = aacc >> 8;
  break;

case 1223: // sacd dmode=1 dbp=0 sfao=0
	dmem0[(id + ba0) & 0xff] = aacc >> 8;
  break;

case 1224: // sacd dmode=0 dbp=1 sfao=0
	dmem1[(i->param + ba1) & 0x1f] = aacc >> 8;
  break;

case 1225: // sacd dmode=1 dbp=1 sfao=0
	dmem1[(id + ba1) & 0x1f] = aacc >> 8;
  break;

case 1226: // sacd dmode=0 dbp=0 sfao=1
	dmem0[(i->param + ba0) & 0xff] = (aacc << 7) >> 8;
  break;

case 1227: // sacd dmode=1 dbp=0 sfao=1
	dmem0[(id + ba0) & 0xff] = (aacc << 7) >> 8;
  break;

case 1228: // sacd dmode=0 dbp=1 sfao=1
	dmem1[(i->param + ba1) & 0x1f] = (aacc << 7) >> 8;
  break;

case 1229: // sacd dmode=1 dbp=1 sfao=1
	dmem1[(id + ba1) & 0x1f] = (aacc << 7) >> 8;
  break;

case 1230: // smhd dmode=0 dbp=0 sfmo=0 rnd=0 movm=0
	dmem0[(i->param + ba0) & 0xff] = (macc_to_output_0(0x0000000000000000ULL, 0xffffffffffffffffULL) >> 24) & 0xffffff;
  break;

case 1231: // smhd dmode=1 dbp=0 sfmo=0 rnd=0 movm=0
	dmem0[(id + ba0) & 0xff] = (macc_to_output_0(0x0000000000000000ULL, 0xffffffffffffffffULL) >> 24) & 0xffffff;
  break;

case 1232: // smhd dmode=0 dbp=1 sfmo=0 rnd=0 movm=0
	dmem1[(i->param + ba1) & 0x1f] = (macc_to_output_0(0x0000000000000000ULL, 0xffffffffffffffffULL) >> 24) & 0xffffff;
  break;

case 1233: // smhd dmode=1 dbp=1 sfmo=0 rnd=0 movm=0
	dmem1[(id + ba1) & 0x1f] = (macc_to_output_0(0x0000000000000000ULL, 0xffffffffffffffffULL) >> 24) & 0xffffff;
  break;

case 1234: // smhd dmode=0 dbp=0 sfmo=1 rnd=0 movm=0
	dmem0[(i->param + ba0) & 0xff] = (macc_to_output_1(0x0000000000000000ULL, 0xffffffffffffffffULL) >> 24) & 0xffffff;
  break;

case 1235: // smhd dmode=1 dbp=0 sfmo=1 rnd=0 movm=0
	dmem0[(id + ba0) & 0xff] = (macc_to_output_1(0x0000000000000000ULL, 0xffffffffffffffffULL) >> 24) & 0xffffff;
  break;

case 1236: // smhd dmode=0 dbp=1 sfmo=1 rnd=0 movm=0
	dmem1[(i->param + ba1) & 0x1f] = (macc_to_output_1(0x0000000000000000ULL, 0xffffffffffffffffULL) >> 24) & 0xffffff;
  break;

case 1237: // smhd dmode=1 dbp=1 sfmo=1 rnd=0 movm=0
	dmem1[(id + ba1) & 0x1f] = (macc_to_output_1(0x0000000000000000ULL, 0xffffffffffffffffULL) >> 24) & 0xffffff;
  break;

case 1238: // smhd dmode=0 dbp=0 sfmo=2 rnd=0 movm=0
	dmem0[(i->param + ba0) & 0xff] = (macc_to_output_2(0x0000000000000000ULL, 0xffffffffffffffffULL) >> 24) & 0xffffff;
  break;

case 1239: // smhd dmode=1 dbp=0 sfmo=2 rnd=0 movm=0
	dmem0[(id + ba0) & 0xff] = (macc_to_output_2(0x0000000000000000ULL, 0xffffffffffffffffULL) >> 24) & 0xffffff;
  break;

case 1240: // smhd dmode=0 dbp=1 sfmo=2 rnd=0 movm=0
	dmem1[(i->param + ba1) & 0x1f] = (macc_to_output_2(0x0000000000000000ULL, 0xffffffffffffffffULL) >> 24) & 0xffffff;
  break;

case 1241: // smhd dmode=1 dbp=1 sfmo=2 rnd=0 movm=0
	dmem1[(id + ba1) & 0x1f] = (macc_to_output_2(0x0000000000000000ULL, 0xffffffffffffffffULL) >> 24) & 0xffffff;
  break;

case 1242: // smhd dmode=0 dbp=0 sfmo=3 rnd=0 movm=0
	dmem0[(i->param + ba0) & 0xff] = (macc_to_output_3(0x0000000000000000ULL, 0xffffffffffffffffULL) >> 24) & 0xffffff;
  break;

case 1243: // smhd dmode=1 dbp=0 sfmo=3 rnd=0 movm=0
	dmem0[(id + ba0) & 0xff] = (macc_to_output_3(0x0000000000000000ULL, 0xffffffffffffffffULL) >> 24) & 0xffffff;
  break;

case 1244: // smhd dmode=0 dbp=1 sfmo=3 rnd=0 movm=0
	dmem1[(i->param + ba1) & 0x1f] = (macc_to_output_3(0x0000000000000000ULL, 0xffffffffffffffffULL) >> 24) & 0xffffff;
  break;

case 1245: // smhd dmode=1 dbp=1 sfmo=3 rnd=0 movm=0
	dmem1[(id + ba1) & 0x1f] = (macc_to_output_3(0x0000000000000000ULL, 0xffffffffffffffffULL) >> 24) & 0xffffff;
  break;

case 1246: // smhd dmode=0 dbp=0 sfmo=0 rnd=1 movm=0
	dmem0[(i->param + ba0) & 0xff] = (macc_to_output_0(0x0000000000008000ULL, 0xffffffffffff0000ULL) >> 24) & 0xffffff;
  break;

case 1247: // smhd dmode=1 dbp=0 sfmo=0 rnd=1 movm=0
	dmem0[(id + ba0) & 0xff] = (macc_to_output_0(0x0000000000008000ULL, 0xffffffffffff0000ULL) >> 24) & 0xffffff;
  break;

case 1248: // smhd dmode=0 dbp=1 sfmo=0 rnd=1 movm=0
	dmem1[(i->param + ba1) & 0x1f] = (macc_to_output_0(0x0000000000008000ULL, 0xffffffffffff0000ULL) >> 24) & 0xffffff;
  break;

case 1249: // smhd dmode=1 dbp=1 sfmo=0 rnd=1 movm=0
	dmem1[(id + ba1) & 0x1f] = (macc_to_output_0(0x0000000000008000ULL, 0xffffffffffff0000ULL) >> 24) & 0xffffff;
  break;

case 1250: // smhd dmode=0 dbp=0 sfmo=1 rnd=1 movm=0
	dmem0[(i->param + ba0) & 0xff] = (macc_to_output_1(0x0000000000008000ULL, 0xffffffffffff0000ULL) >> 24) & 0xffffff;
  break;

case 1251: // smhd dmode=1 dbp=0 sfmo=1 rnd=1 movm=0
	dmem0[(id + ba0) & 0xff] = (macc_to_output_1(0x0000000000008000ULL, 0xffffffffffff0000ULL) >> 24) & 0xffffff;
  break;

case 1252: // smhd dmode=0 dbp=1 sfmo=1 rnd=1 movm=0
	dmem1[(i->param + ba1) & 0x1f] = (macc_to_output_1(0x0000000000008000ULL, 0xffffffffffff0000ULL) >> 24) & 0xffffff;
  break;

case 1253: // smhd dmode=1 dbp=1 sfmo=1 rnd=1 movm=0
	dmem1[(id + ba1) & 0x1f] = (macc_to_output_1(0x0000000000008000ULL, 0xffffffffffff0000ULL) >> 24) & 0xffffff;
  break;

case 1254: // smhd dmode=0 dbp=0 sfmo=2 rnd=1 movm=0
	dmem0[(i->param + ba0) & 0xff] = (macc_to_output_2(0x0000000000008000ULL, 0xffffffffffff0000ULL) >> 24) & 0xffffff;
  break;

case 1255: // smhd dmode=1 dbp=0 sfmo=2 rnd=1 movm=0
	dmem0[(id + ba0) & 0xff] = (macc_to_output_2(0x0000000000008000ULL, 0xffffffffffff0000ULL) >> 24) & 0xffffff;
  break;

case 1256: // smhd dmode=0 dbp=1 sfmo=2 rnd=1 movm=0
	dmem1[(i->param + ba1) & 0x1f] = (macc_to_output_2(0x0000000000008000ULL, 0xffffffffffff0000ULL) >> 24) & 0xffffff;
  break;

case 1257: // smhd dmode=1 dbp=1 sfmo=2 rnd=1 movm=0
	dmem1[(id + ba1) & 0x1f] = (macc_to_output_2(0x0000000000008000ULL, 0xffffffffffff0000ULL) >> 24) & 0xffffff;
  break;

case 1258: // smhd dmode=0 dbp=0 sfmo=3 rnd=1 movm=0
	dmem0[(i->param + ba0) & 0xff] = (macc_to_output_3(0x0000000000008000ULL, 0xffffffffffff0000ULL) >> 24) & 0xffffff;
  break;

case 1259: // smhd dmode=1 dbp=0 sfmo=3 rnd=1 movm=0
	dmem0[(id + ba0) & 0xff] = (macc_to_output_3(0x0000000000008000ULL, 0xffffffffffff0000ULL) >> 24) & 0xffffff;
  break;

case 1260: // smhd dmode=0 dbp=1 sfmo=3 rnd=1 movm=0
	dmem1[(i->param + ba1) & 0x1f] = (macc_to_output_3(0x0000000000008000ULL, 0xffffffffffff0000ULL) >> 24) & 0xffffff;
  break;

case 1261: // smhd dmode=1 dbp=1 sfmo=3 rnd=1 movm=0
	dmem1[(id + ba1) & 0x1f] = (macc_to_output_3(0x0000000000008000ULL, 0xffffffffffff0000ULL) >> 24) & 0xffffff;
  break;

case 1262: // smhd dmode=0 dbp=0 sfmo=0 rnd=2 movm=0
	dmem0[(i->param + ba0) & 0xff] = (macc_to_output_0(0x0000000000800000ULL, 0xffffffffff000000ULL) >> 24) & 0xffffff;
  break;

case 1263: // smhd dmode=1 dbp=0 sfmo=0 rnd=2 movm=0
	dmem0[(id + ba0) & 0xff] = (macc_to_output_0(0x0000000000800000ULL, 0xffffffffff000000ULL) >> 24) & 0xffffff;
  break;

case 1264: // smhd dmode=0 dbp=1 sfmo=0 rnd=2 movm=0
	dmem1[(i->param + ba1) & 0x1f] = (macc_to_output_0(0x0000000000800000ULL, 0xffffffffff000000ULL) >> 24) & 0xffffff;
  break;

case 1265: // smhd dmode=1 dbp=1 sfmo=0 rnd=2 movm=0
	dmem1[(id + ba1) & 0x1f] = (macc_to_output_0(0x0000000000800000ULL, 0xffffffffff000000ULL) >> 24) & 0xffffff;
  break;

case 1266: // smhd dmode=0 dbp=0 sfmo=1 rnd=2 movm=0
	dmem0[(i->param + ba0) & 0xff] = (macc_to_output_1(0x0000000000800000ULL, 0xffffffffff000000ULL) >> 24) & 0xffffff;
  break;

case 1267: // smhd dmode=1 dbp=0 sfmo=1 rnd=2 movm=0
	dmem0[(id + ba0) & 0xff] = (macc_to_output_1(0x0000000000800000ULL, 0xffffffffff000000ULL) >> 24) & 0xffffff;
  break;

case 1268: // smhd dmode=0 dbp=1 sfmo=1 rnd=2 movm=0
	dmem1[(i->param + ba1) & 0x1f] = (macc_to_output_1(0x0000000000800000ULL, 0xffffffffff000000ULL) >> 24) & 0xffffff;
  break;

case 1269: // smhd dmode=1 dbp=1 sfmo=1 rnd=2 movm=0
	dmem1[(id + ba1) & 0x1f] = (macc_to_output_1(0x0000000000800000ULL, 0xffffffffff000000ULL) >> 24) & 0xffffff;
  break;

case 1270: // smhd dmode=0 dbp=0 sfmo=2 rnd=2 movm=0
	dmem0[(i->param + ba0) & 0xff] = (macc_to_output_2(0x0000000000800000ULL, 0xffffffffff000000ULL) >> 24) & 0xffffff;
  break;

case 1271: // smhd dmode=1 dbp=0 sfmo=2 rnd=2 movm=0
	dmem0[(id + ba0) & 0xff] = (macc_to_output_2(0x0000000000800000ULL, 0xffffffffff000000ULL) >> 24) & 0xffffff;
  break;

case 1272: // smhd dmode=0 dbp=1 sfmo=2 rnd=2 movm=0
	dmem1[(i->param + ba1) & 0x1f] = (macc_to_output_2(0x0000000000800000ULL, 0xffffffffff000000ULL) >> 24) & 0xffffff;
  break;

case 1273: // smhd dmode=1 dbp=1 sfmo=2 rnd=2 movm=0
	dmem1[(id + ba1) & 0x1f] = (macc_to_output_2(0x0000000000800000ULL, 0xffffffffff000000ULL) >> 24) & 0xffffff;
  break;

case 1274: // smhd dmode=0 dbp=0 sfmo=3 rnd=2 movm=0
	dmem0[(i->param + ba0) & 0xff] = (macc_to_output_3(0x0000000000800000ULL, 0xffffffffff000000ULL) >> 24) & 0xffffff;
  break;

case 1275: // smhd dmode=1 dbp=0 sfmo=3 rnd=2 movm=0
	dmem0[(id + ba0) & 0xff] = (macc_to_output_3(0x0000000000800000ULL, 0xffffffffff000000ULL) >> 24) & 0xffffff;
  break;

case 1276: // smhd dmode=0 dbp=1 sfmo=3 rnd=2 movm=0
	dmem1[(i->param + ba1) & 0x1f] = (macc_to_output_3(0x0000000000800000ULL, 0xffffffffff000000ULL) >> 24) & 0xffffff;
  break;

case 1277: // smhd dmode=1 dbp=1 sfmo=3 rnd=2 movm=0
	dmem1[(id + ba1) & 0x1f] = (macc_to_output_3(0x0000000000800000ULL, 0xffffffffff000000ULL) >> 24) & 0xffffff;
  break;

case 1278: // smhd dmode=0 dbp=0 sfmo=0 rnd=3 movm=0
	dmem0[(i->param + ba0) & 0xff] = (macc_to_output_0(0x0000000000020000ULL, 0xfffffffffffc0000ULL) >> 24) & 0xffffff;
  break;

case 1279: // smhd dmode=1 dbp=0 sfmo=0 rnd=3 movm=0
	dmem0[(id + ba0) & 0xff] = (macc_to_output_0(0x0000000000020000ULL, 0xfffffffffffc0000ULL) >> 24) & 0xffffff;
  break;

case 1280: // smhd dmode=0 dbp=1 sfmo=0 rnd=3 movm=0
	dmem1[(i->param + ba1) & 0x1f] = (macc_to_output_0(0x0000000000020000ULL, 0xfffffffffffc0000ULL) >> 24) & 0xffffff;
  break;

case 1281: // smhd dmode=1 dbp=1 sfmo=0 rnd=3 movm=0
	dmem1[(id + ba1) & 0x1f] = (macc_to_output_0(0x0000000000020000ULL, 0xfffffffffffc0000ULL) >> 24) & 0xffffff;
  break;

case 1282: // smhd dmode=0 dbp=0 sfmo=1 rnd=3 movm=0
	dmem0[(i->param + ba0) & 0xff] = (macc_to_output_1(0x0000000000020000ULL, 0xfffffffffffc0000ULL) >> 24) & 0xffffff;
  break;

case 1283: // smhd dmode=1 dbp=0 sfmo=1 rnd=3 movm=0
	dmem0[(id + ba0) & 0xff] = (macc_to_output_1(0x0000000000020000ULL, 0xfffffffffffc0000ULL) >> 24) & 0xffffff;
  break;

case 1284: // smhd dmode=0 dbp=1 sfmo=1 rnd=3 movm=0
	dmem1[(i->param + ba1) & 0x1f] = (macc_to_output_1(0x0000000000020000ULL, 0xfffffffffffc0000ULL) >> 24) & 0xffffff;
  break;

case 1285: // smhd dmode=1 dbp=1 sfmo=1 rnd=3 movm=0
	dmem1[(id + ba1) & 0x1f] = (macc_to_output_1(0x0000000000020000ULL, 0xfffffffffffc0000ULL) >> 24) & 0xffffff;
  break;

case 1286: // smhd dmode=0 dbp=0 sfmo=2 rnd=3 movm=0
	dmem0[(i->param + ba0) & 0xff] = (macc_to_output_2(0x0000000000020000ULL, 0xfffffffffffc0000ULL) >> 24) & 0xffffff;
  break;

case 1287: // smhd dmode=1 dbp=0 sfmo=2 rnd=3 movm=0
	dmem0[(id + ba0) & 0xff] = (macc_to_output_2(0x0000000000020000ULL, 0xfffffffffffc0000ULL) >> 24) & 0xffffff;
  break;

case 1288: // smhd dmode=0 dbp=1 sfmo=2 rnd=3 movm=0
	dmem1[(i->param + ba1) & 0x1f] = (macc_to_output_2(0x0000000000020000ULL, 0xfffffffffffc0000ULL) >> 24) & 0xffffff;
  break;

case 1289: // smhd dmode=1 dbp=1 sfmo=2 rnd=3 movm=0
	dmem1[(id + ba1) & 0x1f] = (macc_to_output_2(0x0000000000020000ULL, 0xfffffffffffc0000ULL) >> 24) & 0xffffff;
  break;

case 1290: // smhd dmode=0 dbp=0 sfmo=3 rnd=3 movm=0
	dmem0[(i->param + ba0) & 0xff] = (macc_to_output_3(0x0000000000020000ULL, 0xfffffffffffc0000ULL) >> 24) & 0xffffff;
  break;

case 1291: // smhd dmode=1 dbp=0 sfmo=3 rnd=3 movm=0
	dmem0[(id + ba0) & 0xff] = (macc_to_output_3(0x0000000000020000ULL, 0xfffffffffffc0000ULL) >> 24) & 0xffffff;
  break;

case 1292: // smhd dmode=0 dbp=1 sfmo=3 rnd=3 movm=0
	dmem1[(i->param + ba1) & 0x1f] = (macc_to_output_3(0x0000000000020000ULL, 0xfffffffffffc0000ULL) >> 24) & 0xffffff;
  break;

case 1293: // smhd dmode=1 dbp=1 sfmo=3 rnd=3 movm=0
	dmem1[(id + ba1) & 0x1f] = (macc_to_output_3(0x0000000000020000ULL, 0xfffffffffffc0000ULL) >> 24) & 0xffffff;
  break;

case 1294: // smhd dmode=0 dbp=0 sfmo=0 rnd=4 movm=0
	dmem0[(i->param + ba0) & 0xff] = (macc_to_output_0(0x0000000080000000ULL, 0xffffffff00000000ULL) >> 24) & 0xffffff;
  break;

case 1295: // smhd dmode=1 dbp=0 sfmo=0 rnd=4 movm=0
	dmem0[(id + ba0) & 0xff] = (macc_to_output_0(0x0000000080000000ULL, 0xffffffff00000000ULL) >> 24) & 0xffffff;
  break;

case 1296: // smhd dmode=0 dbp=1 sfmo=0 rnd=4 movm=0
	dmem1[(i->param + ba1) & 0x1f] = (macc_to_output_0(0x0000000080000000ULL, 0xffffffff00000000ULL) >> 24) & 0xffffff;
  break;

case 1297: // smhd dmode=1 dbp=1 sfmo=0 rnd=4 movm=0
	dmem1[(id + ba1) & 0x1f] = (macc_to_output_0(0x0000000080000000ULL, 0xffffffff00000000ULL) >> 24) & 0xffffff;
  break;

case 1298: // smhd dmode=0 dbp=0 sfmo=1 rnd=4 movm=0
	dmem0[(i->param + ba0) & 0xff] = (macc_to_output_1(0x0000000080000000ULL, 0xffffffff00000000ULL) >> 24) & 0xffffff;
  break;

case 1299: // smhd dmode=1 dbp=0 sfmo=1 rnd=4 movm=0
	dmem0[(id + ba0) & 0xff] = (macc_to_output_1(0x0000000080000000ULL, 0xffffffff00000000ULL) >> 24) & 0xffffff;
  break;

case 1300: // smhd dmode=0 dbp=1 sfmo=1 rnd=4 movm=0
	dmem1[(i->param + ba1) & 0x1f] = (macc_to_output_1(0x0000000080000000ULL, 0xffffffff00000000ULL) >> 24) & 0xffffff;
  break;

case 1301: // smhd dmode=1 dbp=1 sfmo=1 rnd=4 movm=0
	dmem1[(id + ba1) & 0x1f] = (macc_to_output_1(0x0000000080000000ULL, 0xffffffff00000000ULL) >> 24) & 0xffffff;
  break;

case 1302: // smhd dmode=0 dbp=0 sfmo=2 rnd=4 movm=0
	dmem0[(i->param + ba0) & 0xff] = (macc_to_output_2(0x0000000080000000ULL, 0xffffffff00000000ULL) >> 24) & 0xffffff;
  break;

case 1303: // smhd dmode=1 dbp=0 sfmo=2 rnd=4 movm=0
	dmem0[(id + ba0) & 0xff] = (macc_to_output_2(0x0000000080000000ULL, 0xffffffff00000000ULL) >> 24) & 0xffffff;
  break;

case 1304: // smhd dmode=0 dbp=1 sfmo=2 rnd=4 movm=0
	dmem1[(i->param + ba1) & 0x1f] = (macc_to_output_2(0x0000000080000000ULL, 0xffffffff00000000ULL) >> 24) & 0xffffff;
  break;

case 1305: // smhd dmode=1 dbp=1 sfmo=2 rnd=4 movm=0
	dmem1[(id + ba1) & 0x1f] = (macc_to_output_2(0x0000000080000000ULL, 0xffffffff00000000ULL) >> 24) & 0xffffff;
  break;

case 1306: // smhd dmode=0 dbp=0 sfmo=3 rnd=4 movm=0
	dmem0[(i->param + ba0) & 0xff] = (macc_to_output_3(0x0000000080000000ULL, 0xffffffff00000000ULL) >> 24) & 0xffffff;
  break;

case 1307: // smhd dmode=1 dbp=0 sfmo=3 rnd=4 movm=0
	dmem0[(id + ba0) & 0xff] = (macc_to_output_3(0x0000000080000000ULL, 0xffffffff00000000ULL) >> 24) & 0xffffff;
  break;

case 1308: // smhd dmode=0 dbp=1 sfmo=3 rnd=4 movm=0
	dmem1[(i->param + ba1) & 0x1f] = (macc_to_output_3(0x0000000080000000ULL, 0xffffffff00000000ULL) >> 24) & 0xffffff;
  break;

case 1309: // smhd dmode=1 dbp=1 sfmo=3 rnd=4 movm=0
	dmem1[(id + ba1) & 0x1f] = (macc_to_output_3(0x0000000080000000ULL, 0xffffffff00000000ULL) >> 24) & 0xffffff;
  break;

case 1310: // smhd dmode=0 dbp=0 sfmo=0 rnd=0 movm=1
	dmem0[(i->param + ba0) & 0xff] = (macc_to_output_0s(0x0000000000000000ULL, 0xffffffffffffffffULL) >> 24) & 0xffffff;
  break;

case 1311: // smhd dmode=1 dbp=0 sfmo=0 rnd=0 movm=1
	dmem0[(id + ba0) & 0xff] = (macc_to_output_0s(0x0000000000000000ULL, 0xffffffffffffffffULL) >> 24) & 0xffffff;
  break;

case 1312: // smhd dmode=0 dbp=1 sfmo=0 rnd=0 movm=1
	dmem1[(i->param + ba1) & 0x1f] = (macc_to_output_0s(0x0000000000000000ULL, 0xffffffffffffffffULL) >> 24) & 0xffffff;
  break;

case 1313: // smhd dmode=1 dbp=1 sfmo=0 rnd=0 movm=1
	dmem1[(id + ba1) & 0x1f] = (macc_to_output_0s(0x0000000000000000ULL, 0xffffffffffffffffULL) >> 24) & 0xffffff;
  break;

case 1314: // smhd dmode=0 dbp=0 sfmo=1 rnd=0 movm=1
	dmem0[(i->param + ba0) & 0xff] = (macc_to_output_1s(0x0000000000000000ULL, 0xffffffffffffffffULL) >> 24) & 0xffffff;
  break;

case 1315: // smhd dmode=1 dbp=0 sfmo=1 rnd=0 movm=1
	dmem0[(id + ba0) & 0xff] = (macc_to_output_1s(0x0000000000000000ULL, 0xffffffffffffffffULL) >> 24) & 0xffffff;
  break;

case 1316: // smhd dmode=0 dbp=1 sfmo=1 rnd=0 movm=1
	dmem1[(i->param + ba1) & 0x1f] = (macc_to_output_1s(0x0000000000000000ULL, 0xffffffffffffffffULL) >> 24) & 0xffffff;
  break;

case 1317: // smhd dmode=1 dbp=1 sfmo=1 rnd=0 movm=1
	dmem1[(id + ba1) & 0x1f] = (macc_to_output_1s(0x0000000000000000ULL, 0xffffffffffffffffULL) >> 24) & 0xffffff;
  break;

case 1318: // smhd dmode=0 dbp=0 sfmo=2 rnd=0 movm=1
	dmem0[(i->param + ba0) & 0xff] = (macc_to_output_2s(0x0000000000000000ULL, 0xffffffffffffffffULL) >> 24) & 0xffffff;
  break;

case 1319: // smhd dmode=1 dbp=0 sfmo=2 rnd=0 movm=1
	dmem0[(id + ba0) & 0xff] = (macc_to_output_2s(0x0000000000000000ULL, 0xffffffffffffffffULL) >> 24) & 0xffffff;
  break;

case 1320: // smhd dmode=0 dbp=1 sfmo=2 rnd=0 movm=1
	dmem1[(i->param + ba1) & 0x1f] = (macc_to_output_2s(0x0000000000000000ULL, 0xffffffffffffffffULL) >> 24) & 0xffffff;
  break;

case 1321: // smhd dmode=1 dbp=1 sfmo=2 rnd=0 movm=1
	dmem1[(id + ba1) & 0x1f] = (macc_to_output_2s(0x0000000000000000ULL, 0xffffffffffffffffULL) >> 24) & 0xffffff;
  break;

case 1322: // smhd dmode=0 dbp=0 sfmo=3 rnd=0 movm=1
	dmem0[(i->param + ba0) & 0xff] = (macc_to_output_3s(0x0000000000000000ULL, 0xffffffffffffffffULL) >> 24) & 0xffffff;
  break;

case 1323: // smhd dmode=1 dbp=0 sfmo=3 rnd=0 movm=1
	dmem0[(id + ba0) & 0xff] = (macc_to_output_3s(0x0000000000000000ULL, 0xffffffffffffffffULL) >> 24) & 0xffffff;
  break;

case 1324: // smhd dmode=0 dbp=1 sfmo=3 rnd=0 movm=1
	dmem1[(i->param + ba1) & 0x1f] = (macc_to_output_3s(0x0000000000000000ULL, 0xffffffffffffffffULL) >> 24) & 0xffffff;
  break;

case 1325: // smhd dmode=1 dbp=1 sfmo=3 rnd=0 movm=1
	dmem1[(id + ba1) & 0x1f] = (macc_to_output_3s(0x0000000000000000ULL, 0xffffffffffffffffULL) >> 24) & 0xffffff;
  break;

case 1326: // smhd dmode=0 dbp=0 sfmo=0 rnd=1 movm=1
	dmem0[(i->param + ba0) & 0xff] = (macc_to_output_0s(0x0000000000008000ULL, 0xffffffffffff0000ULL) >> 24) & 0xffffff;
  break;

case 1327: // smhd dmode=1 dbp=0 sfmo=0 rnd=1 movm=1
	dmem0[(id + ba0) & 0xff] = (macc_to_output_0s(0x0000000000008000ULL, 0xffffffffffff0000ULL) >> 24) & 0xffffff;
  break;

case 1328: // smhd dmode=0 dbp=1 sfmo=0 rnd=1 movm=1
	dmem1[(i->param + ba1) & 0x1f] = (macc_to_output_0s(0x0000000000008000ULL, 0xffffffffffff0000ULL) >> 24) & 0xffffff;
  break;

case 1329: // smhd dmode=1 dbp=1 sfmo=0 rnd=1 movm=1
	dmem1[(id + ba1) & 0x1f] = (macc_to_output_0s(0x0000000000008000ULL, 0xffffffffffff0000ULL) >> 24) & 0xffffff;
  break;

case 1330: // smhd dmode=0 dbp=0 sfmo=1 rnd=1 movm=1
	dmem0[(i->param + ba0) & 0xff] = (macc_to_output_1s(0x0000000000008000ULL, 0xffffffffffff0000ULL) >> 24) & 0xffffff;
  break;

case 1331: // smhd dmode=1 dbp=0 sfmo=1 rnd=1 movm=1
	dmem0[(id + ba0) & 0xff] = (macc_to_output_1s(0x0000000000008000ULL, 0xffffffffffff0000ULL) >> 24) & 0xffffff;
  break;

case 1332: // smhd dmode=0 dbp=1 sfmo=1 rnd=1 movm=1
	dmem1[(i->param + ba1) & 0x1f] = (macc_to_output_1s(0x0000000000008000ULL, 0xffffffffffff0000ULL) >> 24) & 0xffffff;
  break;

case 1333: // smhd dmode=1 dbp=1 sfmo=1 rnd=1 movm=1
	dmem1[(id + ba1) & 0x1f] = (macc_to_output_1s(0x0000000000008000ULL, 0xffffffffffff0000ULL) >> 24) & 0xffffff;
  break;

case 1334: // smhd dmode=0 dbp=0 sfmo=2 rnd=1 movm=1
	dmem0[(i->param + ba0) & 0xff] = (macc_to_output_2s(0x0000000000008000ULL, 0xffffffffffff0000ULL) >> 24) & 0xffffff;
  break;

case 1335: // smhd dmode=1 dbp=0 sfmo=2 rnd=1 movm=1
	dmem0[(id + ba0) & 0xff] = (macc_to_output_2s(0x0000000000008000ULL, 0xffffffffffff0000ULL) >> 24) & 0xffffff;
  break;

case 1336: // smhd dmode=0 dbp=1 sfmo=2 rnd=1 movm=1
	dmem1[(i->param + ba1) & 0x1f] = (macc_to_output_2s(0x0000000000008000ULL, 0xffffffffffff0000ULL) >> 24) & 0xffffff;
  break;

case 1337: // smhd dmode=1 dbp=1 sfmo=2 rnd=1 movm=1
	dmem1[(id + ba1) & 0x1f] = (macc_to_output_2s(0x0000000000008000ULL, 0xffffffffffff0000ULL) >> 24) & 0xffffff;
  break;

case 1338: // smhd dmode=0 dbp=0 sfmo=3 rnd=1 movm=1
	dmem0[(i->param + ba0) & 0xff] = (macc_to_output_3s(0x0000000000008000ULL, 0xffffffffffff0000ULL) >> 24) & 0xffffff;
  break;

case 1339: // smhd dmode=1 dbp=0 sfmo=3 rnd=1 movm=1
	dmem0[(id + ba0) & 0xff] = (macc_to_output_3s(0x0000000000008000ULL, 0xffffffffffff0000ULL) >> 24) & 0xffffff;
  break;

case 1340: // smhd dmode=0 dbp=1 sfmo=3 rnd=1 movm=1
	dmem1[(i->param + ba1) & 0x1f] = (macc_to_output_3s(0x0000000000008000ULL, 0xffffffffffff0000ULL) >> 24) & 0xffffff;
  break;

case 1341: // smhd dmode=1 dbp=1 sfmo=3 rnd=1 movm=1
	dmem1[(id + ba1) & 0x1f] = (macc_to_output_3s(0x0000000000008000ULL, 0xffffffffffff0000ULL) >> 24) & 0xffffff;
  break;

case 1342: // smhd dmode=0 dbp=0 sfmo=0 rnd=2 movm=1
	dmem0[(i->param + ba0) & 0xff] = (macc_to_output_0s(0x0000000000800000ULL, 0xffffffffff000000ULL) >> 24) & 0xffffff;
  break;

case 1343: // smhd dmode=1 dbp=0 sfmo=0 rnd=2 movm=1
	dmem0[(id + ba0) & 0xff] = (macc_to_output_0s(0x0000000000800000ULL, 0xffffffffff000000ULL) >> 24) & 0xffffff;
  break;

case 1344: // smhd dmode=0 dbp=1 sfmo=0 rnd=2 movm=1
	dmem1[(i->param + ba1) & 0x1f] = (macc_to_output_0s(0x0000000000800000ULL, 0xffffffffff000000ULL) >> 24) & 0xffffff;
  break;

case 1345: // smhd dmode=1 dbp=1 sfmo=0 rnd=2 movm=1
	dmem1[(id + ba1) & 0x1f] = (macc_to_output_0s(0x0000000000800000ULL, 0xffffffffff000000ULL) >> 24) & 0xffffff;
  break;

case 1346: // smhd dmode=0 dbp=0 sfmo=1 rnd=2 movm=1
	dmem0[(i->param + ba0) & 0xff] = (macc_to_output_1s(0x0000000000800000ULL, 0xffffffffff000000ULL) >> 24) & 0xffffff;
  break;

case 1347: // smhd dmode=1 dbp=0 sfmo=1 rnd=2 movm=1
	dmem0[(id + ba0) & 0xff] = (macc_to_output_1s(0x0000000000800000ULL, 0xffffffffff000000ULL) >> 24) & 0xffffff;
  break;

case 1348: // smhd dmode=0 dbp=1 sfmo=1 rnd=2 movm=1
	dmem1[(i->param + ba1) & 0x1f] = (macc_to_output_1s(0x0000000000800000ULL, 0xffffffffff000000ULL) >> 24) & 0xffffff;
  break;

case 1349: // smhd dmode=1 dbp=1 sfmo=1 rnd=2 movm=1
	dmem1[(id + ba1) & 0x1f] = (macc_to_output_1s(0x0000000000800000ULL, 0xffffffffff000000ULL) >> 24) & 0xffffff;
  break;

case 1350: // smhd dmode=0 dbp=0 sfmo=2 rnd=2 movm=1
	dmem0[(i->param + ba0) & 0xff] = (macc_to_output_2s(0x0000000000800000ULL, 0xffffffffff000000ULL) >> 24) & 0xffffff;
  break;

case 1351: // smhd dmode=1 dbp=0 sfmo=2 rnd=2 movm=1
	dmem0[(id + ba0) & 0xff] = (macc_to_output_2s(0x0000000000800000ULL, 0xffffffffff000000ULL) >> 24) & 0xffffff;
  break;

case 1352: // smhd dmode=0 dbp=1 sfmo=2 rnd=2 movm=1
	dmem1[(i->param + ba1) & 0x1f] = (macc_to_output_2s(0x0000000000800000ULL, 0xffffffffff000000ULL) >> 24) & 0xffffff;
  break;

case 1353: // smhd dmode=1 dbp=1 sfmo=2 rnd=2 movm=1
	dmem1[(id + ba1) & 0x1f] = (macc_to_output_2s(0x0000000000800000ULL, 0xffffffffff000000ULL) >> 24) & 0xffffff;
  break;

case 1354: // smhd dmode=0 dbp=0 sfmo=3 rnd=2 movm=1
	dmem0[(i->param + ba0) & 0xff] = (macc_to_output_3s(0x0000000000800000ULL, 0xffffffffff000000ULL) >> 24) & 0xffffff;
  break;

case 1355: // smhd dmode=1 dbp=0 sfmo=3 rnd=2 movm=1
	dmem0[(id + ba0) & 0xff] = (macc_to_output_3s(0x0000000000800000ULL, 0xffffffffff000000ULL) >> 24) & 0xffffff;
  break;

case 1356: // smhd dmode=0 dbp=1 sfmo=3 rnd=2 movm=1
	dmem1[(i->param + ba1) & 0x1f] = (macc_to_output_3s(0x0000000000800000ULL, 0xffffffffff000000ULL) >> 24) & 0xffffff;
  break;

case 1357: // smhd dmode=1 dbp=1 sfmo=3 rnd=2 movm=1
	dmem1[(id + ba1) & 0x1f] = (macc_to_output_3s(0x0000000000800000ULL, 0xffffffffff000000ULL) >> 24) & 0xffffff;
  break;

case 1358: // smhd dmode=0 dbp=0 sfmo=0 rnd=3 movm=1
	dmem0[(i->param + ba0) & 0xff] = (macc_to_output_0s(0x0000000000020000ULL, 0xfffffffffffc0000ULL) >> 24) & 0xffffff;
  break;

case 1359: // smhd dmode=1 dbp=0 sfmo=0 rnd=3 movm=1
	dmem0[(id + ba0) & 0xff] = (macc_to_output_0s(0x0000000000020000ULL, 0xfffffffffffc0000ULL) >> 24) & 0xffffff;
  break;

case 1360: // smhd dmode=0 dbp=1 sfmo=0 rnd=3 movm=1
	dmem1[(i->param + ba1) & 0x1f] = (macc_to_output_0s(0x0000000000020000ULL, 0xfffffffffffc0000ULL) >> 24) & 0xffffff;
  break;

case 1361: // smhd dmode=1 dbp=1 sfmo=0 rnd=3 movm=1
	dmem1[(id + ba1) & 0x1f] = (macc_to_output_0s(0x0000000000020000ULL, 0xfffffffffffc0000ULL) >> 24) & 0xffffff;
  break;

case 1362: // smhd dmode=0 dbp=0 sfmo=1 rnd=3 movm=1
	dmem0[(i->param + ba0) & 0xff] = (macc_to_output_1s(0x0000000000020000ULL, 0xfffffffffffc0000ULL) >> 24) & 0xffffff;
  break;

case 1363: // smhd dmode=1 dbp=0 sfmo=1 rnd=3 movm=1
	dmem0[(id + ba0) & 0xff] = (macc_to_output_1s(0x0000000000020000ULL, 0xfffffffffffc0000ULL) >> 24) & 0xffffff;
  break;

case 1364: // smhd dmode=0 dbp=1 sfmo=1 rnd=3 movm=1
	dmem1[(i->param + ba1) & 0x1f] = (macc_to_output_1s(0x0000000000020000ULL, 0xfffffffffffc0000ULL) >> 24) & 0xffffff;
  break;

case 1365: // smhd dmode=1 dbp=1 sfmo=1 rnd=3 movm=1
	dmem1[(id + ba1) & 0x1f] = (macc_to_output_1s(0x0000000000020000ULL, 0xfffffffffffc0000ULL) >> 24) & 0xffffff;
  break;

case 1366: // smhd dmode=0 dbp=0 sfmo=2 rnd=3 movm=1
	dmem0[(i->param + ba0) & 0xff] = (macc_to_output_2s(0x0000000000020000ULL, 0xfffffffffffc0000ULL) >> 24) & 0xffffff;
  break;

case 1367: // smhd dmode=1 dbp=0 sfmo=2 rnd=3 movm=1
	dmem0[(id + ba0) & 0xff] = (macc_to_output_2s(0x0000000000020000ULL, 0xfffffffffffc0000ULL) >> 24) & 0xffffff;
  break;

case 1368: // smhd dmode=0 dbp=1 sfmo=2 rnd=3 movm=1
	dmem1[(i->param + ba1) & 0x1f] = (macc_to_output_2s(0x0000000000020000ULL, 0xfffffffffffc0000ULL) >> 24) & 0xffffff;
  break;

case 1369: // smhd dmode=1 dbp=1 sfmo=2 rnd=3 movm=1
	dmem1[(id + ba1) & 0x1f] = (macc_to_output_2s(0x0000000000020000ULL, 0xfffffffffffc0000ULL) >> 24) & 0xffffff;
  break;

case 1370: // smhd dmode=0 dbp=0 sfmo=3 rnd=3 movm=1
	dmem0[(i->param + ba0) & 0xff] = (macc_to_output_3s(0x0000000000020000ULL, 0xfffffffffffc0000ULL) >> 24) & 0xffffff;
  break;

case 1371: // smhd dmode=1 dbp=0 sfmo=3 rnd=3 movm=1
	dmem0[(id + ba0) & 0xff] = (macc_to_output_3s(0x0000000000020000ULL, 0xfffffffffffc0000ULL) >> 24) & 0xffffff;
  break;

case 1372: // smhd dmode=0 dbp=1 sfmo=3 rnd=3 movm=1
	dmem1[(i->param + ba1) & 0x1f] = (macc_to_output_3s(0x0000000000020000ULL, 0xfffffffffffc0000ULL) >> 24) & 0xffffff;
  break;

case 1373: // smhd dmode=1 dbp=1 sfmo=3 rnd=3 movm=1
	dmem1[(id + ba1) & 0x1f] = (macc_to_output_3s(0x0000000000020000ULL, 0xfffffffffffc0000ULL) >> 24) & 0xffffff;
  break;

case 1374: // smhd dmode=0 dbp=0 sfmo=0 rnd=4 movm=1
	dmem0[(i->param + ba0) & 0xff] = (macc_to_output_0s(0x0000000080000000ULL, 0xffffffff00000000ULL) >> 24) & 0xffffff;
  break;

case 1375: // smhd dmode=1 dbp=0 sfmo=0 rnd=4 movm=1
	dmem0[(id + ba0) & 0xff] = (macc_to_output_0s(0x0000000080000000ULL, 0xffffffff00000000ULL) >> 24) & 0xffffff;
  break;

case 1376: // smhd dmode=0 dbp=1 sfmo=0 rnd=4 movm=1
	dmem1[(i->param + ba1) & 0x1f] = (macc_to_output_0s(0x0000000080000000ULL, 0xffffffff00000000ULL) >> 24) & 0xffffff;
  break;

case 1377: // smhd dmode=1 dbp=1 sfmo=0 rnd=4 movm=1
	dmem1[(id + ba1) & 0x1f] = (macc_to_output_0s(0x0000000080000000ULL, 0xffffffff00000000ULL) >> 24) & 0xffffff;
  break;

case 1378: // smhd dmode=0 dbp=0 sfmo=1 rnd=4 movm=1
	dmem0[(i->param + ba0) & 0xff] = (macc_to_output_1s(0x0000000080000000ULL, 0xffffffff00000000ULL) >> 24) & 0xffffff;
  break;

case 1379: // smhd dmode=1 dbp=0 sfmo=1 rnd=4 movm=1
	dmem0[(id + ba0) & 0xff] = (macc_to_output_1s(0x0000000080000000ULL, 0xffffffff00000000ULL) >> 24) & 0xffffff;
  break;

case 1380: // smhd dmode=0 dbp=1 sfmo=1 rnd=4 movm=1
	dmem1[(i->param + ba1) & 0x1f] = (macc_to_output_1s(0x0000000080000000ULL, 0xffffffff00000000ULL) >> 24) & 0xffffff;
  break;

case 1381: // smhd dmode=1 dbp=1 sfmo=1 rnd=4 movm=1
	dmem1[(id + ba1) & 0x1f] = (macc_to_output_1s(0x0000000080000000ULL, 0xffffffff00000000ULL) >> 24) & 0xffffff;
  break;

case 1382: // smhd dmode=0 dbp=0 sfmo=2 rnd=4 movm=1
	dmem0[(i->param + ba0) & 0xff] = (macc_to_output_2s(0x0000000080000000ULL, 0xffffffff00000000ULL) >> 24) & 0xffffff;
  break;

case 1383: // smhd dmode=1 dbp=0 sfmo=2 rnd=4 movm=1
	dmem0[(id + ba0) & 0xff] = (macc_to_output_2s(0x0000000080000000ULL, 0xffffffff00000000ULL) >> 24) & 0xffffff;
  break;

case 1384: // smhd dmode=0 dbp=1 sfmo=2 rnd=4 movm=1
	dmem1[(i->param + ba1) & 0x1f] = (macc_to_output_2s(0x0000000080000000ULL, 0xffffffff00000000ULL) >> 24) & 0xffffff;
  break;

case 1385: // smhd dmode=1 dbp=1 sfmo=2 rnd=4 movm=1
	dmem1[(id + ba1) & 0x1f] = (macc_to_output_2s(0x0000000080000000ULL, 0xffffffff00000000ULL) >> 24) & 0xffffff;
  break;

case 1386: // smhd dmode=0 dbp=0 sfmo=3 rnd=4 movm=1
	dmem0[(i->param + ba0) & 0xff] = (macc_to_output_3s(0x0000000080000000ULL, 0xffffffff00000000ULL) >> 24) & 0xffffff;
  break;

case 1387: // smhd dmode=1 dbp=0 sfmo=3 rnd=4 movm=1
	dmem0[(id + ba0) & 0xff] = (macc_to_output_3s(0x0000000080000000ULL, 0xffffffff00000000ULL) >> 24) & 0xffffff;
  break;

case 1388: // smhd dmode=0 dbp=1 sfmo=3 rnd=4 movm=1
	dmem1[(i->param + ba1) & 0x1f] = (macc_to_output_3s(0x0000000080000000ULL, 0xffffffff00000000ULL) >> 24) & 0xffffff;
  break;

case 1389: // smhd dmode=1 dbp=1 sfmo=3 rnd=4 movm=1
	dmem1[(id + ba1) & 0x1f] = (macc_to_output_3s(0x0000000080000000ULL, 0xffffffff00000000ULL) >> 24) & 0xffffff;
  break;

case 1390: // smhc cmode=0 sfmo=0 rnd=0 movm=0
	cmem[i->param] = macc_to_output_0(0x0000000000000000ULL, 0xffffffffffffffffULL) >> 16;
  break;

case 1391: // smhc cmode=1 sfmo=0 rnd=0 movm=0
	cmem[ca] = macc_to_output_0(0x0000000000000000ULL, 0xffffffffffffffffULL) >> 16;
  break;

case 1392: // smhc cmode=0 sfmo=1 rnd=0 movm=0
	cmem[i->param] = macc_to_output_1(0x0000000000000000ULL, 0xffffffffffffffffULL) >> 16;
  break;

case 1393: // smhc cmode=1 sfmo=1 rnd=0 movm=0
	cmem[ca] = macc_to_output_1(0x0000000000000000ULL, 0xffffffffffffffffULL) >> 16;
  break;

case 1394: // smhc cmode=0 sfmo=2 rnd=0 movm=0
	cmem[i->param] = macc_to_output_2(0x0000000000000000ULL, 0xffffffffffffffffULL) >> 16;
  break;

case 1395: // smhc cmode=1 sfmo=2 rnd=0 movm=0
	cmem[ca] = macc_to_output_2(0x0000000000000000ULL, 0xffffffffffffffffULL) >> 16;
  break;

case 1396: // smhc cmode=0 sfmo=3 rnd=0 movm=0
	cmem[i->param] = macc_to_output_3(0x0000000000000000ULL, 0xffffffffffffffffULL) >> 16;
  break;

case 1397: // smhc cmode=1 sfmo=3 rnd=0 movm=0
	cmem[ca] = macc_to_output_3(0x0000000000000000ULL, 0xffffffffffffffffULL) >> 16;
  break;

case 1398: // smhc cmode=0 sfmo=0 rnd=1 movm=0
	cmem[i->param] = macc_to_output_0(0x0000000000008000ULL, 0xffffffffffff0000ULL) >> 16;
  break;

case 1399: // smhc cmode=1 sfmo=0 rnd=1 movm=0
	cmem[ca] = macc_to_output_0(0x0000000000008000ULL, 0xffffffffffff0000ULL) >> 16;
  break;

case 1400: // smhc cmode=0 sfmo=1 rnd=1 movm=0
	cmem[i->param] = macc_to_output_1(0x0000000000008000ULL, 0xffffffffffff0000ULL) >> 16;
  break;

case 1401: // smhc cmode=1 sfmo=1 rnd=1 movm=0
	cmem[ca] = macc_to_output_1(0x0000000000008000ULL, 0xffffffffffff0000ULL) >> 16;
  break;

case 1402: // smhc cmode=0 sfmo=2 rnd=1 movm=0
	cmem[i->param] = macc_to_output_2(0x0000000000008000ULL, 0xffffffffffff0000ULL) >> 16;
  break;

case 1403: // smhc cmode=1 sfmo=2 rnd=1 movm=0
	cmem[ca] = macc_to_output_2(0x0000000000008000ULL, 0xffffffffffff0000ULL) >> 16;
  break;

case 1404: // smhc cmode=0 sfmo=3 rnd=1 movm=0
	cmem[i->param] = macc_to_output_3(0x0000000000008000ULL, 0xffffffffffff0000ULL) >> 16;
  break;

case 1405: // smhc cmode=1 sfmo=3 rnd=1 movm=0
	cmem[ca] = macc_to_output_3(0x0000000000008000ULL, 0xffffffffffff0000ULL) >> 16;
  break;

case 1406: // smhc cmode=0 sfmo=0 rnd=2 movm=0
	cmem[i->param] = macc_to_output_0(0x0000000000800000ULL, 0xffffffffff000000ULL) >> 16;
  break;

case 1407: // smhc cmode=1 sfmo=0 rnd=2 movm=0
	cmem[ca] = macc_to_output_0(0x0000000000800000ULL, 0xffffffffff000000ULL) >> 16;
  break;

case 1408: // smhc cmode=0 sfmo=1 rnd=2 movm=0
	cmem[i->param] = macc_to_output_1(0x0000000000800000ULL, 0xffffffffff000000ULL) >> 16;
  break;

case 1409: // smhc cmode=1 sfmo=1 rnd=2 movm=0
	cmem[ca] = macc_to_output_1(0x0000000000800000ULL, 0xffffffffff000000ULL) >> 16;
  break;

case 1410: // smhc cmode=0 sfmo=2 rnd=2 movm=0
	cmem[i->param] = macc_to_output_2(0x0000000000800000ULL, 0xffffffffff000000ULL) >> 16;
  break;

case 1411: // smhc cmode=1 sfmo=2 rnd=2 movm=0
	cmem[ca] = macc_to_output_2(0x0000000000800000ULL, 0xffffffffff000000ULL) >> 16;
  break;

case 1412: // smhc cmode=0 sfmo=3 rnd=2 movm=0
	cmem[i->param] = macc_to_output_3(0x0000000000800000ULL, 0xffffffffff000000ULL) >> 16;
  break;

case 1413: // smhc cmode=1 sfmo=3 rnd=2 movm=0
	cmem[ca] = macc_to_output_3(0x0000000000800000ULL, 0xffffffffff000000ULL) >> 16;
  break;

case 1414: // smhc cmode=0 sfmo=0 rnd=3 movm=0
	cmem[i->param] = macc_to_output_0(0x0000000000020000ULL, 0xfffffffffffc0000ULL) >> 16;
  break;

case 1415: // smhc cmode=1 sfmo=0 rnd=3 movm=0
	cmem[ca] = macc_to_output_0(0x0000000000020000ULL, 0xfffffffffffc0000ULL) >> 16;
  break;

case 1416: // smhc cmode=0 sfmo=1 rnd=3 movm=0
	cmem[i->param] = macc_to_output_1(0x0000000000020000ULL, 0xfffffffffffc0000ULL) >> 16;
  break;

case 1417: // smhc cmode=1 sfmo=1 rnd=3 movm=0
	cmem[ca] = macc_to_output_1(0x0000000000020000ULL, 0xfffffffffffc0000ULL) >> 16;
  break;

case 1418: // smhc cmode=0 sfmo=2 rnd=3 movm=0
	cmem[i->param] = macc_to_output_2(0x0000000000020000ULL, 0xfffffffffffc0000ULL) >> 16;
  break;

case 1419: // smhc cmode=1 sfmo=2 rnd=3 movm=0
	cmem[ca] = macc_to_output_2(0x0000000000020000ULL, 0xfffffffffffc0000ULL) >> 16;
  break;

case 1420: // smhc cmode=0 sfmo=3 rnd=3 movm=0
	cmem[i->param] = macc_to_output_3(0x0000000000020000ULL, 0xfffffffffffc0000ULL) >> 16;
  break;

case 1421: // smhc cmode=1 sfmo=3 rnd=3 movm=0
	cmem[ca] = macc_to_output_3(0x0000000000020000ULL, 0xfffffffffffc0000ULL) >> 16;
  break;

case 1422: // smhc cmode=0 sfmo=0 rnd=4 movm=0
	cmem[i->param] = macc_to_output_0(0x0000000080000000ULL, 0xffffffff00000000ULL) >> 16;
  break;

case 1423: // smhc cmode=1 sfmo=0 rnd=4 movm=0
	cmem[ca] = macc_to_output_0(0x0000000080000000ULL, 0xffffffff00000000ULL) >> 16;
  break;

case 1424: // smhc cmode=0 sfmo=1 rnd=4 movm=0
	cmem[i->param] = macc_to_output_1(0x0000000080000000ULL, 0xffffffff00000000ULL) >> 16;
  break;

case 1425: // smhc cmode=1 sfmo=1 rnd=4 movm=0
	cmem[ca] = macc_to_output_1(0x0000000080000000ULL, 0xffffffff00000000ULL) >> 16;
  break;

case 1426: // smhc cmode=0 sfmo=2 rnd=4 movm=0
	cmem[i->param] = macc_to_output_2(0x0000000080000000ULL, 0xffffffff00000000ULL) >> 16;
  break;

case 1427: // smhc cmode=1 sfmo=2 rnd=4 movm=0
	cmem[ca] = macc_to_output_2(0x0000000080000000ULL, 0xffffffff00000000ULL) >> 16;
  break;

case 1428: // smhc cmode=0 sfmo=3 rnd=4 movm=0
	cmem[i->param] = macc_to_output_3(0x0000000080000000ULL, 0xffffffff00000000ULL) >> 16;
  break;

case 1429: // smhc cmode=1 sfmo=3 rnd=4 movm=0
	cmem[ca] = macc_to_output_3(0x0000000080000000ULL, 0xffffffff00000000ULL) >> 16;
  break;

case 1430: // smhc cmode=0 sfmo=0 rnd=0 movm=1
	cmem[i->param] = macc_to_output_0s(0x0000000000000000ULL, 0xffffffffffffffffULL) >> 16;
  break;

case 1431: // smhc cmode=1 sfmo=0 rnd=0 movm=1
	cmem[ca] = macc_to_output_0s(0x0000000000000000ULL, 0xffffffffffffffffULL) >> 16;
  break;

case 1432: // smhc cmode=0 sfmo=1 rnd=0 movm=1
	cmem[i->param] = macc_to_output_1s(0x0000000000000000ULL, 0xffffffffffffffffULL) >> 16;
  break;

case 1433: // smhc cmode=1 sfmo=1 rnd=0 movm=1
	cmem[ca] = macc_to_output_1s(0x0000000000000000ULL, 0xffffffffffffffffULL) >> 16;
  break;

case 1434: // smhc cmode=0 sfmo=2 rnd=0 movm=1
	cmem[i->param] = macc_to_output_2s(0x0000000000000000ULL, 0xffffffffffffffffULL) >> 16;
  break;

case 1435: // smhc cmode=1 sfmo=2 rnd=0 movm=1
	cmem[ca] = macc_to_output_2s(0x0000000000000000ULL, 0xffffffffffffffffULL) >> 16;
  break;

case 1436: // smhc cmode=0 sfmo=3 rnd=0 movm=1
	cmem[i->param] = macc_to_output_3s(0x0000000000000000ULL, 0xffffffffffffffffULL) >> 16;
  break;

case 1437: // smhc cmode=1 sfmo=3 rnd=0 movm=1
	cmem[ca] = macc_to_output_3s(0x0000000000000000ULL, 0xffffffffffffffffULL) >> 16;
  break;

case 1438: // smhc cmode=0 sfmo=0 rnd=1 movm=1
	cmem[i->param] = macc_to_output_0s(0x0000000000008000ULL, 0xffffffffffff0000ULL) >> 16;
  break;

case 1439: // smhc cmode=1 sfmo=0 rnd=1 movm=1
	cmem[ca] = macc_to_output_0s(0x0000000000008000ULL, 0xffffffffffff0000ULL) >> 16;
  break;

case 1440: // smhc cmode=0 sfmo=1 rnd=1 movm=1
	cmem[i->param] = macc_to_output_1s(0x0000000000008000ULL, 0xffffffffffff0000ULL) >> 16;
  break;

case 1441: // smhc cmode=1 sfmo=1 rnd=1 movm=1
	cmem[ca] = macc_to_output_1s(0x0000000000008000ULL, 0xffffffffffff0000ULL) >> 16;
  break;

case 1442: // smhc cmode=0 sfmo=2 rnd=1 movm=1
	cmem[i->param] = macc_to_output_2s(0x0000000000008000ULL, 0xffffffffffff0000ULL) >> 16;
  break;

case 1443: // smhc cmode=1 sfmo=2 rnd=1 movm=1
	cmem[ca] = macc_to_output_2s(0x0000000000008000ULL, 0xffffffffffff0000ULL) >> 16;
  break;

case 1444: // smhc cmode=0 sfmo=3 rnd=1 movm=1
	cmem[i->param] = macc_to_output_3s(0x0000000000008000ULL, 0xffffffffffff0000ULL) >> 16;
  break;

case 1445: // smhc cmode=1 sfmo=3 rnd=1 movm=1
	cmem[ca] = macc_to_output_3s(0x0000000000008000ULL, 0xffffffffffff0000ULL) >> 16;
  break;

case 1446: // smhc cmode=0 sfmo=0 rnd=2 movm=1
	cmem[i->param] = macc_to_output_0s(0x0000000000800000ULL, 0xffffffffff000000ULL) >> 16;
  break;

case 1447: // smhc cmode=1 sfmo=0 rnd=2 movm=1
	cmem[ca] = macc_to_output_0s(0x0000000000800000ULL, 0xffffffffff000000ULL) >> 16;
  break;

case 1448: // smhc cmode=0 sfmo=1 rnd=2 movm=1
	cmem[i->param] = macc_to_output_1s(0x0000000000800000ULL, 0xffffffffff000000ULL) >> 16;
  break;

case 1449: // smhc cmode=1 sfmo=1 rnd=2 movm=1
	cmem[ca] = macc_to_output_1s(0x0000000000800000ULL, 0xffffffffff000000ULL) >> 16;
  break;

case 1450: // smhc cmode=0 sfmo=2 rnd=2 movm=1
	cmem[i->param] = macc_to_output_2s(0x0000000000800000ULL, 0xffffffffff000000ULL) >> 16;
  break;

case 1451: // smhc cmode=1 sfmo=2 rnd=2 movm=1
	cmem[ca] = macc_to_output_2s(0x0000000000800000ULL, 0xffffffffff000000ULL) >> 16;
  break;

case 1452: // smhc cmode=0 sfmo=3 rnd=2 movm=1
	cmem[i->param] = macc_to_output_3s(0x0000000000800000ULL, 0xffffffffff000000ULL) >> 16;
  break;

case 1453: // smhc cmode=1 sfmo=3 rnd=2 movm=1
	cmem[ca] = macc_to_output_3s(0x0000000000800000ULL, 0xffffffffff000000ULL) >> 16;
  break;

case 1454: // smhc cmode=0 sfmo=0 rnd=3 movm=1
	cmem[i->param] = macc_to_output_0s(0x0000000000020000ULL, 0xfffffffffffc0000ULL) >> 16;
  break;

case 1455: // smhc cmode=1 sfmo=0 rnd=3 movm=1
	cmem[ca] = macc_to_output_0s(0x0000000000020000ULL, 0xfffffffffffc0000ULL) >> 16;
  break;

case 1456: // smhc cmode=0 sfmo=1 rnd=3 movm=1
	cmem[i->param] = macc_to_output_1s(0x0000000000020000ULL, 0xfffffffffffc0000ULL) >> 16;
  break;

case 1457: // smhc cmode=1 sfmo=1 rnd=3 movm=1
	cmem[ca] = macc_to_output_1s(0x0000000000020000ULL, 0xfffffffffffc0000ULL) >> 16;
  break;

case 1458: // smhc cmode=0 sfmo=2 rnd=3 movm=1
	cmem[i->param] = macc_to_output_2s(0x0000000000020000ULL, 0xfffffffffffc0000ULL) >> 16;
  break;

case 1459: // smhc cmode=1 sfmo=2 rnd=3 movm=1
	cmem[ca] = macc_to_output_2s(0x0000000000020000ULL, 0xfffffffffffc0000ULL) >> 16;
  break;

case 1460: // smhc cmode=0 sfmo=3 rnd=3 movm=1
	cmem[i->param] = macc_to_output_3s(0x0000000000020000ULL, 0xfffffffffffc0000ULL) >> 16;
  break;

case 1461: // smhc cmode=1 sfmo=3 rnd=3 movm=1
	cmem[ca] = macc_to_output_3s(0x0000000000020000ULL, 0xfffffffffffc0000ULL) >> 16;
  break;

case 1462: // smhc cmode=0 sfmo=0 rnd=4 movm=1
	cmem[i->param] = macc_to_output_0s(0x0000000080000000ULL, 0xffffffff00000000ULL) >> 16;
  break;

case 1463: // smhc cmode=1 sfmo=0 rnd=4 movm=1
	cmem[ca] = macc_to_output_0s(0x0000000080000000ULL, 0xffffffff00000000ULL) >> 16;
  break;

case 1464: // smhc cmode=0 sfmo=1 rnd=4 movm=1
	cmem[i->param] = macc_to_output_1s(0x0000000080000000ULL, 0xffffffff00000000ULL) >> 16;
  break;

case 1465: // smhc cmode=1 sfmo=1 rnd=4 movm=1
	cmem[ca] = macc_to_output_1s(0x0000000080000000ULL, 0xffffffff00000000ULL) >> 16;
  break;

case 1466: // smhc cmode=0 sfmo=2 rnd=4 movm=1
	cmem[i->param] = macc_to_output_2s(0x0000000080000000ULL, 0xffffffff00000000ULL) >> 16;
  break;

case 1467: // smhc cmode=1 sfmo=2 rnd=4 movm=1
	cmem[ca] = macc_to_output_2s(0x0000000080000000ULL, 0xffffffff00000000ULL) >> 16;
  break;

case 1468: // smhc cmode=0 sfmo=3 rnd=4 movm=1
	cmem[i->param] = macc_to_output_3s(0x0000000080000000ULL, 0xffffffff00000000ULL) >> 16;
  break;

case 1469: // smhc cmode=1 sfmo=3 rnd=4 movm=1
	cmem[ca] = macc_to_output_3s(0x0000000080000000ULL, 0xffffffff00000000ULL) >> 16;
  break;

case 1470: // slmh dmode=0 dbp=0 sfmo=0 movm=0
	dmem0[(i->param + ba0) & 0xff] = (check_macc_overflow_0() >> 24) & 0xffff00;
  break;

case 1471: // slmh dmode=1 dbp=0 sfmo=0 movm=0
	dmem0[(id + ba0) & 0xff] = (check_macc_overflow_0() >> 24) & 0xffff00;
  break;

case 1472: // slmh dmode=0 dbp=1 sfmo=0 movm=0
	dmem1[(i->param + ba1) & 0x1f] = (check_macc_overflow_0() >> 24) & 0xffff00;
  break;

case 1473: // slmh dmode=1 dbp=1 sfmo=0 movm=0
	dmem1[(id + ba1) & 0x1f] = (check_macc_overflow_0() >> 24) & 0xffff00;
  break;

case 1474: // slmh dmode=0 dbp=0 sfmo=1 movm=0
	dmem0[(i->param + ba0) & 0xff] = (check_macc_overflow_1() >> 24) & 0xffff00;
  break;

case 1475: // slmh dmode=1 dbp=0 sfmo=1 movm=0
	dmem0[(id + ba0) & 0xff] = (check_macc_overflow_1() >> 24) & 0xffff00;
  break;

case 1476: // slmh dmode=0 dbp=1 sfmo=1 movm=0
	dmem1[(i->param + ba1) & 0x1f] = (check_macc_overflow_1() >> 24) & 0xffff00;
  break;

case 1477: // slmh dmode=1 dbp=1 sfmo=1 movm=0
	dmem1[(id + ba1) & 0x1f] = (check_macc_overflow_1() >> 24) & 0xffff00;
  break;

case 1478: // slmh dmode=0 dbp=0 sfmo=2 movm=0
	dmem0[(i->param + ba0) & 0xff] = (check_macc_overflow_2() >> 24) & 0xffff00;
  break;

case 1479: // slmh dmode=1 dbp=0 sfmo=2 movm=0
	dmem0[(id + ba0) & 0xff] = (check_macc_overflow_2() >> 24) & 0xffff00;
  break;

case 1480: // slmh dmode=0 dbp=1 sfmo=2 movm=0
	dmem1[(i->param + ba1) & 0x1f] = (check_macc_overflow_2() >> 24) & 0xffff00;
  break;

case 1481: // slmh dmode=1 dbp=1 sfmo=2 movm=0
	dmem1[(id + ba1) & 0x1f] = (check_macc_overflow_2() >> 24) & 0xffff00;
  break;

case 1482: // slmh dmode=0 dbp=0 sfmo=3 movm=0
	dmem0[(i->param + ba0) & 0xff] = (check_macc_overflow_3() >> 24) & 0xffff00;
  break;

case 1483: // slmh dmode=1 dbp=0 sfmo=3 movm=0
	dmem0[(id + ba0) & 0xff] = (check_macc_overflow_3() >> 24) & 0xffff00;
  break;

case 1484: // slmh dmode=0 dbp=1 sfmo=3 movm=0
	dmem1[(i->param + ba1) & 0x1f] = (check_macc_overflow_3() >> 24) & 0xffff00;
  break;

case 1485: // slmh dmode=1 dbp=1 sfmo=3 movm=0
	dmem1[(id + ba1) & 0x1f] = (check_macc_overflow_3() >> 24) & 0xffff00;
  break;

case 1486: // slmh dmode=0 dbp=0 sfmo=0 movm=1
	dmem0[(i->param + ba0) & 0xff] = (check_macc_overflow_0s() >> 24) & 0xffff00;
  break;

case 1487: // slmh dmode=1 dbp=0 sfmo=0 movm=1
	dmem0[(id + ba0) & 0xff] = (check_macc_overflow_0s() >> 24) & 0xffff00;
  break;

case 1488: // slmh dmode=0 dbp=1 sfmo=0 movm=1
	dmem1[(i->param + ba1) & 0x1f] = (check_macc_overflow_0s() >> 24) & 0xffff00;
  break;

case 1489: // slmh dmode=1 dbp=1 sfmo=0 movm=1
	dmem1[(id + ba1) & 0x1f] = (check_macc_overflow_0s() >> 24) & 0xffff00;
  break;

case 1490: // slmh dmode=0 dbp=0 sfmo=1 movm=1
	dmem0[(i->param + ba0) & 0xff] = (check_macc_overflow_1s() >> 24) & 0xffff00;
  break;

case 1491: // slmh dmode=1 dbp=0 sfmo=1 movm=1
	dmem0[(id + ba0) & 0xff] = (check_macc_overflow_1s() >> 24) & 0xffff00;
  break;

case 1492: // slmh dmode=0 dbp=1 sfmo=1 movm=1
	dmem1[(i->param + ba1) & 0x1f] = (check_macc_overflow_1s() >> 24) & 0xffff00;
  break;

case 1493: // slmh dmode=1 dbp=1 sfmo=1 movm=1
	dmem1[(id + ba1) & 0x1f] = (check_macc_overflow_1s() >> 24) & 0xffff00;
  break;

case 1494: // slmh dmode=0 dbp=0 sfmo=2 movm=1
	dmem0[(i->param + ba0) & 0xff] = (check_macc_overflow_2s() >> 24) & 0xffff00;
  break;

case 1495: // slmh dmode=1 dbp=0 sfmo=2 movm=1
	dmem0[(id + ba0) & 0xff] = (check_macc_overflow_2s() >> 24) & 0xffff00;
  break;

case 1496: // slmh dmode=0 dbp=1 sfmo=2 movm=1
	dmem1[(i->param + ba1) & 0x1f] = (check_macc_overflow_2s() >> 24) & 0xffff00;
  break;

case 1497: // slmh dmode=1 dbp=1 sfmo=2 movm=1
	dmem1[(id + ba1) & 0x1f] = (check_macc_overflow_2s() >> 24) & 0xffff00;
  break;

case 1498: // slmh dmode=0 dbp=0 sfmo=3 movm=1
	dmem0[(i->param + ba0) & 0xff] = (check_macc_overflow_3s() >> 24) & 0xffff00;
  break;

case 1499: // slmh dmode=1 dbp=0 sfmo=3 movm=1
	dmem0[(id + ba0) & 0xff] = (check_macc_overflow_3s() >> 24) & 0xffff00;
  break;

case 1500: // slmh dmode=0 dbp=1 sfmo=3 movm=1
	dmem1[(i->param + ba1) & 0x1f] = (check_macc_overflow_3s() >> 24) & 0xffff00;
  break;

case 1501: // slmh dmode=1 dbp=1 sfmo=3 movm=1
	dmem1[(id + ba1) & 0x1f] = (check_macc_overflow_3s() >> 24) & 0xffff00;
  break;

case 1502: // slml dmode=0 dbp=0 sfmo=0 movm=0
	dmem0[(i->param + ba0) & 0xff] = (check_macc_overflow_0() >> 8) & 0xffffff;
  break;

case 1503: // slml dmode=1 dbp=0 sfmo=0 movm=0
	dmem0[(id + ba0) & 0xff] = (check_macc_overflow_0() >> 8) & 0xffffff;
  break;

case 1504: // slml dmode=0 dbp=1 sfmo=0 movm=0
	dmem1[(i->param + ba1) & 0x1f] = (check_macc_overflow_0() >> 8) & 0xffffff;
  break;

case 1505: // slml dmode=1 dbp=1 sfmo=0 movm=0
	dmem1[(id + ba1) & 0x1f] = (check_macc_overflow_0() >> 8) & 0xffffff;
  break;

case 1506: // slml dmode=0 dbp=0 sfmo=1 movm=0
	dmem0[(i->param + ba0) & 0xff] = (check_macc_overflow_1() >> 8) & 0xffffff;
  break;

case 1507: // slml dmode=1 dbp=0 sfmo=1 movm=0
	dmem0[(id + ba0) & 0xff] = (check_macc_overflow_1() >> 8) & 0xffffff;
  break;

case 1508: // slml dmode=0 dbp=1 sfmo=1 movm=0
	dmem1[(i->param + ba1) & 0x1f] = (check_macc_overflow_1() >> 8) & 0xffffff;
  break;

case 1509: // slml dmode=1 dbp=1 sfmo=1 movm=0
	dmem1[(id + ba1) & 0x1f] = (check_macc_overflow_1() >> 8) & 0xffffff;
  break;

case 1510: // slml dmode=0 dbp=0 sfmo=2 movm=0
	dmem0[(i->param + ba0) & 0xff] = (check_macc_overflow_2() >> 8) & 0xffffff;
  break;

case 1511: // slml dmode=1 dbp=0 sfmo=2 movm=0
	dmem0[(id + ba0) & 0xff] = (check_macc_overflow_2() >> 8) & 0xffffff;
  break;

case 1512: // slml dmode=0 dbp=1 sfmo=2 movm=0
	dmem1[(i->param + ba1) & 0x1f] = (check_macc_overflow_2() >> 8) & 0xffffff;
  break;

case 1513: // slml dmode=1 dbp=1 sfmo=2 movm=0
	dmem1[(id + ba1) & 0x1f] = (check_macc_overflow_2() >> 8) & 0xffffff;
  break;

case 1514: // slml dmode=0 dbp=0 sfmo=3 movm=0
	dmem0[(i->param + ba0) & 0xff] = (check_macc_overflow_3() >> 8) & 0xffffff;
  break;

case 1515: // slml dmode=1 dbp=0 sfmo=3 movm=0
	dmem0[(id + ba0) & 0xff] = (check_macc_overflow_3() >> 8) & 0xffffff;
  break;

case 1516: // slml dmode=0 dbp=1 sfmo=3 movm=0
	dmem1[(i->param + ba1) & 0x1f] = (check_macc_overflow_3() >> 8) & 0xffffff;
  break;

case 1517: // slml dmode=1 dbp=1 sfmo=3 movm=0
	dmem1[(id + ba1) & 0x1f] = (check_macc_overflow_3() >> 8) & 0xffffff;
  break;

case 1518: // slml dmode=0 dbp=0 sfmo=0 movm=1
	dmem0[(i->param + ba0) & 0xff] = (check_macc_overflow_0s() >> 8) & 0xffffff;
  break;

case 1519: // slml dmode=1 dbp=0 sfmo=0 movm=1
	dmem0[(id + ba0) & 0xff] = (check_macc_overflow_0s() >> 8) & 0xffffff;
  break;

case 1520: // slml dmode=0 dbp=1 sfmo=0 movm=1
	dmem1[(i->param + ba1) & 0x1f] = (check_macc_overflow_0s() >> 8) & 0xffffff;
  break;

case 1521: // slml dmode=1 dbp=1 sfmo=0 movm=1
	dmem1[(id + ba1) & 0x1f] = (check_macc_overflow_0s() >> 8) & 0xffffff;
  break;

case 1522: // slml dmode=0 dbp=0 sfmo=1 movm=1
	dmem0[(i->param + ba0) & 0xff] = (check_macc_overflow_1s() >> 8) & 0xffffff;
  break;

case 1523: // slml dmode=1 dbp=0 sfmo=1 movm=1
	dmem0[(id + ba0) & 0xff] = (check_macc_overflow_1s() >> 8) & 0xffffff;
  break;

case 1524: // slml dmode=0 dbp=1 sfmo=1 movm=1
	dmem1[(i->param + ba1) & 0x1f] = (check_macc_overflow_1s() >> 8) & 0xffffff;
  break;

case 1525: // slml dmode=1 dbp=1 sfmo=1 movm=1
	dmem1[(id + ba1) & 0x1f] = (check_macc_overflow_1s() >> 8) & 0xffffff;
  break;

case 1526: // slml dmode=0 dbp=0 sfmo=2 movm=1
	dmem0[(i->param + ba0) & 0xff] = (check_macc_overflow_2s() >> 8) & 0xffffff;
  break;

case 1527: // slml dmode=1 dbp=0 sfmo=2 movm=1
	dmem0[(id + ba0) & 0xff] = (check_macc_overflow_2s() >> 8) & 0xffffff;
  break;

case 1528: // slml dmode=0 dbp=1 sfmo=2 movm=1
	dmem1[(i->param + ba1) & 0x1f] = (check_macc_overflow_2s() >> 8) & 0xffffff;
  break;

case 1529: // slml dmode=1 dbp=1 sfmo=2 movm=1
	dmem1[(id + ba1) & 0x1f] = (check_macc_overflow_2s() >> 8) & 0xffffff;
  break;

case 1530: // slml dmode=0 dbp=0 sfmo=3 movm=1
	dmem0[(i->param + ba0) & 0xff] = (check_macc_overflow_3s() >> 8) & 0xffffff;
  break;

case 1531: // slml dmode=1 dbp=0 sfmo=3 movm=1
	dmem0[(id + ba0) & 0xff] = (check_macc_overflow_3s() >> 8) & 0xffffff;
  break;

case 1532: // slml dmode=0 dbp=1 sfmo=3 movm=1
	dmem1[(i->param + ba1) & 0x1f] = (check_macc_overflow_3s() >> 8) & 0xffffff;
  break;

case 1533: // slml dmode=1 dbp=1 sfmo=3 movm=1
	dmem1[(id + ba1) & 0x1f] = (check_macc_overflow_3s() >> 8) & 0xffffff;
  break;

case 1534: // lcaa sfao=0
	ca = aacc >> 24;
  break;

case 1535: // lcaa sfao=1
	ca = (aacc << 7) >> 24;
  break;

case 1536: // lira sfao=0
	id = aacc >> 24;
  break;

case 1537: // lira sfao=1
	id = (aacc << 7) >> 24;
  break;

case 1538: // ref 
	/* nothing to do */
  break;

case 1539: // srbd dmode=0 dbp=0
	dmem0[(i->param + ba0) & 0xff] = xrd;
  break;

case 1540: // srbd dmode=1 dbp=0
	dmem0[(id + ba0) & 0xff] = xrd;
  break;

case 1541: // srbd dmode=0 dbp=1
	dmem1[(i->param + ba1) & 0x1f] = xrd;
  break;

case 1542: // srbd dmode=1 dbp=1
	dmem1[(id + ba1) & 0x1f] = xrd;
  break;

case 1543: // dis dmode=0 dbp=0
	dmem0[(i->param + ba0) & 0xff] = si[0];
  break;

case 1544: // dis dmode=1 dbp=0
	dmem0[(id + ba0) & 0xff] = si[0];
  break;

case 1545: // dis dmode=0 dbp=1
	dmem1[(i->param + ba1) & 0x1f] = si[0];
  break;

case 1546: // dis dmode=1 dbp=1
	dmem1[(id + ba1) & 0x1f] = si[0];
  break;

case 1547: // dis dmode=0 dbp=0
	dmem0[(i->param + ba0) & 0xff] = si[1];
  break;

case 1548: // dis dmode=1 dbp=0
	dmem0[(id + ba0) & 0xff] = si[1];
  break;

case 1549: // dis dmode=0 dbp=1
	dmem1[(i->param + ba1) & 0x1f] = si[1];
  break;

case 1550: // dis dmode=1 dbp=1
	dmem1[(id + ba1) & 0x1f] = si[1];
  break;

case 1551: // dis dmode=0 dbp=0
	dmem0[(i->param + ba0) & 0xff] = si[2];
  break;

case 1552: // dis dmode=1 dbp=0
	dmem0[(id + ba0) & 0xff] = si[2];
  break;

case 1553: // dis dmode=0 dbp=1
	dmem1[(i->param + ba1) & 0x1f] = si[2];
  break;

case 1554: // dis dmode=1 dbp=1
	dmem1[(id + ba1) & 0x1f] = si[2];
  break;

case 1555: // dis dmode=0 dbp=0
	dmem0[(i->param + ba0) & 0xff] = si[3];
  break;

case 1556: // dis dmode=1 dbp=0
	dmem0[(id + ba0) & 0xff] = si[3];
  break;

case 1557: // dis dmode=0 dbp=1
	dmem1[(i->param + ba1) & 0x1f] = si[3];
  break;

case 1558: // dis dmode=1 dbp=1
	dmem1[(id + ba1) & 0x1f] = si[3];
  break;

case 1559: // domh sfmo=0 rnd=0 movm=0
	so[0] = (macc_to_output_0(0x0000000000000000ULL, 0xffffffffffffffffULL) >> 24) & 0xffffff;
  break;

case 1560: // domh sfmo=1 rnd=0 movm=0
	so[0] = (macc_to_output_1(0x0000000000000000ULL, 0xffffffffffffffffULL) >> 24) & 0xffffff;
  break;

case 1561: // domh sfmo=2 rnd=0 movm=0
	so[0] = (macc_to_output_2(0x0000000000000000ULL, 0xffffffffffffffffULL) >> 24) & 0xffffff;
  break;

case 1562: // domh sfmo=3 rnd=0 movm=0
	so[0] = (macc_to_output_3(0x0000000000000000ULL, 0xffffffffffffffffULL) >> 24) & 0xffffff;
  break;

case 1563: // domh sfmo=0 rnd=1 movm=0
	so[0] = (macc_to_output_0(0x0000000000008000ULL, 0xffffffffffff0000ULL) >> 24) & 0xffffff;
  break;

case 1564: // domh sfmo=1 rnd=1 movm=0
	so[0] = (macc_to_output_1(0x0000000000008000ULL, 0xffffffffffff0000ULL) >> 24) & 0xffffff;
  break;

case 1565: // domh sfmo=2 rnd=1 movm=0
	so[0] = (macc_to_output_2(0x0000000000008000ULL, 0xffffffffffff0000ULL) >> 24) & 0xffffff;
  break;

case 1566: // domh sfmo=3 rnd=1 movm=0
	so[0] = (macc_to_output_3(0x0000000000008000ULL, 0xffffffffffff0000ULL) >> 24) & 0xffffff;
  break;

case 1567: // domh sfmo=0 rnd=2 movm=0
	so[0] = (macc_to_output_0(0x0000000000800000ULL, 0xffffffffff000000ULL) >> 24) & 0xffffff;
  break;

case 1568: // domh sfmo=1 rnd=2 movm=0
	so[0] = (macc_to_output_1(0x0000000000800000ULL, 0xffffffffff000000ULL) >> 24) & 0xffffff;
  break;

case 1569: // domh sfmo=2 rnd=2 movm=0
	so[0] = (macc_to_output_2(0x0000000000800000ULL, 0xffffffffff000000ULL) >> 24) & 0xffffff;
  break;

case 1570: // domh sfmo=3 rnd=2 movm=0
	so[0] = (macc_to_output_3(0x0000000000800000ULL, 0xffffffffff000000ULL) >> 24) & 0xffffff;
  break;

case 1571: // domh sfmo=0 rnd=3 movm=0
	so[0] = (macc_to_output_0(0x0000000000020000ULL, 0xfffffffffffc0000ULL) >> 24) & 0xffffff;
  break;

case 1572: // domh sfmo=1 rnd=3 movm=0
	so[0] = (macc_to_output_1(0x0000000000020000ULL, 0xfffffffffffc0000ULL) >> 24) & 0xffffff;
  break;

case 1573: // domh sfmo=2 rnd=3 movm=0
	so[0] = (macc_to_output_2(0x0000000000020000ULL, 0xfffffffffffc0000ULL) >> 24) & 0xffffff;
  break;

case 1574: // domh sfmo=3 rnd=3 movm=0
	so[0] = (macc_to_output_3(0x0000000000020000ULL, 0xfffffffffffc0000ULL) >> 24) & 0xffffff;
  break;

case 1575: // domh sfmo=0 rnd=4 movm=0
	so[0] = (macc_to_output_0(0x0000000080000000ULL, 0xffffffff00000000ULL) >> 24) & 0xffffff;
  break;

case 1576: // domh sfmo=1 rnd=4 movm=0
	so[0] = (macc_to_output_1(0x0000000080000000ULL, 0xffffffff00000000ULL) >> 24) & 0xffffff;
  break;

case 1577: // domh sfmo=2 rnd=4 movm=0
	so[0] = (macc_to_output_2(0x0000000080000000ULL, 0xffffffff00000000ULL) >> 24) & 0xffffff;
  break;

case 1578: // domh sfmo=3 rnd=4 movm=0
	so[0] = (macc_to_output_3(0x0000000080000000ULL, 0xffffffff00000000ULL) >> 24) & 0xffffff;
  break;

case 1579: // domh sfmo=0 rnd=0 movm=1
	so[0] = (macc_to_output_0s(0x0000000000000000ULL, 0xffffffffffffffffULL) >> 24) & 0xffffff;
  break;

case 1580: // domh sfmo=1 rnd=0 movm=1
	so[0] = (macc_to_output_1s(0x0000000000000000ULL, 0xffffffffffffffffULL) >> 24) & 0xffffff;
  break;

case 1581: // domh sfmo=2 rnd=0 movm=1
	so[0] = (macc_to_output_2s(0x0000000000000000ULL, 0xffffffffffffffffULL) >> 24) & 0xffffff;
  break;

case 1582: // domh sfmo=3 rnd=0 movm=1
	so[0] = (macc_to_output_3s(0x0000000000000000ULL, 0xffffffffffffffffULL) >> 24) & 0xffffff;
  break;

case 1583: // domh sfmo=0 rnd=1 movm=1
	so[0] = (macc_to_output_0s(0x0000000000008000ULL, 0xffffffffffff0000ULL) >> 24) & 0xffffff;
  break;

case 1584: // domh sfmo=1 rnd=1 movm=1
	so[0] = (macc_to_output_1s(0x0000000000008000ULL, 0xffffffffffff0000ULL) >> 24) & 0xffffff;
  break;

case 1585: // domh sfmo=2 rnd=1 movm=1
	so[0] = (macc_to_output_2s(0x0000000000008000ULL, 0xffffffffffff0000ULL) >> 24) & 0xffffff;
  break;

case 1586: // domh sfmo=3 rnd=1 movm=1
	so[0] = (macc_to_output_3s(0x0000000000008000ULL, 0xffffffffffff0000ULL) >> 24) & 0xffffff;
  break;

case 1587: // domh sfmo=0 rnd=2 movm=1
	so[0] = (macc_to_output_0s(0x0000000000800000ULL, 0xffffffffff000000ULL) >> 24) & 0xffffff;
  break;

case 1588: // domh sfmo=1 rnd=2 movm=1
	so[0] = (macc_to_output_1s(0x0000000000800000ULL, 0xffffffffff000000ULL) >> 24) & 0xffffff;
  break;

case 1589: // domh sfmo=2 rnd=2 movm=1
	so[0] = (macc_to_output_2s(0x0000000000800000ULL, 0xffffffffff000000ULL) >> 24) & 0xffffff;
  break;

case 1590: // domh sfmo=3 rnd=2 movm=1
	so[0] = (macc_to_output_3s(0x0000000000800000ULL, 0xffffffffff000000ULL) >> 24) & 0xffffff;
  break;

case 1591: // domh sfmo=0 rnd=3 movm=1
	so[0] = (macc_to_output_0s(0x0000000000020000ULL, 0xfffffffffffc0000ULL) >> 24) & 0xffffff;
  break;

case 1592: // domh sfmo=1 rnd=3 movm=1
	so[0] = (macc_to_output_1s(0x0000000000020000ULL, 0xfffffffffffc0000ULL) >> 24) & 0xffffff;
  break;

case 1593: // domh sfmo=2 rnd=3 movm=1
	so[0] = (macc_to_output_2s(0x0000000000020000ULL, 0xfffffffffffc0000ULL) >> 24) & 0xffffff;
  break;

case 1594: // domh sfmo=3 rnd=3 movm=1
	so[0] = (macc_to_output_3s(0x0000000000020000ULL, 0xfffffffffffc0000ULL) >> 24) & 0xffffff;
  break;

case 1595: // domh sfmo=0 rnd=4 movm=1
	so[0] = (macc_to_output_0s(0x0000000080000000ULL, 0xffffffff00000000ULL) >> 24) & 0xffffff;
  break;

case 1596: // domh sfmo=1 rnd=4 movm=1
	so[0] = (macc_to_output_1s(0x0000000080000000ULL, 0xffffffff00000000ULL) >> 24) & 0xffffff;
  break;

case 1597: // domh sfmo=2 rnd=4 movm=1
	so[0] = (macc_to_output_2s(0x0000000080000000ULL, 0xffffffff00000000ULL) >> 24) & 0xffffff;
  break;

case 1598: // domh sfmo=3 rnd=4 movm=1
	so[0] = (macc_to_output_3s(0x0000000080000000ULL, 0xffffffff00000000ULL) >> 24) & 0xffffff;
  break;

case 1599: // domh sfmo=0 rnd=0 movm=0
	so[1] = (macc_to_output_0(0x0000000000000000ULL, 0xffffffffffffffffULL) >> 24) & 0xffffff;
  break;

case 1600: // domh sfmo=1 rnd=0 movm=0
	so[1] = (macc_to_output_1(0x0000000000000000ULL, 0xffffffffffffffffULL) >> 24) & 0xffffff;
  break;

case 1601: // domh sfmo=2 rnd=0 movm=0
	so[1] = (macc_to_output_2(0x0000000000000000ULL, 0xffffffffffffffffULL) >> 24) & 0xffffff;
  break;

case 1602: // domh sfmo=3 rnd=0 movm=0
	so[1] = (macc_to_output_3(0x0000000000000000ULL, 0xffffffffffffffffULL) >> 24) & 0xffffff;
  break;

case 1603: // domh sfmo=0 rnd=1 movm=0
	so[1] = (macc_to_output_0(0x0000000000008000ULL, 0xffffffffffff0000ULL) >> 24) & 0xffffff;
  break;

case 1604: // domh sfmo=1 rnd=1 movm=0
	so[1] = (macc_to_output_1(0x0000000000008000ULL, 0xffffffffffff0000ULL) >> 24) & 0xffffff;
  break;

case 1605: // domh sfmo=2 rnd=1 movm=0
	so[1] = (macc_to_output_2(0x0000000000008000ULL, 0xffffffffffff0000ULL) >> 24) & 0xffffff;
  break;

case 1606: // domh sfmo=3 rnd=1 movm=0
	so[1] = (macc_to_output_3(0x0000000000008000ULL, 0xffffffffffff0000ULL) >> 24) & 0xffffff;
  break;

case 1607: // domh sfmo=0 rnd=2 movm=0
	so[1] = (macc_to_output_0(0x0000000000800000ULL, 0xffffffffff000000ULL) >> 24) & 0xffffff;
  break;

case 1608: // domh sfmo=1 rnd=2 movm=0
	so[1] = (macc_to_output_1(0x0000000000800000ULL, 0xffffffffff000000ULL) >> 24) & 0xffffff;
  break;

case 1609: // domh sfmo=2 rnd=2 movm=0
	so[1] = (macc_to_output_2(0x0000000000800000ULL, 0xffffffffff000000ULL) >> 24) & 0xffffff;
  break;

case 1610: // domh sfmo=3 rnd=2 movm=0
	so[1] = (macc_to_output_3(0x0000000000800000ULL, 0xffffffffff000000ULL) >> 24) & 0xffffff;
  break;

case 1611: // domh sfmo=0 rnd=3 movm=0
	so[1] = (macc_to_output_0(0x0000000000020000ULL, 0xfffffffffffc0000ULL) >> 24) & 0xffffff;
  break;

case 1612: // domh sfmo=1 rnd=3 movm=0
	so[1] = (macc_to_output_1(0x0000000000020000ULL, 0xfffffffffffc0000ULL) >> 24) & 0xffffff;
  break;

case 1613: // domh sfmo=2 rnd=3 movm=0
	so[1] = (macc_to_output_2(0x0000000000020000ULL, 0xfffffffffffc0000ULL) >> 24) & 0xffffff;
  break;

case 1614: // domh sfmo=3 rnd=3 movm=0
	so[1] = (macc_to_output_3(0x0000000000020000ULL, 0xfffffffffffc0000ULL) >> 24) & 0xffffff;
  break;

case 1615: // domh sfmo=0 rnd=4 movm=0
	so[1] = (macc_to_output_0(0x0000000080000000ULL, 0xffffffff00000000ULL) >> 24) & 0xffffff;
  break;

case 1616: // domh sfmo=1 rnd=4 movm=0
	so[1] = (macc_to_output_1(0x0000000080000000ULL, 0xffffffff00000000ULL) >> 24) & 0xffffff;
  break;

case 1617: // domh sfmo=2 rnd=4 movm=0
	so[1] = (macc_to_output_2(0x0000000080000000ULL, 0xffffffff00000000ULL) >> 24) & 0xffffff;
  break;

case 1618: // domh sfmo=3 rnd=4 movm=0
	so[1] = (macc_to_output_3(0x0000000080000000ULL, 0xffffffff00000000ULL) >> 24) & 0xffffff;
  break;

case 1619: // domh sfmo=0 rnd=0 movm=1
	so[1] = (macc_to_output_0s(0x0000000000000000ULL, 0xffffffffffffffffULL) >> 24) & 0xffffff;
  break;

case 1620: // domh sfmo=1 rnd=0 movm=1
	so[1] = (macc_to_output_1s(0x0000000000000000ULL, 0xffffffffffffffffULL) >> 24) & 0xffffff;
  break;

case 1621: // domh sfmo=2 rnd=0 movm=1
	so[1] = (macc_to_output_2s(0x0000000000000000ULL, 0xffffffffffffffffULL) >> 24) & 0xffffff;
  break;

case 1622: // domh sfmo=3 rnd=0 movm=1
	so[1] = (macc_to_output_3s(0x0000000000000000ULL, 0xffffffffffffffffULL) >> 24) & 0xffffff;
  break;

case 1623: // domh sfmo=0 rnd=1 movm=1
	so[1] = (macc_to_output_0s(0x0000000000008000ULL, 0xffffffffffff0000ULL) >> 24) & 0xffffff;
  break;

case 1624: // domh sfmo=1 rnd=1 movm=1
	so[1] = (macc_to_output_1s(0x0000000000008000ULL, 0xffffffffffff0000ULL) >> 24) & 0xffffff;
  break;

case 1625: // domh sfmo=2 rnd=1 movm=1
	so[1] = (macc_to_output_2s(0x0000000000008000ULL, 0xffffffffffff0000ULL) >> 24) & 0xffffff;
  break;

case 1626: // domh sfmo=3 rnd=1 movm=1
	so[1] = (macc_to_output_3s(0x0000000000008000ULL, 0xffffffffffff0000ULL) >> 24) & 0xffffff;
  break;

case 1627: // domh sfmo=0 rnd=2 movm=1
	so[1] = (macc_to_output_0s(0x0000000000800000ULL, 0xffffffffff000000ULL) >> 24) & 0xffffff;
  break;

case 1628: // domh sfmo=1 rnd=2 movm=1
	so[1] = (macc_to_output_1s(0x0000000000800000ULL, 0xffffffffff000000ULL) >> 24) & 0xffffff;
  break;

case 1629: // domh sfmo=2 rnd=2 movm=1
	so[1] = (macc_to_output_2s(0x0000000000800000ULL, 0xffffffffff000000ULL) >> 24) & 0xffffff;
  break;

case 1630: // domh sfmo=3 rnd=2 movm=1
	so[1] = (macc_to_output_3s(0x0000000000800000ULL, 0xffffffffff000000ULL) >> 24) & 0xffffff;
  break;

case 1631: // domh sfmo=0 rnd=3 movm=1
	so[1] = (macc_to_output_0s(0x0000000000020000ULL, 0xfffffffffffc0000ULL) >> 24) & 0xffffff;
  break;

case 1632: // domh sfmo=1 rnd=3 movm=1
	so[1] = (macc_to_output_1s(0x0000000000020000ULL, 0xfffffffffffc0000ULL) >> 24) & 0xffffff;
  break;

case 1633: // domh sfmo=2 rnd=3 movm=1
	so[1] = (macc_to_output_2s(0x0000000000020000ULL, 0xfffffffffffc0000ULL) >> 24) & 0xffffff;
  break;

case 1634: // domh sfmo=3 rnd=3 movm=1
	so[1] = (macc_to_output_3s(0x0000000000020000ULL, 0xfffffffffffc0000ULL) >> 24) & 0xffffff;
  break;

case 1635: // domh sfmo=0 rnd=4 movm=1
	so[1] = (macc_to_output_0s(0x0000000080000000ULL, 0xffffffff00000000ULL) >> 24) & 0xffffff;
  break;

case 1636: // domh sfmo=1 rnd=4 movm=1
	so[1] = (macc_to_output_1s(0x0000000080000000ULL, 0xffffffff00000000ULL) >> 24) & 0xffffff;
  break;

case 1637: // domh sfmo=2 rnd=4 movm=1
	so[1] = (macc_to_output_2s(0x0000000080000000ULL, 0xffffffff00000000ULL) >> 24) & 0xffffff;
  break;

case 1638: // domh sfmo=3 rnd=4 movm=1
	so[1] = (macc_to_output_3s(0x0000000080000000ULL, 0xffffffff00000000ULL) >> 24) & 0xffffff;
  break;

case 1639: // domh sfmo=0 rnd=0 movm=0
	so[2] = (macc_to_output_0(0x0000000000000000ULL, 0xffffffffffffffffULL) >> 24) & 0xffffff;
  break;

case 1640: // domh sfmo=1 rnd=0 movm=0
	so[2] = (macc_to_output_1(0x0000000000000000ULL, 0xffffffffffffffffULL) >> 24) & 0xffffff;
  break;

case 1641: // domh sfmo=2 rnd=0 movm=0
	so[2] = (macc_to_output_2(0x0000000000000000ULL, 0xffffffffffffffffULL) >> 24) & 0xffffff;
  break;

case 1642: // domh sfmo=3 rnd=0 movm=0
	so[2] = (macc_to_output_3(0x0000000000000000ULL, 0xffffffffffffffffULL) >> 24) & 0xffffff;
  break;

case 1643: // domh sfmo=0 rnd=1 movm=0
	so[2] = (macc_to_output_0(0x0000000000008000ULL, 0xffffffffffff0000ULL) >> 24) & 0xffffff;
  break;

case 1644: // domh sfmo=1 rnd=1 movm=0
	so[2] = (macc_to_output_1(0x0000000000008000ULL, 0xffffffffffff0000ULL) >> 24) & 0xffffff;
  break;

case 1645: // domh sfmo=2 rnd=1 movm=0
	so[2] = (macc_to_output_2(0x0000000000008000ULL, 0xffffffffffff0000ULL) >> 24) & 0xffffff;
  break;

case 1646: // domh sfmo=3 rnd=1 movm=0
	so[2] = (macc_to_output_3(0x0000000000008000ULL, 0xffffffffffff0000ULL) >> 24) & 0xffffff;
  break;

case 1647: // domh sfmo=0 rnd=2 movm=0
	so[2] = (macc_to_output_0(0x0000000000800000ULL, 0xffffffffff000000ULL) >> 24) & 0xffffff;
  break;

case 1648: // domh sfmo=1 rnd=2 movm=0
	so[2] = (macc_to_output_1(0x0000000000800000ULL, 0xffffffffff000000ULL) >> 24) & 0xffffff;
  break;

case 1649: // domh sfmo=2 rnd=2 movm=0
	so[2] = (macc_to_output_2(0x0000000000800000ULL, 0xffffffffff000000ULL) >> 24) & 0xffffff;
  break;

case 1650: // domh sfmo=3 rnd=2 movm=0
	so[2] = (macc_to_output_3(0x0000000000800000ULL, 0xffffffffff000000ULL) >> 24) & 0xffffff;
  break;

case 1651: // domh sfmo=0 rnd=3 movm=0
	so[2] = (macc_to_output_0(0x0000000000020000ULL, 0xfffffffffffc0000ULL) >> 24) & 0xffffff;
  break;

case 1652: // domh sfmo=1 rnd=3 movm=0
	so[2] = (macc_to_output_1(0x0000000000020000ULL, 0xfffffffffffc0000ULL) >> 24) & 0xffffff;
  break;

case 1653: // domh sfmo=2 rnd=3 movm=0
	so[2] = (macc_to_output_2(0x0000000000020000ULL, 0xfffffffffffc0000ULL) >> 24) & 0xffffff;
  break;

case 1654: // domh sfmo=3 rnd=3 movm=0
	so[2] = (macc_to_output_3(0x0000000000020000ULL, 0xfffffffffffc0000ULL) >> 24) & 0xffffff;
  break;

case 1655: // domh sfmo=0 rnd=4 movm=0
	so[2] = (macc_to_output_0(0x0000000080000000ULL, 0xffffffff00000000ULL) >> 24) & 0xffffff;
  break;

case 1656: // domh sfmo=1 rnd=4 movm=0
	so[2] = (macc_to_output_1(0x0000000080000000ULL, 0xffffffff00000000ULL) >> 24) & 0xffffff;
  break;

case 1657: // domh sfmo=2 rnd=4 movm=0
	so[2] = (macc_to_output_2(0x0000000080000000ULL, 0xffffffff00000000ULL) >> 24) & 0xffffff;
  break;

case 1658: // domh sfmo=3 rnd=4 movm=0
	so[2] = (macc_to_output_3(0x0000000080000000ULL, 0xffffffff00000000ULL) >> 24) & 0xffffff;
  break;

case 1659: // domh sfmo=0 rnd=0 movm=1
	so[2] = (macc_to_output_0s(0x0000000000000000ULL, 0xffffffffffffffffULL) >> 24) & 0xffffff;
  break;

case 1660: // domh sfmo=1 rnd=0 movm=1
	so[2] = (macc_to_output_1s(0x0000000000000000ULL, 0xffffffffffffffffULL) >> 24) & 0xffffff;
  break;

case 1661: // domh sfmo=2 rnd=0 movm=1
	so[2] = (macc_to_output_2s(0x0000000000000000ULL, 0xffffffffffffffffULL) >> 24) & 0xffffff;
  break;

case 1662: // domh sfmo=3 rnd=0 movm=1
	so[2] = (macc_to_output_3s(0x0000000000000000ULL, 0xffffffffffffffffULL) >> 24) & 0xffffff;
  break;

case 1663: // domh sfmo=0 rnd=1 movm=1
	so[2] = (macc_to_output_0s(0x0000000000008000ULL, 0xffffffffffff0000ULL) >> 24) & 0xffffff;
  break;

case 1664: // domh sfmo=1 rnd=1 movm=1
	so[2] = (macc_to_output_1s(0x0000000000008000ULL, 0xffffffffffff0000ULL) >> 24) & 0xffffff;
  break;

case 1665: // domh sfmo=2 rnd=1 movm=1
	so[2] = (macc_to_output_2s(0x0000000000008000ULL, 0xffffffffffff0000ULL) >> 24) & 0xffffff;
  break;

case 1666: // domh sfmo=3 rnd=1 movm=1
	so[2] = (macc_to_output_3s(0x0000000000008000ULL, 0xffffffffffff0000ULL) >> 24) & 0xffffff;
  break;

case 1667: // domh sfmo=0 rnd=2 movm=1
	so[2] = (macc_to_output_0s(0x0000000000800000ULL, 0xffffffffff000000ULL) >> 24) & 0xffffff;
  break;

case 1668: // domh sfmo=1 rnd=2 movm=1
	so[2] = (macc_to_output_1s(0x0000000000800000ULL, 0xffffffffff000000ULL) >> 24) & 0xffffff;
  break;

case 1669: // domh sfmo=2 rnd=2 movm=1
	so[2] = (macc_to_output_2s(0x0000000000800000ULL, 0xffffffffff000000ULL) >> 24) & 0xffffff;
  break;

case 1670: // domh sfmo=3 rnd=2 movm=1
	so[2] = (macc_to_output_3s(0x0000000000800000ULL, 0xffffffffff000000ULL) >> 24) & 0xffffff;
  break;

case 1671: // domh sfmo=0 rnd=3 movm=1
	so[2] = (macc_to_output_0s(0x0000000000020000ULL, 0xfffffffffffc0000ULL) >> 24) & 0xffffff;
  break;

case 1672: // domh sfmo=1 rnd=3 movm=1
	so[2] = (macc_to_output_1s(0x0000000000020000ULL, 0xfffffffffffc0000ULL) >> 24) & 0xffffff;
  break;

case 1673: // domh sfmo=2 rnd=3 movm=1
	so[2] = (macc_to_output_2s(0x0000000000020000ULL, 0xfffffffffffc0000ULL) >> 24) & 0xffffff;
  break;

case 1674: // domh sfmo=3 rnd=3 movm=1
	so[2] = (macc_to_output_3s(0x0000000000020000ULL, 0xfffffffffffc0000ULL) >> 24) & 0xffffff;
  break;

case 1675: // domh sfmo=0 rnd=4 movm=1
	so[2] = (macc_to_output_0s(0x0000000080000000ULL, 0xffffffff00000000ULL) >> 24) & 0xffffff;
  break;

case 1676: // domh sfmo=1 rnd=4 movm=1
	so[2] = (macc_to_output_1s(0x0000000080000000ULL, 0xffffffff00000000ULL) >> 24) & 0xffffff;
  break;

case 1677: // domh sfmo=2 rnd=4 movm=1
	so[2] = (macc_to_output_2s(0x0000000080000000ULL, 0xffffffff00000000ULL) >> 24) & 0xffffff;
  break;

case 1678: // domh sfmo=3 rnd=4 movm=1
	so[2] = (macc_to_output_3s(0x0000000080000000ULL, 0xffffffff00000000ULL) >> 24) & 0xffffff;
  break;

case 1679: // domh sfmo=0 rnd=0 movm=0
	so[3] = (macc_to_output_0(0x0000000000000000ULL, 0xffffffffffffffffULL) >> 24) & 0xffffff;
  break;

case 1680: // domh sfmo=1 rnd=0 movm=0
	so[3] = (macc_to_output_1(0x0000000000000000ULL, 0xffffffffffffffffULL) >> 24) & 0xffffff;
  break;

case 1681: // domh sfmo=2 rnd=0 movm=0
	so[3] = (macc_to_output_2(0x0000000000000000ULL, 0xffffffffffffffffULL) >> 24) & 0xffffff;
  break;

case 1682: // domh sfmo=3 rnd=0 movm=0
	so[3] = (macc_to_output_3(0x0000000000000000ULL, 0xffffffffffffffffULL) >> 24) & 0xffffff;
  break;

case 1683: // domh sfmo=0 rnd=1 movm=0
	so[3] = (macc_to_output_0(0x0000000000008000ULL, 0xffffffffffff0000ULL) >> 24) & 0xffffff;
  break;

case 1684: // domh sfmo=1 rnd=1 movm=0
	so[3] = (macc_to_output_1(0x0000000000008000ULL, 0xffffffffffff0000ULL) >> 24) & 0xffffff;
  break;

case 1685: // domh sfmo=2 rnd=1 movm=0
	so[3] = (macc_to_output_2(0x0000000000008000ULL, 0xffffffffffff0000ULL) >> 24) & 0xffffff;
  break;

case 1686: // domh sfmo=3 rnd=1 movm=0
	so[3] = (macc_to_output_3(0x0000000000008000ULL, 0xffffffffffff0000ULL) >> 24) & 0xffffff;
  break;

case 1687: // domh sfmo=0 rnd=2 movm=0
	so[3] = (macc_to_output_0(0x0000000000800000ULL, 0xffffffffff000000ULL) >> 24) & 0xffffff;
  break;

case 1688: // domh sfmo=1 rnd=2 movm=0
	so[3] = (macc_to_output_1(0x0000000000800000ULL, 0xffffffffff000000ULL) >> 24) & 0xffffff;
  break;

case 1689: // domh sfmo=2 rnd=2 movm=0
	so[3] = (macc_to_output_2(0x0000000000800000ULL, 0xffffffffff000000ULL) >> 24) & 0xffffff;
  break;

case 1690: // domh sfmo=3 rnd=2 movm=0
	so[3] = (macc_to_output_3(0x0000000000800000ULL, 0xffffffffff000000ULL) >> 24) & 0xffffff;
  break;

case 1691: // domh sfmo=0 rnd=3 movm=0
	so[3] = (macc_to_output_0(0x0000000000020000ULL, 0xfffffffffffc0000ULL) >> 24) & 0xffffff;
  break;

case 1692: // domh sfmo=1 rnd=3 movm=0
	so[3] = (macc_to_output_1(0x0000000000020000ULL, 0xfffffffffffc0000ULL) >> 24) & 0xffffff;
  break;

case 1693: // domh sfmo=2 rnd=3 movm=0
	so[3] = (macc_to_output_2(0x0000000000020000ULL, 0xfffffffffffc0000ULL) >> 24) & 0xffffff;
  break;

case 1694: // domh sfmo=3 rnd=3 movm=0
	so[3] = (macc_to_output_3(0x0000000000020000ULL, 0xfffffffffffc0000ULL) >> 24) & 0xffffff;
  break;

case 1695: // domh sfmo=0 rnd=4 movm=0
	so[3] = (macc_to_output_0(0x0000000080000000ULL, 0xffffffff00000000ULL) >> 24) & 0xffffff;
  break;

case 1696: // domh sfmo=1 rnd=4 movm=0
	so[3] = (macc_to_output_1(0x0000000080000000ULL, 0xffffffff00000000ULL) >> 24) & 0xffffff;
  break;

case 1697: // domh sfmo=2 rnd=4 movm=0
	so[3] = (macc_to_output_2(0x0000000080000000ULL, 0xffffffff00000000ULL) >> 24) & 0xffffff;
  break;

case 1698: // domh sfmo=3 rnd=4 movm=0
	so[3] = (macc_to_output_3(0x0000000080000000ULL, 0xffffffff00000000ULL) >> 24) & 0xffffff;
  break;

case 1699: // domh sfmo=0 rnd=0 movm=1
	so[3] = (macc_to_output_0s(0x0000000000000000ULL, 0xffffffffffffffffULL) >> 24) & 0xffffff;
  break;

case 1700: // domh sfmo=1 rnd=0 movm=1
	so[3] = (macc_to_output_1s(0x0000000000000000ULL, 0xffffffffffffffffULL) >> 24) & 0xffffff;
  break;

case 1701: // domh sfmo=2 rnd=0 movm=1
	so[3] = (macc_to_output_2s(0x0000000000000000ULL, 0xffffffffffffffffULL) >> 24) & 0xffffff;
  break;

case 1702: // domh sfmo=3 rnd=0 movm=1
	so[3] = (macc_to_output_3s(0x0000000000000000ULL, 0xffffffffffffffffULL) >> 24) & 0xffffff;
  break;

case 1703: // domh sfmo=0 rnd=1 movm=1
	so[3] = (macc_to_output_0s(0x0000000000008000ULL, 0xffffffffffff0000ULL) >> 24) & 0xffffff;
  break;

case 1704: // domh sfmo=1 rnd=1 movm=1
	so[3] = (macc_to_output_1s(0x0000000000008000ULL, 0xffffffffffff0000ULL) >> 24) & 0xffffff;
  break;

case 1705: // domh sfmo=2 rnd=1 movm=1
	so[3] = (macc_to_output_2s(0x0000000000008000ULL, 0xffffffffffff0000ULL) >> 24) & 0xffffff;
  break;

case 1706: // domh sfmo=3 rnd=1 movm=1
	so[3] = (macc_to_output_3s(0x0000000000008000ULL, 0xffffffffffff0000ULL) >> 24) & 0xffffff;
  break;

case 1707: // domh sfmo=0 rnd=2 movm=1
	so[3] = (macc_to_output_0s(0x0000000000800000ULL, 0xffffffffff000000ULL) >> 24) & 0xffffff;
  break;

case 1708: // domh sfmo=1 rnd=2 movm=1
	so[3] = (macc_to_output_1s(0x0000000000800000ULL, 0xffffffffff000000ULL) >> 24) & 0xffffff;
  break;

case 1709: // domh sfmo=2 rnd=2 movm=1
	so[3] = (macc_to_output_2s(0x0000000000800000ULL, 0xffffffffff000000ULL) >> 24) & 0xffffff;
  break;

case 1710: // domh sfmo=3 rnd=2 movm=1
	so[3] = (macc_to_output_3s(0x0000000000800000ULL, 0xffffffffff000000ULL) >> 24) & 0xffffff;
  break;

case 1711: // domh sfmo=0 rnd=3 movm=1
	so[3] = (macc_to_output_0s(0x0000000000020000ULL, 0xfffffffffffc0000ULL) >> 24) & 0xffffff;
  break;

case 1712: // domh sfmo=1 rnd=3 movm=1
	so[3] = (macc_to_output_1s(0x0000000000020000ULL, 0xfffffffffffc0000ULL) >> 24) & 0xffffff;
  break;

case 1713: // domh sfmo=2 rnd=3 movm=1
	so[3] = (macc_to_output_2s(0x0000000000020000ULL, 0xfffffffffffc0000ULL) >> 24) & 0xffffff;
  break;

case 1714: // domh sfmo=3 rnd=3 movm=1
	so[3] = (macc_to_output_3s(0x0000000000020000ULL, 0xfffffffffffc0000ULL) >> 24) & 0xffffff;
  break;

case 1715: // domh sfmo=0 rnd=4 movm=1
	so[3] = (macc_to_output_0s(0x0000000080000000ULL, 0xffffffff00000000ULL) >> 24) & 0xffffff;
  break;

case 1716: // domh sfmo=1 rnd=4 movm=1
	so[3] = (macc_to_output_1s(0x0000000080000000ULL, 0xffffffff00000000ULL) >> 24) & 0xffffff;
  break;

case 1717: // domh sfmo=2 rnd=4 movm=1
	so[3] = (macc_to_output_2s(0x0000000080000000ULL, 0xffffffff00000000ULL) >> 24) & 0xffffff;
  break;

case 1718: // domh sfmo=3 rnd=4 movm=1
	so[3] = (macc_to_output_3s(0x0000000080000000ULL, 0xffffffff00000000ULL) >> 24) & 0xffffff;
  break;

case 1719: // rmov 
	st1 &= ~ST1_MOV;
  break;

case 1720: // rmom 
	st1 &= ~ST1_MOVM;
  break;

case 1721: // smom 
	st1 |= ST1_MOVM;
  break;

case 1722: // ldpk 
	st1 &= ~ST1_DBP;
  break;

case 1723: // ldpk 
	st1 |= ST1_DBP;
  break;

case 1724: // scrm 
	st1 = (st1 & ~ST1_CRM) | (0 << ST1_CRM_SHIFT);
  break;

case 1725: // scrm 
	st1 = (st1 & ~ST1_CRM) | (1 << ST1_CRM_SHIFT);
  break;

case 1726: // scrm 
	st1 = (st1 & ~ST1_CRM) | (2 << ST1_CRM_SHIFT);
  break;

case 1727: // scrm 
	st1 = (st1 & ~ST1_CRM) | (3 << ST1_CRM_SHIFT);
  break;

case 1728: // sfao 
	st1 &= ~ST1_SFAO;
  break;

case 1729: // sfao 
	st1 |= ST1_SFAI;
  break;

case 1730: // sfmo 
	st1 = (st1 & ~ST1_SFMO) | (0 << ST1_SFMO_SHIFT);
  break;

case 1731: // sfmo 
	st1 = (st1 & ~ST1_SFMO) | (1 << ST1_SFMO_SHIFT);
  break;

case 1732: // sfmo 
	st1 = (st1 & ~ST1_SFMO) | (2 << ST1_SFMO_SHIFT);
  break;

case 1733: // sfmo 
	st1 = (st1 & ~ST1_SFMO) | (3 << ST1_SFMO_SHIFT);
  break;

case 1734: // rnd 
	st1 = (st1 & ~ST1_RND) | (0 << ST1_RND_SHIFT);
  break;

case 1735: // rnd 
	st1 = (st1 & ~ST1_RND) | (1 << ST1_RND_SHIFT);
  break;

case 1736: // rnd 
	st1 = (st1 & ~ST1_RND) | (2 << ST1_RND_SHIFT);
  break;

case 1737: // rnd 
	st1 = (st1 & ~ST1_RND) | (3 << ST1_RND_SHIFT);
  break;

case 1738: // rnd 
	st1 = (st1 & ~ST1_RND) | (4 << ST1_RND_SHIFT);
  break;

case 1739: // rnd 
	st1 = (st1 & ~ST1_RND) | (5 << ST1_RND_SHIFT);
  break;

case 1740: // rnd 
	st1 = (st1 & ~ST1_RND) | (6 << ST1_RND_SHIFT);
  break;

case 1741: // rnd 
	st1 = (st1 & ~ST1_RND) | (7 << ST1_RND_SHIFT);
  break;

case 1742: // lpc cmode=0 crm=0
	if(sti & S_HOST)
	break;
	c = cmem[i->param];
	host[0] = c >> 24;
	host[1] = c >> 16;
	host[2] = c >> 8;
	host[3] = c;
	hidx = 0;
	sti |= S_HOST;
  break;

case 1743: // lpc cmode=1 crm=0
	if(sti & S_HOST)
	break;
	c = cmem[ca];
	host[0] = c >> 24;
	host[1] = c >> 16;
	host[2] = c >> 8;
	host[3] = c;
	hidx = 0;
	sti |= S_HOST;
  break;

case 1744: // lpc cmode=0 crm=1
	if(sti & S_HOST)
	break;
	c = (cmem[i->param] & 0xffff0000);
	host[0] = c >> 24;
	host[1] = c >> 16;
	host[2] = c >> 8;
	host[3] = c;
	hidx = 0;
	sti |= S_HOST;
  break;

case 1745: // lpc cmode=1 crm=1
	if(sti & S_HOST)
	break;
	c = (cmem[ca] & 0xffff0000);
	host[0] = c >> 24;
	host[1] = c >> 16;
	host[2] = c >> 8;
	host[3] = c;
	hidx = 0;
	sti |= S_HOST;
  break;

case 1746: // lpc cmode=0 crm=2
	if(sti & S_HOST)
	break;
	c = (cmem[i->param] << 16);
	host[0] = c >> 24;
	host[1] = c >> 16;
	host[2] = c >> 8;
	host[3] = c;
	hidx = 0;
	sti |= S_HOST;
  break;

case 1747: // lpc cmode=1 crm=2
	if(sti & S_HOST)
	break;
	c = (cmem[ca] << 16);
	host[0] = c >> 24;
	host[1] = c >> 16;
	host[2] = c >> 8;
	host[3] = c;
	hidx = 0;
	sti |= S_HOST;
  break;

case 1748: // sfai 
	st1 &= ~ST1_SFAI;
  break;

case 1749: // sfai 
	st1 |= ST1_SFAI;
  break;

case 1750: // sfma 
	st1 = (st1 & ~ST1_SFMA) | (0 << ST1_SFMA_SHIFT);
  break;

case 1751: // sfma 
	st1 = (st1 & ~ST1_SFMA) | (1 << ST1_SFMA_SHIFT);
  break;

case 1752: // sfma 
	st1 = (st1 & ~ST1_SFMA) | (2 << ST1_SFMA_SHIFT);
  break;

case 1753: // sfma 
	st1 = (st1 & ~ST1_SFMA) | (3 << ST1_SFMA_SHIFT);
  break;

case 1754: // idle 
	sti |= S_IDLE;
  break;

case 1755: // rptk 
	rptc_next = i->param;
  break;

case 1756: // lcak 
	ca = i->param;
  break;

case 1757: // lirk 
	id = i->param;
  break;

case 1758: // lcac 
	if(((int32_t)aacc) >= 0)
	ca = i->param;
  break;

case 1759: // b 
	pc = i->param;
  sti |= S_BRANCH;
  break;

case 1760: // bgz 
	if(((int32_t)aacc) > 0) {
	pc = i->param;
  sti |= S_BRANCH;
	}
  break;

case 1761: // blz 
	if(((int32_t)aacc) < 0) {
	pc = i->param;
  sti |= S_BRANCH;
	}
  break;

case 1762: // bnz 
	if(aacc) {
	pc = i->param;
  sti |= S_BRANCH;
	}
  break;

case 1763: // bv 
	if(st1 & ST1_AOV) {
	st1 &= ~ST1_AOV;
	pc = i->param;
  sti |= S_BRANCH;
	}
  break;

#endif
