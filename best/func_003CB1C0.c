void func_003CB1C0(void **arg0, s64 arg1) {
    u32 *p = *arg0;
    *p++ = (s32)(arg1 << 32) >> 32;
    *p++ = (u32)(arg1 >> 32);
    *arg0 = p;
}
