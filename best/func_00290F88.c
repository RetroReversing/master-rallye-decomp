extern void *func_00201350(void);
extern void func_001CB748(void *, void *, void *, s32);

void func_00290F88(void *arg0) {
    void **p;
    s32 base;
    f32 tmp0[4];
    f32 tmp1[4];
    f32 *a = (f32 *)((u8 *)arg0 + 0x30);
    f32 *b = (f32 *)((u8 *)arg0 + 0x3C);
    f32 v0, v1, v2;

    p = (void **)func_00201350();
    base = *(s32 *)p + 0x90;

    v0 = b[0];
    v1 = a[0];
    tmp0[0] = v1 + v0;
    v1 = b[1];
    v0 = a[1];
    tmp0[1] = v0 + v1;
    v1 = b[2];
    v0 = a[2];
    tmp1[0] = 0.0f;
    tmp0[2] = v0 + v1;
    tmp1[1] = 1.0f;
    tmp1[2] = 0.0f;

    func_001CB748(a, tmp0, tmp1, base);
}
