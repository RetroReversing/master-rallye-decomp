extern void D_002AD530(u32);
extern void D_002AD390(void*);
extern u32 D_00489120;
void func_003D71F0(void *arg0, u32 arg1) {
    void *p = arg0;
    u32 a1 = arg1;
    *(u32*)((char*)p + 0x28) = (u32)&D_00489120;
    u32 v = *(u32*)((char*)p + 0x20);
    if (v != 0) {
        D_002AD530(v);
    }
    if (a1 & 1) {
        D_002AD390(p);
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
    if (arg1 != 0) {
        arg0->unk1A = 0;
    } else {
        arg0->unk1A = 4;
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
    s32 v2;
    if (flags & 0x100) {
        v5 = arg0->unk24;
        v2 = arg0->unk2C;
    } else {
        v5 = arg0->unkC;
        v2 = arg0->unk8;
    }
    if (v5 != v2) {
        if (flags & 0x100) {
            return arg0->unk24;
        }
        return arg0->unk4;
    }
    return arg0->unk14;
}
