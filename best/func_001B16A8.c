extern void func_00205CE0(void *a, s32 b);
extern void func_002060F8(void *a);
extern void func_001D4040(void *p, const char *s);
extern char D_00472CD8[];
extern void D_00473210; /* vtable symbol */

typedef struct S_B28E8 {
    u8 pad0[0x60];
    f32 x;
    f32 y;
    s32 z;
} S_B28E8;

void func_001B28E8(S_B28E8 *arg0, f32 *arg1, s32 arg2) {
    arg0->x = arg1[0];
    arg0->z = arg2;
    arg0->y = arg1[1];
}

typedef struct S_B1838_A {
    u8 pad0[0xC];
    s32 cur;
    s32 unk10;
    s32 minv;
    s32 maxv;
} S_B1838_A;

typedef struct S_B1838_B {
    u8 pad0[0x4C];
    void *obj;
} S_B1838_B;

void func_001B1838(S_B1838_A *arg0, S_B1838_B *arg1) {
    void *obj = arg1->obj;
    s32 v;
    func_002060F8(obj);
    v = arg0->cur + 1;
    arg0->cur = v;
    if (arg0->maxv < v) {
        arg0->cur = arg0->minv;
    }
    func_00205CE0(obj, arg0->cur);
}

typedef struct S_B1770_A {
    u8 pad0[0xC];
    s32 cur;
    u8 pad10[4];
    s32 start;
} S_B1770_A;

typedef struct S_B1770_B {
    u8 pad0[0x4C];
    void *obj;
} S_B1770_B;

void func_001B1770(S_B1770_A *arg0, S_B1770_B *arg1) {
    void *obj = arg1->obj;
    if (obj != 0) {
        func_002060F8(obj);
        func_00205CE0(arg1->obj, arg0->start);
        arg0->cur = arg0->start;
    }
}

typedef struct S_B16A8 {
    s32 unk0;
    s32 unk4;
    void *vtable;
    s32 unkC;
    s32 unk10;
    s32 unk14;
    s32 unk18;
    s32 unk1C;
} S_B16A8;

S_B16A8 *func_001B16A8(S_B16A8 *arg0) {
    s32 key;
    func_001D4040(&key, D_00472CD8);
    arg0->unk4 = key;
    arg0->unk0 = -1;
    arg0->vtable = &D_00473210;
    arg0->unk18 = 1;
    arg0->unk1C = 10;
    arg0->unkC = 0;
    arg0->unk10 = 0;
    arg0->unk14 = 0;
    return arg0;
}
