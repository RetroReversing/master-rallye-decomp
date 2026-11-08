/* func_00233180 */
void *func_00233180(void *arg0) {
    s32 *p = (s32 *)arg0;
    s32 *q = p + 3;
    s32 *r = p + 6;
    void *ret = arg0;

    p[0] = 0;
    p[1] = 0;
    p[2] = 0;
    p[3] = 0;
    q[2] = 0;
    q[1] = 0;
    p[6] = 0;
    r[2] = 0;
    r[1] = 0;
    return ret;
}

/* func_00233708 */
s32 func_00233708(void *arg0, s32 arg1) {
    s32 *begin = *(s32 **)arg0;
    s32 n = (*(s32 *)((u8 *)arg0 + 4) - (s32)begin) >> 2;
    s32 i = 0;
    if (n > 0) {
        s32 *p = begin;
        do {
            i++;
            if (arg1 == *p) return 1;
            p++;
        } while (i < n);
    }
    return 0;
}

/* func_00233750 */
s32 func_00233750(void *arg0, s32 arg1) {
    s32 *p = *(s32 **)((u8 *)arg0 + 0xC);
    s32 n = (*(s32 *)((u8 *)arg0 + 0x10) - (s32)p) >> 2;
    s32 i = 0;
    if (n > 0) {
        do {
            i++;
            if (arg1 == *p) return 1;
            p++;
        } while (i < n);
    }
    return 0;
}

/* func_00233790 */
s32 func_00233790(void *arg0, s32 arg1) {
    s32 *p = *(s32 **)((u8 *)arg0 + 0x18);
    s32 n = (*(s32 *)((u8 *)arg0 + 0x1C) - (s32)p) >> 2;
    s32 i = 0;
    if (n > 0) {
        do {
            i++;
            if (arg1 == *p) return 1;
            p++;
        } while (i < n);
    }
    return 0;
}
