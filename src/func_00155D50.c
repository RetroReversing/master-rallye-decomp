s32 func_00155CF8(void *arg0);

s32 func_00155D50(void *arg0) {
    return *(s32 *)((u8 *)arg0 + 4) + func_00155CF8(arg0) * 4;
}
