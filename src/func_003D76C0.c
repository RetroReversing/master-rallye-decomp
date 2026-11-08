typedef struct {
    s32 unk0;
    void *unk1C;
    void *unk50;
} S003D7600;
typedef struct {
    s16 unk60;
    s32 (*unk64)(void*, void*);
} S003D7600_unk50;
s32 func_003D7600(S003D7600 *arg0) {
    if (arg0->unk1C) {
        return 0;
    }
    if ((arg0->unk0 & 2) == 0) {
        S003D7600_unk50 *t = (S003D7600_unk50*)arg0->unk50;
        s16 off = t->unk60;
        return t->unk64((char*)arg0 + off, arg0);
    }
    return 0;
}

void func_003D7650(u32 *arg0, int arg1) {
    if (arg1) {
        *arg0 |= 0x200;
    } else {
        *arg0 &= ~0x200;
    }
}

void func_003D7678(u32 *arg0, int arg1) {
    if (arg1) {
        *arg0 |= 2;
    } else {
        *arg0 &= ~2;
    }
}

extern s32 func_003DA068(u32);
s32 func_003D76C0(u32 a) {
    return func_003DA068(a);
}
