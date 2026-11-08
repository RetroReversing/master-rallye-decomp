u8 func_003D83C8(void *arg0) {
    void *vptr = *(void **)((u8 *)arg0 + 0x50);
    s32 (*vfunc)(void) = *(s32 (**)(void))((u8 *)vptr + 0x1C);
    s32 res = vfunc();
    if (res == -1) {
        return 0xFF;
    } else {
        u8 *p = *(u8 **)((u8 *)arg0 + 4);
        *(u8 **)((u8 *)arg0 + 4) = p + 1;
        return *p;
    }
}
