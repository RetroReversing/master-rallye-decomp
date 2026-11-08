extern u8 D_0047DB18[];

void *func_002B0358(void *arg0, s32 arg1, s32 arg2) {
    *(s32 *)arg0 = arg1;
    *(void **)((char *)arg0 + 4) = D_0047DB18;
    *(s32 *)((char *)arg0 + 8) = arg2;
    return arg0;
}
