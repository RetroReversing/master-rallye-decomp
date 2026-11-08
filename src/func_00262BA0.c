u16 func_00262BA0(void *arg0, s32 arg1, s32 arg2) {
    u16 *p = *(u16 **)((u8 *)arg0 + 0x40);
    if (p != 0) {
        s32 idx = arg1 * 10 + arg2;
        if (idx < 0x78) {
            return p[idx];
        }
    }
    return 0;
}

void func_00262B68(void *arg0, s32 arg1, s32 arg2, u16 arg3) {
    u16 *p = *(u16 **)((u8 *)arg0 + 0x40);
    if (p != 0) {
        s32 idx = arg1 * 10 + arg2;
        if (idx < 0x78) {
            p[idx] = arg3;
        }
    }
}
