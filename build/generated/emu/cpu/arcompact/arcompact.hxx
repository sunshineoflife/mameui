ARCOMPACT_RETTYPE arcompact_device::arcompact_handle04_00_p00(OPS_32)
{
	int size = 4;
	uint32_t limm = 0;
	int got_limm = 0;
	
	COMMON32_GET_breg;
	COMMON32_GET_F;
	COMMON32_GET_creg;
	COMMON32_GET_areg;
	
	uint32_t c;
	uint32_t b;
	
	if (breg == LIMM_REG)
	{
		GET_LIMM_32;
		size = 8;
		got_limm = 1;
		b = limm;
	}
	else
	{
		b = m_regs[breg];
	}
	
	if (creg == LIMM_REG)
	{
		if (!got_limm)
		{
			GET_LIMM_32;
			size = 8;
		}
		c = limm;
	}
	else
	{
		c = m_regs[creg];
	}
	/* todo: is the limm, limm syntax valid? (it's pointless.) */
	/* todo: if areg = LIMM then there is no result (but since that register can never be read, I guess it doesn't matter if we store it there anyway?) */
	uint32_t result = b + c;
	m_regs[areg] = result;
	
	if (F)
	{
		if (result & 0x80000000) { STATUS32_SET_N; }
		else { STATUS32_CLEAR_N; }
		if (result == 0x00000000) { STATUS32_SET_Z; }
		else { STATUS32_CLEAR_Z; }
		if ((b & 0x80000000) == (c & 0x80000000))
		{
			if ((result & 0x80000000) != (b & 0x80000000))
			{
				STATUS32_SET_V;
			}
			else
			{
				STATUS32_CLEAR_V;
			}
		}
		if (b < c)
		{
			STATUS32_SET_C;
		}
		else
		{
			STATUS32_CLEAR_C;
		}
	}
	return m_pc + (size >> 0);
}


ARCOMPACT_RETTYPE arcompact_device::arcompact_handle04_00_p01(OPS_32)
{
	int size = 4;
	uint32_t limm = 0;
/*	int got_limm = 0; */
	
	COMMON32_GET_breg;
	COMMON32_GET_F;
	COMMON32_GET_u6;
	COMMON32_GET_areg;
	
	uint32_t c;
	uint32_t b;
	
	/* is having b as LIMM valid here? LIMM vs. fixed u6 value makes no sense */
	if (breg == LIMM_REG)
	{
		GET_LIMM_32;
		size = 8;
/*		got_limm = 1; */
		b = limm;
	}
	else
	{
		b = m_regs[breg];
	}
    
 	c = u;
	
	/* todo: if areg = LIMM then there is no result (but since that register can never be read, I guess it doesn't matter if we store it there anyway?) */
	uint32_t result = b + c;
	m_regs[areg] = result;
	
	if (F)
	{
		if (result & 0x80000000) { STATUS32_SET_N; }
		else { STATUS32_CLEAR_N; }
		if (result == 0x00000000) { STATUS32_SET_Z; }
		else { STATUS32_CLEAR_Z; }
		if ((b & 0x80000000) == (c & 0x80000000))
		{
			if ((result & 0x80000000) != (b & 0x80000000))
			{
				STATUS32_SET_V;
			}
			else
			{
				STATUS32_CLEAR_V;
			}
		}
		if (b < c)
		{
			STATUS32_SET_C;
		}
		else
		{
			STATUS32_CLEAR_C;
		}
	}
	return m_pc + (size >> 0);
}


ARCOMPACT_RETTYPE arcompact_device::arcompact_handle04_00_p10(OPS_32)
{
	int size = 4;
	uint32_t limm = 0;
/*	int got_limm = 0; */
	
	COMMON32_GET_breg;
	COMMON32_GET_F;
	COMMON32_GET_s12;
	
	uint32_t c;
	uint32_t b;
	
	/* is having b as LIMM valid here? LIMM vs. fixed u6 value makes no sense */
	if (breg == LIMM_REG)
	{
		GET_LIMM_32;
		size = 8;
/*		got_limm = 1; */
		b = limm;
	}
	else
	{
		b = m_regs[breg];
	}
    
 	c = (uint32_t)S;
	
	/* todo: if areg = LIMM then there is no result (but since that register can never be read, I guess it doesn't matter if we store it there anyway?) */
	uint32_t result = b + c;
	m_regs[breg] = result;
	
	if (F)
	{
		if (result & 0x80000000) { STATUS32_SET_N; }
		else { STATUS32_CLEAR_N; }
		if (result == 0x00000000) { STATUS32_SET_Z; }
		else { STATUS32_CLEAR_Z; }
		if ((b & 0x80000000) == (c & 0x80000000))
		{
			if ((result & 0x80000000) != (b & 0x80000000))
			{
				STATUS32_SET_V;
			}
			else
			{
				STATUS32_CLEAR_V;
			}
		}
		if (b < c)
		{
			STATUS32_SET_C;
		}
		else
		{
			STATUS32_CLEAR_C;
		}
	}
	return m_pc + (size >> 0);
}


ARCOMPACT_RETTYPE arcompact_device::arcompact_handle04_00_p11_m0(OPS_32)
{
	int size = 4;
	arcompact_fatal("arcompact_handle04_00_p11_m0 (ADD)\n");
	return m_pc + (size >> 0);
}


ARCOMPACT_RETTYPE arcompact_device::arcompact_handle04_00_p11_m1(OPS_32)
{
	int size = 4;
	uint32_t limm = 0;
/*	int got_limm = 0; */
	
	COMMON32_GET_breg;
	COMMON32_GET_F;
	COMMON32_GET_u6;
     //COMMON32_GET_areg; // areg bits already used as condition code select
	
	uint32_t c;
	uint32_t b;
	
	/* is having b as LIMM valid here? LIMM vs. fixed u6 value makes no sense */
	if (breg == LIMM_REG)
	{
		GET_LIMM_32;
		size = 8;
/*		got_limm = 1; */
		b = limm;
	}
	else
	{
		b = m_regs[breg];
	}
    
 	c = u;
	
	/* todo: if areg = LIMM then there is no result (but since that register can never be read, I guess it doesn't matter if we store it there anyway?) */
	COMMON32_GET_CONDITION;
	if (!check_condition(condition))
		return m_pc + (size>>0);

	uint32_t result = b + c;
	m_regs[breg] = result;
	
	if (F)
	{
		if (result & 0x80000000) { STATUS32_SET_N; }
		else { STATUS32_CLEAR_N; }
		if (result == 0x00000000) { STATUS32_SET_Z; }
		else { STATUS32_CLEAR_Z; }
		if ((b & 0x80000000) == (c & 0x80000000))
		{
			if ((result & 0x80000000) != (b & 0x80000000))
			{
				STATUS32_SET_V;
			}
			else
			{
				STATUS32_CLEAR_V;
			}
		}
		if (b < c)
		{
			STATUS32_SET_C;
		}
		else
		{
			STATUS32_CLEAR_C;
		}
	}
	return m_pc + (size >> 0);
}


ARCOMPACT_RETTYPE arcompact_device::arcompact_handle04_02_p00(OPS_32)
{
	int size = 4;
	uint32_t limm = 0;
	int got_limm = 0;
	
	COMMON32_GET_breg;
	COMMON32_GET_F;
	COMMON32_GET_creg;
	COMMON32_GET_areg;
	
	uint32_t c;
	uint32_t b;
	
	if (breg == LIMM_REG)
	{
		GET_LIMM_32;
		size = 8;
		got_limm = 1;
		b = limm;
	}
	else
	{
		b = m_regs[breg];
	}
	
	if (creg == LIMM_REG)
	{
		if (!got_limm)
		{
			GET_LIMM_32;
			size = 8;
		}
		c = limm;
	}
	else
	{
		c = m_regs[creg];
	}
	/* todo: is the limm, limm syntax valid? (it's pointless.) */
	/* todo: if areg = LIMM then there is no result (but since that register can never be read, I guess it doesn't matter if we store it there anyway?) */
	uint32_t result = b - c;
	m_regs[areg] = result;
	
	if (F)
	{
		arcompact_fatal("arcompact_handle04_02 (SUB) (F set)\n"); // not yet supported
	}
	return m_pc + (size >> 0);
}


ARCOMPACT_RETTYPE arcompact_device::arcompact_handle04_02_p01(OPS_32)
{
	int size = 4;
	uint32_t limm = 0;
/*	int got_limm = 0; */
	
	COMMON32_GET_breg;
	COMMON32_GET_F;
	COMMON32_GET_u6;
	COMMON32_GET_areg;
	
	uint32_t c;
	uint32_t b;
	
	/* is having b as LIMM valid here? LIMM vs. fixed u6 value makes no sense */
	if (breg == LIMM_REG)
	{
		GET_LIMM_32;
		size = 8;
/*		got_limm = 1; */
		b = limm;
	}
	else
	{
		b = m_regs[breg];
	}
    
 	c = u;
	
	/* todo: if areg = LIMM then there is no result (but since that register can never be read, I guess it doesn't matter if we store it there anyway?) */
	uint32_t result = b - c;
	m_regs[areg] = result;
	
	if (F)
	{
		arcompact_fatal("arcompact_handle04_02 (SUB) (F set)\n"); // not yet supported
	}
	return m_pc + (size >> 0);
}


ARCOMPACT_RETTYPE arcompact_device::arcompact_handle04_02_p10(OPS_32)
{
	int size = 4;
	uint32_t limm = 0;
/*	int got_limm = 0; */
	
	COMMON32_GET_breg;
	COMMON32_GET_F;
	COMMON32_GET_s12;
	
	uint32_t c;
	uint32_t b;
	
	/* is having b as LIMM valid here? LIMM vs. fixed u6 value makes no sense */
	if (breg == LIMM_REG)
	{
		GET_LIMM_32;
		size = 8;
/*		got_limm = 1; */
		b = limm;
	}
	else
	{
		b = m_regs[breg];
	}
    
 	c = (uint32_t)S;
	
	/* todo: if areg = LIMM then there is no result (but since that register can never be read, I guess it doesn't matter if we store it there anyway?) */
	uint32_t result = b - c;
	m_regs[breg] = result;
	
	if (F)
	{
		arcompact_fatal("arcompact_handle04_02 (SUB) (F set)\n"); // not yet supported
	}
	return m_pc + (size >> 0);
}


ARCOMPACT_RETTYPE arcompact_device::arcompact_handle04_02_p11_m0(OPS_32)
{
	int size = 4;
	arcompact_fatal("arcompact_handle04_02_p11_m0 (SUB)\n");
	return m_pc + (size >> 0);
}


ARCOMPACT_RETTYPE arcompact_device::arcompact_handle04_02_p11_m1(OPS_32)
{
	int size = 4;
	uint32_t limm = 0;
/*	int got_limm = 0; */
	
	COMMON32_GET_breg;
	COMMON32_GET_F;
	COMMON32_GET_u6;
     //COMMON32_GET_areg; // areg bits already used as condition code select
	
	uint32_t c;
	uint32_t b;
	
	/* is having b as LIMM valid here? LIMM vs. fixed u6 value makes no sense */
	if (breg == LIMM_REG)
	{
		GET_LIMM_32;
		size = 8;
/*		got_limm = 1; */
		b = limm;
	}
	else
	{
		b = m_regs[breg];
	}
    
 	c = u;
	
	/* todo: if areg = LIMM then there is no result (but since that register can never be read, I guess it doesn't matter if we store it there anyway?) */
	COMMON32_GET_CONDITION;
	if (!check_condition(condition))
		return m_pc + (size>>0);

	uint32_t result = b - c;
	m_regs[breg] = result;
	
	if (F)
	{
		arcompact_fatal("arcompact_handle04_02 (SUB) (F set)\n"); // not yet supported
	}
	return m_pc + (size >> 0);
}


ARCOMPACT_RETTYPE arcompact_device::arcompact_handle04_04_p00(OPS_32)
{
	int size = 4;
	uint32_t limm = 0;
	int got_limm = 0;
	
	COMMON32_GET_breg;
	COMMON32_GET_F;
	COMMON32_GET_creg;
	COMMON32_GET_areg;
	
	uint32_t c;
	uint32_t b;
	
	if (breg == LIMM_REG)
	{
		GET_LIMM_32;
		size = 8;
		got_limm = 1;
		b = limm;
	}
	else
	{
		b = m_regs[breg];
	}
	
	if (creg == LIMM_REG)
	{
		if (!got_limm)
		{
			GET_LIMM_32;
			size = 8;
		}
		c = limm;
	}
	else
	{
		c = m_regs[creg];
	}
	/* todo: is the limm, limm syntax valid? (it's pointless.) */
	/* todo: if areg = LIMM then there is no result (but since that register can never be read, I guess it doesn't matter if we store it there anyway?) */
	uint32_t result = b & c;
	if (areg != LIMM_REG) { m_regs[areg] = result; }
	
	if (F)
	{
		if (result & 0x80000000) { STATUS32_SET_N; }
		else { STATUS32_CLEAR_N; }
		if (result == 0x00000000) { STATUS32_SET_Z; }
		else { STATUS32_CLEAR_Z; }
	}
	return m_pc + (size >> 0);
}


ARCOMPACT_RETTYPE arcompact_device::arcompact_handle04_04_p01(OPS_32)
{
	int size = 4;
	uint32_t limm = 0;
/*	int got_limm = 0; */
	
	COMMON32_GET_breg;
	COMMON32_GET_F;
	COMMON32_GET_u6;
	COMMON32_GET_areg;
	
	uint32_t c;
	uint32_t b;
	
	/* is having b as LIMM valid here? LIMM vs. fixed u6 value makes no sense */
	if (breg == LIMM_REG)
	{
		GET_LIMM_32;
		size = 8;
/*		got_limm = 1; */
		b = limm;
	}
	else
	{
		b = m_regs[breg];
	}
    
 	c = u;
	
	/* todo: if areg = LIMM then there is no result (but since that register can never be read, I guess it doesn't matter if we store it there anyway?) */
	uint32_t result = b & c;
	if (areg != LIMM_REG) { m_regs[areg] = result; }
	
	if (F)
	{
		if (result & 0x80000000) { STATUS32_SET_N; }
		else { STATUS32_CLEAR_N; }
		if (result == 0x00000000) { STATUS32_SET_Z; }
		else { STATUS32_CLEAR_Z; }
	}
	return m_pc + (size >> 0);
}


