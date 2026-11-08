void func_00225888(void *arg0, s32 arg1) {
    void **cur = *(void ***)arg0;
    void **end = *(void ***)((u8 *)arg0 + 4);
    if (cur != end) {
        do {
            u8 *obj = (u8 *)*cur;
            cur++;
            *(s32 *)(obj + 0x14) = arg1;
        } while (cur != *(void ***)((u8 *)arg0 + 4));
    }
}
