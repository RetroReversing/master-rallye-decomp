void func_0027DE38(s32 arg0, s32 arg1, s32 arg2)
{
    if (arg2 < 4) {
        ((s32 *)arg0)[arg2 + 11] = arg1;
    }
}

s32 func_0027DE58(s32 arg0, s32 arg1)
{
    if (arg1 < 4) {
        return ((s32 *)arg0)[arg1 + 11];
    }
    return 0;
}

void func_0027DE78(s32 arg0, s32 arg1, s32 arg2)
{
    if (arg2 < 4) {
        *(s32 *)((u8 *)arg0 + (arg2 << 2) + 0x3C) = arg1;
    }
}

s32 func_0027DE98(s32 arg0, s32 arg1)
{
    if (arg1 < 4) {
        return ((s32 *)arg0)[arg1 + 15];
    }
    return 0;
}