ARCOMPACT_RETTYPE arcompact_device::arcompact_handle04_04_p10(OPS_32)
{
	int size = 4;
	uint32_t limm = 0;
/*	int got_limm = 0; */
	
	COMMON32_GET_breg;
	COMMON32_GET_F;
	COMMON32_GET_s12;
	
	uint32_t c;
	uint32_t b;
	
	/* is having b as LIMM valid here? LIMM vs. fixed u6 value makes no sense */
	if (breg == LIMM_REG)
	{
		GET_LIMM_32;
		size = 8;
/*		got_limm = 1; */
		b = limm;
	}
	else
	{
		b = m_regs[breg];
	}
    
 	c = (uint32_t)S;
	
	/* todo: if areg = LIMM then there is no result (but since that register can never be read, I guess it doesn't matter if we store it there anyway?) */
	uint32_t result = b & c;
	if (breg != LIMM_REG) { m_regs[breg] = result; }
	
	if (F)
	{
		if (result & 0x80000000) { STATUS32_SET_N; }
		else { STATUS32_CLEAR_N; }
		if (result == 0x00000000) { STATUS32_SET_Z; }
		else { STATUS32_CLEAR_Z; }
	}
	return m_pc + (size >> 0);
}


ARCOMPACT_RETTYPE arcompact_device::arcompact_handle04_04_p11_m0(OPS_32)
{
	int size = 4;
	arcompact_fatal("arcompact_handle04_04_p11_m0 (AND)\n");
	return m_pc + (size >> 0);
}


ARCOMPACT_RETTYPE arcompact_device::arcompact_handle04_04_p11_m1(OPS_32)
{
	int size = 4;
	uint32_t limm = 0;
/*	int got_limm = 0; */
	
	COMMON32_GET_breg;
	COMMON32_GET_F;
	COMMON32_GET_u6;
     //COMMON32_GET_areg; // areg bits already used as condition code select
	
	uint32_t c;
	uint32_t b;
	
	/* is having b as LIMM valid here? LIMM vs. fixed u6 value makes no sense */
	if (breg == LIMM_REG)
	{
		GET_LIMM_32;
		size = 8;
/*		got_limm = 1; */
		b = limm;
	}
	else
	{
		b = m_regs[breg];
	}
    
 	c = u;
	
	/* todo: if areg = LIMM then there is no result (but since that register can never be read, I guess it doesn't matter if we store it there anyway?) */
	COMMON32_GET_CONDITION;
	if (!check_condition(condition))
		return m_pc + (size>>0);

	uint32_t result = b & c;
	if (breg != LIMM_REG) { m_regs[breg] = result; }
	
	if (F)
	{
		if (result & 0x80000000) { STATUS32_SET_N; }
		else { STATUS32_CLEAR_N; }
		if (result == 0x00000000) { STATUS32_SET_Z; }
		else { STATUS32_CLEAR_Z; }
	}
	return m_pc + (size >> 0);
}


ARCOMPACT_RETTYPE arcompact_device::arcompact_handle04_05_p00(OPS_32)
{
	int size = 4;
	uint32_t limm = 0;
	int got_limm = 0;
	
	COMMON32_GET_breg;
	COMMON32_GET_F;
	COMMON32_GET_creg;
	COMMON32_GET_areg;
	
	uint32_t c;
	uint32_t b;
	
	if (breg == LIMM_REG)
	{
		GET_LIMM_32;
		size = 8;
		got_limm = 1;
		b = limm;
	}
	else
	{
		b = m_regs[breg];
	}
	
	if (creg == LIMM_REG)
	{
		if (!got_limm)
		{
			GET_LIMM_32;
			size = 8;
		}
		c = limm;
	}
	else
	{
		c = m_regs[creg];
	}
	/* todo: is the limm, limm syntax valid? (it's pointless.) */
	/* todo: if areg = LIMM then there is no result (but since that register can never be read, I guess it doesn't matter if we store it there anyway?) */
	uint32_t result = b | c;
	m_regs[areg] = result;
	
	if (F)
	{
		arcompact_fatal("arcompact_handle04_05 (OR) (F set)\n"); // not yet supported
	}
	return m_pc + (size >> 0);
}


ARCOMPACT_RETTYPE arcompact_device::arcompact_handle04_05_p01(OPS_32)
{
	int size = 4;
	uint32_t limm = 0;
/*	int got_limm = 0; */
	
	COMMON32_GET_breg;
	COMMON32_GET_F;
	COMMON32_GET_u6;
	COMMON32_GET_areg;
	
	uint32_t c;
	uint32_t b;
	
	/* is having b as LIMM valid here? LIMM vs. fixed u6 value makes no sense */
	if (breg == LIMM_REG)
	{
		GET_LIMM_32;
		size = 8;
/*		got_limm = 1; */
		b = limm;
	}
	else
	{
		b = m_regs[breg];
	}
    
 	c = u;
	
	/* todo: if areg = LIMM then there is no result (but since that register can never be read, I guess it doesn't matter if we store it there anyway?) */
	uint32_t result = b | c;
	m_regs[areg] = result;
	
	if (F)
	{
		arcompact_fatal("arcompact_handle04_05 (OR) (F set)\n"); // not yet supported
	}
	return m_pc + (size >> 0);
}


ARCOMPACT_RETTYPE arcompact_device::arcompact_handle04_05_p10(OPS_32)
{
	int size = 4;
	uint32_t limm = 0;
/*	int got_limm = 0; */
	
	COMMON32_GET_breg;
	COMMON32_GET_F;
	COMMON32_GET_s12;
	
	uint32_t c;
	uint32_t b;
	
	/* is having b as LIMM valid here? LIMM vs. fixed u6 value makes no sense */
	if (breg == LIMM_REG)
	{
		GET_LIMM_32;
		size = 8;
/*		got_limm = 1; */
		b = limm;
	}
	else
	{
		b = m_regs[breg];
	}
    
 	c = (uint32_t)S;
	
	/* todo: if areg = LIMM then there is no result (but since that register can never be read, I guess it doesn't matter if we store it there anyway?) */
	uint32_t result = b | c;
	m_regs[breg] = result;
	
	if (F)
	{
		arcompact_fatal("arcompact_handle04_05 (OR) (F set)\n"); // not yet supported
	}
	return m_pc + (size >> 0);
}


ARCOMPACT_RETTYPE arcompact_device::arcompact_handle04_05_p11_m0(OPS_32)
{
	int size = 4;
	arcompact_fatal("arcompact_handle04_05_p11_m0 (OR)\n");
	return m_pc + (size >> 0);
}


ARCOMPACT_RETTYPE arcompact_device::arcompact_handle04_05_p11_m1(OPS_32)
{
	int size = 4;
	uint32_t limm = 0;
/*	int got_limm = 0; */
	
	COMMON32_GET_breg;
	COMMON32_GET_F;
	COMMON32_GET_u6;
     //COMMON32_GET_areg; // areg bits already used as condition code select
	
	uint32_t c;
	uint32_t b;
	
	/* is having b as LIMM valid here? LIMM vs. fixed u6 value makes no sense */
	if (breg == LIMM_REG)
	{
		GET_LIMM_32;
		size = 8;
/*		got_limm = 1; */
		b = limm;
	}
	else
	{
		b = m_regs[breg];
	}
    
 	c = u;
	
	/* todo: if areg = LIMM then there is no result (but since that register can never be read, I guess it doesn't matter if we store it there anyway?) */
	COMMON32_GET_CONDITION;
	if (!check_condition(condition))
		return m_pc + (size>>0);

	uint32_t result = b | c;
	m_regs[breg] = result;
	
	if (F)
	{
		arcompact_fatal("arcompact_handle04_05 (OR) (F set)\n"); // not yet supported
	}
	return m_pc + (size >> 0);
}


ARCOMPACT_RETTYPE arcompact_device::arcompact_handle04_06_p00(OPS_32)
{
	int size = 4;
	uint32_t limm = 0;
	int got_limm = 0;
	
	COMMON32_GET_breg;
	COMMON32_GET_F;
	COMMON32_GET_creg;
	COMMON32_GET_areg;
	
	uint32_t c;
	uint32_t b;
	
	if (breg == LIMM_REG)
	{
		GET_LIMM_32;
		size = 8;
		got_limm = 1;
		b = limm;
	}
	else
	{
		b = m_regs[breg];
	}
	
	if (creg == LIMM_REG)
	{
		if (!got_limm)
		{
			GET_LIMM_32;
			size = 8;
		}
		c = limm;
	}
	else
	{
		c = m_regs[creg];
	}
	/* todo: is the limm, limm syntax valid? (it's pointless.) */
	/* todo: if areg = LIMM then there is no result (but since that register can never be read, I guess it doesn't matter if we store it there anyway?) */
	uint32_t result = b & (~c);
	m_regs[areg] = result;
	
	if (F)
	{
		arcompact_fatal("arcompact_handle04_06 (BIC) (F set)\n"); // not yet supported
	}
	return m_pc + (size >> 0);
}


ARCOMPACT_RETTYPE arcompact_device::arcompact_handle04_06_p01(OPS_32)
{
	int size = 4;
	uint32_t limm = 0;
/*	int got_limm = 0; */
	
	COMMON32_GET_breg;
	COMMON32_GET_F;
	COMMON32_GET_u6;
	COMMON32_GET_areg;
	
	uint32_t c;
	uint32_t b;
	
	/* is having b as LIMM valid here? LIMM vs. fixed u6 value makes no sense */
	if (breg == LIMM_REG)
	{
		GET_LIMM_32;
		size = 8;
/*		got_limm = 1; */
		b = limm;
	}
	else
	{
		b = m_regs[breg];
	}
    
 	c = u;
	
	/* todo: if areg = LIMM then there is no result (but since that register can never be read, I guess it doesn't matter if we store it there anyway?) */
	uint32_t result = b & (~c);
	m_regs[areg] = result;
	
	if (F)
	{
		arcompact_fatal("arcompact_handle04_06 (BIC) (F set)\n"); // not yet supported
	}
	return m_pc + (size >> 0);
}


ARCOMPACT_RETTYPE arcompact_device::arcompact_handle04_06_p10(OPS_32)
{
	int size = 4;
	uint32_t limm = 0;
/*	int got_limm = 0; */
	
	COMMON32_GET_breg;
	COMMON32_GET_F;
	COMMON32_GET_s12;
	
	uint32_t c;
	uint32_t b;
	
	/* is having b as LIMM valid here? LIMM vs. fixed u6 value makes no sense */
	if (breg == LIMM_REG)
	{
		GET_LIMM_32;
		size = 8;
/*		got_limm = 1; */
		b = limm;
	}
	else
	{
		b = m_regs[breg];
	}
    
 	c = (uint32_t)S;
	
	/* todo: if areg = LIMM then there is no result (but since that register can never be read, I guess it doesn't matter if we store it there anyway?) */
	uint32_t result = b & (~c);
	m_regs[breg] = result;
	
	if (F)
	{
		arcompact_fatal("arcompact_handle04_06 (BIC) (F set)\n"); // not yet supported
	}
	return m_pc + (size >> 0);
}


ARCOMPACT_RETTYPE arcompact_device::arcompact_handle04_06_p11_m0(OPS_32)
{
	int size = 4;
	arcompact_fatal("arcompact_handle04_06_p11_m0 (BIC)\n");
	return m_pc + (size >> 0);
}


ARCOMPACT_RETTYPE arcompact_device::arcompact_handle04_06_p11_m1(OPS_32)
{
	int size = 4;
	uint32_t limm = 0;
/*	int got_limm = 0; */
	
	COMMON32_GET_breg;
	COMMON32_GET_F;
	COMMON32_GET_u6;
     //COMMON32_GET_areg; // areg bits already used as condition code select
	
	uint32_t c;
	uint32_t b;
	
	/* is having b as LIMM valid here? LIMM vs. fixed u6 value makes no sense */
	if (breg == LIMM_REG)
	{
		GET_LIMM_32;
		size = 8;
/*		got_limm = 1; */
		b = limm;
	}
	else
	{
		b = m_regs[breg];
	}
    
 	c = u;
	
	/* todo: if areg = LIMM then there is no result (but since that register can never be read, I guess it doesn't matter if we store it there anyway?) */
	COMMON32_GET_CONDITION;
	if (!check_condition(condition))
		return m_pc + (size>>0);

	uint32_t result = b & (~c);
	m_regs[breg] = result;
	
	if (F)
	{
		arcompact_fatal("arcompact_handle04_06 (BIC) (F set)\n"); // not yet supported
	}
	return m_pc + (size >> 0);
}


ARCOMPACT_RETTYPE arcompact_device::arcompact_handle04_07_p00(OPS_32)
{
	int size = 4;
	uint32_t limm = 0;
	int got_limm = 0;
	
	COMMON32_GET_breg;
	COMMON32_GET_F;
	COMMON32_GET_creg;
	COMMON32_GET_areg;
	
	uint32_t c;
	uint32_t b;
	
	if (breg == LIMM_REG)
	{
		GET_LIMM_32;
		size = 8;
		got_limm = 1;
		b = limm;
	}
	else
	{
		b = m_regs[breg];
	}
	
	if (creg == LIMM_REG)
	{
		if (!got_limm)
		{
			GET_LIMM_32;
			size = 8;
		}
		c = limm;
	}
	else
	{
		c = m_regs[creg];
	}
	/* todo: is the limm, limm syntax valid? (it's pointless.) */
	/* todo: if areg = LIMM then there is no result (but since that register can never be read, I guess it doesn't matter if we store it there anyway?) */
	uint32_t result = b ^ c;
	m_regs[areg] = result;
	
	if (F)
	{
		arcompact_fatal("arcompact_handle04_07 (XOR) (F set)\n"); // not yet supported
	}
	return m_pc + (size >> 0);
}


ARCOMPACT_RETTYPE arcompact_device::arcompact_handle04_07_p01(OPS_32)
{
	int size = 4;
	uint32_t limm = 0;
/*	int got_limm = 0; */
	
	COMMON32_GET_breg;
	COMMON32_GET_F;
	COMMON32_GET_u6;
	COMMON32_GET_areg;
	
	uint32_t c;
	uint32_t b;
	
	/* is having b as LIMM valid here? LIMM vs. fixed u6 value makes no sense */
	if (breg == LIMM_REG)
	{
		GET_LIMM_32;
		size = 8;
/*		got_limm = 1; */
		b = limm;
	}
	else
	{
		b = m_regs[breg];
	}
    
 	c = u;
	
	/* todo: if areg = LIMM then there is no result (but since that register can never be read, I guess it doesn't matter if we store it there anyway?) */
	uint32_t result = b ^ c;
	m_regs[areg] = result;
	
	if (F)
	{
		arcompact_fatal("arcompact_handle04_07 (XOR) (F set)\n"); // not yet supported
	}
	return m_pc + (size >> 0);
}


ARCOMPACT_RETTYPE arcompact_device::arcompact_handle04_07_p10(OPS_32)
{
	int size = 4;
	uint32_t limm = 0;
/*	int got_limm = 0; */
	
	COMMON32_GET_breg;
	COMMON32_GET_F;
	COMMON32_GET_s12;
	
	uint32_t c;
	uint32_t b;
	
	/* is having b as LIMM valid here? LIMM vs. fixed u6 value makes no sense */
	if (breg == LIMM_REG)
	{
		GET_LIMM_32;
		size = 8;
/*		got_limm = 1; */
		b = limm;
	}
	else
	{
		b = m_regs[breg];
	}
    
 	c = (uint32_t)S;
	
	/* todo: if areg = LIMM then there is no result (but since that register can never be read, I guess it doesn't matter if we store it there anyway?) */
	uint32_t result = b ^ c;
	m_regs[breg] = result;
	
	if (F)
	{
		arcompact_fatal("arcompact_handle04_07 (XOR) (F set)\n"); // not yet supported
	}
	return m_pc + (size >> 0);
}


