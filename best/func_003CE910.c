s32 func_003CE910(void **arg0, s8 arg1, u32 arg2) {
    u8 *t0;
    s32 len;
    s32 a3;
    s8 v1;
    s32 v0;
    t0 = *arg0;
    v1 = arg1;
    len = *(s32 *)(t0 - 0x10);
    a3 = len - 1;
    if (len == 0) {
        goto L68;
    }
    if (arg2 < a3) {
        a3 = arg2;
    }
    a3 = a3 + 1;
    v0 = a3;
    if (v0 == 0) {
        goto L68;
    }
    a3 = a3 - 1;
    v1 = v1;
L48:
    v0 = a3;
    if (t0[a3] != (v1 << 24 >> 24)) {
    } else {
        return v0;
    }
    if (v0 != 0) {
        a3 = a3 - 1;
        goto L48;
    }
L68:
    return -1;
}
