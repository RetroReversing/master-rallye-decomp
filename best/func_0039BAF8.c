void *func_0039BAF8(void *arg0, void *arg1, void *arg2, void *arg3, void *arg4) {
    volatile s32 count;
    s64 *src = (s64 *)arg1;
    s64 *dst = (s64 *)arg2;
    (void)arg3;
    (void)arg4;
    count = (s32)((char *)arg1 - (char *)arg0) >> 3;
loop:
    if (count > 0) {
        dst--;
        src--;
        *dst = *src;
        count--;
        goto loop;
    }
    return dst;
}
