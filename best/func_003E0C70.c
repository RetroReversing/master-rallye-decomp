s32 func_003E1760(s32, s32);

void func_003E0C70(void *arg0, s32 arg2) {
    s32 t = arg2 + 0x13;
    s32 r = t;
    if (r < 0) {
        r = arg2 + 0x22;
    }
    func_003E1760(*(s32 *)((u8 *)arg0 + 0x40), (r >> 4) << 4);
}
