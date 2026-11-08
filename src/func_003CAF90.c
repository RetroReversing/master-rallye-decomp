extern u32 D_0049B980[];
extern u32 D_0049BBC0[];

typedef struct {
    u32 unk0;
    u32 unk4;
    u32 unk8;
    u32 unkC;
} UnkBBC0;

s32 func_00405E90(void *, u32, u32, void *, u32, void *, u32, u32, s32);

s32 func_003CAF90(void) {
    UnkBBC0 *p = (UnkBBC0 *)D_0049BBC0;
    p->unk0 = 0xC;
    if ((s32)func_00405E90(D_0049B980, 1, 0, p, 0x80, p, 0x80, 0, 0) < 0) {
        return 0;
    }
    return p->unkC;
}

extern u32 D_0049B9D0[];

typedef struct {
    u8 pad[0x10];
    u32 unk10;
} UnkB9D0Entry;

s32 func_003CAD00(s32, u32);

s32 func_003CAE68(s32 arg0, s32 arg1) {
    UnkB9D0Entry *p = (UnkB9D0Entry *)(D_0049B9D0 + arg1 * 0x1C + arg0 * 0x70);
    if (p->unk10 == 0) {
        return 0;
    }
    return func_003CAD00(arg0, 0);
}

s32 func_003CAE10(s32 arg0, s32 arg1) {
    UnkB9D0Entry *p = (UnkB9D0Entry *)(D_0049B9D0 + arg1 * 0x1C + arg0 * 0x70);
    if (p->unk10 == 0) {
        return 0;
    }
    return func_003CAD00(arg0, 0xFFF);
}
