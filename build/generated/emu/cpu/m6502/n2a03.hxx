void n2a03_device::adc_nd_aba_full()
{

	if(icount == 0) { inst_substate = 1; return; }
	TMP = read_pc();
	icount--;

	if(icount == 0) { inst_substate = 2; return; }
	TMP = set_h(TMP, read_pc());
	icount--;

	if(icount == 0) { inst_substate = 3; return; }
	TMP = read(TMP);
	icount--;

	do_adc_nd(TMP);

	if(icount == 0) { inst_substate = 4; return; }
	prefetch();
	icount--;

}

void n2a03_device::adc_nd_aba_partial()
{
switch(inst_substate) {
case 0:

	if(icount == 0) { inst_substate = 1; return; }
case 1:
	TMP = read_pc();
	icount--;

	if(icount == 0) { inst_substate = 2; return; }
case 2:
	TMP = set_h(TMP, read_pc());
	icount--;

	if(icount == 0) { inst_substate = 3; return; }
case 3:
	TMP = read(TMP);
	icount--;

	do_adc_nd(TMP);

	if(icount == 0) { inst_substate = 4; return; }
case 4:
	prefetch();
	icount--;

}
	inst_substate = 0;
}


void n2a03_device::adc_nd_abx_full()
{

	if(icount == 0) { inst_substate = 1; return; }
	TMP = read_pc();
	icount--;

	if(icount == 0) { inst_substate = 2; return; }
	TMP = set_h(TMP, read_pc());
	icount--;

	if(page_changing(TMP, X)) {

	if(icount == 0) { inst_substate = 3; return; }
		read(set_l(TMP, TMP+X));
	icount--;

	}

	TMP += X;

	if(icount == 0) { inst_substate = 4; return; }
	TMP = read(TMP);
	icount--;

	do_adc_nd(TMP);

	if(icount == 0) { inst_substate = 5; return; }
	prefetch();
	icount--;

}

void n2a03_device::adc_nd_abx_partial()
{
switch(inst_substate) {
case 0:

	if(icount == 0) { inst_substate = 1; return; }
case 1:
	TMP = read_pc();
	icount--;

	if(icount == 0) { inst_substate = 2; return; }
case 2:
	TMP = set_h(TMP, read_pc());
	icount--;

	if(page_changing(TMP, X)) {

	if(icount == 0) { inst_substate = 3; return; }
case 3:
		read(set_l(TMP, TMP+X));
	icount--;

	}

	TMP += X;

	if(icount == 0) { inst_substate = 4; return; }
case 4:
	TMP = read(TMP);
	icount--;

	do_adc_nd(TMP);

	if(icount == 0) { inst_substate = 5; return; }
case 5:
	prefetch();
	icount--;

}
	inst_substate = 0;
}


void n2a03_device::adc_nd_aby_full()
{

	if(icount == 0) { inst_substate = 1; return; }
	TMP = read_pc();
	icount--;

	if(icount == 0) { inst_substate = 2; return; }
	TMP = set_h(TMP, read_pc());
	icount--;

	if(page_changing(TMP, Y)) {

	if(icount == 0) { inst_substate = 3; return; }
		read(set_l(TMP, TMP+Y));
	icount--;

	}

	TMP += Y;

	if(icount == 0) { inst_substate = 4; return; }
	TMP = read(TMP);
	icount--;

	do_adc_nd(TMP);

	if(icount == 0) { inst_substate = 5; return; }
	prefetch();
	icount--;

}

void n2a03_device::adc_nd_aby_partial()
{
switch(inst_substate) {
case 0:

	if(icount == 0) { inst_substate = 1; return; }
case 1:
	TMP = read_pc();
	icount--;

	if(icount == 0) { inst_substate = 2; return; }
case 2:
	TMP = set_h(TMP, read_pc());
	icount--;

	if(page_changing(TMP, Y)) {

	if(icount == 0) { inst_substate = 3; return; }
case 3:
		read(set_l(TMP, TMP+Y));
	icount--;

	}

	TMP += Y;

	if(icount == 0) { inst_substate = 4; return; }
case 4:
	TMP = read(TMP);
	icount--;

	do_adc_nd(TMP);

	if(icount == 0) { inst_substate = 5; return; }
case 5:
	prefetch();
	icount--;

}
	inst_substate = 0;
}


void n2a03_device::adc_nd_idx_full()
{

	if(icount == 0) { inst_substate = 1; return; }
	TMP2 = read_pc();
	icount--;

	if(icount == 0) { inst_substate = 2; return; }
	read(TMP2);
	icount--;

	TMP2 += X;

	if(icount == 0) { inst_substate = 3; return; }
	TMP = read(TMP2 & 0xff);
	icount--;

	if(icount == 0) { inst_substate = 4; return; }
	TMP = set_h(TMP, read((TMP2+1) & 0xff));
	icount--;

	if(icount == 0) { inst_substate = 5; return; }
	do_adc_nd(read(TMP));
	icount--;

	if(icount == 0) { inst_substate = 6; return; }
	prefetch();
	icount--;

}

void n2a03_device::adc_nd_idx_partial()
{
switch(inst_substate) {
case 0:

	if(icount == 0) { inst_substate = 1; return; }
case 1:
	TMP2 = read_pc();
	icount--;

	if(icount == 0) { inst_substate = 2; return; }
case 2:
	read(TMP2);
	icount--;

	TMP2 += X;

	if(icount == 0) { inst_substate = 3; return; }
case 3:
	TMP = read(TMP2 & 0xff);
	icount--;

	if(icount == 0) { inst_substate = 4; return; }
case 4:
	TMP = set_h(TMP, read((TMP2+1) & 0xff));
	icount--;

	if(icount == 0) { inst_substate = 5; return; }
case 5:
	do_adc_nd(read(TMP));
	icount--;

	if(icount == 0) { inst_substate = 6; return; }
case 6:
	prefetch();
	icount--;

}
	inst_substate = 0;
}


void n2a03_device::adc_nd_idy_full()
{

	if(icount == 0) { inst_substate = 1; return; }
	TMP2 = read_pc();
	icount--;

	if(icount == 0) { inst_substate = 2; return; }
	TMP = read(TMP2);
	icount--;

	if(icount == 0) { inst_substate = 3; return; }
	TMP = set_h(TMP, read((TMP2+1) & 0xff));
	icount--;

	if(page_changing(TMP, Y)) {

	if(icount == 0) { inst_substate = 4; return; }
		read(set_l(TMP, TMP+Y));
	icount--;

	}

	if(icount == 0) { inst_substate = 5; return; }
	do_adc_nd(read(TMP+Y));
	icount--;

	if(icount == 0) { inst_substate = 6; return; }
	prefetch();
	icount--;

}

void n2a03_device::adc_nd_idy_partial()
{
switch(inst_substate) {
case 0:

	if(icount == 0) { inst_substate = 1; return; }
case 1:
	TMP2 = read_pc();
	icount--;

	if(icount == 0) { inst_substate = 2; return; }
case 2:
	TMP = read(TMP2);
	icount--;

	if(icount == 0) { inst_substate = 3; return; }
case 3:
	TMP = set_h(TMP, read((TMP2+1) & 0xff));
	icount--;

	if(page_changing(TMP, Y)) {

	if(icount == 0) { inst_substate = 4; return; }
case 4:
		read(set_l(TMP, TMP+Y));
	icount--;

	}

	if(icount == 0) { inst_substate = 5; return; }
case 5:
	do_adc_nd(read(TMP+Y));
	icount--;

	if(icount == 0) { inst_substate = 6; return; }
case 6:
	prefetch();
	icount--;

}
	inst_substate = 0;
}


void n2a03_device::adc_nd_imm_full()
{

	if(icount == 0) { inst_substate = 1; return; }
	TMP = read_pc();
	icount--;

	do_adc_nd(TMP);

	if(icount == 0) { inst_substate = 2; return; }
	prefetch();
	icount--;

}

void n2a03_device::adc_nd_imm_partial()
{
switch(inst_substate) {
case 0:

	if(icount == 0) { inst_substate = 1; return; }
case 1:
	TMP = read_pc();
	icount--;

	do_adc_nd(TMP);

	if(icount == 0) { inst_substate = 2; return; }
case 2:
	prefetch();
	icount--;

}
	inst_substate = 0;
}


void n2a03_device::adc_nd_zpg_full()
{

	if(icount == 0) { inst_substate = 1; return; }
	TMP = read_pc();
	icount--;

	if(icount == 0) { inst_substate = 2; return; }
	TMP = read(TMP);
	icount--;

	do_adc_nd(TMP);

	if(icount == 0) { inst_substate = 3; return; }
	prefetch();
	icount--;

}

void n2a03_device::adc_nd_zpg_partial()
{
switch(inst_substate) {
case 0:

	if(icount == 0) { inst_substate = 1; return; }
case 1:
	TMP = read_pc();
	icount--;

	if(icount == 0) { inst_substate = 2; return; }
case 2:
	TMP = read(TMP);
	icount--;

	do_adc_nd(TMP);

	if(icount == 0) { inst_substate = 3; return; }
case 3:
	prefetch();
	icount--;

}
	inst_substate = 0;
}


void n2a03_device::adc_nd_zpx_full()
{

	if(icount == 0) { inst_substate = 1; return; }
	TMP = read_pc();
	icount--;

	if(icount == 0) { inst_substate = 2; return; }
	read(TMP);
	icount--;

	if(icount == 0) { inst_substate = 3; return; }
	TMP = read(uint8_t(TMP+X));
	icount--;

	do_adc_nd(TMP);

	if(icount == 0) { inst_substate = 4; return; }
	prefetch();
	icount--;

}

void n2a03_device::adc_nd_zpx_partial()
{
switch(inst_substate) {
case 0:

	if(icount == 0) { inst_substate = 1; return; }
case 1:
	TMP = read_pc();
	icount--;

	if(icount == 0) { inst_substate = 2; return; }
case 2:
	read(TMP);
	icount--;

	if(icount == 0) { inst_substate = 3; return; }
case 3:
	TMP = read(uint8_t(TMP+X));
	icount--;

	do_adc_nd(TMP);

	if(icount == 0) { inst_substate = 4; return; }
case 4:
	prefetch();
	icount--;

}
	inst_substate = 0;
}


void n2a03_device::arr_nd_imm_full()
{

	if(icount == 0) { inst_substate = 1; return; }
	A &= read_pc();
	icount--;

	do_arr_nd();

	if(icount == 0) { inst_substate = 2; return; }
	prefetch();
	icount--;

}

void n2a03_device::arr_nd_imm_partial()
{
switch(inst_substate) {
case 0:

	if(icount == 0) { inst_substate = 1; return; }
case 1:
	A &= read_pc();
	icount--;

	do_arr_nd();

	if(icount == 0) { inst_substate = 2; return; }
case 2:
	prefetch();
	icount--;

}
	inst_substate = 0;
}