ARCOMPACT_RETTYPE arcompact_device::arcompact_handle04_07_p11_m0(OPS_32)
{
	int size = 4;
	arcompact_fatal("arcompact_handle04_07_p11_m0 (XOR)\n");
	return m_pc + (size >> 0);
}


ARCOMPACT_RETTYPE arcompact_device::arcompact_handle04_07_p11_m1(OPS_32)
{
	int size = 4;
	uint32_t limm = 0;
/*	int got_limm = 0; */
	
	COMMON32_GET_breg;
	COMMON32_GET_F;
	COMMON32_GET_u6;
     //COMMON32_GET_areg; // areg bits already used as condition code select
	
	uint32_t c;
	uint32_t b;
	
	/* is having b as LIMM valid here? LIMM vs. fixed u6 value makes no sense */
	if (breg == LIMM_REG)
	{
		GET_LIMM_32;
		size = 8;
/*		got_limm = 1; */
		b = limm;
	}
	else
	{
		b = m_regs[breg];
	}
    
 	c = u;
	
	/* todo: if areg = LIMM then there is no result (but since that register can never be read, I guess it doesn't matter if we store it there anyway?) */
	COMMON32_GET_CONDITION;
	if (!check_condition(condition))
		return m_pc + (size>>0);

	uint32_t result = b ^ c;
	m_regs[breg] = result;
	
	if (F)
	{
		arcompact_fatal("arcompact_handle04_07 (XOR) (F set)\n"); // not yet supported
	}
	return m_pc + (size >> 0);
}


ARCOMPACT_RETTYPE arcompact_device::arcompact_handle04_0a_p00(OPS_32)
{
	int size = 4;
	uint32_t limm = 0;
	int got_limm = 0;
	
	COMMON32_GET_breg;
	COMMON32_GET_F;
	COMMON32_GET_creg;
     //COMMON32_GET_areg; // areg is reserved / not used
	
	uint32_t c;
	
	if (creg == LIMM_REG)
	{
		if (!got_limm)
		{
			GET_LIMM_32;
			size = 8;
		}
		c = limm;
	}
	else
	{
		c = m_regs[creg];
	}
	/* todo: is the limm, limm syntax valid? (it's pointless.) */
	/* todo: if areg = LIMM then there is no result (but since that register can never be read, I guess it doesn't matter if we store it there anyway?) */
	uint32_t result = c;
	m_regs[breg] = result;
	
	if (F)
	{
		if (result & 0x80000000) { STATUS32_SET_N; }
		else { STATUS32_CLEAR_N; }
		if (result == 0x00000000) { STATUS32_SET_Z; }
		else { STATUS32_CLEAR_Z; }
	}
	return m_pc + (size >> 0);
}


ARCOMPACT_RETTYPE arcompact_device::arcompact_handle04_0a_p01(OPS_32)
{
	int size = 4;
/*	int got_limm = 0; */
	
	COMMON32_GET_breg;
	COMMON32_GET_F;
	COMMON32_GET_u6;
     //COMMON32_GET_areg; // areg is reserved / not used
	
	uint32_t c;
    
 	c = u;
	
	/* todo: if areg = LIMM then there is no result (but since that register can never be read, I guess it doesn't matter if we store it there anyway?) */
	uint32_t result = c;
	m_regs[breg] = result;
	
	if (F)
	{
		if (result & 0x80000000) { STATUS32_SET_N; }
		else { STATUS32_CLEAR_N; }
		if (result == 0x00000000) { STATUS32_SET_Z; }
		else { STATUS32_CLEAR_Z; }
	}
	return m_pc + (size >> 0);
}


ARCOMPACT_RETTYPE arcompact_device::arcompact_handle04_0a_p10(OPS_32)
{
	int size = 4;
/*	int got_limm = 0; */
	
	COMMON32_GET_breg;
	COMMON32_GET_F;
	COMMON32_GET_s12;
	
	uint32_t c;
    
 	c = (uint32_t)S;
	
	/* todo: if areg = LIMM then there is no result (but since that register can never be read, I guess it doesn't matter if we store it there anyway?) */
	uint32_t result = c;
	m_regs[breg] = result;
	
	if (F)
	{
		if (result & 0x80000000) { STATUS32_SET_N; }
		else { STATUS32_CLEAR_N; }
		if (result == 0x00000000) { STATUS32_SET_Z; }
		else { STATUS32_CLEAR_Z; }
	}
	return m_pc + (size >> 0);
}


ARCOMPACT_RETTYPE arcompact_device::arcompact_handle04_0a_p11_m0(OPS_32)
{
	int size = 4;
	arcompact_fatal("arcompact_handle04_0a_p11_m0 (MOV)\n");
	return m_pc + (size >> 0);
}


ARCOMPACT_RETTYPE arcompact_device::arcompact_handle04_0a_p11_m1(OPS_32)
{
	int size = 4;
/*	int got_limm = 0; */
	
	COMMON32_GET_breg;
	COMMON32_GET_F;
	COMMON32_GET_u6;
     //COMMON32_GET_areg; // areg bits already used as condition code select
	
	uint32_t c;
    
 	c = u;
	
	/* todo: if areg = LIMM then there is no result (but since that register can never be read, I guess it doesn't matter if we store it there anyway?) */
	COMMON32_GET_CONDITION;
	if (!check_condition(condition))
		return m_pc + (size>>0);

	uint32_t result = c;
	m_regs[breg] = result;
	
	if (F)
	{
		if (result & 0x80000000) { STATUS32_SET_N; }
		else { STATUS32_CLEAR_N; }
		if (result == 0x00000000) { STATUS32_SET_Z; }
		else { STATUS32_CLEAR_Z; }
	}
	return m_pc + (size >> 0);
}


ARCOMPACT_RETTYPE arcompact_device::arcompact_handle04_0e_p00(OPS_32)
{
	int size = 4;
	uint32_t limm = 0;
	int got_limm = 0;
	
	COMMON32_GET_breg;
	COMMON32_GET_F;
	COMMON32_GET_creg;
	COMMON32_GET_areg;
	
	uint32_t c;
	uint32_t b;
	
	if (breg == LIMM_REG)
	{
		GET_LIMM_32;
		size = 8;
		got_limm = 1;
		b = limm;
	}
	else
	{
		b = m_regs[breg];
	}
	
	if (creg == LIMM_REG)
	{
		if (!got_limm)
		{
			GET_LIMM_32;
			size = 8;
		}
		c = limm;
	}
	else
	{
		c = m_regs[creg];
	}
	/* todo: is the limm, limm syntax valid? (it's pointless.) */
	/* todo: if areg = LIMM then there is no result (but since that register can never be read, I guess it doesn't matter if we store it there anyway?) */
	uint32_t result = c - b;
	m_regs[areg] = result;
	
	if (F)
	{
		arcompact_fatal("arcompact_handle04_0e (RSUB) (F set)\n"); // not yet supported
	}
	return m_pc + (size >> 0);
}


ARCOMPACT_RETTYPE arcompact_device::arcompact_handle04_0e_p01(OPS_32)
{
	int size = 4;
	uint32_t limm = 0;
/*	int got_limm = 0; */
	
	COMMON32_GET_breg;
	COMMON32_GET_F;
	COMMON32_GET_u6;
	COMMON32_GET_areg;
	
	uint32_t c;
	uint32_t b;
	
	/* is having b as LIMM valid here? LIMM vs. fixed u6 value makes no sense */
	if (breg == LIMM_REG)
	{
		GET_LIMM_32;
		size = 8;
/*		got_limm = 1; */
		b = limm;
	}
	else
	{
		b = m_regs[breg];
	}
    
 	c = u;
	
	/* todo: if areg = LIMM then there is no result (but since that register can never be read, I guess it doesn't matter if we store it there anyway?) */
	uint32_t result = c - b;
	m_regs[areg] = result;
	
	if (F)
	{
		arcompact_fatal("arcompact_handle04_0e (RSUB) (F set)\n"); // not yet supported
	}
	return m_pc + (size >> 0);
}


ARCOMPACT_RETTYPE arcompact_device::arcompact_handle04_0e_p10(OPS_32)
{
	int size = 4;
	uint32_t limm = 0;
/*	int got_limm = 0; */
	
	COMMON32_GET_breg;
	COMMON32_GET_F;
	COMMON32_GET_s12;
	
	uint32_t c;
	uint32_t b;
	
	/* is having b as LIMM valid here? LIMM vs. fixed u6 value makes no sense */
	if (breg == LIMM_REG)
	{
		GET_LIMM_32;
		size = 8;
/*		got_limm = 1; */
		b = limm;
	}
	else
	{
		b = m_regs[breg];
	}
    
 	c = (uint32_t)S;
	
	/* todo: if areg = LIMM then there is no result (but since that register can never be read, I guess it doesn't matter if we store it there anyway?) */
	uint32_t result = c - b;
	m_regs[breg] = result;
	
	if (F)
	{
		arcompact_fatal("arcompact_handle04_0e (RSUB) (F set)\n"); // not yet supported
	}
	return m_pc + (size >> 0);
}


ARCOMPACT_RETTYPE arcompact_device::arcompact_handle04_0e_p11_m0(OPS_32)
{
	int size = 4;
	arcompact_fatal("arcompact_handle04_0e_p11_m0 (RSUB)\n");
	return m_pc + (size >> 0);
}


ARCOMPACT_RETTYPE arcompact_device::arcompact_handle04_0e_p11_m1(OPS_32)
{
	int size = 4;
	uint32_t limm = 0;
/*	int got_limm = 0; */
	
	COMMON32_GET_breg;
	COMMON32_GET_F;
	COMMON32_GET_u6;
     //COMMON32_GET_areg; // areg bits already used as condition code select
	
	uint32_t c;
	uint32_t b;
	
	/* is having b as LIMM valid here? LIMM vs. fixed u6 value makes no sense */
	if (breg == LIMM_REG)
	{
		GET_LIMM_32;
		size = 8;
/*		got_limm = 1; */
		b = limm;
	}
	else
	{
		b = m_regs[breg];
	}
    
 	c = u;
	
	/* todo: if areg = LIMM then there is no result (but since that register can never be read, I guess it doesn't matter if we store it there anyway?) */
	COMMON32_GET_CONDITION;
	if (!check_condition(condition))
		return m_pc + (size>>0);

	uint32_t result = c - b;
	m_regs[breg] = result;
	
	if (F)
	{
		arcompact_fatal("arcompact_handle04_0e (RSUB) (F set)\n"); // not yet supported
	}
	return m_pc + (size >> 0);
}


ARCOMPACT_RETTYPE arcompact_device::arcompact_handle04_0f_p00(OPS_32)
{
	int size = 4;
	uint32_t limm = 0;
	int got_limm = 0;
	
	COMMON32_GET_breg;
	COMMON32_GET_F;
	COMMON32_GET_creg;
	COMMON32_GET_areg;
	
	uint32_t c;
	uint32_t b;
	
	if (breg == LIMM_REG)
	{
		GET_LIMM_32;
		size = 8;
		got_limm = 1;
		b = limm;
	}
	else
	{
		b = m_regs[breg];
	}
	
	if (creg == LIMM_REG)
	{
		if (!got_limm)
		{
			GET_LIMM_32;
			size = 8;
		}
		c = limm;
	}
	else
	{
		c = m_regs[creg];
	}
	/* todo: is the limm, limm syntax valid? (it's pointless.) */
	/* todo: if areg = LIMM then there is no result (but since that register can never be read, I guess it doesn't matter if we store it there anyway?) */
	uint32_t result = b | (1 << (c & 0x1f));
	m_regs[areg] = result;
	
	if (F)
	{
		arcompact_fatal("arcompact_handle04_0f (BSET) (F set)\n"); // not yet supported
	}
	return m_pc + (size >> 0);
}


ARCOMPACT_RETTYPE arcompact_device::arcompact_handle04_0f_p01(OPS_32)
{
	int size = 4;
	uint32_t limm = 0;
/*	int got_limm = 0; */
	
	COMMON32_GET_breg;
	COMMON32_GET_F;
	COMMON32_GET_u6;
	COMMON32_GET_areg;
	
	uint32_t c;
	uint32_t b;
	
	/* is having b as LIMM valid here? LIMM vs. fixed u6 value makes no sense */
	if (breg == LIMM_REG)
	{
		GET_LIMM_32;
		size = 8;
/*		got_limm = 1; */
		b = limm;
	}
	else
	{
		b = m_regs[breg];
	}
    
 	c = u;
	
	/* todo: if areg = LIMM then there is no result (but since that register can never be read, I guess it doesn't matter if we store it there anyway?) */
	uint32_t result = b | (1 << (c & 0x1f));
	m_regs[areg] = result;
	
	if (F)
	{
		arcompact_fatal("arcompact_handle04_0f (BSET) (F set)\n"); // not yet supported
	}
	return m_pc + (size >> 0);
}


ARCOMPACT_RETTYPE arcompact_device::arcompact_handle04_0f_p10(OPS_32)
{
	int size = 4;
	uint32_t limm = 0;
/*	int got_limm = 0; */
	
	COMMON32_GET_breg;
	COMMON32_GET_F;
	COMMON32_GET_s12;
	
	uint32_t c;
	uint32_t b;
	
	/* is having b as LIMM valid here? LIMM vs. fixed u6 value makes no sense */
	if (breg == LIMM_REG)
	{
		GET_LIMM_32;
		size = 8;
/*		got_limm = 1; */
		b = limm;
	}
	else
	{
		b = m_regs[breg];
	}
    
 	c = (uint32_t)S;
	
	/* todo: if areg = LIMM then there is no result (but since that register can never be read, I guess it doesn't matter if we store it there anyway?) */
	uint32_t result = b | (1 << (c & 0x1f));
	m_regs[breg] = result;
	
	if (F)
	{
		arcompact_fatal("arcompact_handle04_0f (BSET) (F set)\n"); // not yet supported
	}
	return m_pc + (size >> 0);
}


ARCOMPACT_RETTYPE arcompact_device::arcompact_handle04_0f_p11_m0(OPS_32)
{
	int size = 4;
	arcompact_fatal("arcompact_handle04_0f_p11_m0 (BSET)\n");
	return m_pc + (size >> 0);
}


