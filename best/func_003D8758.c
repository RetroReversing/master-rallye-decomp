void func_003D8758(void *arg0, s32 arg2) {
    void *vptr = *(void **)((u8 *)arg0 + 0x50);
    void (*vfunc)(void *, s32, s32) = *(void (**)(void *, s32, s32))((u8 *)vptr + 0x44);
    vfunc(NULL, arg2, 0);
}
