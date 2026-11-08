void func_0016D178(void *arg0, f32 *arg1) {
    *arg1 = *(f32 *)((u8 *)arg0 + 0x30) * 2.5f;
}

extern s32 func_0012A9C0(s32 arg0);

void func_0012AD70(void *arg0, void *arg1, s8 arg2, f32 arg3) {
    s8 *a0 = (s8 *)arg0;
    f32 *a1 = (f32 *)arg1;
    s8 *p = a0 + 4;

    *(f32 *)(a0 + 4) = a1[0];
    *(f32 *)(p + 4) = a1[1];
    *(f32 *)(p + 8) = a1[2];
    *(s8 *)(a0 + 0x1C) = arg2;
    *(f32 *)(a0 + 0x10) = arg3;
    *(f32 *)(a0 + 0x14) = 1.0f;
    *(s32 *)(a0 + 0x18) = 1;
}

typedef struct { f32 x, y, z, w; } Vec4;
extern Vec4 D_00425E78;

void *func_0012AD00(void *arg0) {
    s8 *a0 = (s8 *)arg0;
    s8 *p = a0 + 4;
    Vec4 *v = &D_00425E78;

    *(s32 *)(a0 + 0) = 0;
    *(f32 *)(a0 + 4) = v->x;
    *(f32 *)(p + 4) = v->y;
    *(f32 *)(p + 8) = v->z;
    *(s32 *)(a0 + 0x10) = 0;
    *(s32 *)(a0 + 0x18) = 0;
    *(f32 *)(a0 + 0x14) = 1.0f;
    *(s32 *)(a0 + 0) = func_0012A9C0(0x30);
    return arg0;
}

void *func_0012AC98(void *arg0, s8 arg1) {
    s8 *a0 = (s8 *)arg0;
    s8 *p = a0 + 0xC;
    Vec4 *v = &D_00425E78;
    s32 a = (s32)arg1;

    *(s8 *)(a0 + 0) = (s8)a;
    *(s32 *)(a0 + 4) = 0;
    *(s32 *)(a0 + 8) = 0;
    *(f32 *)(a0 + 0xC) = v->x;
    *(f32 *)(p + 4) = v->y;
    *(f32 *)(p + 8) = v->z;
    *(s32 *)(a0 + 8) = func_0012A9C0(a);
    return arg0;
}
