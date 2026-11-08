extern char D_0049B9D0[];
extern void *func_003CA3B0(s32, s32);
s32 func_003C9D98(s32, s32, void *, s32);

typedef struct {
    u32 unk0;
    u32 unk4;
    u32 unk8;
} UnkB9D0Sub;

s32 func_003CAAB0(s32 arg0, s32 arg1, unsigned char *arg2) {
    void *obj;
    UnkB9D0Sub *p;
    s32 i;
    unsigned char *dst;
    s32 res;
    obj = func_003CA3B0(arg0, arg1);
    if (*(unsigned char *)((char *)obj + 0x72) != 1) {
        return 0;
    }
    p = (UnkB9D0Sub *)(D_0049B9D0 + arg0 * 0x70 + arg1 * 0x1C);
    dst = (unsigned char *)p + 0xC;
    for (i = 0; i < 6; i++) {
        dst[i] = arg2[i];
    }
    p->unk4 = 1;
    p->unk8 = 6;
    res = func_003C9D98(arg0, arg1, p, (s32)dst);
    if ((res ^ 1) != 0) {
        res = 0;
    } else {
        res = 1;
    }
    return res;
}

extern u32 D_0049B980[];
extern u32 D_0049BBC0[];

typedef struct {
    u32 unk0;
    u32 unk4;
    u32 unk8;
    u32 unkC;
    u32 unk10;
    u32 unk14;
} UnkBBC0;

s32 func_00405E90(void *, u32, u32, void *, u32, void *, u32, u32, s32);
s32 func_003CA590(s32, s32, u32);

s32 func_003CA9F8(s32 arg0, s32 arg1, u32 arg2, u32 arg3) {
    UnkBBC0 *p = (UnkBBC0 *)D_0049BBC0;
    s32 r;
    s32 t;
    p->unk0 = 6;
    p->unk4 = arg0;
    p->unk8 = arg1;
    p->unkC = arg2;
    p->unk10 = arg3;
    if ((s32)func_00405E90(D_0049B980, 1, 0, p, 0x80, p, 0x80, 0, 0) < 0) {
        return 0;
    }
    t = p->unk14;
    if (t == 1) {
        func_003CA590(arg0, arg1, 2);
        t = p->unk14;
    }
    return t;
}
