s32 func_002C80C8(void *arg0) {
    s64 v = *(s64*)((u8 *)arg0 + 0x90);
    v <<= 26;
    return (s32)(v >> 32) & 1;
}

s32 func_002C80E0(void *arg0) {
    s64 v = *(s64*)((u8 *)arg0 + 0x90);
    v <<= 25;
    return (s32)(v >> 32) & 1;
}

s32 func_002C80F8(void *arg0) {
    s64 v = *(s64*)((u8 *)arg0 + 0x90);
    v <<= 27;
    return (s32)(v >> 32) & 1;
}

s32 func_002C8110(void *arg0) {
    s64 v = *(s64*)((u8 *)arg0 + 0x90);
    v <<= 28;
    return (s32)(v >> 32) & 1;
}
