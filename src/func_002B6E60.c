extern s32 func_002B76D0(s32, s32, s32);

s32 func_002B6E60(u8 *arg0, s32 arg1, u8 *arg2) {
    return func_002B76D0(*(s32 *)(arg0 + 0x14), arg1, *(s32 *)(arg2 + 0x8));
}
