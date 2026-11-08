extern void *D_002AD408(s32);
extern void func_001D4040(void *, const char *);
extern void func_001E2460(void *, void *, u32);
extern void func_001E2C78(void *, const char *, s32);
extern void func_001E2B98(void *, const char *, void *);
extern void func_001E2E38(void *, const char *, void *);

extern char D_00444E58[];
extern u32 D_0044DD18[];
extern char D_00444D00[];
extern char D_004465C0[];
extern char D_00445D48[];
extern char D_00445D60[];
extern char D_004465C8[];
extern char D_004465D8[];
extern char D_004465E0[];
extern char D_004465F0[];
extern char D_00446600[];
extern char D_00446610[];

typedef struct {
	s32 unk0;
	s32 unk4;
	s32 unk8;
	s32 unkC;
	void *unk10;
	s32 unk14;
	s32 unk18;
	s32 unk1C;
	void *unk20;
} Obj_00110958;

void *func_00110958(void *arg0)
{
	u32 sp0;
	void *sp20;
	Obj_00110958 *obj;

	obj = D_002AD408(0x24);
	func_001D4040(&sp0, D_00444E58);
	obj->unk8 = 0;
	obj->unk10 = (void *)&D_0044DD18;
	obj->unkC = 0;
	obj->unk4 = 0;
	obj->unk0 = 0;
	obj->unk14 = 0;
	obj->unk1C = 0;
	obj->unk18 = 0;
	obj->unk20 = sp0;
	func_001E2460(&sp20, obj, sp0);
	func_001E2C78(&sp20, D_00444D00, 0);
	func_001E2B98(&sp20, D_004465C0, *(void **)((char *)arg0 + 0x10));
	func_001E2C78(&sp20, D_00445D48, 0);
	func_001E2C78(&sp20, D_00445D60, 0);
	func_001E2E38(&sp20, D_004465C8, (char *)arg0 + 0x18);
	func_001E2E38(&sp20, D_004465D8, (char *)arg0 + 0x1C);
	func_001E2E38(&sp20, D_004465E0, (char *)arg0 + 0x20);
	func_001E2E38(&sp20, D_004465F0, (char *)arg0 + 0x24);
	func_001E2E38(&sp20, D_00446600, (char *)arg0 + 0x28);
	func_001E2B98(&sp20, D_00446610, *(void **)((char *)arg0 + 0x2C));
	return obj;
}
