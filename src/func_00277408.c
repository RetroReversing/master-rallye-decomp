extern s32 func_001C6790(void *, s32, s32);

void func_00277408(void *arg0, s32 arg1, s32 arg2, s32 *arg3) {
    *(s32 *)((u8 *)*(u32 *)((u8 *)arg0 + 4) + func_001C6790(arg0, arg1, arg2) * 4) = *arg3;
}