ARCOMPACT_RETTYPE arcompact_device::arcompact_handle04_0f_p11_m1(OPS_32)
{
	int size = 4;
	uint32_t limm = 0;
/*	int got_limm = 0; */
	
	COMMON32_GET_breg;
	COMMON32_GET_F;
	COMMON32_GET_u6;
     //COMMON32_GET_areg; // areg bits already used as condition code select
	
	uint32_t c;
	uint32_t b;
	
	/* is having b as LIMM valid here? LIMM vs. fixed u6 value makes no sense */
	if (breg == LIMM_REG)
	{
		GET_LIMM_32;
		size = 8;
/*		got_limm = 1; */
		b = limm;
	}
	else
	{
		b = m_regs[breg];
	}
    
 	c = u;
	
	/* todo: if areg = LIMM then there is no result (but since that register can never be read, I guess it doesn't matter if we store it there anyway?) */
	COMMON32_GET_CONDITION;
	if (!check_condition(condition))
		return m_pc + (size>>0);

	uint32_t result = b | (1 << (c & 0x1f));
	m_regs[breg] = result;
	
	if (F)
	{
		arcompact_fatal("arcompact_handle04_0f (BSET) (F set)\n"); // not yet supported
	}
	return m_pc + (size >> 0);
}


ARCOMPACT_RETTYPE arcompact_device::arcompact_handle04_13_p00(OPS_32)
{
	int size = 4;
	uint32_t limm = 0;
	int got_limm = 0;
	
	COMMON32_GET_breg;
	COMMON32_GET_F;
	COMMON32_GET_creg;
	COMMON32_GET_areg;
	
	uint32_t c;
	uint32_t b;
	
	if (breg == LIMM_REG)
	{
		GET_LIMM_32;
		size = 8;
		got_limm = 1;
		b = limm;
	}
	else
	{
		b = m_regs[breg];
	}
	
	if (creg == LIMM_REG)
	{
		if (!got_limm)
		{
			GET_LIMM_32;
			size = 8;
		}
		c = limm;
	}
	else
	{
		c = m_regs[creg];
	}
	/* todo: is the limm, limm syntax valid? (it's pointless.) */
	/* todo: if areg = LIMM then there is no result (but since that register can never be read, I guess it doesn't matter if we store it there anyway?) */
	uint32_t result = b & ((1<<(c+1))-1);
	m_regs[areg] = result;
	
	if (F)
	{
		arcompact_fatal("arcompact_handle04_13 (BMSK) (F set)\n"); // not yet supported
	}
	return m_pc + (size >> 0);
}


ARCOMPACT_RETTYPE arcompact_device::arcompact_handle04_13_p01(OPS_32)
{
	int size = 4;
	uint32_t limm = 0;
/*	int got_limm = 0; */
	
	COMMON32_GET_breg;
	COMMON32_GET_F;
	COMMON32_GET_u6;
	COMMON32_GET_areg;
	
	uint32_t c;
	uint32_t b;
	
	/* is having b as LIMM valid here? LIMM vs. fixed u6 value makes no sense */
	if (breg == LIMM_REG)
	{
		GET_LIMM_32;
		size = 8;
/*		got_limm = 1; */
		b = limm;
	}
	else
	{
		b = m_regs[breg];
	}
    
 	c = u;
	
	/* todo: if areg = LIMM then there is no result (but since that register can never be read, I guess it doesn't matter if we store it there anyway?) */
	uint32_t result = b & ((1<<(c+1))-1);
	m_regs[areg] = result;
	
	if (F)
	{
		arcompact_fatal("arcompact_handle04_13 (BMSK) (F set)\n"); // not yet supported
	}
	return m_pc + (size >> 0);
}


ARCOMPACT_RETTYPE arcompact_device::arcompact_handle04_13_p10(OPS_32)
{
	int size = 4;
	uint32_t limm = 0;
/*	int got_limm = 0; */
	
	COMMON32_GET_breg;
	COMMON32_GET_F;
	COMMON32_GET_s12;
	
	uint32_t c;
	uint32_t b;
	
	/* is having b as LIMM valid here? LIMM vs. fixed u6 value makes no sense */
	if (breg == LIMM_REG)
	{
		GET_LIMM_32;
		size = 8;
/*		got_limm = 1; */
		b = limm;
	}
	else
	{
		b = m_regs[breg];
	}
    
 	c = (uint32_t)S;
	
	/* todo: if areg = LIMM then there is no result (but since that register can never be read, I guess it doesn't matter if we store it there anyway?) */
	uint32_t result = b & ((1<<(c+1))-1);
	m_regs[breg] = result;
	
	if (F)
	{
		arcompact_fatal("arcompact_handle04_13 (BMSK) (F set)\n"); // not yet supported
	}
	return m_pc + (size >> 0);
}


ARCOMPACT_RETTYPE arcompact_device::arcompact_handle04_13_p11_m0(OPS_32)
{
	int size = 4;
	arcompact_fatal("arcompact_handle04_13_p11_m0 (BMSK)\n");
	return m_pc + (size >> 0);
}


ARCOMPACT_RETTYPE arcompact_device::arcompact_handle04_13_p11_m1(OPS_32)
{
	int size = 4;
	uint32_t limm = 0;
/*	int got_limm = 0; */
	
	COMMON32_GET_breg;
	COMMON32_GET_F;
	COMMON32_GET_u6;
     //COMMON32_GET_areg; // areg bits already used as condition code select
	
	uint32_t c;
	uint32_t b;
	
	/* is having b as LIMM valid here? LIMM vs. fixed u6 value makes no sense */
	if (breg == LIMM_REG)
	{
		GET_LIMM_32;
		size = 8;
/*		got_limm = 1; */
		b = limm;
	}
	else
	{
		b = m_regs[breg];
	}
    
 	c = u;
	
	/* todo: if areg = LIMM then there is no result (but since that register can never be read, I guess it doesn't matter if we store it there anyway?) */
	COMMON32_GET_CONDITION;
	if (!check_condition(condition))
		return m_pc + (size>>0);

	uint32_t result = b & ((1<<(c+1))-1);
	m_regs[breg] = result;
	
	if (F)
	{
		arcompact_fatal("arcompact_handle04_13 (BMSK) (F set)\n"); // not yet supported
	}
	return m_pc + (size >> 0);
}


ARCOMPACT_RETTYPE arcompact_device::arcompact_handle04_14_p00(OPS_32)
{
	int size = 4;
	uint32_t limm = 0;
	int got_limm = 0;
	
	COMMON32_GET_breg;
	COMMON32_GET_F;
	COMMON32_GET_creg;
	COMMON32_GET_areg;
	
	uint32_t c;
	uint32_t b;
	
	if (breg == LIMM_REG)
	{
		GET_LIMM_32;
		size = 8;
		got_limm = 1;
		b = limm;
	}
	else
	{
		b = m_regs[breg];
	}
	
	if (creg == LIMM_REG)
	{
		if (!got_limm)
		{
			GET_LIMM_32;
			size = 8;
		}
		c = limm;
	}
	else
	{
		c = m_regs[creg];
	}
	/* todo: is the limm, limm syntax valid? (it's pointless.) */
	/* todo: if areg = LIMM then there is no result (but since that register can never be read, I guess it doesn't matter if we store it there anyway?) */
	uint32_t result = b + (c << 1);
	m_regs[areg] = result;
	
	if (F)
	{
		arcompact_fatal("arcompact_handle04_14 (ADD1) (F set)\n"); // not yet supported
	}
	return m_pc + (size >> 0);
}


ARCOMPACT_RETTYPE arcompact_device::arcompact_handle04_14_p01(OPS_32)
{
	int size = 4;
	uint32_t limm = 0;
/*	int got_limm = 0; */
	
	COMMON32_GET_breg;
	COMMON32_GET_F;
	COMMON32_GET_u6;
	COMMON32_GET_areg;
	
	uint32_t c;
	uint32_t b;
	
	/* is having b as LIMM valid here? LIMM vs. fixed u6 value makes no sense */
	if (breg == LIMM_REG)
	{
		GET_LIMM_32;
		size = 8;
/*		got_limm = 1; */
		b = limm;
	}
	else
	{
		b = m_regs[breg];
	}
    
 	c = u;
	
	/* todo: if areg = LIMM then there is no result (but since that register can never be read, I guess it doesn't matter if we store it there anyway?) */
	uint32_t result = b + (c << 1);
	m_regs[areg] = result;
	
	if (F)
	{
		arcompact_fatal("arcompact_handle04_14 (ADD1) (F set)\n"); // not yet supported
	}
	return m_pc + (size >> 0);
}


ARCOMPACT_RETTYPE arcompact_device::arcompact_handle04_14_p10(OPS_32)
{
	int size = 4;
	uint32_t limm = 0;
/*	int got_limm = 0; */
	
	COMMON32_GET_breg;
	COMMON32_GET_F;
	COMMON32_GET_s12;
	
	uint32_t c;
	uint32_t b;
	
	/* is having b as LIMM valid here? LIMM vs. fixed u6 value makes no sense */
	if (breg == LIMM_REG)
	{
		GET_LIMM_32;
		size = 8;
/*		got_limm = 1; */
		b = limm;
	}
	else
	{
		b = m_regs[breg];
	}
    
 	c = (uint32_t)S;
	
	/* todo: if areg = LIMM then there is no result (but since that register can never be read, I guess it doesn't matter if we store it there anyway?) */
	uint32_t result = b + (c << 1);
	m_regs[breg] = result;
	
	if (F)
	{
		arcompact_fatal("arcompact_handle04_14 (ADD1) (F set)\n"); // not yet supported
	}
	return m_pc + (size >> 0);
}


ARCOMPACT_RETTYPE arcompact_device::arcompact_handle04_14_p11_m0(OPS_32)
{
	int size = 4;
	arcompact_fatal("arcompact_handle04_14_p11_m0 (ADD1)\n");
	return m_pc + (size >> 0);
}


ARCOMPACT_RETTYPE arcompact_device::arcompact_handle04_14_p11_m1(OPS_32)
{
	int size = 4;
	uint32_t limm = 0;
/*	int got_limm = 0; */
	
	COMMON32_GET_breg;
	COMMON32_GET_F;
	COMMON32_GET_u6;
     //COMMON32_GET_areg; // areg bits already used as condition code select
	
	uint32_t c;
	uint32_t b;
	
	/* is having b as LIMM valid here? LIMM vs. fixed u6 value makes no sense */
	if (breg == LIMM_REG)
	{
		GET_LIMM_32;
		size = 8;
/*		got_limm = 1; */
		b = limm;
	}
	else
	{
		b = m_regs[breg];
	}
    
 	c = u;
	
	/* todo: if areg = LIMM then there is no result (but since that register can never be read, I guess it doesn't matter if we store it there anyway?) */
	COMMON32_GET_CONDITION;
	if (!check_condition(condition))
		return m_pc + (size>>0);

	uint32_t result = b + (c << 1);
	m_regs[breg] = result;
	
	if (F)
	{
		arcompact_fatal("arcompact_handle04_14 (ADD1) (F set)\n"); // not yet supported
	}
	return m_pc + (size >> 0);
}


ARCOMPACT_RETTYPE arcompact_device::arcompact_handle04_15_p00(OPS_32)
{
	int size = 4;
	uint32_t limm = 0;
	int got_limm = 0;
	
	COMMON32_GET_breg;
	COMMON32_GET_F;
	COMMON32_GET_creg;
	COMMON32_GET_areg;
	
	uint32_t c;
	uint32_t b;
	
	if (breg == LIMM_REG)
	{
		GET_LIMM_32;
		size = 8;
		got_limm = 1;
		b = limm;
	}
	else
	{
		b = m_regs[breg];
	}
	
	if (creg == LIMM_REG)
	{
		if (!got_limm)
		{
			GET_LIMM_32;
			size = 8;
		}
		c = limm;
	}
	else
	{
		c = m_regs[creg];
	}
	/* todo: is the limm, limm syntax valid? (it's pointless.) */
	/* todo: if areg = LIMM then there is no result (but since that register can never be read, I guess it doesn't matter if we store it there anyway?) */
	uint32_t result = b + (c << 2);
	m_regs[areg] = result;
	
	if (F)
	{
		arcompact_fatal("arcompact_handle04_15 (ADD2) (F set)\n"); // not yet supported
	}
	return m_pc + (size >> 0);
}


ARCOMPACT_RETTYPE arcompact_device::arcompact_handle04_15_p01(OPS_32)
{
	int size = 4;
	uint32_t limm = 0;
/*	int got_limm = 0; */
	
	COMMON32_GET_breg;
	COMMON32_GET_F;
	COMMON32_GET_u6;
	COMMON32_GET_areg;
	
	uint32_t c;
	uint32_t b;
	
	/* is having b as LIMM valid here? LIMM vs. fixed u6 value makes no sense */
	if (breg == LIMM_REG)
	{
		GET_LIMM_32;
		size = 8;
/*		got_limm = 1; */
		b = limm;
	}
	else
	{
		b = m_regs[breg];
	}
    
 	c = u;
	
	/* todo: if areg = LIMM then there is no result (but since that register can never be read, I guess it doesn't matter if we store it there anyway?) */
	uint32_t result = b + (c << 2);
	m_regs[areg] = result;
	
	if (F)
	{
		arcompact_fatal("arcompact_handle04_15 (ADD2) (F set)\n"); // not yet supported
	}
	return m_pc + (size >> 0);
}


ARCOMPACT_RETTYPE arcompact_device::arcompact_handle04_15_p10(OPS_32)
{
	int size = 4;
	uint32_t limm = 0;
/*	int got_limm = 0; */
	
	COMMON32_GET_breg;
	COMMON32_GET_F;
	COMMON32_GET_s12;
	
	uint32_t c;
	uint32_t b;
	
	/* is having b as LIMM valid here? LIMM vs. fixed u6 value makes no sense */
	if (breg == LIMM_REG)
	{
		GET_LIMM_32;
		size = 8;
/*		got_limm = 1; */
		b = limm;
	}
	else
	{
		b = m_regs[breg];
	}
    
 	c = (uint32_t)S;
	
	/* todo: if areg = LIMM then there is no result (but since that register can never be read, I guess it doesn't matter if we store it there anyway?) */
	uint32_t result = b + (c << 2);
	m_regs[breg] = result;
	
	if (F)
	{
		arcompact_fatal("arcompact_handle04_15 (ADD2) (F set)\n"); // not yet supported
	}
	return m_pc + (size >> 0);
}


ARCOMPACT_RETTYPE arcompact_device::arcompact_handle04_15_p11_m0(OPS_32)
{
	int size = 4;
	arcompact_fatal("arcompact_handle04_15_p11_m0 (ADD2)\n");
	return m_pc + (size >> 0);
}


