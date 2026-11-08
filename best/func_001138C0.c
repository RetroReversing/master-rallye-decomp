extern s32 D_002AD408(s32);
extern void *func_0021E290(s32);
extern void *func_00205BF8(s32);
extern void func_0021E540(void *, void *, s32);
extern void func_001D4040(void *, void *);
extern void func_0021E748(void *, void *);
extern void func_0021E740(void *, void *);
extern void func_001D4810(void *, const char *, s32);
extern void func_002062A8(void *, void *);
extern void func_00205CE0(void *, void *);
extern char D_00446858[];

typedef struct {
	s32 unk0;
	s32 _pad0[0x17];
	s32 unk64;
	s32 _pad1[3];
	s64 unk78;
	s32 _pad2[3];
	s32 unk88;
} Temp2;

s32 *func_001138C0(s32 arg0)
{
	s32 *temp_17;
	Temp2 *temp_2;
	u32 sp0;
	temp_17 = func_0021E290(D_002AD408(0x7C));
	temp_2 = func_00205BF8(D_002AD408(0x90));
	temp_2->unk64 = 2;
	temp_2->unk78 &= -4;
	temp_2->unk88 += 1;
	func_0021E540(temp_17, temp_2, -2);
	func_001D4040(&sp0, temp_2);
	func_0021E748(temp_17, &sp0);
	func_0021E740(temp_17, &sp0);
	*temp_17 &= -2;
	func_001D4810(&sp0, D_00446858, 0);
	func_002062A8(temp_2, &sp0);
	func_00205CE0(temp_2, &sp0);
	return temp_17;
}
