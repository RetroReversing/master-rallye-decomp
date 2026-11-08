extern void func_003CE0D0(void **arg0, s32 arg1, s32 arg2);
s32 func_003D0350(void **arg0, s32 arg1) {
    void *temp;
    temp = *arg0;
    if ((u32)(*(s32*)((u8*)temp - 8)) >= 2U) {
        func_003CE0D0(arg0, *(s32*)((u8*)temp - 0x10), 1);
    }
    *(s32*)((u8*)(*arg0) - 4) = 1;
    return (s32)*arg0 + arg1;
}
