extern u32 D_0049B980[];
extern u32 D_0049BBC0[];

typedef struct {
    u32 unk0;
    u32 unk4;
    u32 unk8;
    u32 unkC;
    u32 unk10;
} UnkBBC0;

s32 func_00405E90(void *, u32, u32, void *, u32, void *, u32, u32, s32);
s32 func_003CA590(s32, s32, u32);

s32 func_003CAD00(s32 arg0, s32 arg1, u32 arg2) {
    UnkBBC0 *p = (UnkBBC0 *)D_0049BBC0;
    s32 r;
    p->unk0 = 0xA;
    p->unk4 = arg0;
    p->unk8 = arg1;
    p->unkC = arg2;
    if ((s32)func_00405E90(D_0049B980, 1, 0, p, 0x80, p, 0x80, 0, 0) < 0) {
        return 0;
    }
    r = p->unk10;
    if (r == 1) {
        func_003CA590(arg0, arg1, 2);
        r = p->unk10;
    }
    return r;
}