ARCOMPACT_RETTYPE arcompact_device::arcompact_handle04_15_p11_m1(OPS_32)
{
	int size = 4;
	uint32_t limm = 0;
/*	int got_limm = 0; */
	
	COMMON32_GET_breg;
	COMMON32_GET_F;
	COMMON32_GET_u6;
     //COMMON32_GET_areg; // areg bits already used as condition code select
	
	uint32_t c;
	uint32_t b;
	
	/* is having b as LIMM valid here? LIMM vs. fixed u6 value makes no sense */
	if (breg == LIMM_REG)
	{
		GET_LIMM_32;
		size = 8;
/*		got_limm = 1; */
		b = limm;
	}
	else
	{
		b = m_regs[breg];
	}
    
 	c = u;
	
	/* todo: if areg = LIMM then there is no result (but since that register can never be read, I guess it doesn't matter if we store it there anyway?) */
	COMMON32_GET_CONDITION;
	if (!check_condition(condition))
		return m_pc + (size>>0);

	uint32_t result = b + (c << 2);
	m_regs[breg] = result;
	
	if (F)
	{
		arcompact_fatal("arcompact_handle04_15 (ADD2) (F set)\n"); // not yet supported
	}
	return m_pc + (size >> 0);
}


ARCOMPACT_RETTYPE arcompact_device::arcompact_handle04_16_p00(OPS_32)
{
	int size = 4;
	uint32_t limm = 0;
	int got_limm = 0;
	
	COMMON32_GET_breg;
	COMMON32_GET_F;
	COMMON32_GET_creg;
	COMMON32_GET_areg;
	
	uint32_t c;
	uint32_t b;
	
	if (breg == LIMM_REG)
	{
		GET_LIMM_32;
		size = 8;
		got_limm = 1;
		b = limm;
	}
	else
	{
		b = m_regs[breg];
	}
	
	if (creg == LIMM_REG)
	{
		if (!got_limm)
		{
			GET_LIMM_32;
			size = 8;
		}
		c = limm;
	}
	else
	{
		c = m_regs[creg];
	}
	/* todo: is the limm, limm syntax valid? (it's pointless.) */
	/* todo: if areg = LIMM then there is no result (but since that register can never be read, I guess it doesn't matter if we store it there anyway?) */
	uint32_t result = b + (c << 3);
	m_regs[areg] = result;
	
	if (F)
	{
		arcompact_fatal("arcompact_handle04_16 (ADD3) (F set)\n"); // not yet supported
	}
	return m_pc + (size >> 0);
}


ARCOMPACT_RETTYPE arcompact_device::arcompact_handle04_16_p01(OPS_32)
{
	int size = 4;
	uint32_t limm = 0;
/*	int got_limm = 0; */
	
	COMMON32_GET_breg;
	COMMON32_GET_F;
	COMMON32_GET_u6;
	COMMON32_GET_areg;
	
	uint32_t c;
	uint32_t b;
	
	/* is having b as LIMM valid here? LIMM vs. fixed u6 value makes no sense */
	if (breg == LIMM_REG)
	{
		GET_LIMM_32;
		size = 8;
/*		got_limm = 1; */
		b = limm;
	}
	else
	{
		b = m_regs[breg];
	}
    
 	c = u;
	
	/* todo: if areg = LIMM then there is no result (but since that register can never be read, I guess it doesn't matter if we store it there anyway?) */
	uint32_t result = b + (c << 3);
	m_regs[areg] = result;
	
	if (F)
	{
		arcompact_fatal("arcompact_handle04_16 (ADD3) (F set)\n"); // not yet supported
	}
	return m_pc + (size >> 0);
}


ARCOMPACT_RETTYPE arcompact_device::arcompact_handle04_16_p10(OPS_32)
{
	int size = 4;
	uint32_t limm = 0;
/*	int got_limm = 0; */
	
	COMMON32_GET_breg;
	COMMON32_GET_F;
	COMMON32_GET_s12;
	
	uint32_t c;
	uint32_t b;
	
	/* is having b as LIMM valid here? LIMM vs. fixed u6 value makes no sense */
	if (breg == LIMM_REG)
	{
		GET_LIMM_32;
		size = 8;
/*		got_limm = 1; */
		b = limm;
	}
	else
	{
		b = m_regs[breg];
	}
    
 	c = (uint32_t)S;
	
	/* todo: if areg = LIMM then there is no result (but since that register can never be read, I guess it doesn't matter if we store it there anyway?) */
	uint32_t result = b + (c << 3);
	m_regs[breg] = result;
	
	if (F)
	{
		arcompact_fatal("arcompact_handle04_16 (ADD3) (F set)\n"); // not yet supported
	}
	return m_pc + (size >> 0);
}


ARCOMPACT_RETTYPE arcompact_device::arcompact_handle04_16_p11_m0(OPS_32)
{
	int size = 4;
	arcompact_fatal("arcompact_handle04_16_p11_m0 (ADD3)\n");
	return m_pc + (size >> 0);
}


ARCOMPACT_RETTYPE arcompact_device::arcompact_handle04_16_p11_m1(OPS_32)
{
	int size = 4;
	uint32_t limm = 0;
/*	int got_limm = 0; */
	
	COMMON32_GET_breg;
	COMMON32_GET_F;
	COMMON32_GET_u6;
     //COMMON32_GET_areg; // areg bits already used as condition code select
	
	uint32_t c;
	uint32_t b;
	
	/* is having b as LIMM valid here? LIMM vs. fixed u6 value makes no sense */
	if (breg == LIMM_REG)
	{
		GET_LIMM_32;
		size = 8;
/*		got_limm = 1; */
		b = limm;
	}
	else
	{
		b = m_regs[breg];
	}
    
 	c = u;
	
	/* todo: if areg = LIMM then there is no result (but since that register can never be read, I guess it doesn't matter if we store it there anyway?) */
	COMMON32_GET_CONDITION;
	if (!check_condition(condition))
		return m_pc + (size>>0);

	uint32_t result = b + (c << 3);
	m_regs[breg] = result;
	
	if (F)
	{
		arcompact_fatal("arcompact_handle04_16 (ADD3) (F set)\n"); // not yet supported
	}
	return m_pc + (size >> 0);
}


ARCOMPACT_RETTYPE arcompact_device::arcompact_handle04_17_p00(OPS_32)
{
	int size = 4;
	uint32_t limm = 0;
	int got_limm = 0;
	
	COMMON32_GET_breg;
	COMMON32_GET_F;
	COMMON32_GET_creg;
	COMMON32_GET_areg;
	
	uint32_t c;
	uint32_t b;
	
	if (breg == LIMM_REG)
	{
		GET_LIMM_32;
		size = 8;
		got_limm = 1;
		b = limm;
	}
	else
	{
		b = m_regs[breg];
	}
	
	if (creg == LIMM_REG)
	{
		if (!got_limm)
		{
			GET_LIMM_32;
			size = 8;
		}
		c = limm;
	}
	else
	{
		c = m_regs[creg];
	}
	/* todo: is the limm, limm syntax valid? (it's pointless.) */
	/* todo: if areg = LIMM then there is no result (but since that register can never be read, I guess it doesn't matter if we store it there anyway?) */
	uint32_t result = b - (c << 1);
	m_regs[areg] = result;
	
	if (F)
	{
		arcompact_fatal("arcompact_handle04_17 (SUB1) (F set)\n"); // not yet supported
	}
	return m_pc + (size >> 0);
}


ARCOMPACT_RETTYPE arcompact_device::arcompact_handle04_17_p01(OPS_32)
{
	int size = 4;
	uint32_t limm = 0;
/*	int got_limm = 0; */
	
	COMMON32_GET_breg;
	COMMON32_GET_F;
	COMMON32_GET_u6;
	COMMON32_GET_areg;
	
	uint32_t c;
	uint32_t b;
	
	/* is having b as LIMM valid here? LIMM vs. fixed u6 value makes no sense */
	if (breg == LIMM_REG)
	{
		GET_LIMM_32;
		size = 8;
/*		got_limm = 1; */
		b = limm;
	}
	else
	{
		b = m_regs[breg];
	}
    
 	c = u;
	
	/* todo: if areg = LIMM then there is no result (but since that register can never be read, I guess it doesn't matter if we store it there anyway?) */
	uint32_t result = b - (c << 1);
	m_regs[areg] = result;
	
	if (F)
	{
		arcompact_fatal("arcompact_handle04_17 (SUB1) (F set)\n"); // not yet supported
	}
	return m_pc + (size >> 0);
}


ARCOMPACT_RETTYPE arcompact_device::arcompact_handle04_17_p10(OPS_32)
{
	int size = 4;
	uint32_t limm = 0;
/*	int got_limm = 0; */
	
	COMMON32_GET_breg;
	COMMON32_GET_F;
	COMMON32_GET_s12;
	
	uint32_t c;
	uint32_t b;
	
	/* is having b as LIMM valid here? LIMM vs. fixed u6 value makes no sense */
	if (breg == LIMM_REG)
	{
		GET_LIMM_32;
		size = 8;
/*		got_limm = 1; */
		b = limm;
	}
	else
	{
		b = m_regs[breg];
	}
    
 	c = (uint32_t)S;
	
	/* todo: if areg = LIMM then there is no result (but since that register can never be read, I guess it doesn't matter if we store it there anyway?) */
	uint32_t result = b - (c << 1);
	m_regs[breg] = result;
	
	if (F)
	{
		arcompact_fatal("arcompact_handle04_17 (SUB1) (F set)\n"); // not yet supported
	}
	return m_pc + (size >> 0);
}


ARCOMPACT_RETTYPE arcompact_device::arcompact_handle04_17_p11_m0(OPS_32)
{
	int size = 4;
	arcompact_fatal("arcompact_handle04_17_p11_m0 (SUB1)\n");
	return m_pc + (size >> 0);
}


ARCOMPACT_RETTYPE arcompact_device::arcompact_handle04_17_p11_m1(OPS_32)
{
	int size = 4;
	uint32_t limm = 0;
/*	int got_limm = 0; */
	
	COMMON32_GET_breg;
	COMMON32_GET_F;
	COMMON32_GET_u6;
     //COMMON32_GET_areg; // areg bits already used as condition code select
	
	uint32_t c;
	uint32_t b;
	
	/* is having b as LIMM valid here? LIMM vs. fixed u6 value makes no sense */
	if (breg == LIMM_REG)
	{
		GET_LIMM_32;
		size = 8;
/*		got_limm = 1; */
		b = limm;
	}
	else
	{
		b = m_regs[breg];
	}
    
 	c = u;
	
	/* todo: if areg = LIMM then there is no result (but since that register can never be read, I guess it doesn't matter if we store it there anyway?) */
	COMMON32_GET_CONDITION;
	if (!check_condition(condition))
		return m_pc + (size>>0);

	uint32_t result = b - (c << 1);
	m_regs[breg] = result;
	
	if (F)
	{
		arcompact_fatal("arcompact_handle04_17 (SUB1) (F set)\n"); // not yet supported
	}
	return m_pc + (size >> 0);
}


ARCOMPACT_RETTYPE arcompact_device::arcompact_handle04_18_p00(OPS_32)
{
	int size = 4;
	uint32_t limm = 0;
	int got_limm = 0;
	
	COMMON32_GET_breg;
	COMMON32_GET_F;
	COMMON32_GET_creg;
	COMMON32_GET_areg;
	
	uint32_t c;
	uint32_t b;
	
	if (breg == LIMM_REG)
	{
		GET_LIMM_32;
		size = 8;
		got_limm = 1;
		b = limm;
	}
	else
	{
		b = m_regs[breg];
	}
	
	if (creg == LIMM_REG)
	{
		if (!got_limm)
		{
			GET_LIMM_32;
			size = 8;
		}
		c = limm;
	}
	else
	{
		c = m_regs[creg];
	}
	/* todo: is the limm, limm syntax valid? (it's pointless.) */
	/* todo: if areg = LIMM then there is no result (but since that register can never be read, I guess it doesn't matter if we store it there anyway?) */
	uint32_t result = b - (c << 2);
	m_regs[areg] = result;
	
	if (F)
	{
		arcompact_fatal("arcompact_handle04_18 (SUB2) (F set)\n"); // not yet supported
	}
	return m_pc + (size >> 0);
}


ARCOMPACT_RETTYPE arcompact_device::arcompact_handle04_18_p01(OPS_32)
{
	int size = 4;
	uint32_t limm = 0;
/*	int got_limm = 0; */
	
	COMMON32_GET_breg;
	COMMON32_GET_F;
	COMMON32_GET_u6;
	COMMON32_GET_areg;
	
	uint32_t c;
	uint32_t b;
	
	/* is having b as LIMM valid here? LIMM vs. fixed u6 value makes no sense */
	if (breg == LIMM_REG)
	{
		GET_LIMM_32;
		size = 8;
/*		got_limm = 1; */
		b = limm;
	}
	else
	{
		b = m_regs[breg];
	}
    
 	c = u;
	
	/* todo: if areg = LIMM then there is no result (but since that register can never be read, I guess it doesn't matter if we store it there anyway?) */
	uint32_t result = b - (c << 2);
	m_regs[areg] = result;
	
	if (F)
	{
		arcompact_fatal("arcompact_handle04_18 (SUB2) (F set)\n"); // not yet supported
	}
	return m_pc + (size >> 0);
}


ARCOMPACT_RETTYPE arcompact_device::arcompact_handle04_18_p10(OPS_32)
{
	int size = 4;
	uint32_t limm = 0;
/*	int got_limm = 0; */
	
	COMMON32_GET_breg;
	COMMON32_GET_F;
	COMMON32_GET_s12;
	
	uint32_t c;
	uint32_t b;
	
	/* is having b as LIMM valid here? LIMM vs. fixed u6 value makes no sense */
	if (breg == LIMM_REG)
	{
		GET_LIMM_32;
		size = 8;
/*		got_limm = 1; */
		b = limm;
	}
	else
	{
		b = m_regs[breg];
	}
    
 	c = (uint32_t)S;
	
	/* todo: if areg = LIMM then there is no result (but since that register can never be read, I guess it doesn't matter if we store it there anyway?) */
	uint32_t result = b - (c << 2);
	m_regs[breg] = result;
	
	if (F)
	{
		arcompact_fatal("arcompact_handle04_18 (SUB2) (F set)\n"); // not yet supported
	}
	return m_pc + (size >> 0);
}


ARCOMPACT_RETTYPE arcompact_device::arcompact_handle04_18_p11_m0(OPS_32)
{
	int size = 4;
	arcompact_fatal("arcompact_handle04_18_p11_m0 (SUB2)\n");
	return m_pc + (size >> 0);
}


