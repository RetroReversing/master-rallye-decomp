s32 func_0021DF78(void *arg0) {
    s64 v = *(s64*)((u8 *)arg0 + 0x78);
    v <<= 31;
    return (s32)(v >> 32) & 1;
}

s32 func_0021DF58(void *arg0) {
    s64 v = *(s64*)((u8 *)arg0 + 0x78);
    v <<= 29;
    return (s32)(v >> 32) & 1;
}

void func_0021E110(void *arg0, s32 arg1) {
    *(s32*)((u8 *)arg0 + 0x88) += 1;
    s64 v = *(s64*)((u8 *)arg0 + 0x78);
    v &= ~8LL;
    v |= ((s64)(arg1 & 1)) << 3;
    *(s64*)((u8 *)arg0 + 0x78) = v;
}

s32 func_0021E180(void *arg0) {
    s64 v = *(s64*)((u8 *)arg0 + 0x78);
    v <<= 30;
    return (s32)(v >> 32) & 1;
}
