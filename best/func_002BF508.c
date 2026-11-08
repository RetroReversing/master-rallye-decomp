extern s32 func_002BEDA0(s32 arg0);
extern void func_002BEEB8(s32 arg0);

typedef struct S_002BF508_vtbl {
    char pad[0x40];
    s16 off;
    char pad2[2];
    void (*fn)(void *self);
} S_002BF508_vtbl;

typedef struct S_002BF508 {
    char pad[0xC];
    S_002BF508_vtbl *vtbl;
    char pad2[4];
    s32 unk14;
    s32 unk18;
    s32 unk1C;
} S_002BF508;

void func_002BF508(S_002BF508 *arg0) {
    if (arg0->unk1C == 0) {
        do {
            s32 r = func_002BEDA0(arg0->unk14);
            if (r != 0) {
                arg0->unk18 = 1;
            } else {
                arg0->unk18 = 0;
            }
            func_002BEEB8(arg0->unk14);
            {
                S_002BF508_vtbl *vt = arg0->vtbl;
                s16 off = vt->off;
                void (*fn)(void *) = vt->fn;
                fn((char *)arg0 + off);
            }
        } while (arg0->unk1C == 0);
    }
}

extern void func_002BF070(void *arg0);
extern void *D_002AD408(s32 size);
extern s32 func_002BEC58(void *arg0, s32 arg1, s32 arg2);
extern s32 func_003D7CB0(s32 arg0);
extern void D_00480E90;

typedef struct S_002BF428 {
    char pad[0xC];
    void *vtbl;
    s32 unk10;
    s32 unk14;
    s32 unk18;
    s32 unk1C;
} S_002BF428;

S_002BF428 *func_002BF428(S_002BF428 *arg0, s32 arg1) {
    s32 x;
    func_002BF070(arg0);
    arg0->unk18 = 0;
    arg0->unk1C = 0;
    arg0->vtbl = &D_00480E90;
    arg0->unk14 = func_002BEC58(D_002AD408(8), arg1, 0);
    x = func_003D7CB0(arg1);
    arg0->unk10 = x;
    return arg0;
}
