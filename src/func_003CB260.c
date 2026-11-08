void func_003CB260(void **arg0, u32 arg1) {
    u32 *p = *arg0;
    *p = arg1;
    p += 1;
    *arg0 = p;
}
