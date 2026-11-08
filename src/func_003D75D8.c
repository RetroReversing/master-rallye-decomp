typedef struct {
    s32 pad[1];
    u8 *unk4;
    s32 unk8;
} S003D74A8;
extern s32 func_003D8118(S003D74A8*);
u8 func_003D74A8(S003D74A8 *arg0) {
    if ((u32)arg0->unk4 < (u32)arg0->unk8) {
        return *arg0->unk4;
    }
    if (func_003D8118(arg0) == -1) {
        return 0xFF;
    }
    return *arg0->unk4;
}

typedef struct {
    void *unk50;
} S003D7590;
typedef struct {
    s16 unk30;
    void (*unk34)(void*, s16);
} S003D7590_unk50;
void func_003D7590(S003D7590 *arg0) {
    S003D7590_unk50 *t = (S003D7590_unk50*)arg0->unk50;
    s16 off = t->unk30;
    t->unk34((char*)arg0 + off, off);
}

extern void func_003D6E90(void);
void func_003D75D8(void *arg0) {
    if (*(void**)((char*)arg0 + 0x1C) == NULL) {
        func_003D6E90();
    }
}

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
    if (arg0->unk1C != NULL) {
        return 0;
    }
    if ((arg0->unk0 >> 1) & 1) {
        return 0;
    }
    S003D7600_unk50 *t = (S003D7600_unk50*)arg0->unk50;
    s16 off = t->unk60;
    return t->unk64((char*)arg0 + off, arg0);
}
