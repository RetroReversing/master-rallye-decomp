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
    s32 v5, v2;
    if (flags & 0x100) {
        v5 = arg0->unk24;
        v2 = arg0->unk2C;
    } else {
        v5 = arg0->unkC;
        v2 = arg0->unk8;
    }
    if (v5 == v2) {
        return arg0->unk14;
    }
    if (flags & 0x100) {
        return arg0->unk24;
    }
    return arg0->unk4;
}

typedef struct {
    s32 flags;
    s32 unk8;
    s32 unkC;
    s32 unk24;
    s32 unk2C;
} S003D7360;
s32 func_003D7360(S003D7360 *arg0) {
    s32 flags = arg0->flags;
    s32 v5, v2;
    if (flags & 0x100) {
        v5 = arg0->unk24;
        v2 = arg0->unk2C;
    } else {
        v5 = arg0->unkC;
        v2 = arg0->unk8;
    }
    return (v5 != v2);
}

extern s32 func_003D79A0(void);
extern s32 func_002AFFE8(s32*, const char*, void*);
extern s32 D_004A9900;
extern char D_00489130[];
extern char D_004A9910[];
s32 *func_003D73B8(void) {
    if (D_004A9900 == 0) {
        func_003D79A0();
        func_002AFFE8(&D_004A9900, D_00489130, D_004A9910);
    }
    return &D_004A9900;
}

typedef struct {
    s32 pad[1];
    u8 *unk4;
    s32 unk8;
} S003D7428;
extern s32 func_003D8118(S003D7428*);
u8 func_003D7428(S003D7428 *arg0) {
    u8 *p;
    s32 v = (s32)arg0->unk4 + 1;
    if ((u32)arg0->unk4 >= (u32)arg0->unk8) {
        if (func_003D8118(arg0) == -1) {
            return (u8)-1;
        }
        v = (s32)arg0->unk4 + 1;
    }
    arg0->unk4 = (u8*)v;
    if (v >= arg0->unk8) {
        if (func_003D8118(arg0) == -1) {
            return (u8)-1;
        }
    }
    return *arg0->unk4;
}
