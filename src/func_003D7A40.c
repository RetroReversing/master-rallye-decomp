s32 func_003D7A40(s32 *arg0, s32 arg1) {
    s32 old = arg0[0];
    u32 t = ((u32)arg1 < 1u);
    arg0[0] = arg1;
    ((u8 *)arg0)[0x1A] = t << 2;
    return old;
}
