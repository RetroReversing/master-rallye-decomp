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
    u32 p = (u32)arg0->unk4;
    u32 lim = (u32)arg0->unk8;
    if (p < lim) {
        u32 p2 = p + 1;
        arg0->unk4 = (u8*)p2;
        if (p2 >= lim) {
            if (func_003D8118(arg0) == -1) {
                return 0xFF;
            }
        }
        return *(u8*)p;
    }
    if (func_003D8118(arg0) == -1) {
        return 0xFF;
    }
    p = (u32)arg0->unk4;
    {
        u32 p2 = p + 1;
        arg0->unk4 = (u8*)p2;
        if (p2 >= lim) {
            if (func_003D8118(arg0) == -1) {
                return 0xFF;
            }
        }
        return *(u8*)p;
    }
}

u8 func_003D74A8(S003D74A8 *arg0) {
    if ((u32)arg0->unk4 < (u32)arg0->unk8) {
        return *arg0->unk4;
    }
    if (func_003D8118((S003D7428*)arg0) == -1) {
        return 0xFF;
    }
    return *arg0->unk4;
}

extern s32 func_003DA700(s32, s32);
s32 func_003D7518(s32 arg0, s32 arg1) {
    return func_003DA700(arg1, arg0);
}

typedef struct {
    void *unk50;
} S003D7590;
typedef struct {
    s16 unk30;
    void (*unk34)(void*, s32);
} S003D7590_unk50;
void func_003D7590(S003D7590 *arg0) {
    S003D7590_unk50 *t = (S003D7590_unk50*)arg0->unk50;
    s16 off = t->unk30;
    t->unk34((void*)((char*)arg0 + off), off);
}
