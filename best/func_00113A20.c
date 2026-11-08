extern s32 D_002AD408(s32);
extern void *func_00297E40(s32);
extern void *func_0017E620(void);
extern void func_001D4040(void *, const char *);
extern void func_001D4810(void *, s32);
extern void func_001E3D10(s32, void *, s32);
extern s32 func_001E4280(void);
extern s32 func_00297E58(void *, s32, s32, s32, s32);
extern void func_00114568(void *);
extern s32 func_001136A8(void *, s32);
extern s32 func_001139B8(void *, s32);
extern s32 func_001138C0(const char *);
extern s32 func_001E3650(s32, s32);
extern char D_00445D80[];
extern char D_004448F8[];
extern char D_00445D98[];
extern char D_00444D28[];
extern char D_00446628[];
extern char D_004466F8[];

typedef struct {
	s32 _pad0[0x10/4];
	s32 unk10;   // 0x10
	s32 unk14;   // 0x14
	s32 _pad1[0x1C-0x18]; // 0x18-0x1F
	s32 unk20;   // 0x20
	s32 _pad2[0x28-0x24];
	u32 unk28;   // 0x28
	s32 _pad3[0x38-0x2C];
	s32 unk38;   // 0x38
	s32 _pad4[0x48-0x3C];
	u32 unk48;   // 0x48
	u32 unk4C;   // 0x4C
	u32 unk50;   // 0x50
	u32 unk54;   // 0x54
	u32 unk58;   // 0x58
	s32 _pad5[0x78-0x5C];
	s32 unk78;   // 0x78
	s32 _pad6[0x84-0x7C];
	s32 unk84;   // 0x84
} Obj;

void func_00113A20(void *arg0, void *arg1)
{
	u32 sp0;
	void *temp_2;
	void **temp_2_2;
	void *temp_3;
	s32 (*temp_6)(void *, s32, s32);
	((Obj *)arg0)->unk78 = arg1;
	func_001D4040(&sp0, D_00445D80);
	((Obj *)arg0)->unk48 = sp0;
	func_001D4040(&sp0, D_004448F8);
	((Obj *)arg0)->unk4C = sp0;
	func_001D4040(&sp0, D_00445D98);
	((Obj *)arg0)->unk50 = sp0;
	func_001D4040(&sp0, D_00444D28);
	((Obj *)arg0)->unk54 = sp0;
	func_001D4040(&sp0, D_00446628);
	((Obj *)arg0)->unk58 = sp0;
	func_001E3D10(func_001E4280(), (char *)arg0 + 0x5C, 0);
	temp_2 = func_00297E40(D_002AD408(0x10));
	((Obj *)arg0)->unk38 = temp_2;
	func_00297E58(temp_2, ((Obj *)arg0)->unk10, 0, ((Obj *)arg0)->unk14, 0);
	func_00114568(arg0);
	temp_2_2 = func_0017E620();
	temp_3 = *temp_2_2;
	temp_6 = (s32 (*)(void *, s32, s32))((char *)temp_3 + 0x34);
	func_001D4810((char *)arg0 + 0x70, temp_6((char *)temp_2_2 + ((s32 *)temp_3)[0x30/4], ((Obj *)arg0)->unk20, temp_6));
	func_001136A8(arg0, ((Obj *)arg1)->unk4C + 0x50);
	func_001139B8(arg0, ((Obj *)arg1)->unk4C + 0x50);
	((Obj *)arg0)->unk84 = func_001138C0(D_004466F8);
	((Obj *)arg0)->unk28 = func_001E3650(func_001E4280(), (s32)((char *)arg0 + 0x40));
}
