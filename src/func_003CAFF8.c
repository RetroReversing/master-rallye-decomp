extern u32 D_0049B980[];
extern u32 D_0049BBC0[];

typedef struct {
    u32 unk0;
    u32 unk4;
    u32 unk8;
    u32 unkC;
} UnkBBC0;

s32 func_00405E90(void *, u32, u32, void *, u32, void *, u32, u32, s32);

s32 func_003CAFF8(s32 arg0) {
    UnkBBC0 *p = (UnkBBC0 *)D_0049BBC0;
    p->unk0 = 0xD;
    p->unk4 = arg0;
    if ((s32)func_00405E90(D_0049B980, 1, 0, p, 0x80, p, 0x80, 0, 0) < 0) {
        return 0;
    }
    return p->unkC;
}

s32 func_003CB060(void) {
    UnkBBC0 *p = (UnkBBC0 *)D_0049BBC0;
    p->unk0 = 0x12;
    if ((s32)func_00405E90(D_0049B980, 1, 0, p, 0x80, p, 0x80, 0, 0) < 0) {
        return 0;
    }
    return p->unkC;
}

s32 func_003CB0C8(s32 arg0) {
    UnkBBC0 *p = (UnkBBC0 *)D_0049BBC0;
    p->unk0 = 0x14;
    p->unk4 = arg0;
    if ((s32)func_00405E90(D_0049B980, 1, 0, p, 0x80, p, 0x80, 0, 0) < 0) {
        return 0;
    }
    return p->unk8;
}
