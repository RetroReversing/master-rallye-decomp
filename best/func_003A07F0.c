extern void *func_003A0770(void *arg0, s32 arg1);

s32 func_003A07F0(s32 arg0, s32 arg1, s32 arg2, s8 arg3) {
    volatile s32 va0 = arg0;
    volatile s32 va1 = arg1;
    volatile s32 va2 = arg2;
    volatile s8 va3 = arg3;
    volatile s32 dst = va2;
    while (va0 != va1) {
        func_003A0770((void *)dst, va0);
        va0 = va0 + 0x1C;
        dst = dst + 0x1C;
    }
    return dst;
}
