f32 func_002C8128(void *arg0, s32 arg1) {
    if (*(s32 *)((u8 *)arg0 + 8) != 0 && arg1 < *(u16 *)((u8 *)arg0 + 0x1A)) {
        return *(f32 *)((u8 *)arg0 + (arg1 << 2) + 0x38);
    }
    return 0.0f;
}
