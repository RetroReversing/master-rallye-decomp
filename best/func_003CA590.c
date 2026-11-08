void *func_003CA3B0(s32, s32);
extern u32 D_0049B9D0[60];

s32 func_003CA590(s32 arg0, s32 arg1, s32 arg2) {
    s32 a = arg0;
    s32 b = arg1;
    s32 c = arg2;
    s32 i1 = a * 0x70;
    s32 i2 = b * 0x1C;
    u32 *p = (u32 *)((u8 *)D_0049B9D0 + i1 + i2);
    if (p[4] == 0) {
        return 0;
    }
    *(u8 *)((u8 *)func_003CA3B0(a, a) + 0x71) = (u8)c;
    return 1;
}
