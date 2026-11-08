s32 func_002B61B0(s32 *arg0, s32 arg1, s32 arg2) {
    s32 idx = arg1;
    if (arg2 != 0) {
        idx = *(s32 *)((u8 *)arg0 + (idx << 2) + 4);
    }
    return *(s32 *)((u8 *)arg0 + (idx << 2) + 0x2C);
}
