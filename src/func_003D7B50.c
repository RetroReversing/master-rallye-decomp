s64 func_003D7B50(void *arg0, s64 arg1, s64 arg2) {
    s64 *p = (s64 *)((u8 *)arg0 + 0x10);
    s64 t = *p;
    *p = (t & ~arg2) | (arg1 & arg2);
    return t;
}
