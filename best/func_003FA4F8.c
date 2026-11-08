extern s64 func_003FF618(s32, s16, s32, s32);

s64 func_003FA4F8(void *arg0, s32 arg1, s32 arg2) {
    s64 ret = func_003FF618(*(s32 *)((char *)arg0 + 0x54), *(s16 *)((char *)arg0 + 0xE), arg1, arg2);
    u16 f = *(u16 *)((char *)arg0 + 0xC);
    if (ret == -1) {
        f &= 0xEFFF;
    } else {
        *(s32 *)((char *)arg0 + 0x50) = (s32)ret;
        f |= 0x1000;
    }
    *(u16 *)((char *)arg0 + 0xC) = f;
    return ret;
}
