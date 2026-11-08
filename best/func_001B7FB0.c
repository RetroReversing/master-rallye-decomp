extern char D_00473018[];

void *func_001B7FB0(void *arg0, s32 *arg1) {
    u8 *p;
    void *v0;
    f32 f0;
    void *v1;
    void *a2;
    f32 f1;
    s32 a3;
    s32 t;

    p = (u8 *)arg0;
    v0 = (void *)&D_00473018;
    f0 = -10.0f;
    *(s32 *)(p + 0x4) = 0;
    *(void **)(p + 0x0) = v0;
    v1 = p + 8;
    *(s32 *)(p + 0x8) = 0;
    a2 = p + 0x14;
    f1 = 3.0f;
    a3 = 1;
    *(f32 *)(v1 + 0x8) = f0;
    v0 = p;
    *(f32 *)(v1 + 0x4) = f1;
    f0 = 5.0f;
    *(s32 *)(p + 0x14) = 0;
    *(f32 *)(a2 + 0x8) = f0;
    *(s32 *)(a2 + 0x4) = 0;
    *(s32 *)(p + 0x20) = a3;
    *(s32 *)(p + 0x28) = a3;
    *(s32 *)(p + 0x24) = 0;
    t = *arg1;
    *(s32 *)(p + 0x4) = t;
    return v0;
}