void n2a03_device::rra_nd_aba_full()
{

	if(icount == 0) { inst_substate = 1; return; }
	TMP = read_pc();
	icount--;

	if(icount == 0) { inst_substate = 2; return; }
	TMP = set_h(TMP, read_pc());
	icount--;

	if(icount == 0) { inst_substate = 3; return; }
	TMP2 = read(TMP);
	icount--;

	if(icount == 0) { inst_substate = 4; return; }
	write(TMP, TMP2);
	icount--;

	TMP2 = do_ror(TMP2);

	if(icount == 0) { inst_substate = 5; return; }
	write(TMP, TMP2);
	icount--;

	do_adc_nd(TMP2);

	if(icount == 0) { inst_substate = 6; return; }
	prefetch();
	icount--;

}

void n2a03_device::rra_nd_aba_partial()
{
switch(inst_substate) {
case 0:

	if(icount == 0) { inst_substate = 1; return; }
case 1:
	TMP = read_pc();
	icount--;

	if(icount == 0) { inst_substate = 2; return; }
case 2:
	TMP = set_h(TMP, read_pc());
	icount--;

	if(icount == 0) { inst_substate = 3; return; }
case 3:
	TMP2 = read(TMP);
	icount--;

	if(icount == 0) { inst_substate = 4; return; }
case 4:
	write(TMP, TMP2);
	icount--;

	TMP2 = do_ror(TMP2);

	if(icount == 0) { inst_substate = 5; return; }
case 5:
	write(TMP, TMP2);
	icount--;

	do_adc_nd(TMP2);

	if(icount == 0) { inst_substate = 6; return; }
case 6:
	prefetch();
	icount--;

}
	inst_substate = 0;
}


void n2a03_device::rra_nd_abx_full()
{

	if(icount == 0) { inst_substate = 1; return; }
	TMP = read_pc();
	icount--;

	if(icount == 0) { inst_substate = 2; return; }
	TMP = set_h(TMP, read_pc());
	icount--;

	if(icount == 0) { inst_substate = 3; return; }
	read(set_l(TMP, TMP+X));
	icount--;

	TMP += X;

	if(icount == 0) { inst_substate = 4; return; }
	TMP2 = read(TMP);
	icount--;

	if(icount == 0) { inst_substate = 5; return; }
	write(TMP, TMP2);
	icount--;

	TMP2 = do_ror(TMP2);

	if(icount == 0) { inst_substate = 6; return; }
	write(TMP, TMP2);
	icount--;

	do_adc_nd(TMP2);

	if(icount == 0) { inst_substate = 7; return; }
	prefetch();
	icount--;

}

void n2a03_device::rra_nd_abx_partial()
{
switch(inst_substate) {
case 0:

	if(icount == 0) { inst_substate = 1; return; }
case 1:
	TMP = read_pc();
	icount--;

	if(icount == 0) { inst_substate = 2; return; }
case 2:
	TMP = set_h(TMP, read_pc());
	icount--;

	if(icount == 0) { inst_substate = 3; return; }
case 3:
	read(set_l(TMP, TMP+X));
	icount--;

	TMP += X;

	if(icount == 0) { inst_substate = 4; return; }
case 4:
	TMP2 = read(TMP);
	icount--;

	if(icount == 0) { inst_substate = 5; return; }
case 5:
	write(TMP, TMP2);
	icount--;

	TMP2 = do_ror(TMP2);

	if(icount == 0) { inst_substate = 6; return; }
case 6:
	write(TMP, TMP2);
	icount--;

	do_adc_nd(TMP2);

	if(icount == 0) { inst_substate = 7; return; }
case 7:
	prefetch();
	icount--;

}
	inst_substate = 0;
}


void n2a03_device::rra_nd_aby_full()
{

	if(icount == 0) { inst_substate = 1; return; }
	TMP = read_pc();
	icount--;

	if(icount == 0) { inst_substate = 2; return; }
	TMP = set_h(TMP, read_pc());
	icount--;

	if(icount == 0) { inst_substate = 3; return; }
	read(set_l(TMP, TMP+Y));
	icount--;

	TMP += Y;

	if(icount == 0) { inst_substate = 4; return; }
	TMP2 = read(TMP);
	icount--;

	if(icount == 0) { inst_substate = 5; return; }
	write(TMP, TMP2);
	icount--;

	TMP2 = do_ror(TMP2);

	if(icount == 0) { inst_substate = 6; return; }
	write(TMP, TMP2);
	icount--;

	do_adc_nd(TMP2);

	if(icount == 0) { inst_substate = 7; return; }
	prefetch();
	icount--;

}

void n2a03_device::rra_nd_aby_partial()
{
switch(inst_substate) {
case 0:

	if(icount == 0) { inst_substate = 1; return; }
case 1:
	TMP = read_pc();
	icount--;

	if(icount == 0) { inst_substate = 2; return; }
case 2:
	TMP = set_h(TMP, read_pc());
	icount--;

	if(icount == 0) { inst_substate = 3; return; }
case 3:
	read(set_l(TMP, TMP+Y));
	icount--;

	TMP += Y;

	if(icount == 0) { inst_substate = 4; return; }
case 4:
	TMP2 = read(TMP);
	icount--;

	if(icount == 0) { inst_substate = 5; return; }
case 5:
	write(TMP, TMP2);
	icount--;

	TMP2 = do_ror(TMP2);

	if(icount == 0) { inst_substate = 6; return; }
case 6:
	write(TMP, TMP2);
	icount--;

	do_adc_nd(TMP2);

	if(icount == 0) { inst_substate = 7; return; }
case 7:
	prefetch();
	icount--;

}
	inst_substate = 0;
}


void n2a03_device::rra_nd_idx_full()
{

	if(icount == 0) { inst_substate = 1; return; }
	TMP2 = read_pc();
	icount--;

	if(icount == 0) { inst_substate = 2; return; }
	read(TMP2);
	icount--;

	TMP2 += X;

	if(icount == 0) { inst_substate = 3; return; }
	TMP = read(TMP2 & 0xff);
	icount--;

	if(icount == 0) { inst_substate = 4; return; }
	TMP = set_h(TMP, read((TMP2+1) & 0xff));
	icount--;

	if(icount == 0) { inst_substate = 5; return; }
	TMP2 = read(TMP);
	icount--;

	if(icount == 0) { inst_substate = 6; return; }
	write(TMP, TMP2);
	icount--;

	TMP2 = do_ror(TMP2);

	if(icount == 0) { inst_substate = 7; return; }
	write(TMP, TMP2);
	icount--;

	do_adc_nd(TMP2);

	if(icount == 0) { inst_substate = 8; return; }
	prefetch();
	icount--;

}

void n2a03_device::rra_nd_idx_partial()
{
switch(inst_substate) {
case 0:

	if(icount == 0) { inst_substate = 1; return; }
case 1:
	TMP2 = read_pc();
	icount--;

	if(icount == 0) { inst_substate = 2; return; }
case 2:
	read(TMP2);
	icount--;

	TMP2 += X;

	if(icount == 0) { inst_substate = 3; return; }
case 3:
	TMP = read(TMP2 & 0xff);
	icount--;

	if(icount == 0) { inst_substate = 4; return; }
case 4:
	TMP = set_h(TMP, read((TMP2+1) & 0xff));
	icount--;

	if(icount == 0) { inst_substate = 5; return; }
case 5:
	TMP2 = read(TMP);
	icount--;

	if(icount == 0) { inst_substate = 6; return; }
case 6:
	write(TMP, TMP2);
	icount--;

	TMP2 = do_ror(TMP2);

	if(icount == 0) { inst_substate = 7; return; }
case 7:
	write(TMP, TMP2);
	icount--;

	do_adc_nd(TMP2);

	if(icount == 0) { inst_substate = 8; return; }
case 8:
	prefetch();
	icount--;

}
	inst_substate = 0;
}


void n2a03_device::rra_nd_idy_full()
{

	if(icount == 0) { inst_substate = 1; return; }
	TMP2 = read_pc();
	icount--;

	if(icount == 0) { inst_substate = 2; return; }
	TMP = read(TMP2);
	icount--;

	if(icount == 0) { inst_substate = 3; return; }
	TMP = set_h(TMP, read((TMP2+1) & 0xff));
	icount--;

	if(icount == 0) { inst_substate = 4; return; }
	read(set_l(TMP, TMP+Y));
	icount--;

	TMP += Y;

	if(icount == 0) { inst_substate = 5; return; }
	TMP2 = read(TMP);
	icount--;

	if(icount == 0) { inst_substate = 6; return; }
	write(TMP, TMP2);
	icount--;

	TMP2 = do_ror(TMP2);

	if(icount == 0) { inst_substate = 7; return; }
	write(TMP, TMP2);
	icount--;

	do_adc_nd(TMP2);

	if(icount == 0) { inst_substate = 8; return; }
	prefetch();
	icount--;

}

void n2a03_device::rra_nd_idy_partial()
{
switch(inst_substate) {
case 0:

	if(icount == 0) { inst_substate = 1; return; }
case 1:
	TMP2 = read_pc();
	icount--;

	if(icount == 0) { inst_substate = 2; return; }
case 2:
	TMP = read(TMP2);
	icount--;

	if(icount == 0) { inst_substate = 3; return; }
case 3:
	TMP = set_h(TMP, read((TMP2+1) & 0xff));
	icount--;

	if(icount == 0) { inst_substate = 4; return; }
case 4:
	read(set_l(TMP, TMP+Y));
	icount--;

	TMP += Y;

	if(icount == 0) { inst_substate = 5; return; }
case 5:
	TMP2 = read(TMP);
	icount--;

	if(icount == 0) { inst_substate = 6; return; }
case 6:
	write(TMP, TMP2);
	icount--;

	TMP2 = do_ror(TMP2);

	if(icount == 0) { inst_substate = 7; return; }
case 7:
	write(TMP, TMP2);
	icount--;

	do_adc_nd(TMP2);

	if(icount == 0) { inst_substate = 8; return; }
case 8:
	prefetch();
	icount--;

}
	inst_substate = 0;
}


void n2a03_device::rra_nd_zpg_full()
{

	if(icount == 0) { inst_substate = 1; return; }
	TMP = read_pc();
	icount--;

	if(icount == 0) { inst_substate = 2; return; }
	TMP2 = read(TMP);
	icount--;

	if(icount == 0) { inst_substate = 3; return; }
	write(TMP, TMP2);
	icount--;

	TMP2 = do_ror(TMP2);

	if(icount == 0) { inst_substate = 4; return; }
	write(TMP, TMP2);
	icount--;

	do_adc_nd(TMP2);

	if(icount == 0) { inst_substate = 5; return; }
	prefetch();
	icount--;

}

