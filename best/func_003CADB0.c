extern char D_0049B9D0[];
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
void *func_003CA3B0(s32, s32);
s32 func_003CAD00(s32, s32, u32);

s32 func_003CADB0(s32 arg0, s32 arg1) {
    char *base = D_0049B9D0;
    if (*(s32 *)(base + arg0 * 0x70 + arg1 * 0x1C + 0x10)) {
        if (func_003CAC48(arg0, arg0) == 0x3FFFF) {
            return 1;
        }
        return 0;
    }
    return 0;
}

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
    }
    return r;
}

s32 func_003CAC48(s32 arg0, s32 arg1) {
    char *base = D_0049B9D0;
    char *p;
    u32 v;
    if (*(s32 *)(base + arg0 * 0x70 + arg1 * 0x1C + 0x10) == 0) {
        return 0;
    }
    p = (char *)func_003CA3B0(arg0, arg0);
    if (p[0x72] != 1) {
        return 0;
    }
    if ((u8)p[0x64] < 2) {
        return 0;
    }
    if ((u8)p[0x66] < 2) {
        return 0;
    }
    v = ((u32)(u8)p[0x79]) |
        ((u32)(u8)p[0x7C] << 24) |
        ((u32)(u8)p[0x7B] << 16) |
        ((u32)(u8)p[0x7A] << 8);
    return (s32)(v << 0);
}