ARCOMPACT_RETTYPE arcompact_device::arcompact_handle04_18_p11_m1(OPS_32)
{
	int size = 4;
	uint32_t limm = 0;
/*	int got_limm = 0; */
	
	COMMON32_GET_breg;
	COMMON32_GET_F;
	COMMON32_GET_u6;
     //COMMON32_GET_areg; // areg bits already used as condition code select
	
	uint32_t c;
	uint32_t b;
	
	/* is having b as LIMM valid here? LIMM vs. fixed u6 value makes no sense */
	if (breg == LIMM_REG)
	{
		GET_LIMM_32;
		size = 8;
/*		got_limm = 1; */
		b = limm;
	}
	else
	{
		b = m_regs[breg];
	}
    
 	c = u;
	
	/* todo: if areg = LIMM then there is no result (but since that register can never be read, I guess it doesn't matter if we store it there anyway?) */
	COMMON32_GET_CONDITION;
	if (!check_condition(condition))
		return m_pc + (size>>0);

	uint32_t result = b - (c << 2);
	m_regs[breg] = result;
	
	if (F)
	{
		arcompact_fatal("arcompact_handle04_18 (SUB2) (F set)\n"); // not yet supported
	}
	return m_pc + (size >> 0);
}


ARCOMPACT_RETTYPE arcompact_device::arcompact_handle04_19_p00(OPS_32)
{
	int size = 4;
	uint32_t limm = 0;
	int got_limm = 0;
	
	COMMON32_GET_breg;
	COMMON32_GET_F;
	COMMON32_GET_creg;
	COMMON32_GET_areg;
	
	uint32_t c;
	uint32_t b;
	
	if (breg == LIMM_REG)
	{
		GET_LIMM_32;
		size = 8;
		got_limm = 1;
		b = limm;
	}
	else
	{
		b = m_regs[breg];
	}
	
	if (creg == LIMM_REG)
	{
		if (!got_limm)
		{
			GET_LIMM_32;
			size = 8;
		}
		c = limm;
	}
	else
	{
		c = m_regs[creg];
	}
	/* todo: is the limm, limm syntax valid? (it's pointless.) */
	/* todo: if areg = LIMM then there is no result (but since that register can never be read, I guess it doesn't matter if we store it there anyway?) */
	uint32_t result = b - (c << 3);
	m_regs[areg] = result;
	
	if (F)
	{
		arcompact_fatal("arcompact_handle04_19 (SUB3) (F set)\n"); // not yet supported
	}
	return m_pc + (size >> 0);
}


ARCOMPACT_RETTYPE arcompact_device::arcompact_handle04_19_p01(OPS_32)
{
	int size = 4;
	uint32_t limm = 0;
/*	int got_limm = 0; */
	
	COMMON32_GET_breg;
	COMMON32_GET_F;
	COMMON32_GET_u6;
	COMMON32_GET_areg;
	
	uint32_t c;
	uint32_t b;
	
	/* is having b as LIMM valid here? LIMM vs. fixed u6 value makes no sense */
	if (breg == LIMM_REG)
	{
		GET_LIMM_32;
		size = 8;
/*		got_limm = 1; */
		b = limm;
	}
	else
	{
		b = m_regs[breg];
	}
    
 	c = u;
	
	/* todo: if areg = LIMM then there is no result (but since that register can never be read, I guess it doesn't matter if we store it there anyway?) */
	uint32_t result = b - (c << 3);
	m_regs[areg] = result;
	
	if (F)
	{
		arcompact_fatal("arcompact_handle04_19 (SUB3) (F set)\n"); // not yet supported
	}
	return m_pc + (size >> 0);
}


ARCOMPACT_RETTYPE arcompact_device::arcompact_handle04_19_p10(OPS_32)
{
	int size = 4;
	uint32_t limm = 0;
/*	int got_limm = 0; */
	
	COMMON32_GET_breg;
	COMMON32_GET_F;
	COMMON32_GET_s12;
	
	uint32_t c;
	uint32_t b;
	
	/* is having b as LIMM valid here? LIMM vs. fixed u6 value makes no sense */
	if (breg == LIMM_REG)
	{
		GET_LIMM_32;
		size = 8;
/*		got_limm = 1; */
		b = limm;
	}
	else
	{
		b = m_regs[breg];
	}
    
 	c = (uint32_t)S;
	
	/* todo: if areg = LIMM then there is no result (but since that register can never be read, I guess it doesn't matter if we store it there anyway?) */
	uint32_t result = b - (c << 3);
	m_regs[breg] = result;
	
	if (F)
	{
		arcompact_fatal("arcompact_handle04_19 (SUB3) (F set)\n"); // not yet supported
	}
	return m_pc + (size >> 0);
}


ARCOMPACT_RETTYPE arcompact_device::arcompact_handle04_19_p11_m0(OPS_32)
{
	int size = 4;
	arcompact_fatal("arcompact_handle04_19_p11_m0 (SUB3)\n");
	return m_pc + (size >> 0);
}


ARCOMPACT_RETTYPE arcompact_device::arcompact_handle04_19_p11_m1(OPS_32)
{
	int size = 4;
	uint32_t limm = 0;
/*	int got_limm = 0; */
	
	COMMON32_GET_breg;
	COMMON32_GET_F;
	COMMON32_GET_u6;
     //COMMON32_GET_areg; // areg bits already used as condition code select
	
	uint32_t c;
	uint32_t b;
	
	/* is having b as LIMM valid here? LIMM vs. fixed u6 value makes no sense */
	if (breg == LIMM_REG)
	{
		GET_LIMM_32;
		size = 8;
/*		got_limm = 1; */
		b = limm;
	}
	else
	{
		b = m_regs[breg];
	}
    
 	c = u;
	
	/* todo: if areg = LIMM then there is no result (but since that register can never be read, I guess it doesn't matter if we store it there anyway?) */
	COMMON32_GET_CONDITION;
	if (!check_condition(condition))
		return m_pc + (size>>0);

	uint32_t result = b - (c << 3);
	m_regs[breg] = result;
	
	if (F)
	{
		arcompact_fatal("arcompact_handle04_19 (SUB3) (F set)\n"); // not yet supported
	}
	return m_pc + (size >> 0);
}


ARCOMPACT_RETTYPE arcompact_device::arcompact_handle04_2a_p00(OPS_32)
{
	int size = 4;
	uint32_t limm = 0;
	int got_limm = 0;
	
	COMMON32_GET_breg;
	COMMON32_GET_F;
	COMMON32_GET_creg;
     //COMMON32_GET_areg; // areg is reserved / not used
	
	uint32_t c;
	
	if (creg == LIMM_REG)
	{
		if (!got_limm)
		{
			GET_LIMM_32;
			size = 8;
		}
		c = limm;
	}
	else
	{
		c = m_regs[creg];
	}
	/* todo: is the limm, limm syntax valid? (it's pointless.) */
	/* todo: if areg = LIMM then there is no result (but since that register can never be read, I guess it doesn't matter if we store it there anyway?) */
	m_regs[breg] = READAUX(c);
	
	
	if (F)
	{
		// no flag changes
	}
	return m_pc + (size >> 0);
}


ARCOMPACT_RETTYPE arcompact_device::arcompact_handle04_2a_p01(OPS_32)
{
	int size = 4;
/*	int got_limm = 0; */
	
	COMMON32_GET_breg;
	COMMON32_GET_F;
	COMMON32_GET_u6;
     //COMMON32_GET_areg; // areg is reserved / not used
	
	uint32_t c;
    
 	c = u;
	
	/* todo: if areg = LIMM then there is no result (but since that register can never be read, I guess it doesn't matter if we store it there anyway?) */
	m_regs[breg] = READAUX(c);
	
	
	if (F)
	{
		// no flag changes
	}
	return m_pc + (size >> 0);
}


ARCOMPACT_RETTYPE arcompact_device::arcompact_handle04_2a_p10(OPS_32)
{
	int size = 4;
/*	int got_limm = 0; */
	
	COMMON32_GET_breg;
	COMMON32_GET_F;
	COMMON32_GET_s12;
	
	uint32_t c;
    
 	c = (uint32_t)S;
	
	/* todo: if areg = LIMM then there is no result (but since that register can never be read, I guess it doesn't matter if we store it there anyway?) */
	m_regs[breg] = READAUX(c);
	
	
	if (F)
	{
		// no flag changes
	}
	return m_pc + (size >> 0);
}


ARCOMPACT_RETTYPE arcompact_device::arcompact_handle04_2a_p11_m0(OPS_32)
{
	int size = 4;
	arcompact_fatal("arcompact_handle04_2a_p11_m0 (LR)\n");
	return m_pc + (size >> 0);
}


ARCOMPACT_RETTYPE arcompact_device::arcompact_handle04_2a_p11_m1(OPS_32)
{
	int size = 4;
/*	int got_limm = 0; */
	
	COMMON32_GET_breg;
	COMMON32_GET_F;
	COMMON32_GET_u6;
     //COMMON32_GET_areg; // areg bits already used as condition code select
	
	uint32_t c;
    
 	c = u;
	
	/* todo: if areg = LIMM then there is no result (but since that register can never be read, I guess it doesn't matter if we store it there anyway?) */
	COMMON32_GET_CONDITION;
	if (!check_condition(condition))
		return m_pc + (size>>0);

	m_regs[breg] = READAUX(c);
	
	
	if (F)
	{
		// no flag changes
	}
	return m_pc + (size >> 0);
}


ARCOMPACT_RETTYPE arcompact_device::arcompact_handle04_2b_p00(OPS_32)
{
	int size = 4;
	uint32_t limm = 0;
	int got_limm = 0;
	
	COMMON32_GET_breg;
	COMMON32_GET_F;
	COMMON32_GET_creg;
     //COMMON32_GET_areg; // areg is reserved / not used
	
	uint32_t c;
	uint32_t b;
	
	if (breg == LIMM_REG)
	{
		GET_LIMM_32;
		size = 8;
		got_limm = 1;
		b = limm;
	}
	else
	{
		b = m_regs[breg];
	}
	
	if (creg == LIMM_REG)
	{
		if (!got_limm)
		{
			GET_LIMM_32;
			size = 8;
		}
		c = limm;
	}
	else
	{
		c = m_regs[creg];
	}
	/* todo: is the limm, limm syntax valid? (it's pointless.) */
	/* todo: if areg = LIMM then there is no result (but since that register can never be read, I guess it doesn't matter if we store it there anyway?) */
	WRITEAUX(c,b);
	
	
	if (F)
	{
		// no flag changes
	}
	return m_pc + (size >> 0);
}


ARCOMPACT_RETTYPE arcompact_device::arcompact_handle04_2b_p01(OPS_32)
{
	int size = 4;
	uint32_t limm = 0;
/*	int got_limm = 0; */
	
	COMMON32_GET_breg;
	COMMON32_GET_F;
	COMMON32_GET_u6;
     //COMMON32_GET_areg; // areg is reserved / not used
	
	uint32_t c;
	uint32_t b;
	
	/* is having b as LIMM valid here? LIMM vs. fixed u6 value makes no sense */
	if (breg == LIMM_REG)
	{
		GET_LIMM_32;
		size = 8;
/*		got_limm = 1; */
		b = limm;
	}
	else
	{
		b = m_regs[breg];
	}
    
 	c = u;
	
	/* todo: if areg = LIMM then there is no result (but since that register can never be read, I guess it doesn't matter if we store it there anyway?) */
	WRITEAUX(c,b);
	
	
	if (F)
	{
		// no flag changes
	}
	return m_pc + (size >> 0);
}


ARCOMPACT_RETTYPE arcompact_device::arcompact_handle04_2b_p10(OPS_32)
{
	int size = 4;
	uint32_t limm = 0;
/*	int got_limm = 0; */
	
	COMMON32_GET_breg;
	COMMON32_GET_F;
	COMMON32_GET_s12;
	
	uint32_t c;
	uint32_t b;
	
	/* is having b as LIMM valid here? LIMM vs. fixed u6 value makes no sense */
	if (breg == LIMM_REG)
	{
		GET_LIMM_32;
		size = 8;
/*		got_limm = 1; */
		b = limm;
	}
	else
	{
		b = m_regs[breg];
	}
    
 	c = (uint32_t)S;
	
	/* todo: if areg = LIMM then there is no result (but since that register can never be read, I guess it doesn't matter if we store it there anyway?) */
	WRITEAUX(c,b);
	
	
	if (F)
	{
		// no flag changes
	}
	return m_pc + (size >> 0);
}


ARCOMPACT_RETTYPE arcompact_device::arcompact_handle04_2b_p11_m0(OPS_32)
{
	int size = 4;
	arcompact_fatal("arcompact_handle04_2b_p11_m0 (SR)\n");
	return m_pc + (size >> 0);
}


ARCOMPACT_RETTYPE arcompact_device::arcompact_handle04_2b_p11_m1(OPS_32)
{
	int size = 4;
	uint32_t limm = 0;
/*	int got_limm = 0; */
	
	COMMON32_GET_breg;
	COMMON32_GET_F;
	COMMON32_GET_u6;
     //COMMON32_GET_areg; // areg bits already used as condition code select
	
	uint32_t c;
	uint32_t b;
	
	/* is having b as LIMM valid here? LIMM vs. fixed u6 value makes no sense */
	if (breg == LIMM_REG)
	{
		GET_LIMM_32;
		size = 8;
/*		got_limm = 1; */
		b = limm;
	}
	else
	{
		b = m_regs[breg];
	}
    
 	c = u;
	
	/* todo: if areg = LIMM then there is no result (but since that register can never be read, I guess it doesn't matter if we store it there anyway?) */
	COMMON32_GET_CONDITION;
	if (!check_condition(condition))
		return m_pc + (size>>0);

	WRITEAUX(c,b);
	
	
	if (F)
	{
		// no flag changes
	}
	return m_pc + (size >> 0);
}


ARCOMPACT_RETTYPE arcompact_device::arcompact_handle05_00_p00(OPS_32)
{
	int size = 4;
	uint32_t limm = 0;
	int got_limm = 0;
	
	COMMON32_GET_breg;
	COMMON32_GET_F;
	COMMON32_GET_creg;
	COMMON32_GET_areg;
	
	uint32_t c;
	uint32_t b;
	
	if (breg == LIMM_REG)
	{
		GET_LIMM_32;
		size = 8;
		got_limm = 1;
		b = limm;
	}
	else
	{
		b = m_regs[breg];
	}
	
	if (creg == LIMM_REG)
	{
		if (!got_limm)
		{
			GET_LIMM_32;
			size = 8;
		}
		c = limm;
	}
	else
	{
		c = m_regs[creg];
	}
	/* todo: is the limm, limm syntax valid? (it's pointless.) */
	/* todo: if areg = LIMM then there is no result (but since that register can never be read, I guess it doesn't matter if we store it there anyway?) */
	uint32_t result = b << (c&0x1f);
	m_regs[areg] = result;
	
	if (F)
	{
		arcompact_fatal("arcompact_handle05_00 (ASL) (F set)\n"); // not yet supported
	}
	return m_pc + (size >> 0);
}