void n2a03_device::rra_nd_zpg_partial()
{
switch(inst_substate) {
case 0:

	if(icount == 0) { inst_substate = 1; return; }
case 1:
	TMP = read_pc();
	icount--;

	if(icount == 0) { inst_substate = 2; return; }
case 2:
	TMP2 = read(TMP);
	icount--;

	if(icount == 0) { inst_substate = 3; return; }
case 3:
	write(TMP, TMP2);
	icount--;

	TMP2 = do_ror(TMP2);

	if(icount == 0) { inst_substate = 4; return; }
case 4:
	write(TMP, TMP2);
	icount--;

	do_adc_nd(TMP2);

	if(icount == 0) { inst_substate = 5; return; }
case 5:
	prefetch();
	icount--;

}
	inst_substate = 0;
}


void n2a03_device::rra_nd_zpx_full()
{

	if(icount == 0) { inst_substate = 1; return; }
	TMP = read_pc();
	icount--;

	if(icount == 0) { inst_substate = 2; return; }
	read(TMP);
	icount--;

	TMP = uint8_t(TMP+X);

	if(icount == 0) { inst_substate = 3; return; }
	TMP2 = read(TMP);
	icount--;

	if(icount == 0) { inst_substate = 4; return; }
	write(TMP, TMP2);
	icount--;

	TMP2 = do_ror(TMP2);

	if(icount == 0) { inst_substate = 5; return; }
	write(TMP, TMP2);
	icount--;

	do_adc_nd(TMP2);

	if(icount == 0) { inst_substate = 6; return; }
	prefetch();
	icount--;

}

void n2a03_device::rra_nd_zpx_partial()
{
switch(inst_substate) {
case 0:

	if(icount == 0) { inst_substate = 1; return; }
case 1:
	TMP = read_pc();
	icount--;

	if(icount == 0) { inst_substate = 2; return; }
case 2:
	read(TMP);
	icount--;

	TMP = uint8_t(TMP+X);

	if(icount == 0) { inst_substate = 3; return; }
case 3:
	TMP2 = read(TMP);
	icount--;

	if(icount == 0) { inst_substate = 4; return; }
case 4:
	write(TMP, TMP2);
	icount--;

	TMP2 = do_ror(TMP2);

	if(icount == 0) { inst_substate = 5; return; }
case 5:
	write(TMP, TMP2);
	icount--;

	do_adc_nd(TMP2);

	if(icount == 0) { inst_substate = 6; return; }
case 6:
	prefetch();
	icount--;

}
	inst_substate = 0;
}


void n2a03_device::sbc_nd_aba_full()
{

	if(icount == 0) { inst_substate = 1; return; }
	TMP = read_pc();
	icount--;

	if(icount == 0) { inst_substate = 2; return; }
	TMP = set_h(TMP, read_pc());
	icount--;

	if(icount == 0) { inst_substate = 3; return; }
	TMP = read(TMP);
	icount--;

	do_sbc_nd(TMP);

	if(icount == 0) { inst_substate = 4; return; }
	prefetch();
	icount--;

}

void n2a03_device::sbc_nd_aba_partial()
{
switch(inst_substate) {
case 0:

	if(icount == 0) { inst_substate = 1; return; }
case 1:
	TMP = read_pc();
	icount--;

	if(icount == 0) { inst_substate = 2; return; }
case 2:
	TMP = set_h(TMP, read_pc());
	icount--;

	if(icount == 0) { inst_substate = 3; return; }
case 3:
	TMP = read(TMP);
	icount--;

	do_sbc_nd(TMP);

	if(icount == 0) { inst_substate = 4; return; }
case 4:
	prefetch();
	icount--;

}
	inst_substate = 0;
}


void n2a03_device::sbc_nd_abx_full()
{

	if(icount == 0) { inst_substate = 1; return; }
	TMP = read_pc();
	icount--;

	if(icount == 0) { inst_substate = 2; return; }
	TMP = set_h(TMP, read_pc());
	icount--;

	if(page_changing(TMP, X)) {

	if(icount == 0) { inst_substate = 3; return; }
		read(set_l(TMP, TMP+X));
	icount--;

	}

	TMP += X;

	if(icount == 0) { inst_substate = 4; return; }
	TMP = read(TMP);
	icount--;

	do_sbc_nd(TMP);

	if(icount == 0) { inst_substate = 5; return; }
	prefetch();
	icount--;

}

void n2a03_device::sbc_nd_abx_partial()
{
switch(inst_substate) {
case 0:

	if(icount == 0) { inst_substate = 1; return; }
case 1:
	TMP = read_pc();
	icount--;

	if(icount == 0) { inst_substate = 2; return; }
case 2:
	TMP = set_h(TMP, read_pc());
	icount--;

	if(page_changing(TMP, X)) {

	if(icount == 0) { inst_substate = 3; return; }
case 3:
		read(set_l(TMP, TMP+X));
	icount--;

	}

	TMP += X;

	if(icount == 0) { inst_substate = 4; return; }
case 4:
	TMP = read(TMP);
	icount--;

	do_sbc_nd(TMP);

	if(icount == 0) { inst_substate = 5; return; }
case 5:
	prefetch();
	icount--;

}
	inst_substate = 0;
}


void n2a03_device::sbc_nd_aby_full()
{

	if(icount == 0) { inst_substate = 1; return; }
	TMP = read_pc();
	icount--;

	if(icount == 0) { inst_substate = 2; return; }
	TMP = set_h(TMP, read_pc());
	icount--;

	if(page_changing(TMP, Y)) {

	if(icount == 0) { inst_substate = 3; return; }
		read(set_l(TMP, TMP+Y));
	icount--;

	}

	TMP += Y;

	if(icount == 0) { inst_substate = 4; return; }
	TMP = read(TMP);
	icount--;

	do_sbc_nd(TMP);

	if(icount == 0) { inst_substate = 5; return; }
	prefetch();
	icount--;

}

void n2a03_device::sbc_nd_aby_partial()
{
switch(inst_substate) {
case 0:

	if(icount == 0) { inst_substate = 1; return; }
case 1:
	TMP = read_pc();
	icount--;

	if(icount == 0) { inst_substate = 2; return; }
case 2:
	TMP = set_h(TMP, read_pc());
	icount--;

	if(page_changing(TMP, Y)) {

	if(icount == 0) { inst_substate = 3; return; }
case 3:
		read(set_l(TMP, TMP+Y));
	icount--;

	}

	TMP += Y;

	if(icount == 0) { inst_substate = 4; return; }
case 4:
	TMP = read(TMP);
	icount--;

	do_sbc_nd(TMP);

	if(icount == 0) { inst_substate = 5; return; }
case 5:
	prefetch();
	icount--;

}
	inst_substate = 0;
}


void n2a03_device::sbc_nd_idx_full()
{

	if(icount == 0) { inst_substate = 1; return; }
	TMP2 = read_pc();
	icount--;

	if(icount == 0) { inst_substate = 2; return; }
	read(TMP2);
	icount--;

	TMP2 += X;

	if(icount == 0) { inst_substate = 3; return; }
	TMP = read(TMP2 & 0xff);
	icount--;

	if(icount == 0) { inst_substate = 4; return; }
	TMP = set_h(TMP, read((TMP2+1) & 0xff));
	icount--;

	if(icount == 0) { inst_substate = 5; return; }
	do_sbc_nd(read(TMP));
	icount--;

	if(icount == 0) { inst_substate = 6; return; }
	prefetch();
	icount--;

}

void n2a03_device::sbc_nd_idx_partial()
{
switch(inst_substate) {
case 0:

	if(icount == 0) { inst_substate = 1; return; }
case 1:
	TMP2 = read_pc();
	icount--;

	if(icount == 0) { inst_substate = 2; return; }
case 2:
	read(TMP2);
	icount--;

	TMP2 += X;

	if(icount == 0) { inst_substate = 3; return; }
case 3:
	TMP = read(TMP2 & 0xff);
	icount--;

	if(icount == 0) { inst_substate = 4; return; }
case 4:
	TMP = set_h(TMP, read((TMP2+1) & 0xff));
	icount--;

	if(icount == 0) { inst_substate = 5; return; }
case 5:
	do_sbc_nd(read(TMP));
	icount--;

	if(icount == 0) { inst_substate = 6; return; }
case 6:
	prefetch();
	icount--;

}
	inst_substate = 0;
}


void n2a03_device::sbc_nd_idy_full()
{

	if(icount == 0) { inst_substate = 1; return; }
	TMP2 = read_pc();
	icount--;

	if(icount == 0) { inst_substate = 2; return; }
	TMP = read(TMP2);
	icount--;

	if(icount == 0) { inst_substate = 3; return; }
	TMP = set_h(TMP, read((TMP2+1) & 0xff));
	icount--;

	if(page_changing(TMP, Y)) {

	if(icount == 0) { inst_substate = 4; return; }
		read(set_l(TMP, TMP+Y));
	icount--;

	}

	if(icount == 0) { inst_substate = 5; return; }
	do_sbc_nd(read(TMP+Y));
	icount--;

	if(icount == 0) { inst_substate = 6; return; }
	prefetch();
	icount--;

}

void n2a03_device::sbc_nd_idy_partial()
{
switch(inst_substate) {
case 0:

	if(icount == 0) { inst_substate = 1; return; }
case 1:
	TMP2 = read_pc();
	icount--;

	if(icount == 0) { inst_substate = 2; return; }
case 2:
	TMP = read(TMP2);
	icount--;

	if(icount == 0) { inst_substate = 3; return; }
case 3:
	TMP = set_h(TMP, read((TMP2+1) & 0xff));
	icount--;

	if(page_changing(TMP, Y)) {

	if(icount == 0) { inst_substate = 4; return; }
case 4:
		read(set_l(TMP, TMP+Y));
	icount--;

	}

	if(icount == 0) { inst_substate = 5; return; }
case 5:
	do_sbc_nd(read(TMP+Y));
	icount--;

	if(icount == 0) { inst_substate = 6; return; }
case 6:
	prefetch();
	icount--;

}
	inst_substate = 0;
}


void n2a03_device::sbc_nd_imm_full()
{

	if(icount == 0) { inst_substate = 1; return; }
	TMP = read_pc();
	icount--;

	do_sbc_nd(TMP);

	if(icount == 0) { inst_substate = 2; return; }
	prefetch();
	icount--;

}

void n2a03_device::sbc_nd_imm_partial()
{
switch(inst_substate) {
case 0:

	if(icount == 0) { inst_substate = 1; return; }
case 1:
	TMP = read_pc();
	icount--;

	do_sbc_nd(TMP);

	if(icount == 0) { inst_substate = 2; return; }
case 2:
	prefetch();
	icount--;

}
	inst_substate = 0;
}


