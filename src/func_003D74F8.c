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

typedef struct {
    s32 pad[1];
    u8 *unk4;
    s32 unk8;
} S003D7428;
typedef struct {
    s32 pad[1];
    u8 *unk4;
    s32 unk8;
} S003D74A8;
extern s32 func_003D8118(S003D7428*);
u8 func_003D7428(S003D7428 *arg0) {
    s32 n = (s32)(arg0->unk4) + 1;
    if ((u32)arg0->unk4 >= (u32)arg0->unk8) {
        if (func_003D8118(arg0) == -1) {
            return 0xFF;
        }
        n = (s32)(arg0->unk4) + 1;
    }
    arg0->unk4 = (u8*)n;
    if (n >= arg0->unk8) {
        if (func_003D8118(arg0) == -1) {
            return 0xFF;
        }
    }
    return *arg0->unk4;
}

u8 func_003D74A8(S003D74A8 *arg0) {
    if ((u32)arg0->unk4 < (u32)arg0->unk8) {
        return *arg0->unk4;
    }
    if (func_003D8118(arg0) == -1) {
        return 0xFF;
    }
    return *arg0->unk4;
}

extern s32 func_003DA6B8(u32);
s32 func_003D74F8(u32 a) {
    return func_003DA6B8(a);
}
