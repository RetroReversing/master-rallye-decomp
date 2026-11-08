extern s32 D_002AD408(s32);
extern void *func_0021E290(s32);
extern void *func_00205BF8(s32);
extern void func_0021E540(void *, void *, s32, s32);
extern void func_001D4040(void *, const char *);
extern void func_0021E748(void *, void *);
extern void func_0021E740(void *, s32);
extern char D_00446850[];

typedef struct {
	s32 _pad0[0x74 / 4];
	void *unk74;
} Temp1;

typedef struct {
	f32 unk50;
	f32 unk54;
	f32 unk58;
	s32 _pad[8];
	s64 unk78;
} Temp2;

typedef struct {
	f32 unk0;
	f32 unk4;
	f32 unk8;
} Arg1;

void func_001136A8(void *arg0, void *arg1)
{
	u32 sp0;
	Temp1 *temp_1;
	Temp2 *temp_2;
	temp_1 = func_0021E290(D_002AD408(0x7C));
	((Temp1 *)arg0)->unk74 = temp_1;
	temp_2 = func_00205BF8(D_002AD408(0x90));
	temp_2->unk78 = (((temp_2->unk78 & -3) | 2) & -2) | 1;
	temp_2->unk50 = ((Arg1 *)arg1)->unk0;
	temp_2->unk54 = ((Arg1 *)arg1)->unk4;
	temp_2->unk58 = ((Arg1 *)arg1)->unk8;
	temp_1->unk74 = 0;
	func_0021E540(temp_1, temp_2, -2, 1);
	func_001D4040(&sp0, D_00446850);
	func_0021E748(temp_1, &sp0);
	func_0021E740(temp_1, 3);
}