ARCOMPACT_RETTYPE arcompact_device::arcompact_handle05_00_p01(OPS_32)
{
	int size = 4;
	uint32_t limm = 0;
/*	int got_limm = 0; */
	
	COMMON32_GET_breg;
	COMMON32_GET_F;
	COMMON32_GET_u6;
	COMMON32_GET_areg;
	
	uint32_t c;
	uint32_t b;
	
	/* is having b as LIMM valid here? LIMM vs. fixed u6 value makes no sense */
	if (breg == LIMM_REG)
	{
		GET_LIMM_32;
		size = 8;
/*		got_limm = 1; */
		b = limm;
	}
	else
	{
		b = m_regs[breg];
	}
    
 	c = u;
	
	/* todo: if areg = LIMM then there is no result (but since that register can never be read, I guess it doesn't matter if we store it there anyway?) */
	uint32_t result = b << (c&0x1f);
	m_regs[areg] = result;
	
	if (F)
	{
		arcompact_fatal("arcompact_handle05_00 (ASL) (F set)\n"); // not yet supported
	}
	return m_pc + (size >> 0);
}


ARCOMPACT_RETTYPE arcompact_device::arcompact_handle05_00_p10(OPS_32)
{
	int size = 4;
	uint32_t limm = 0;
/*	int got_limm = 0; */
	
	COMMON32_GET_breg;
	COMMON32_GET_F;
	COMMON32_GET_s12;
	
	uint32_t c;
	uint32_t b;
	
	/* is having b as LIMM valid here? LIMM vs. fixed u6 value makes no sense */
	if (breg == LIMM_REG)
	{
		GET_LIMM_32;
		size = 8;
/*		got_limm = 1; */
		b = limm;
	}
	else
	{
		b = m_regs[breg];
	}
    
 	c = (uint32_t)S;
	
	/* todo: if areg = LIMM then there is no result (but since that register can never be read, I guess it doesn't matter if we store it there anyway?) */
	uint32_t result = b << (c&0x1f);
	m_regs[breg] = result;
	
	if (F)
	{
		arcompact_fatal("arcompact_handle05_00 (ASL) (F set)\n"); // not yet supported
	}
	return m_pc + (size >> 0);
}


ARCOMPACT_RETTYPE arcompact_device::arcompact_handle05_00_p11_m0(OPS_32)
{
	int size = 4;
	arcompact_fatal("arcompact_handle05_00_p11_m0 (ASL)\n");
	return m_pc + (size >> 0);
}


ARCOMPACT_RETTYPE arcompact_device::arcompact_handle05_00_p11_m1(OPS_32)
{
	int size = 4;
	uint32_t limm = 0;
/*	int got_limm = 0; */
	
	COMMON32_GET_breg;
	COMMON32_GET_F;
	COMMON32_GET_u6;
     //COMMON32_GET_areg; // areg bits already used as condition code select
	
	uint32_t c;
	uint32_t b;
	
	/* is having b as LIMM valid here? LIMM vs. fixed u6 value makes no sense */
	if (breg == LIMM_REG)
	{
		GET_LIMM_32;
		size = 8;
/*		got_limm = 1; */
		b = limm;
	}
	else
	{
		b = m_regs[breg];
	}
    
 	c = u;
	
	/* todo: if areg = LIMM then there is no result (but since that register can never be read, I guess it doesn't matter if we store it there anyway?) */
	COMMON32_GET_CONDITION;
	if (!check_condition(condition))
		return m_pc + (size>>0);

	uint32_t result = b << (c&0x1f);
	m_regs[breg] = result;
	
	if (F)
	{
		arcompact_fatal("arcompact_handle05_00 (ASL) (F set)\n"); // not yet supported
	}
	return m_pc + (size >> 0);
}


ARCOMPACT_RETTYPE arcompact_device::arcompact_handle05_01_p00(OPS_32)
{
	int size = 4;
	uint32_t limm = 0;
	int got_limm = 0;
	
	COMMON32_GET_breg;
	COMMON32_GET_F;
	COMMON32_GET_creg;
	COMMON32_GET_areg;
	
	uint32_t c;
	uint32_t b;
	
	if (breg == LIMM_REG)
	{
		GET_LIMM_32;
		size = 8;
		got_limm = 1;
		b = limm;
	}
	else
	{
		b = m_regs[breg];
	}
	
	if (creg == LIMM_REG)
	{
		if (!got_limm)
		{
			GET_LIMM_32;
			size = 8;
		}
		c = limm;
	}
	else
	{
		c = m_regs[creg];
	}
	/* todo: is the limm, limm syntax valid? (it's pointless.) */
	/* todo: if areg = LIMM then there is no result (but since that register can never be read, I guess it doesn't matter if we store it there anyway?) */
	uint32_t result = b >> (c&0x1f);
	m_regs[areg] = result;
	
	if (F)
	{
		arcompact_fatal("arcompact_handle05_01 (LSR) (F set)\n"); // not yet supported
	}
	return m_pc + (size >> 0);
}


ARCOMPACT_RETTYPE arcompact_device::arcompact_handle05_01_p01(OPS_32)
{
	int size = 4;
	uint32_t limm = 0;
/*	int got_limm = 0; */
	
	COMMON32_GET_breg;
	COMMON32_GET_F;
	COMMON32_GET_u6;
	COMMON32_GET_areg;
	
	uint32_t c;
	uint32_t b;
	
	/* is having b as LIMM valid here? LIMM vs. fixed u6 value makes no sense */
	if (breg == LIMM_REG)
	{
		GET_LIMM_32;
		size = 8;
/*		got_limm = 1; */
		b = limm;
	}
	else
	{
		b = m_regs[breg];
	}
    
 	c = u;
	
	/* todo: if areg = LIMM then there is no result (but since that register can never be read, I guess it doesn't matter if we store it there anyway?) */
	uint32_t result = b >> (c&0x1f);
	m_regs[areg] = result;
	
	if (F)
	{
		arcompact_fatal("arcompact_handle05_01 (LSR) (F set)\n"); // not yet supported
	}
	return m_pc + (size >> 0);
}


ARCOMPACT_RETTYPE arcompact_device::arcompact_handle05_01_p10(OPS_32)
{
	int size = 4;
	uint32_t limm = 0;
/*	int got_limm = 0; */
	
	COMMON32_GET_breg;
	COMMON32_GET_F;
	COMMON32_GET_s12;
	
	uint32_t c;
	uint32_t b;
	
	/* is having b as LIMM valid here? LIMM vs. fixed u6 value makes no sense */
	if (breg == LIMM_REG)
	{
		GET_LIMM_32;
		size = 8;
/*		got_limm = 1; */
		b = limm;
	}
	else
	{
		b = m_regs[breg];
	}
    
 	c = (uint32_t)S;
	
	/* todo: if areg = LIMM then there is no result (but since that register can never be read, I guess it doesn't matter if we store it there anyway?) */
	uint32_t result = b >> (c&0x1f);
	m_regs[breg] = result;
	
	if (F)
	{
		arcompact_fatal("arcompact_handle05_01 (LSR) (F set)\n"); // not yet supported
	}
	return m_pc + (size >> 0);
}


ARCOMPACT_RETTYPE arcompact_device::arcompact_handle05_01_p11_m0(OPS_32)
{
	int size = 4;
	arcompact_fatal("arcompact_handle05_01_p11_m0 (LSR)\n");
	return m_pc + (size >> 0);
}


ARCOMPACT_RETTYPE arcompact_device::arcompact_handle05_01_p11_m1(OPS_32)
{
	int size = 4;
	uint32_t limm = 0;
/*	int got_limm = 0; */
	
	COMMON32_GET_breg;
	COMMON32_GET_F;
	COMMON32_GET_u6;
     //COMMON32_GET_areg; // areg bits already used as condition code select
	
	uint32_t c;
	uint32_t b;
	
	/* is having b as LIMM valid here? LIMM vs. fixed u6 value makes no sense */
	if (breg == LIMM_REG)
	{
		GET_LIMM_32;
		size = 8;
/*		got_limm = 1; */
		b = limm;
	}
	else
	{
		b = m_regs[breg];
	}
    
 	c = u;
	
	/* todo: if areg = LIMM then there is no result (but since that register can never be read, I guess it doesn't matter if we store it there anyway?) */
	COMMON32_GET_CONDITION;
	if (!check_condition(condition))
		return m_pc + (size>>0);

	uint32_t result = b >> (c&0x1f);
	m_regs[breg] = result;
	
	if (F)
	{
		arcompact_fatal("arcompact_handle05_01 (LSR) (F set)\n"); // not yet supported
	}
	return m_pc + (size >> 0);
}


ARCOMPACT_RETTYPE arcompact_device::arcompact_handle04_2f_02_p00(OPS_32)
{
	int size = 4;
	uint32_t limm = 0;
	int got_limm = 0;
	
	COMMON32_GET_breg;
	COMMON32_GET_F;
	COMMON32_GET_creg;
     //COMMON32_GET_areg; // areg bits already used as opcode select
	
	uint32_t c;
	
	if (creg == LIMM_REG)
	{
		if (!got_limm)
		{
			GET_LIMM_32;
			size = 8;
		}
		c = limm;
	}
	else
	{
		c = m_regs[creg];
	}
	/* todo: is the limm, limm syntax valid? (it's pointless.) */
	/* todo: if areg = LIMM then there is no result (but since that register can never be read, I guess it doesn't matter if we store it there anyway?) */
	uint32_t result = c >> 1;
	m_regs[breg] = result;
	
	if (F)
	{
		if (result & 0x80000000) { STATUS32_SET_N; }
		else { STATUS32_CLEAR_N; }
		if (result == 0x00000000) { STATUS32_SET_Z; }
		else { STATUS32_CLEAR_Z; }
		if (c == 0x00000001) { STATUS32_SET_C; }
		else { STATUS32_CLEAR_C; }
	}
	return m_pc + (size >> 0);
}


ARCOMPACT_RETTYPE arcompact_device::arcompact_handle04_2f_02_p01(OPS_32)
{
	int size = 4;
/*	int got_limm = 0; */
	
	COMMON32_GET_breg;
	COMMON32_GET_F;
	COMMON32_GET_u6;
     //COMMON32_GET_areg; // areg bits already used as opcode select
	
	uint32_t c;
    
 	c = u;
	
	/* todo: if areg = LIMM then there is no result (but since that register can never be read, I guess it doesn't matter if we store it there anyway?) */
	uint32_t result = c >> 1;
	m_regs[breg] = result;
	
	if (F)
	{
		if (result & 0x80000000) { STATUS32_SET_N; }
		else { STATUS32_CLEAR_N; }
		if (result == 0x00000000) { STATUS32_SET_Z; }
		else { STATUS32_CLEAR_Z; }
		if (c == 0x00000001) { STATUS32_SET_C; }
		else { STATUS32_CLEAR_C; }
	}
	return m_pc + (size >> 0);
}


ARCOMPACT_RETTYPE arcompact_device::arcompact_handle04_2f_02_p10(OPS_32)
{
	int size = 4;
	arcompact_fatal("illegal arcompact_handle04_2f_02_p10 (ares bits already used as opcode select, can't be used as s12) (LSR1)\n");
	return m_pc + (size >> 0);
}


ARCOMPACT_RETTYPE arcompact_device::arcompact_handle04_2f_02_p11_m0(OPS_32)
{
	int size = 4;
	arcompact_fatal("illegal arcompact_handle04_2f_02_p11_m0 (ares bits already used as opcode select, can't be used as Q condition) (LSR1)\n");
	return m_pc + (size >> 0);
}
ARCOMPACT_RETTYPE arcompact_device::arcompact_handle04_2f_02_p11_m1(OPS_32)
{
	int size = 4;
	arcompact_fatal("illegal arcompact_handle04_2f_02_p11_m1 (ares bits already used as opcode select, can't be used as Q condition) (LSR1)\n");
	return m_pc + (size >> 0);
}


ARCOMPACT_RETTYPE arcompact_device::arcompact_handle04_2f_03_p00(OPS_32)
{
	int size = 4;
	uint32_t limm = 0;
	int got_limm = 0;
	
	COMMON32_GET_breg;
	COMMON32_GET_F;
	COMMON32_GET_creg;
     //COMMON32_GET_areg; // areg bits already used as opcode select
	
	uint32_t c;
	
	if (creg == LIMM_REG)
	{
		if (!got_limm)
		{
			GET_LIMM_32;
			size = 8;
		}
		c = limm;
	}
	else
	{
		c = m_regs[creg];
	}
	/* todo: is the limm, limm syntax valid? (it's pointless.) */
	/* todo: if areg = LIMM then there is no result (but since that register can never be read, I guess it doesn't matter if we store it there anyway?) */
	int shift = 1; uint32_t mask = (1 << (shift)) - 1; mask <<= (32-shift); uint32_t result = ((c >> shift) & ~mask) | ((c << (32-shift)) & mask);
	m_regs[breg] = result;
	
	if (F)
	{
		if (result & 0x80000000) { STATUS32_SET_N; }
		else { STATUS32_CLEAR_N; }
		if (result == 0x00000000) { STATUS32_SET_Z; }
		else { STATUS32_CLEAR_Z; }
		if (c == 0x00000001) { STATUS32_SET_C; }
		else { STATUS32_CLEAR_C; }
	}
	return m_pc + (size >> 0);
}


ARCOMPACT_RETTYPE arcompact_device::arcompact_handle04_2f_03_p01(OPS_32)
{
	int size = 4;
/*	int got_limm = 0; */
	
	COMMON32_GET_breg;
	COMMON32_GET_F;
	COMMON32_GET_u6;
     //COMMON32_GET_areg; // areg bits already used as opcode select
	
	uint32_t c;
    
 	c = u;
	
	/* todo: if areg = LIMM then there is no result (but since that register can never be read, I guess it doesn't matter if we store it there anyway?) */
	int shift = 1; uint32_t mask = (1 << (shift)) - 1; mask <<= (32-shift); uint32_t result = ((c >> shift) & ~mask) | ((c << (32-shift)) & mask);
	m_regs[breg] = result;
	
	if (F)
	{
		if (result & 0x80000000) { STATUS32_SET_N; }
		else { STATUS32_CLEAR_N; }
		if (result == 0x00000000) { STATUS32_SET_Z; }
		else { STATUS32_CLEAR_Z; }
		if (c == 0x00000001) { STATUS32_SET_C; }
		else { STATUS32_CLEAR_C; }
	}
	return m_pc + (size >> 0);
}


ARCOMPACT_RETTYPE arcompact_device::arcompact_handle04_2f_03_p10(OPS_32)
{
	int size = 4;
	arcompact_fatal("illegal arcompact_handle04_2f_03_p10 (ares bits already used as opcode select, can't be used as s12) (ROR)\n");
	return m_pc + (size >> 0);
}


ARCOMPACT_RETTYPE arcompact_device::arcompact_handle04_2f_03_p11_m0(OPS_32)
{
	int size = 4;
	arcompact_fatal("illegal arcompact_handle04_2f_03_p11_m0 (ares bits already used as opcode select, can't be used as Q condition) (ROR)\n");
	return m_pc + (size >> 0);
}
ARCOMPACT_RETTYPE arcompact_device::arcompact_handle04_2f_03_p11_m1(OPS_32)
{
	int size = 4;
	arcompact_fatal("illegal arcompact_handle04_2f_03_p11_m1 (ares bits already used as opcode select, can't be used as Q condition) (ROR)\n");
	return m_pc + (size >> 0);
}


