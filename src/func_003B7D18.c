extern s32 func_002B1FC0(s32);

s32 *func_003B7D18(s32 *arg0, s32 arg1) {
    s32 offset = arg1 << 2;
    s32 base = func_002B1FC0(offset);
    arg0[1] = base;
    arg0[0] = base + offset;
    return arg0;
}
