extern u8 D_0047DB00[];

void *func_002B02C8(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    *(s32 *)arg0 = arg1;
    *(void **)((char *)arg0 + 4) = D_0047DB00;
    *(s32 *)((char *)arg0 + 8) = arg2;
    *(s32 *)((char *)arg0 + 0xC) = arg3;
    return arg0;
}