ARCOMPACT_RETTYPE arcompact_device::arcompact_handle04_2f_07_p00(OPS_32)
{
	int size = 4;
	uint32_t limm = 0;
	int got_limm = 0;
	
	COMMON32_GET_breg;
	COMMON32_GET_F;
	COMMON32_GET_creg;
     //COMMON32_GET_areg; // areg bits already used as opcode select
	
	uint32_t c;
	
	if (creg == LIMM_REG)
	{
		if (!got_limm)
		{
			GET_LIMM_32;
			size = 8;
		}
		c = limm;
	}
	else
	{
		c = m_regs[creg];
	}
	/* todo: is the limm, limm syntax valid? (it's pointless.) */
	/* todo: if areg = LIMM then there is no result (but since that register can never be read, I guess it doesn't matter if we store it there anyway?) */
	uint32_t result = c & 0x000000ff;
	m_regs[breg] = result;
	
	if (F)
	{
		arcompact_fatal("arcompact_handle04_2f_07 (EXTB) (F set)\n"); // not yet supported
	}
	return m_pc + (size >> 0);
}


ARCOMPACT_RETTYPE arcompact_device::arcompact_handle04_2f_07_p01(OPS_32)
{
	int size = 4;
/*	int got_limm = 0; */
	
	COMMON32_GET_breg;
	COMMON32_GET_F;
	COMMON32_GET_u6;
     //COMMON32_GET_areg; // areg bits already used as opcode select
	
	uint32_t c;
    
 	c = u;
	
	/* todo: if areg = LIMM then there is no result (but since that register can never be read, I guess it doesn't matter if we store it there anyway?) */
	uint32_t result = c & 0x000000ff;
	m_regs[breg] = result;
	
	if (F)
	{
		arcompact_fatal("arcompact_handle04_2f_07 (EXTB) (F set)\n"); // not yet supported
	}
	return m_pc + (size >> 0);
}


ARCOMPACT_RETTYPE arcompact_device::arcompact_handle04_2f_07_p10(OPS_32)
{
	int size = 4;
	arcompact_fatal("illegal arcompact_handle04_2f_07_p10 (ares bits already used as opcode select, can't be used as s12) (EXTB)\n");
	return m_pc + (size >> 0);
}


ARCOMPACT_RETTYPE arcompact_device::arcompact_handle04_2f_07_p11_m0(OPS_32)
{
	int size = 4;
	arcompact_fatal("illegal arcompact_handle04_2f_07_p11_m0 (ares bits already used as opcode select, can't be used as Q condition) (EXTB)\n");
	return m_pc + (size >> 0);
}
ARCOMPACT_RETTYPE arcompact_device::arcompact_handle04_2f_07_p11_m1(OPS_32)
{
	int size = 4;
	arcompact_fatal("illegal arcompact_handle04_2f_07_p11_m1 (ares bits already used as opcode select, can't be used as Q condition) (EXTB)\n");
	return m_pc + (size >> 0);
}


ARCOMPACT_RETTYPE arcompact_device::arcompact_handle04_2f_08_p00(OPS_32)
{
	int size = 4;
	uint32_t limm = 0;
	int got_limm = 0;
	
	COMMON32_GET_breg;
	COMMON32_GET_F;
	COMMON32_GET_creg;
     //COMMON32_GET_areg; // areg bits already used as opcode select
	
	uint32_t c;
	
	if (creg == LIMM_REG)
	{
		if (!got_limm)
		{
			GET_LIMM_32;
			size = 8;
		}
		c = limm;
	}
	else
	{
		c = m_regs[creg];
	}
	/* todo: is the limm, limm syntax valid? (it's pointless.) */
	/* todo: if areg = LIMM then there is no result (but since that register can never be read, I guess it doesn't matter if we store it there anyway?) */
	uint32_t result = c & 0x0000ffff;
	m_regs[breg] = result;
	
	if (F)
	{
		arcompact_fatal("arcompact_handle04_2f_08 (EXTW) (F set)\n"); // not yet supported
	}
	return m_pc + (size >> 0);
}


ARCOMPACT_RETTYPE arcompact_device::arcompact_handle04_2f_08_p01(OPS_32)
{
	int size = 4;
/*	int got_limm = 0; */
	
	COMMON32_GET_breg;
	COMMON32_GET_F;
	COMMON32_GET_u6;
     //COMMON32_GET_areg; // areg bits already used as opcode select
	
	uint32_t c;
    
 	c = u;
	
	/* todo: if areg = LIMM then there is no result (but since that register can never be read, I guess it doesn't matter if we store it there anyway?) */
	uint32_t result = c & 0x0000ffff;
	m_regs[breg] = result;
	
	if (F)
	{
		arcompact_fatal("arcompact_handle04_2f_08 (EXTW) (F set)\n"); // not yet supported
	}
	return m_pc + (size >> 0);
}


ARCOMPACT_RETTYPE arcompact_device::arcompact_handle04_2f_08_p10(OPS_32)
{
	int size = 4;
	arcompact_fatal("illegal arcompact_handle04_2f_08_p10 (ares bits already used as opcode select, can't be used as s12) (EXTW)\n");
	return m_pc + (size >> 0);
}


ARCOMPACT_RETTYPE arcompact_device::arcompact_handle04_2f_08_p11_m0(OPS_32)
{
	int size = 4;
	arcompact_fatal("illegal arcompact_handle04_2f_08_p11_m0 (ares bits already used as opcode select, can't be used as Q condition) (EXTW)\n");
	return m_pc + (size >> 0);
}
ARCOMPACT_RETTYPE arcompact_device::arcompact_handle04_2f_08_p11_m1(OPS_32)
{
	int size = 4;
	arcompact_fatal("illegal arcompact_handle04_2f_08_p11_m1 (ares bits already used as opcode select, can't be used as Q condition) (EXTW)\n");
	return m_pc + (size >> 0);
}


ARCOMPACT_RETTYPE arcompact_device::arcompact_handle0d_00(OPS_16)
{
	int u, breg, creg;

	COMMON16_GET_u3;
	COMMON16_GET_breg;
	COMMON16_GET_creg;

	REG_16BIT_RANGE(breg);
	REG_16BIT_RANGE(creg);

	uint32_t result = m_regs[breg] + u;
	m_regs[creg] = result;

	return m_pc + (2 >> 0);
}


ARCOMPACT_RETTYPE arcompact_device::arcompact_handle0d_01(OPS_16)
{
	int u, breg, creg;

	COMMON16_GET_u3;
	COMMON16_GET_breg;
	COMMON16_GET_creg;

	REG_16BIT_RANGE(breg);
	REG_16BIT_RANGE(creg);

	uint32_t result = m_regs[breg] - u;
	m_regs[creg] = result;

	return m_pc + (2 >> 0);
}


ARCOMPACT_RETTYPE arcompact_device::arcompact_handle0d_02(OPS_16)
{
	int u, breg, creg;

	COMMON16_GET_u3;
	COMMON16_GET_breg;
	COMMON16_GET_creg;

	REG_16BIT_RANGE(breg);
	REG_16BIT_RANGE(creg);

	uint32_t result = m_regs[breg] << u;
	m_regs[creg] = result;

	return m_pc + (2 >> 0);
}


ARCOMPACT_RETTYPE arcompact_device::arcompact_handle0f_02(OPS_16)
{
	int breg, creg;

	COMMON16_GET_breg;
	COMMON16_GET_creg;

	REG_16BIT_RANGE(breg);
	REG_16BIT_RANGE(creg);

	uint32_t result = m_regs[breg] - m_regs[creg];
	m_regs[breg] = result;

	return m_pc + (2 >> 0);
}


ARCOMPACT_RETTYPE arcompact_device::arcompact_handle0f_04(OPS_16)
{
	int breg, creg;

	COMMON16_GET_breg;
	COMMON16_GET_creg;

	REG_16BIT_RANGE(breg);
	REG_16BIT_RANGE(creg);

	uint32_t result = m_regs[breg] & m_regs[creg];
	m_regs[breg] = result;

	return m_pc + (2 >> 0);
}


ARCOMPACT_RETTYPE arcompact_device::arcompact_handle0f_05(OPS_16)
{
	int breg, creg;

	COMMON16_GET_breg;
	COMMON16_GET_creg;

	REG_16BIT_RANGE(breg);
	REG_16BIT_RANGE(creg);

	uint32_t result = m_regs[breg] | m_regs[creg];
	m_regs[breg] = result;

	return m_pc + (2 >> 0);
}


ARCOMPACT_RETTYPE arcompact_device::arcompact_handle0f_07(OPS_16)
{
	int breg, creg;

	COMMON16_GET_breg;
	COMMON16_GET_creg;

	REG_16BIT_RANGE(breg);
	REG_16BIT_RANGE(creg);

	uint32_t result = m_regs[breg] ^ m_regs[creg];
	m_regs[breg] = result;

	return m_pc + (2 >> 0);
}


ARCOMPACT_RETTYPE arcompact_device::arcompact_handle0f_0f(OPS_16)
{
	int breg, creg;

	COMMON16_GET_breg;
	COMMON16_GET_creg;

	REG_16BIT_RANGE(breg);
	REG_16BIT_RANGE(creg);

	uint32_t result = m_regs[creg] & 0x000000ff;
	m_regs[breg] = result;

	return m_pc + (2 >> 0);
}


ARCOMPACT_RETTYPE arcompact_device::arcompact_handle0f_10(OPS_16)
{
	int breg, creg;

	COMMON16_GET_breg;
	COMMON16_GET_creg;

	REG_16BIT_RANGE(breg);
	REG_16BIT_RANGE(creg);

	uint32_t result = m_regs[creg] & 0x0000ffff;
	m_regs[breg] = result;

	return m_pc + (2 >> 0);
}


ARCOMPACT_RETTYPE arcompact_device::arcompact_handle0f_13(OPS_16)
{
	int breg, creg;

	COMMON16_GET_breg;
	COMMON16_GET_creg;

	REG_16BIT_RANGE(breg);
	REG_16BIT_RANGE(creg);

	 uint32_t result = 0 - m_regs[creg];
	m_regs[breg] = result;

	return m_pc + (2 >> 0);
}


ARCOMPACT_RETTYPE arcompact_device::arcompact_handle0f_14(OPS_16)
{
	int breg, creg;

	COMMON16_GET_breg;
	COMMON16_GET_creg;

	REG_16BIT_RANGE(breg);
	REG_16BIT_RANGE(creg);

	 uint32_t result = m_regs[breg] + (m_regs[creg] <<1);
	m_regs[breg] = result;

	return m_pc + (2 >> 0);
}


ARCOMPACT_RETTYPE arcompact_device::arcompact_handle0f_15(OPS_16)
{
	int breg, creg;

	COMMON16_GET_breg;
	COMMON16_GET_creg;

	REG_16BIT_RANGE(breg);
	REG_16BIT_RANGE(creg);

	 uint32_t result = m_regs[breg] + (m_regs[creg] <<2);
	m_regs[breg] = result;

	return m_pc + (2 >> 0);
}


ARCOMPACT_RETTYPE arcompact_device::arcompact_handle0f_16(OPS_16)
{
	int breg, creg;

	COMMON16_GET_breg;
	COMMON16_GET_creg;

	REG_16BIT_RANGE(breg);
	REG_16BIT_RANGE(creg);

	 uint32_t result = m_regs[breg] + (m_regs[creg] <<3);
	m_regs[breg] = result;

	return m_pc + (2 >> 0);
}


ARCOMPACT_RETTYPE arcompact_device::arcompact_handle0f_19(OPS_16)
{
	int breg, creg;

	COMMON16_GET_breg;
	COMMON16_GET_creg;

	REG_16BIT_RANGE(breg);
	REG_16BIT_RANGE(creg);

	uint32_t result = m_regs[breg] >> (m_regs[creg]&0x1f);
	m_regs[breg] = result;

	return m_pc + (2 >> 0);
}


ARCOMPACT_RETTYPE arcompact_device::arcompact_handle0f_1b(OPS_16)
{
	int breg, creg;

	COMMON16_GET_breg;
	COMMON16_GET_creg;

	REG_16BIT_RANGE(breg);
	REG_16BIT_RANGE(creg);

	uint32_t result = m_regs[creg] << 1;
	m_regs[breg] = result;

	return m_pc + (2 >> 0);
}


ARCOMPACT_RETTYPE arcompact_device::arcompact_handle17_00(OPS_16)
{
	int breg, u;
	
	COMMON16_GET_breg;
	COMMON16_GET_u5;
	
	REG_16BIT_RANGE(breg);
	
	m_regs[breg] = m_regs[breg] << (u&0x1f);
	
	return m_pc + (2 >> 0);
}


ARCOMPACT_RETTYPE arcompact_device::arcompact_handle17_01(OPS_16)
{
	int breg, u;
	
	COMMON16_GET_breg;
	COMMON16_GET_u5;
	
	REG_16BIT_RANGE(breg);
	
	m_regs[breg] = m_regs[breg] >> (u&0x1f);
	
	return m_pc + (2 >> 0);
}


ARCOMPACT_RETTYPE arcompact_device::arcompact_handle17_02(OPS_16)
{
	int breg, u;
	
	COMMON16_GET_breg;
	COMMON16_GET_u5;
	
	REG_16BIT_RANGE(breg);
	
	int32_t temp = (int32_t)m_regs[breg]; m_regs[breg] = temp >> (u&0x1f); // treat it as a signed value, so sign extension occurs during shift
	
	return m_pc + (2 >> 0);
}


ARCOMPACT_RETTYPE arcompact_device::arcompact_handle17_03(OPS_16)
{
	int breg, u;
	
	COMMON16_GET_breg;
	COMMON16_GET_u5;
	
	REG_16BIT_RANGE(breg);
	
	m_regs[breg] = m_regs[breg] - u;
	
	return m_pc + (2 >> 0);
}


ARCOMPACT_RETTYPE arcompact_device::arcompact_handle17_04(OPS_16)
{
	int breg, u;
	
	COMMON16_GET_breg;
	COMMON16_GET_u5;
	
	REG_16BIT_RANGE(breg);
	
	m_regs[breg] = m_regs[breg] | (1 << (u & 0x1f));
	
	return m_pc + (2 >> 0);
}


ARCOMPACT_RETTYPE arcompact_device::arcompact_handle17_06(OPS_16)
{
	int breg, u;
	
	COMMON16_GET_breg;
	COMMON16_GET_u5;
	
	REG_16BIT_RANGE(breg);
	
	m_regs[breg] = m_regs[breg] | ((1 << (u + 1)) - 1);
	
	return m_pc + (2 >> 0);
}


