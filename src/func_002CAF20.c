extern s32 func_002CA1D0(s32, s8, s16);

void func_002CAF20(s32 arg0, s8 arg1, s16 arg2) {
    func_002CA1D0(arg0, arg1, arg2);
}

void func_002CBBB8(void *arg0, f32 fp0, f32 fp1, f32 fp2) {
    f32 f1 = *(f32 *)((char *)arg0 + 0xE0);
    f32 f0;
    int cond;
    if (f1 < fp0) {
        f0 = f1 + (fp1 * *(f32 *)((char *)arg0 + 0xE8));
        cond = fp0 < f0;
    } else {
        f0 = f1 - (fp2 * *(f32 *)((char *)arg0 + 0xE8));
        cond = f0 < fp0;
    }
    *(f32 *)((char *)arg0 + 0xE0) = f0;
    if (cond) *(f32 *)((char *)arg0 + 0xE0) = fp0;
    f0 = *(f32 *)((char *)arg0 + 0xE0);
    if (f0 < 0.0f) f0 = 0.0f;
    else if (f0 > 1.0f) f0 = 1.0f;
    *(f32 *)((char *)arg0 + 0xE0) = f0;
}
