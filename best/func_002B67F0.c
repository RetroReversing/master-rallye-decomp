extern s32 func_00407A18(s32, s32, void *);

s32 func_003A6B38(void *arg0) {
    volatile s32 *v1;
    s32 a0;
    s32 v0;

    v1 = (volatile s32 *)arg0;
    a0 = v1[5];
    v0 = a0;
    goto L;
L:
    return v0;
}

s32 func_002B67F0(s32 arg0, s32 arg1) {
    s32 sp0;
    s32 i;
    s32 ret;
    s32 one;
    s32 r;

    (void)arg0;
    ret = 1;
    one = 1;
    i = 0;
    sp0 = 1;
    goto test;
reset:
    i = 0;
test:
    if (sp0 == 0) goto out;
    r = func_00407A18(arg1, 1, &sp0);
    i++;
    if (r == 0) goto reset;
    sp0 = one;
    if (i >= 11) {
        ret = 0;
        goto out;
    }
    goto test;
out:
    return ret;
}
