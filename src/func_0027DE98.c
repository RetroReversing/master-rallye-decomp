void func_0027DE38(s32 arg0, s32 arg1, s32 arg2)
{
    if (arg2 < 4) {
        *(s32 *)((u8 *)arg0 + (arg2 << 2) + 0x2C) = arg1;
    }
}

s32 func_0027DE58(s32 arg0, s32 arg1)
{
    if (arg1 < 4) {
        return *(s32 *)((u8 *)arg0 + (arg1 << 2) + 0x2C);
    }
    return 0;
}

s32 func_0027DE98(s32 arg0, s32 arg1)
{
    if (arg1 < 4) {
        return *(s32 *)((u8 *)arg0 + (arg1 << 2) + 0x3C);
    }
    return 0;
}
