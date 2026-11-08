extern s32 func_00296530(void *arg0, void *arg1);

s32 func_00296530(void *arg0, void *arg1) {
    s32 ret;
    (void)arg0;
    ret = 0;
    if (arg1 != 0) {
        ret = 1;
        if (*(s32 *)((u8 *)arg1 + 0x4C) == 0) {
            ret = 0;
        }
    }
    return ret;
}

void func_002965B8(void *arg0, void *arg1, f32 arg2, f32 arg3) {
    if (func_00296530(arg0, arg1) != 0) {
        f32 tmp[3];
        u8 *base = *(u8 **)((u8 *)arg1 + 0x4C);
        u8 *p = base + 0x50;
        tmp[0] = *(f32 *)(p + 0);
        tmp[1] = *(f32 *)(p + 4);
        tmp[2] = *(f32 *)(p + 8);
        tmp[1] = arg3;
        tmp[0] = arg2;
        *(f32 *)(base + 0x50) = arg2;
        *(f32 *)(p + 4) = tmp[1];
        *(f32 *)(p + 8) = tmp[2];
        *(f32 *)(p + 12) = 1.0f;
    }
}