void n2a03_device::sbc_nd_zpg_full()
{

	if(icount == 0) { inst_substate = 1; return; }
	TMP = read_pc();
	icount--;

	if(icount == 0) { inst_substate = 2; return; }
	TMP = read(TMP);
	icount--;

	do_sbc_nd(TMP);

	if(icount == 0) { inst_substate = 3; return; }
	prefetch();
	icount--;

}

void n2a03_device::sbc_nd_zpg_partial()
{
switch(inst_substate) {
case 0:

	if(icount == 0) { inst_substate = 1; return; }
case 1:
	TMP = read_pc();
	icount--;

	if(icount == 0) { inst_substate = 2; return; }
case 2:
	TMP = read(TMP);
	icount--;

	do_sbc_nd(TMP);

	if(icount == 0) { inst_substate = 3; return; }
case 3:
	prefetch();
	icount--;

}
	inst_substate = 0;
}


void n2a03_device::sbc_nd_zpx_full()
{

	if(icount == 0) { inst_substate = 1; return; }
	TMP = read_pc();
	icount--;

	if(icount == 0) { inst_substate = 2; return; }
	read(TMP);
	icount--;

	if(icount == 0) { inst_substate = 3; return; }
	TMP = read(uint8_t(TMP+X));
	icount--;

	do_sbc_nd(TMP);

	if(icount == 0) { inst_substate = 4; return; }
	prefetch();
	icount--;

}

void n2a03_device::sbc_nd_zpx_partial()
{
switch(inst_substate) {
case 0:

	if(icount == 0) { inst_substate = 1; return; }
case 1:
	TMP = read_pc();
	icount--;

	if(icount == 0) { inst_substate = 2; return; }
case 2:
	read(TMP);
	icount--;

	if(icount == 0) { inst_substate = 3; return; }
case 3:
	TMP = read(uint8_t(TMP+X));
	icount--;

	do_sbc_nd(TMP);

	if(icount == 0) { inst_substate = 4; return; }
case 4:
	prefetch();
	icount--;

}
	inst_substate = 0;
}


void n2a03_device::isb_nd_aba_full()
{

	if(icount == 0) { inst_substate = 1; return; }
	TMP = read_pc();
	icount--;

	if(icount == 0) { inst_substate = 2; return; }
	TMP = set_h(TMP, read_pc());
	icount--;

	if(icount == 0) { inst_substate = 3; return; }
	TMP2 = read(TMP);
	icount--;

	if(icount == 0) { inst_substate = 4; return; }
	write(TMP, TMP2);
	icount--;

	TMP2++;

	if(icount == 0) { inst_substate = 5; return; }
	write(TMP, TMP2);
	icount--;

	do_sbc_nd(TMP2);

	if(icount == 0) { inst_substate = 6; return; }
	prefetch();
	icount--;

}

void n2a03_device::isb_nd_aba_partial()
{
switch(inst_substate) {
case 0:

	if(icount == 0) { inst_substate = 1; return; }
case 1:
	TMP = read_pc();
	icount--;

	if(icount == 0) { inst_substate = 2; return; }
case 2:
	TMP = set_h(TMP, read_pc());
	icount--;

	if(icount == 0) { inst_substate = 3; return; }
case 3:
	TMP2 = read(TMP);
	icount--;

	if(icount == 0) { inst_substate = 4; return; }
case 4:
	write(TMP, TMP2);
	icount--;

	TMP2++;

	if(icount == 0) { inst_substate = 5; return; }
case 5:
	write(TMP, TMP2);
	icount--;

	do_sbc_nd(TMP2);

	if(icount == 0) { inst_substate = 6; return; }
case 6:
	prefetch();
	icount--;

}
	inst_substate = 0;
}


void n2a03_device::isb_nd_abx_full()
{

	if(icount == 0) { inst_substate = 1; return; }
	TMP = read_pc();
	icount--;

	if(icount == 0) { inst_substate = 2; return; }
	TMP = set_h(TMP, read_pc());
	icount--;

	if(icount == 0) { inst_substate = 3; return; }
	read(set_l(TMP, TMP+X));
	icount--;

	TMP += X;

	if(icount == 0) { inst_substate = 4; return; }
	TMP2 = read(TMP);
	icount--;

	if(icount == 0) { inst_substate = 5; return; }
	write(TMP, TMP2);
	icount--;

	TMP2++;

	if(icount == 0) { inst_substate = 6; return; }
	write(TMP, TMP2);
	icount--;

	do_sbc_nd(TMP2);

	if(icount == 0) { inst_substate = 7; return; }
	prefetch();
	icount--;

}

void n2a03_device::isb_nd_abx_partial()
{
switch(inst_substate) {
case 0:

	if(icount == 0) { inst_substate = 1; return; }
case 1:
	TMP = read_pc();
	icount--;

	if(icount == 0) { inst_substate = 2; return; }
case 2:
	TMP = set_h(TMP, read_pc());
	icount--;

	if(icount == 0) { inst_substate = 3; return; }
case 3:
	read(set_l(TMP, TMP+X));
	icount--;

	TMP += X;

	if(icount == 0) { inst_substate = 4; return; }
case 4:
	TMP2 = read(TMP);
	icount--;

	if(icount == 0) { inst_substate = 5; return; }
case 5:
	write(TMP, TMP2);
	icount--;

	TMP2++;

	if(icount == 0) { inst_substate = 6; return; }
case 6:
	write(TMP, TMP2);
	icount--;

	do_sbc_nd(TMP2);

	if(icount == 0) { inst_substate = 7; return; }
case 7:
	prefetch();
	icount--;

}
	inst_substate = 0;
}


void n2a03_device::isb_nd_aby_full()
{

	if(icount == 0) { inst_substate = 1; return; }
	TMP = read_pc();
	icount--;

	if(icount == 0) { inst_substate = 2; return; }
	TMP = set_h(TMP, read_pc());
	icount--;

	if(icount == 0) { inst_substate = 3; return; }
	read(set_l(TMP, TMP+Y));
	icount--;

	TMP += Y;

	if(icount == 0) { inst_substate = 4; return; }
	TMP2 = read(TMP);
	icount--;

	if(icount == 0) { inst_substate = 5; return; }
	write(TMP, TMP2);
	icount--;

	TMP2++;

	if(icount == 0) { inst_substate = 6; return; }
	write(TMP, TMP2);
	icount--;

	do_sbc_nd(TMP2);

	if(icount == 0) { inst_substate = 7; return; }
	prefetch();
	icount--;

}

void n2a03_device::isb_nd_aby_partial()
{
switch(inst_substate) {
case 0:

	if(icount == 0) { inst_substate = 1; return; }
case 1:
	TMP = read_pc();
	icount--;

	if(icount == 0) { inst_substate = 2; return; }
case 2:
	TMP = set_h(TMP, read_pc());
	icount--;

	if(icount == 0) { inst_substate = 3; return; }
case 3:
	read(set_l(TMP, TMP+Y));
	icount--;

	TMP += Y;

	if(icount == 0) { inst_substate = 4; return; }
case 4:
	TMP2 = read(TMP);
	icount--;

	if(icount == 0) { inst_substate = 5; return; }
case 5:
	write(TMP, TMP2);
	icount--;

	TMP2++;

	if(icount == 0) { inst_substate = 6; return; }
case 6:
	write(TMP, TMP2);
	icount--;

	do_sbc_nd(TMP2);

	if(icount == 0) { inst_substate = 7; return; }
case 7:
	prefetch();
	icount--;

}
	inst_substate = 0;
}


void n2a03_device::isb_nd_idx_full()
{

	if(icount == 0) { inst_substate = 1; return; }
	TMP2 = read_pc();
	icount--;

	if(icount == 0) { inst_substate = 2; return; }
	read(TMP2);
	icount--;

	TMP2 += X;

	if(icount == 0) { inst_substate = 3; return; }
	TMP = read(TMP2 & 0xff);
	icount--;

	if(icount == 0) { inst_substate = 4; return; }
	TMP = set_h(TMP, read((TMP2+1) & 0xff));
	icount--;

	if(icount == 0) { inst_substate = 5; return; }
	TMP2 = read(TMP);
	icount--;

	if(icount == 0) { inst_substate = 6; return; }
	write(TMP, TMP2);
	icount--;

	TMP2++;

	if(icount == 0) { inst_substate = 7; return; }
	write(TMP, TMP2);
	icount--;

	do_sbc_nd(TMP2);

	if(icount == 0) { inst_substate = 8; return; }
	prefetch();
	icount--;

}

void n2a03_device::isb_nd_idx_partial()
{
switch(inst_substate) {
case 0:

	if(icount == 0) { inst_substate = 1; return; }
case 1:
	TMP2 = read_pc();
	icount--;

	if(icount == 0) { inst_substate = 2; return; }
case 2:
	read(TMP2);
	icount--;

	TMP2 += X;

	if(icount == 0) { inst_substate = 3; return; }
case 3:
	TMP = read(TMP2 & 0xff);
	icount--;

	if(icount == 0) { inst_substate = 4; return; }
case 4:
	TMP = set_h(TMP, read((TMP2+1) & 0xff));
	icount--;

	if(icount == 0) { inst_substate = 5; return; }
case 5:
	TMP2 = read(TMP);
	icount--;

	if(icount == 0) { inst_substate = 6; return; }
case 6:
	write(TMP, TMP2);
	icount--;

	TMP2++;

	if(icount == 0) { inst_substate = 7; return; }
case 7:
	write(TMP, TMP2);
	icount--;

	do_sbc_nd(TMP2);

	if(icount == 0) { inst_substate = 8; return; }
case 8:
	prefetch();
	icount--;

}
	inst_substate = 0;
}


void n2a03_device::isb_nd_idy_full()
{

	if(icount == 0) { inst_substate = 1; return; }
	TMP2 = read_pc();
	icount--;

	if(icount == 0) { inst_substate = 2; return; }
	TMP = read(TMP2);
	icount--;

	if(icount == 0) { inst_substate = 3; return; }
	TMP = set_h(TMP, read((TMP2+1) & 0xff));
	icount--;

	if(icount == 0) { inst_substate = 4; return; }
	read(set_l(TMP, TMP+Y));
	icount--;

	TMP += Y;

	if(icount == 0) { inst_substate = 5; return; }
	TMP2 = read(TMP);
	icount--;

	if(icount == 0) { inst_substate = 6; return; }
	write(TMP, TMP2);
	icount--;

	TMP2++;

	if(icount == 0) { inst_substate = 7; return; }
	write(TMP, TMP2);
	icount--;

	do_sbc_nd(TMP2);

	if(icount == 0) { inst_substate = 8; return; }
	prefetch();
	icount--;

}

