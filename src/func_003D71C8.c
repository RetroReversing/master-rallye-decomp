extern s32 func_003D8B40(u32);
s32 func_003D71C8(u32 a) {
    return func_003D8B40(a);
}

extern void *D_00489120;
extern void D_002AD530(s32);
extern void D_002AD390(void*);
void func_003D71F0(void *arg0, u32 arg1) {
    *(void **)((char*)arg0 + 0x28) = D_00489120;
    s32 v = *(s32*)((char*)arg0 + 0x20);
    if (v != 0) {
        D_002AD530(v);
    }
    if (arg1 & 1) {
        D_002AD390(arg0);
    }
}

typedef struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s64 unk10;
    s16 unk18;
    s8 unk1A;
    s8 unk1B;
    s32 unk1C;
    s32 unk20;
} S003D72B0;
void func_003D72B0(S003D72B0 *arg0, s32 arg1, s32 arg2) {
    if (arg1 == 0) {
        arg0->unk1A = 4;
    } else {
        arg0->unk1A = 0;
    }
    arg0->unk0 = arg1;
    arg0->unk4 = arg2;
    arg0->unk18 = 0x20;
    arg0->unk10 = 0x11;
    arg0->unk1C = 6;
    arg0->unk20 = 0;
    arg0->unk1B = 0;
    arg0->unk8 = 0;
}

typedef struct {
    s32 flags;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk14;
    s32 unk24;
    s32 unk2C;
} S003D7318;
s32 func_003D7318(S003D7318 *arg0) {
    s32 flags = arg0->flags;
    s32 v5;
    if (!(flags & 0x100)) {
        v5 = arg0->unkC;
    } else {
        v5 = arg0->unk24;
    }
    s32 v2;
    if (!(flags & 0x100)) {
        v2 = arg0->unk8;
    } else {
        v2 = arg0->unk2C;
    }
    if (v5 != v2) {
        if (flags & 0x100) {
            return arg0->unk24;
        } else {
            return arg0->unk4;
        }
    }
    return arg0->unk14;
}
