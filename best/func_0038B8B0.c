s32 func_0038B8B0(void **arg0, s8 arg1, u32 arg2) {
    s8 *buf = (s8 *)*arg0;
    s32 len = *(s32 *)((u8 *)buf - 0x10);
    if (len == 0) {
        return -1;
    }
    s32 idx = (arg2 < (u32)(len - 1)) ? (s32)arg2 : (len - 1);
    idx = idx + 1;
    while (idx != 0) {
        idx = idx - 1;
        if (buf[idx] == arg1) {
            return idx;
        }
    }
    return -1;
}