void n2a03_device::isb_nd_idy_partial()
{
switch(inst_substate) {
case 0:

	if(icount == 0) { inst_substate = 1; return; }
case 1:
	TMP2 = read_pc();
	icount--;

	if(icount == 0) { inst_substate = 2; return; }
case 2:
	TMP = read(TMP2);
	icount--;

	if(icount == 0) { inst_substate = 3; return; }
case 3:
	TMP = set_h(TMP, read((TMP2+1) & 0xff));
	icount--;

	if(icount == 0) { inst_substate = 4; return; }
case 4:
	read(set_l(TMP, TMP+Y));
	icount--;

	TMP += Y;

	if(icount == 0) { inst_substate = 5; return; }
case 5:
	TMP2 = read(TMP);
	icount--;

	if(icount == 0) { inst_substate = 6; return; }
case 6:
	write(TMP, TMP2);
	icount--;

	TMP2++;

	if(icount == 0) { inst_substate = 7; return; }
case 7:
	write(TMP, TMP2);
	icount--;

	do_sbc_nd(TMP2);

	if(icount == 0) { inst_substate = 8; return; }
case 8:
	prefetch();
	icount--;

}
	inst_substate = 0;
}


void n2a03_device::isb_nd_zpg_full()
{

	if(icount == 0) { inst_substate = 1; return; }
	TMP = read_pc();
	icount--;

	if(icount == 0) { inst_substate = 2; return; }
	TMP2 = read(TMP);
	icount--;

	if(icount == 0) { inst_substate = 3; return; }
	write(TMP, TMP2);
	icount--;

	TMP2++;

	if(icount == 0) { inst_substate = 4; return; }
	write(TMP, TMP2);
	icount--;

	do_sbc_nd(TMP2);

	if(icount == 0) { inst_substate = 5; return; }
	prefetch();
	icount--;

}

void n2a03_device::isb_nd_zpg_partial()
{
switch(inst_substate) {
case 0:

	if(icount == 0) { inst_substate = 1; return; }
case 1:
	TMP = read_pc();
	icount--;

	if(icount == 0) { inst_substate = 2; return; }
case 2:
	TMP2 = read(TMP);
	icount--;

	if(icount == 0) { inst_substate = 3; return; }
case 3:
	write(TMP, TMP2);
	icount--;

	TMP2++;

	if(icount == 0) { inst_substate = 4; return; }
case 4:
	write(TMP, TMP2);
	icount--;

	do_sbc_nd(TMP2);

	if(icount == 0) { inst_substate = 5; return; }
case 5:
	prefetch();
	icount--;

}
	inst_substate = 0;
}


void n2a03_device::isb_nd_zpx_full()
{

	if(icount == 0) { inst_substate = 1; return; }
	TMP = read_pc();
	icount--;

	if(icount == 0) { inst_substate = 2; return; }
	read(TMP);
	icount--;

	TMP = uint8_t(TMP+X);

	if(icount == 0) { inst_substate = 3; return; }
	TMP2 = read(TMP);
	icount--;

	if(icount == 0) { inst_substate = 4; return; }
	write(TMP, TMP2);
	icount--;

	TMP2++;

	if(icount == 0) { inst_substate = 5; return; }
	write(TMP, TMP2);
	icount--;

	do_sbc_nd(TMP2);

	if(icount == 0) { inst_substate = 6; return; }
	prefetch();
	icount--;

}

void n2a03_device::isb_nd_zpx_partial()
{
switch(inst_substate) {
case 0:

	if(icount == 0) { inst_substate = 1; return; }
case 1:
	TMP = read_pc();
	icount--;

	if(icount == 0) { inst_substate = 2; return; }
case 2:
	read(TMP);
	icount--;

	TMP = uint8_t(TMP+X);

	if(icount == 0) { inst_substate = 3; return; }
case 3:
	TMP2 = read(TMP);
	icount--;

	if(icount == 0) { inst_substate = 4; return; }
case 4:
	write(TMP, TMP2);
	icount--;

	TMP2++;

	if(icount == 0) { inst_substate = 5; return; }
case 5:
	write(TMP, TMP2);
	icount--;

	do_sbc_nd(TMP2);

	if(icount == 0) { inst_substate = 6; return; }
case 6:
	prefetch();
	icount--;

}
	inst_substate = 0;
}




void n2a03_device::do_exec_full()
{
	switch(inst_state) {

	case 0x00: brk_imp_full(); break;

	case 0x01: ora_idx_full(); break;

	case 0x02: kil_non_full(); break;

	case 0x03: slo_idx_full(); break;

	case 0x04: nop_zpg_full(); break;

	case 0x05: ora_zpg_full(); break;

	case 0x06: asl_zpg_full(); break;

	case 0x07: slo_zpg_full(); break;

	case 0x08: php_imp_full(); break;

	case 0x09: ora_imm_full(); break;

	case 0x0a: asl_acc_full(); break;

	case 0x0b: anc_imm_full(); break;

	case 0x0c: nop_aba_full(); break;

	case 0x0d: ora_aba_full(); break;

	case 0x0e: asl_aba_full(); break;

	case 0x0f: slo_aba_full(); break;

	case 0x10: bpl_rel_full(); break;

	case 0x11: ora_idy_full(); break;

	case 0x12: kil_non_full(); break;

	case 0x13: slo_idy_full(); break;

	case 0x14: nop_zpx_full(); break;

	case 0x15: ora_zpx_full(); break;

	case 0x16: asl_zpx_full(); break;

	case 0x17: slo_zpx_full(); break;

	case 0x18: clc_imp_full(); break;

	case 0x19: ora_aby_full(); break;

	case 0x1a: nop_imp_full(); break;

	case 0x1b: slo_aby_full(); break;

	case 0x1c: nop_abx_full(); break;

	case 0x1d: ora_abx_full(); break;

	case 0x1e: asl_abx_full(); break;

	case 0x1f: slo_abx_full(); break;

	case 0x20: jsr_adr_full(); break;

	case 0x21: and_idx_full(); break;

	case 0x22: kil_non_full(); break;

	case 0x23: rla_idx_full(); break;

	case 0x24: bit_zpg_full(); break;

	case 0x25: and_zpg_full(); break;

	case 0x26: rol_zpg_full(); break;

	case 0x27: rla_zpg_full(); break;

	case 0x28: plp_imp_full(); break;

	case 0x29: and_imm_full(); break;

	case 0x2a: rol_acc_full(); break;

	case 0x2b: anc_imm_full(); break;

	case 0x2c: bit_aba_full(); break;

	case 0x2d: and_aba_full(); break;

	case 0x2e: rol_aba_full(); break;

	case 0x2f: rla_aba_full(); break;

	case 0x30: bmi_rel_full(); break;

	case 0x31: and_idy_full(); break;

	case 0x32: kil_non_full(); break;

	case 0x33: rla_idy_full(); break;

	case 0x34: nop_zpx_full(); break;

	case 0x35: and_zpx_full(); break;

	case 0x36: rol_zpx_full(); break;

	case 0x37: rla_zpx_full(); break;

	case 0x38: sec_imp_full(); break;

	case 0x39: and_aby_full(); break;

	case 0x3a: nop_imp_full(); break;

	case 0x3b: rla_aby_full(); break;

	case 0x3c: nop_abx_full(); break;

	case 0x3d: and_abx_full(); break;

	case 0x3e: rol_abx_full(); break;

	case 0x3f: rla_abx_full(); break;

	case 0x40: rti_imp_full(); break;

	case 0x41: eor_idx_full(); break;

	case 0x42: kil_non_full(); break;

	case 0x43: sre_idx_full(); break;

	case 0x44: nop_zpg_full(); break;

	case 0x45: eor_zpg_full(); break;

	case 0x46: lsr_zpg_full(); break;

	case 0x47: sre_zpg_full(); break;

	case 0x48: pha_imp_full(); break;

	case 0x49: eor_imm_full(); break;

	case 0x4a: lsr_acc_full(); break;

	case 0x4b: asr_imm_full(); break;

	case 0x4c: jmp_adr_full(); break;

	case 0x4d: eor_aba_full(); break;

	case 0x4e: lsr_aba_full(); break;

	case 0x4f: sre_aba_full(); break;

	case 0x50: bvc_rel_full(); break;

	case 0x51: eor_idy_full(); break;

	case 0x52: kil_non_full(); break;

	case 0x53: sre_idy_full(); break;

	case 0x54: nop_zpx_full(); break;

	case 0x55: eor_zpx_full(); break;

	case 0x56: lsr_zpx_full(); break;

	case 0x57: sre_zpx_full(); break;

	case 0x58: cli_imp_full(); break;

	case 0x59: eor_aby_full(); break;

	case 0x5a: nop_imp_full(); break;

	case 0x5b: sre_aby_full(); break;

	case 0x5c: nop_abx_full(); break;

	case 0x5d: eor_abx_full(); break;

	case 0x5e: lsr_abx_full(); break;

	case 0x5f: sre_abx_full(); break;

	case 0x60: rts_imp_full(); break;

	case 0x61: adc_nd_idx_full(); break;

	case 0x62: kil_non_full(); break;

	case 0x63: rra_nd_idx_full(); break;

	case 0x64: nop_zpg_full(); break;

	case 0x65: adc_nd_zpg_full(); break;

	case 0x66: ror_zpg_full(); break;

	case 0x67: rra_nd_zpg_full(); break;

	case 0x68: pla_imp_full(); break;

	case 0x69: adc_nd_imm_full(); break;

	case 0x6a: ror_acc_full(); break;

	case 0x6b: arr_nd_imm_full(); break;

	case 0x6c: jmp_ind_full(); break;

	case 0x6d: adc_nd_aba_full(); break;

	case 0x6e: ror_aba_full(); break;

	case 0x6f: rra_nd_aba_full(); break;

	case 0x70: bvs_rel_full(); break;

	case 0x71: adc_nd_idy_full(); break;

	case 0x72: kil_non_full(); break;

	case 0x73: rra_nd_idy_full(); break;

	case 0x74: nop_zpx_full(); break;

	case 0x75: adc_nd_zpx_full(); break;

	case 0x76: ror_zpx_full(); break;

	case 0x77: rra_nd_zpx_full(); break;

	case 0x78: sei_imp_full(); break;

	case 0x79: adc_nd_aby_full(); break;

	case 0x7a: nop_imp_full(); break;

	case 0x7b: rra_nd_aby_full(); break;

	case 0x7c: nop_abx_full(); break;

	case 0x7d: adc_nd_abx_full(); break;

	case 0x7e: ror_abx_full(); break;

	case 0x7f: rra_nd_abx_full(); break;

	case 0x80: nop_imm_full(); break;

	case 0x81: sta_idx_full(); break;

	case 0x82: nop_imm_full(); break;

	case 0x83: sax_idx_full(); break;

	case 0x84: sty_zpg_full(); break;

	case 0x85: sta_zpg_full(); break;

	case 0x86: stx_zpg_full(); break;

	case 0x87: sax_zpg_full(); break;

	case 0x88: dey_imp_full(); break;

	case 0x89: nop_imm_full(); break;

	case 0x8a: txa_imp_full(); break;

	case 0x8b: ane_imm_full(); break;

	case 0x8c: sty_aba_full(); break;

	case 0x8d: sta_aba_full(); break;

	case 0x8e: stx_aba_full(); break;

	case 0x8f: sax_aba_full(); break;

	case 0x90: bcc_rel_full(); break;

	case 0x91: sta_idy_full(); break;

	case 0x92: kil_non_full(); break;

	case 0x93: sha_idy_full(); break;

	case 0x94: sty_zpx_full(); break;

	case 0x95: sta_zpx_full(); break;

	case 0x96: stx_zpy_full(); break;

	case 0x97: sax_zpy_full(); break;

	case 0x98: tya_imp_full(); break;

	case 0x99: sta_aby_full(); break;

	case 0x9a: txs_imp_full(); break;

	case 0x9b: shs_aby_full(); break;

	case 0x9c: shy_abx_full(); break;

	case 0x9d: sta_abx_full(); break;

	case 0x9e: shx_aby_full(); break;

	case 0x9f: sha_aby_full(); break;

	case 0xa0: ldy_imm_full(); break;

	case 0xa1: lda_idx_full(); break;

	case 0xa2: ldx_imm_full(); break;

	case 0xa3: lax_idx_full(); break;

	case 0xa4: ldy_zpg_full(); break;

	case 0xa5: lda_zpg_full(); break;

	case 0xa6: ldx_zpg_full(); break;

	case 0xa7: lax_zpg_full(); break;

	case 0xa8: tay_imp_full(); break;

	case 0xa9: lda_imm_full(); break;

	case 0xaa: tax_imp_full(); break;

	case 0xab: lxa_imm_full(); break;

	case 0xac: ldy_aba_full(); break;

	case 0xad: lda_aba_full(); break;

	case 0xae: ldx_aba_full(); break;

	case 0xaf: lax_aba_full(); break;

	case 0xb0: bcs_rel_full(); break;

	case 0xb1: lda_idy_full(); break;

	case 0xb2: kil_non_full(); break;

	case 0xb3: lax_idy_full(); break;

	case 0xb4: ldy_zpx_full(); break;

	case 0xb5: lda_zpx_full(); break;

	case 0xb6: ldx_zpy_full(); break;

	case 0xb7: lax_zpy_full(); break;

	case 0xb8: clv_imp_full(); break;

	case 0xb9: lda_aby_full(); break;

	case 0xba: tsx_imp_full(); break;

	case 0xbb: las_aby_full(); break;

	case 0xbc: ldy_abx_full(); break;

	case 0xbd: lda_abx_full(); break;

	case 0xbe: ldx_aby_full(); break;

	case 0xbf: lax_aby_full(); break;

	case 0xc0: cpy_imm_full(); break;

	case 0xc1: cmp_idx_full(); break;

	case 0xc2: nop_imm_full(); break;

	case 0xc3: dcp_idx_full(); break;

	case 0xc4: cpy_zpg_full(); break;

	case 0xc5: cmp_zpg_full(); break;

	case 0xc6: dec_zpg_full(); break;

	case 0xc7: dcp_zpg_full(); break;

	case 0xc8: iny_imp_full(); break;

	case 0xc9: cmp_imm_full(); break;

	case 0xca: dex_imp_full(); break;

	case 0xcb: sbx_imm_full(); break;

	case 0xcc: cpy_aba_full(); break;

	case 0xcd: cmp_aba_full(); break;

	case 0xce: dec_aba_full(); break;

	case 0xcf: dcp_aba_full(); break;

	case 0xd0: bne_rel_full(); break;

	case 0xd1: cmp_idy_full(); break;

	case 0xd2: kil_non_full(); break;

	case 0xd3: dcp_idy_full(); break;

	case 0xd4: nop_zpx_full(); break;

	case 0xd5: cmp_zpx_full(); break;

	case 0xd6: dec_zpx_full(); break;

	case 0xd7: dcp_zpx_full(); break;

	case 0xd8: cld_imp_full(); break;

	case 0xd9: cmp_aby_full(); break;

	case 0xda: nop_imp_full(); break;

	case 0xdb: dcp_aby_full(); break;

	case 0xdc: nop_abx_full(); break;

	case 0xdd: cmp_abx_full(); break;

	case 0xde: dec_abx_full(); break;

	case 0xdf: dcp_abx_full(); break;

	case 0xe0: cpx_imm_full(); break;

	case 0xe1: sbc_nd_idx_full(); break;

	case 0xe2: nop_imm_full(); break;

	case 0xe3: isb_nd_idx_full(); break;

	case 0xe4: cpx_zpg_full(); break;

	case 0xe5: sbc_nd_zpg_full(); break;

	case 0xe6: inc_zpg_full(); break;

	case 0xe7: isb_nd_zpg_full(); break;

	case 0xe8: inx_imp_full(); break;

	case 0xe9: sbc_nd_imm_full(); break;

	case 0xea: nop_imp_full(); break;

	case 0xeb: sbc_nd_imm_full(); break;

	case 0xec: cpx_aba_full(); break;

	case 0xed: sbc_nd_aba_full(); break;

	case 0xee: inc_aba_full(); break;

	case 0xef: isb_nd_aba_full(); break;

	case 0xf0: beq_rel_full(); break;

	case 0xf1: sbc_nd_idy_full(); break;

	case 0xf2: kil_non_full(); break;

	case 0xf3: isb_nd_idy_full(); break;

	case 0xf4: nop_zpx_full(); break;

	case 0xf5: sbc_nd_zpx_full(); break;

	case 0xf6: inc_zpx_full(); break;

	case 0xf7: isb_nd_zpx_full(); break;

	case 0xf8: sed_imp_full(); break;

	case 0xf9: sbc_nd_aby_full(); break;

	case 0xfa: nop_imp_full(); break;

	case 0xfb: isb_nd_aby_full(); break;

	case 0xfc: nop_abx_full(); break;

	case 0xfd: sbc_nd_abx_full(); break;

	case 0xfe: inc_abx_full(); break;

	case 0xff: isb_nd_abx_full(); break;

	case STATE_RESET: reset_full(); break;

	}
}

