typedef struct {
    u8 pad0[8];
    s32 f8;
    void *fC;
    u8 pad10[0x18];
    s32 f28;
} S840;

s32 func_002B0648(s32, void *, s32);

s32 func_002AE840(S840 *arg0, s32 (*arg1)(void), u8 *arg2) {
    s32 ret;
    if (arg2 != 0 && *(s16 *)(arg2 + 4) != 4)
        return 0;
    if ((u32)arg1 == 0xFFFFFFFFU)
        return arg0->f8;
    ret = func_002B0648(arg1(), arg0->fC, arg0->f28);
    if (ret != 0)
        arg0->f8 = ret;
    return ret;
}
