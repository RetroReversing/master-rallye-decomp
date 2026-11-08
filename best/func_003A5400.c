extern s32 D_0043C3B0[];

void func_003F0B30(s32 arg0, s32 arg1, s32 arg2) {
    register s32 *p = D_0043C3B0;
    p[1] = arg1;
    p[2] = arg2;
    p[3] = arg0;
}

void func_003A54B8(u64 *arg0, f32 arg1) {
    s32 val;
    val = (s32)(arg1 * 1024.0f);
    if (val > 0xFFFF) val = 0xFFFF;
    if (val < 1) val = 1;
    *arg0 = (*arg0 & 0xFFF0000FFFFFFFFFULL) | (((u64)(u32)val & 0xFFFF) << 36);
}

void func_003A5458(u64 *arg0, s32 arg1) {
    *arg0 = (*arg0 & 0xFFF7FFFFFFFFFFFFULL) | (((u64)(arg1 & 1)) << 35);
}

void func_003A5400(u64 *arg0, s32 arg1) {
    *arg0 = (*arg0 & 0xFFF80000FFFFFFFFULL) | (((u64)(arg1 & 0x7FFFF)) << 16);
}