void n2a03_device::do_exec_partial()
{
	switch(inst_state) {

	case 0x00: brk_imp_partial(); break;

	case 0x01: ora_idx_partial(); break;

	case 0x02: kil_non_partial(); break;

	case 0x03: slo_idx_partial(); break;

	case 0x04: nop_zpg_partial(); break;

	case 0x05: ora_zpg_partial(); break;

	case 0x06: asl_zpg_partial(); break;

	case 0x07: slo_zpg_partial(); break;

	case 0x08: php_imp_partial(); break;

	case 0x09: ora_imm_partial(); break;

	case 0x0a: asl_acc_partial(); break;

	case 0x0b: anc_imm_partial(); break;

	case 0x0c: nop_aba_partial(); break;

	case 0x0d: ora_aba_partial(); break;

	case 0x0e: asl_aba_partial(); break;

	case 0x0f: slo_aba_partial(); break;

	case 0x10: bpl_rel_partial(); break;

	case 0x11: ora_idy_partial(); break;

	case 0x12: kil_non_partial(); break;

	case 0x13: slo_idy_partial(); break;

	case 0x14: nop_zpx_partial(); break;

	case 0x15: ora_zpx_partial(); break;

	case 0x16: asl_zpx_partial(); break;

	case 0x17: slo_zpx_partial(); break;

	case 0x18: clc_imp_partial(); break;

	case 0x19: ora_aby_partial(); break;

	case 0x1a: nop_imp_partial(); break;

	case 0x1b: slo_aby_partial(); break;

	case 0x1c: nop_abx_partial(); break;

	case 0x1d: ora_abx_partial(); break;

	case 0x1e: asl_abx_partial(); break;

	case 0x1f: slo_abx_partial(); break;

	case 0x20: jsr_adr_partial(); break;

	case 0x21: and_idx_partial(); break;

	case 0x22: kil_non_partial(); break;

	case 0x23: rla_idx_partial(); break;

	case 0x24: bit_zpg_partial(); break;

	case 0x25: and_zpg_partial(); break;

	case 0x26: rol_zpg_partial(); break;

	case 0x27: rla_zpg_partial(); break;

	case 0x28: plp_imp_partial(); break;

	case 0x29: and_imm_partial(); break;

	case 0x2a: rol_acc_partial(); break;

	case 0x2b: anc_imm_partial(); break;

	case 0x2c: bit_aba_partial(); break;

	case 0x2d: and_aba_partial(); break;

	case 0x2e: rol_aba_partial(); break;

	case 0x2f: rla_aba_partial(); break;

	case 0x30: bmi_rel_partial(); break;

	case 0x31: and_idy_partial(); break;

	case 0x32: kil_non_partial(); break;

	case 0x33: rla_idy_partial(); break;

	case 0x34: nop_zpx_partial(); break;

	case 0x35: and_zpx_partial(); break;

	case 0x36: rol_zpx_partial(); break;

	case 0x37: rla_zpx_partial(); break;

	case 0x38: sec_imp_partial(); break;

	case 0x39: and_aby_partial(); break;

	case 0x3a: nop_imp_partial(); break;

	case 0x3b: rla_aby_partial(); break;

	case 0x3c: nop_abx_partial(); break;

	case 0x3d: and_abx_partial(); break;

	case 0x3e: rol_abx_partial(); break;

	case 0x3f: rla_abx_partial(); break;

	case 0x40: rti_imp_partial(); break;

	case 0x41: eor_idx_partial(); break;

	case 0x42: kil_non_partial(); break;

	case 0x43: sre_idx_partial(); break;

	case 0x44: nop_zpg_partial(); break;

	case 0x45: eor_zpg_partial(); break;

	case 0x46: lsr_zpg_partial(); break;

	case 0x47: sre_zpg_partial(); break;

	case 0x48: pha_imp_partial(); break;

	case 0x49: eor_imm_partial(); break;

	case 0x4a: lsr_acc_partial(); break;

	case 0x4b: asr_imm_partial(); break;

	case 0x4c: jmp_adr_partial(); break;

	case 0x4d: eor_aba_partial(); break;

	case 0x4e: lsr_aba_partial(); break;

	case 0x4f: sre_aba_partial(); break;

	case 0x50: bvc_rel_partial(); break;

	case 0x51: eor_idy_partial(); break;

	case 0x52: kil_non_partial(); break;

	case 0x53: sre_idy_partial(); break;

	case 0x54: nop_zpx_partial(); break;

	case 0x55: eor_zpx_partial(); break;

	case 0x56: lsr_zpx_partial(); break;

	case 0x57: sre_zpx_partial(); break;

	case 0x58: cli_imp_partial(); break;

	case 0x59: eor_aby_partial(); break;

	case 0x5a: nop_imp_partial(); break;

	case 0x5b: sre_aby_partial(); break;

	case 0x5c: nop_abx_partial(); break;

	case 0x5d: eor_abx_partial(); break;

	case 0x5e: lsr_abx_partial(); break;

	case 0x5f: sre_abx_partial(); break;

	case 0x60: rts_imp_partial(); break;

	case 0x61: adc_nd_idx_partial(); break;

	case 0x62: kil_non_partial(); break;

	case 0x63: rra_nd_idx_partial(); break;

	case 0x64: nop_zpg_partial(); break;

	case 0x65: adc_nd_zpg_partial(); break;

	case 0x66: ror_zpg_partial(); break;

	case 0x67: rra_nd_zpg_partial(); break;

	case 0x68: pla_imp_partial(); break;

	case 0x69: adc_nd_imm_partial(); break;

	case 0x6a: ror_acc_partial(); break;

	case 0x6b: arr_nd_imm_partial(); break;

	case 0x6c: jmp_ind_partial(); break;

	case 0x6d: adc_nd_aba_partial(); break;

	case 0x6e: ror_aba_partial(); break;

	case 0x6f: rra_nd_aba_partial(); break;

	case 0x70: bvs_rel_partial(); break;

	case 0x71: adc_nd_idy_partial(); break;

	case 0x72: kil_non_partial(); break;

	case 0x73: rra_nd_idy_partial(); break;

	case 0x74: nop_zpx_partial(); break;

	case 0x75: adc_nd_zpx_partial(); break;

	case 0x76: ror_zpx_partial(); break;

	case 0x77: rra_nd_zpx_partial(); break;

	case 0x78: sei_imp_partial(); break;

	case 0x79: adc_nd_aby_partial(); break;

	case 0x7a: nop_imp_partial(); break;

	case 0x7b: rra_nd_aby_partial(); break;

	case 0x7c: nop_abx_partial(); break;

	case 0x7d: adc_nd_abx_partial(); break;

	case 0x7e: ror_abx_partial(); break;

	case 0x7f: rra_nd_abx_partial(); break;

	case 0x80: nop_imm_partial(); break;

	case 0x81: sta_idx_partial(); break;

	case 0x82: nop_imm_partial(); break;

	case 0x83: sax_idx_partial(); break;

	case 0x84: sty_zpg_partial(); break;

	case 0x85: sta_zpg_partial(); break;

	case 0x86: stx_zpg_partial(); break;

	case 0x87: sax_zpg_partial(); break;

	case 0x88: dey_imp_partial(); break;

	case 0x89: nop_imm_partial(); break;

	case 0x8a: txa_imp_partial(); break;

	case 0x8b: ane_imm_partial(); break;

	case 0x8c: sty_aba_partial(); break;

	case 0x8d: sta_aba_partial(); break;

	case 0x8e: stx_aba_partial(); break;

	case 0x8f: sax_aba_partial(); break;

	case 0x90: bcc_rel_partial(); break;

	case 0x91: sta_idy_partial(); break;

	case 0x92: kil_non_partial(); break;

	case 0x93: sha_idy_partial(); break;

	case 0x94: sty_zpx_partial(); break;

	case 0x95: sta_zpx_partial(); break;

	case 0x96: stx_zpy_partial(); break;

	case 0x97: sax_zpy_partial(); break;

	case 0x98: tya_imp_partial(); break;

	case 0x99: sta_aby_partial(); break;

	case 0x9a: txs_imp_partial(); break;

	case 0x9b: shs_aby_partial(); break;

	case 0x9c: shy_abx_partial(); break;

	case 0x9d: sta_abx_partial(); break;

	case 0x9e: shx_aby_partial(); break;

	case 0x9f: sha_aby_partial(); break;

	case 0xa0: ldy_imm_partial(); break;

	case 0xa1: lda_idx_partial(); break;

	case 0xa2: ldx_imm_partial(); break;

	case 0xa3: lax_idx_partial(); break;

	case 0xa4: ldy_zpg_partial(); break;

	case 0xa5: lda_zpg_partial(); break;

	case 0xa6: ldx_zpg_partial(); break;

	case 0xa7: lax_zpg_partial(); break;

	case 0xa8: tay_imp_partial(); break;

	case 0xa9: lda_imm_partial(); break;

	case 0xaa: tax_imp_partial(); break;

	case 0xab: lxa_imm_partial(); break;

	case 0xac: ldy_aba_partial(); break;

	case 0xad: lda_aba_partial(); break;

	case 0xae: ldx_aba_partial(); break;

	case 0xaf: lax_aba_partial(); break;

	case 0xb0: bcs_rel_partial(); break;

	case 0xb1: lda_idy_partial(); break;

	case 0xb2: kil_non_partial(); break;

	case 0xb3: lax_idy_partial(); break;

	case 0xb4: ldy_zpx_partial(); break;

	case 0xb5: lda_zpx_partial(); break;

	case 0xb6: ldx_zpy_partial(); break;

	case 0xb7: lax_zpy_partial(); break;

	case 0xb8: clv_imp_partial(); break;

	case 0xb9: lda_aby_partial(); break;

	case 0xba: tsx_imp_partial(); break;

	case 0xbb: las_aby_partial(); break;

	case 0xbc: ldy_abx_partial(); break;

	case 0xbd: lda_abx_partial(); break;

	case 0xbe: ldx_aby_partial(); break;

	case 0xbf: lax_aby_partial(); break;

	case 0xc0: cpy_imm_partial(); break;

	case 0xc1: cmp_idx_partial(); break;

	case 0xc2: nop_imm_partial(); break;

	case 0xc3: dcp_idx_partial(); break;

	case 0xc4: cpy_zpg_partial(); break;

	case 0xc5: cmp_zpg_partial(); break;

	case 0xc6: dec_zpg_partial(); break;

	case 0xc7: dcp_zpg_partial(); break;

	case 0xc8: iny_imp_partial(); break;

	case 0xc9: cmp_imm_partial(); break;

	case 0xca: dex_imp_partial(); break;

	case 0xcb: sbx_imm_partial(); break;

	case 0xcc: cpy_aba_partial(); break;

	case 0xcd: cmp_aba_partial(); break;

	case 0xce: dec_aba_partial(); break;

	case 0xcf: dcp_aba_partial(); break;

	case 0xd0: bne_rel_partial(); break;

	case 0xd1: cmp_idy_partial(); break;

	case 0xd2: kil_non_partial(); break;

	case 0xd3: dcp_idy_partial(); break;

	case 0xd4: nop_zpx_partial(); break;

	case 0xd5: cmp_zpx_partial(); break;

	case 0xd6: dec_zpx_partial(); break;

	case 0xd7: dcp_zpx_partial(); break;

	case 0xd8: cld_imp_partial(); break;

	case 0xd9: cmp_aby_partial(); break;

	case 0xda: nop_imp_partial(); break;

	case 0xdb: dcp_aby_partial(); break;

	case 0xdc: nop_abx_partial(); break;

	case 0xdd: cmp_abx_partial(); break;

	case 0xde: dec_abx_partial(); break;

	case 0xdf: dcp_abx_partial(); break;

	case 0xe0: cpx_imm_partial(); break;

	case 0xe1: sbc_nd_idx_partial(); break;

	case 0xe2: nop_imm_partial(); break;

	case 0xe3: isb_nd_idx_partial(); break;

	case 0xe4: cpx_zpg_partial(); break;

	case 0xe5: sbc_nd_zpg_partial(); break;

	case 0xe6: inc_zpg_partial(); break;

	case 0xe7: isb_nd_zpg_partial(); break;

	case 0xe8: inx_imp_partial(); break;

	case 0xe9: sbc_nd_imm_partial(); break;

	case 0xea: nop_imp_partial(); break;

	case 0xeb: sbc_nd_imm_partial(); break;

	case 0xec: cpx_aba_partial(); break;

	case 0xed: sbc_nd_aba_partial(); break;

	case 0xee: inc_aba_partial(); break;

	case 0xef: isb_nd_aba_partial(); break;

	case 0xf0: beq_rel_partial(); break;

	case 0xf1: sbc_nd_idy_partial(); break;

	case 0xf2: kil_non_partial(); break;

	case 0xf3: isb_nd_idy_partial(); break;

	case 0xf4: nop_zpx_partial(); break;

	case 0xf5: sbc_nd_zpx_partial(); break;

	case 0xf6: inc_zpx_partial(); break;

	case 0xf7: isb_nd_zpx_partial(); break;

	case 0xf8: sed_imp_partial(); break;

	case 0xf9: sbc_nd_aby_partial(); break;

	case 0xfa: nop_imp_partial(); break;

	case 0xfb: isb_nd_aby_partial(); break;

	case 0xfc: nop_abx_partial(); break;

	case 0xfd: sbc_nd_abx_partial(); break;

	case 0xfe: inc_abx_partial(); break;

	case 0xff: isb_nd_abx_partial(); break;

	case STATE_RESET: reset_partial(); break;

	}
}

const n2a03_device::disasm_entry n2a03_device::disasm_entries[0x100] = {

	{ "brk", DASM_imp, 0 },

	{ "ora", DASM_idx, 0 },

	{ "kil", DASM_non, 0 },

	{ "slo", DASM_idx, 0 },

	{ "nop", DASM_zpg, 0 },

	{ "ora", DASM_zpg, 0 },

	{ "asl", DASM_zpg, 0 },

	{ "slo", DASM_zpg, 0 },

	{ "php", DASM_imp, 0 },

	{ "ora", DASM_imm, 0 },

	{ "asl", DASM_acc, 0 },

	{ "anc", DASM_imm, 0 },

	{ "nop", DASM_aba, 0 },

	{ "ora", DASM_aba, 0 },

	{ "asl", DASM_aba, 0 },

	{ "slo", DASM_aba, 0 },

	{ "bpl", DASM_rel, 0 },

	{ "ora", DASM_idy, 0 },

	{ "kil", DASM_non, 0 },

	{ "slo", DASM_idy, 0 },

	{ "nop", DASM_zpx, 0 },

	{ "ora", DASM_zpx, 0 },

	{ "asl", DASM_zpx, 0 },

	{ "slo", DASM_zpx, 0 },

	{ "clc", DASM_imp, 0 },

	{ "ora", DASM_aby, 0 },

	{ "nop", DASM_imp, 0 },

	{ "slo", DASM_aby, 0 },

	{ "nop", DASM_abx, 0 },

	{ "ora", DASM_abx, 0 },

	{ "asl", DASM_abx, 0 },

	{ "slo", DASM_abx, 0 },

	{ "jsr", DASM_adr, DASMFLAG_STEP_OVER },

	{ "and", DASM_idx, 0 },

	{ "kil", DASM_non, 0 },

	{ "rla", DASM_idx, 0 },

	{ "bit", DASM_zpg, 0 },

	{ "and", DASM_zpg, 0 },

	{ "rol", DASM_zpg, 0 },

	{ "rla", DASM_zpg, 0 },

	{ "plp", DASM_imp, 0 },

	{ "and", DASM_imm, 0 },

	{ "rol", DASM_acc, 0 },

	{ "anc", DASM_imm, 0 },

	{ "bit", DASM_aba, 0 },

	{ "and", DASM_aba, 0 },

	{ "rol", DASM_aba, 0 },

	{ "rla", DASM_aba, 0 },

	{ "bmi", DASM_rel, 0 },

	{ "and", DASM_idy, 0 },

	{ "kil", DASM_non, 0 },

	{ "rla", DASM_idy, 0 },

	{ "nop", DASM_zpx, 0 },

	{ "and", DASM_zpx, 0 },

	{ "rol", DASM_zpx, 0 },

	{ "rla", DASM_zpx, 0 },

	{ "sec", DASM_imp, 0 },

	{ "and", DASM_aby, 0 },

	{ "nop", DASM_imp, 0 },

	{ "rla", DASM_aby, 0 },

	{ "nop", DASM_abx, 0 },

	{ "and", DASM_abx, 0 },

	{ "rol", DASM_abx, 0 },

	{ "rla", DASM_abx, 0 },

	{ "rti", DASM_imp, DASMFLAG_STEP_OUT },

	{ "eor", DASM_idx, 0 },

	{ "kil", DASM_non, 0 },

	{ "sre", DASM_idx, 0 },

	{ "nop", DASM_zpg, 0 },

	{ "eor", DASM_zpg, 0 },

	{ "lsr", DASM_zpg, 0 },

	{ "sre", DASM_zpg, 0 },

	{ "pha", DASM_imp, 0 },

	{ "eor", DASM_imm, 0 },

	{ "lsr", DASM_acc, 0 },

	{ "asr", DASM_imm, 0 },

	{ "jmp", DASM_adr, 0 },

	{ "eor", DASM_aba, 0 },

	{ "lsr", DASM_aba, 0 },

	{ "sre", DASM_aba, 0 },

	{ "bvc", DASM_rel, 0 },

	{ "eor", DASM_idy, 0 },

	{ "kil", DASM_non, 0 },

	{ "sre", DASM_idy, 0 },

	{ "nop", DASM_zpx, 0 },

	{ "eor", DASM_zpx, 0 },

	{ "lsr", DASM_zpx, 0 },

	{ "sre", DASM_zpx, 0 },

	{ "cli", DASM_imp, 0 },

	{ "eor", DASM_aby, 0 },

	{ "nop", DASM_imp, 0 },

	{ "sre", DASM_aby, 0 },

	{ "nop", DASM_abx, 0 },

	{ "eor", DASM_abx, 0 },

	{ "lsr", DASM_abx, 0 },

	{ "sre", DASM_abx, 0 },

	{ "rts", DASM_imp, DASMFLAG_STEP_OUT },

	{ "adc", DASM_idx, 0 },

	{ "kil", DASM_non, 0 },

	{ "rra", DASM_idx, 0 },

	{ "nop", DASM_zpg, 0 },

	{ "adc", DASM_zpg, 0 },

	{ "ror", DASM_zpg, 0 },

	{ "rra", DASM_zpg, 0 },

	{ "pla", DASM_imp, 0 },

	{ "adc", DASM_imm, 0 },

	{ "ror", DASM_acc, 0 },

	{ "arr", DASM_imm, 0 },

	{ "jmp", DASM_ind, 0 },

	{ "adc", DASM_aba, 0 },

	{ "ror", DASM_aba, 0 },

	{ "rra", DASM_aba, 0 },

	{ "bvs", DASM_rel, 0 },

	{ "adc", DASM_idy, 0 },

	{ "kil", DASM_non, 0 },

	{ "rra", DASM_idy, 0 },

	{ "nop", DASM_zpx, 0 },

	{ "adc", DASM_zpx, 0 },

	{ "ror", DASM_zpx, 0 },

	{ "rra", DASM_zpx, 0 },

	{ "sei", DASM_imp, 0 },

	{ "adc", DASM_aby, 0 },

	{ "nop", DASM_imp, 0 },

	{ "rra", DASM_aby, 0 },

	{ "nop", DASM_abx, 0 },

	{ "adc", DASM_abx, 0 },

	{ "ror", DASM_abx, 0 },

	{ "rra", DASM_abx, 0 },

	{ "nop", DASM_imm, 0 },

	{ "sta", DASM_idx, 0 },

	{ "nop", DASM_imm, 0 },

	{ "sax", DASM_idx, 0 },

	{ "sty", DASM_zpg, 0 },

	{ "sta", DASM_zpg, 0 },

	{ "stx", DASM_zpg, 0 },

	{ "sax", DASM_zpg, 0 },

	{ "dey", DASM_imp, 0 },

	{ "nop", DASM_imm, 0 },

	{ "txa", DASM_imp, 0 },

	{ "ane", DASM_imm, 0 },

	{ "sty", DASM_aba, 0 },

	{ "sta", DASM_aba, 0 },

	{ "stx", DASM_aba, 0 },

	{ "sax", DASM_aba, 0 },

	{ "bcc", DASM_rel, 0 },

	{ "sta", DASM_idy, 0 },

	{ "kil", DASM_non, 0 },

	{ "sha", DASM_idy, 0 },

	{ "sty", DASM_zpx, 0 },

	{ "sta", DASM_zpx, 0 },

	{ "stx", DASM_zpy, 0 },

	{ "sax", DASM_zpy, 0 },

	{ "tya", DASM_imp, 0 },

	{ "sta", DASM_aby, 0 },

	{ "txs", DASM_imp, 0 },

	{ "shs", DASM_aby, 0 },

	{ "shy", DASM_abx, 0 },

	{ "sta", DASM_abx, 0 },

	{ "shx", DASM_aby, 0 },

	{ "sha", DASM_aby, 0 },

	{ "ldy", DASM_imm, 0 },

	{ "lda", DASM_idx, 0 },

	{ "ldx", DASM_imm, 0 },

	{ "lax", DASM_idx, 0 },

	{ "ldy", DASM_zpg, 0 },

	{ "lda", DASM_zpg, 0 },

	{ "ldx", DASM_zpg, 0 },

	{ "lax", DASM_zpg, 0 },

	{ "tay", DASM_imp, 0 },

	{ "lda", DASM_imm, 0 },

	{ "tax", DASM_imp, 0 },

	{ "lxa", DASM_imm, 0 },

	{ "ldy", DASM_aba, 0 },

	{ "lda", DASM_aba, 0 },

	{ "ldx", DASM_aba, 0 },

	{ "lax", DASM_aba, 0 },

	{ "bcs", DASM_rel, 0 },

	{ "lda", DASM_idy, 0 },

	{ "kil", DASM_non, 0 },

	{ "lax", DASM_idy, 0 },

	{ "ldy", DASM_zpx, 0 },

	{ "lda", DASM_zpx, 0 },

	{ "ldx", DASM_zpy, 0 },

	{ "lax", DASM_zpy, 0 },

	{ "clv", DASM_imp, 0 },

	{ "lda", DASM_aby, 0 },

	{ "tsx", DASM_imp, 0 },

	{ "las", DASM_aby, 0 },

	{ "ldy", DASM_abx, 0 },

	{ "lda", DASM_abx, 0 },

	{ "ldx", DASM_aby, 0 },

	{ "lax", DASM_aby, 0 },

	{ "cpy", DASM_imm, 0 },

	{ "cmp", DASM_idx, 0 },

	{ "nop", DASM_imm, 0 },

	{ "dcp", DASM_idx, 0 },

	{ "cpy", DASM_zpg, 0 },

	{ "cmp", DASM_zpg, 0 },

	{ "dec", DASM_zpg, 0 },

	{ "dcp", DASM_zpg, 0 },

	{ "iny", DASM_imp, 0 },

	{ "cmp", DASM_imm, 0 },

	{ "dex", DASM_imp, 0 },

	{ "sbx", DASM_imm, 0 },

	{ "cpy", DASM_aba, 0 },

	{ "cmp", DASM_aba, 0 },

	{ "dec", DASM_aba, 0 },

	{ "dcp", DASM_aba, 0 },

	{ "bne", DASM_rel, 0 },

	{ "cmp", DASM_idy, 0 },

	{ "kil", DASM_non, 0 },

	{ "dcp", DASM_idy, 0 },

	{ "nop", DASM_zpx, 0 },

	{ "cmp", DASM_zpx, 0 },

	{ "dec", DASM_zpx, 0 },

	{ "dcp", DASM_zpx, 0 },

	{ "cld", DASM_imp, 0 },

	{ "cmp", DASM_aby, 0 },

	{ "nop", DASM_imp, 0 },

	{ "dcp", DASM_aby, 0 },

	{ "nop", DASM_abx, 0 },

	{ "cmp", DASM_abx, 0 },

	{ "dec", DASM_abx, 0 },

	{ "dcp", DASM_abx, 0 },

	{ "cpx", DASM_imm, 0 },

	{ "sbc", DASM_idx, 0 },

	{ "nop", DASM_imm, 0 },

	{ "isb", DASM_idx, 0 },

	{ "cpx", DASM_zpg, 0 },

	{ "sbc", DASM_zpg, 0 },

	{ "inc", DASM_zpg, 0 },

	{ "isb", DASM_zpg, 0 },

	{ "inx", DASM_imp, 0 },

	{ "sbc", DASM_imm, 0 },

	{ "nop", DASM_imp, 0 },

	{ "sbc", DASM_imm, 0 },

	{ "cpx", DASM_aba, 0 },

	{ "sbc", DASM_aba, 0 },

	{ "inc", DASM_aba, 0 },

	{ "isb", DASM_aba, 0 },

	{ "beq", DASM_rel, 0 },

	{ "sbc", DASM_idy, 0 },

	{ "kil", DASM_non, 0 },

	{ "isb", DASM_idy, 0 },

	{ "nop", DASM_zpx, 0 },

	{ "sbc", DASM_zpx, 0 },

	{ "inc", DASM_zpx, 0 },

	{ "isb", DASM_zpx, 0 },

	{ "sed", DASM_imp, 0 },

	{ "sbc", DASM_aby, 0 },

	{ "nop", DASM_imp, 0 },

	{ "isb", DASM_aby, 0 },

	{ "nop", DASM_abx, 0 },

	{ "sbc", DASM_abx, 0 },

	{ "inc", DASM_abx, 0 },

	{ "isb", DASM_abx, 0 },

};

