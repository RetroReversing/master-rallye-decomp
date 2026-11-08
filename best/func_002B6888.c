extern s32 func_002B6AD0(void *, s32);
extern s32 func_00406EA8(void *, s32);
extern void func_00407130(s32);
extern s32 func_00407A18(s32, s32, void *);

s32 func_003A6B38(void *arg0) {
    s32 *p = (s32 *)arg0;
    s32 a0 = p[5];
    s32 v0 = a0;
    return v0;
}

s32 func_002B6A50(void *arg0) {
    s32 res = 0;
    void *v;
    s32 fd;
    s32 tmp;

    v = *(void **)((char *)arg0 + 8);
    fd = func_00406EA8(
        ((void *(*)(void *))*(void **)((char *)v + 0x7C))(
            (char *)arg0 + *(s16 *)((char *)v + 0x78)
        ),
        1
    );
    if (fd >= 0) {
        tmp = func_002B6AD0(arg0, fd);
        func_00407130(fd);
        res = tmp;
    }
    return res;
}

s32 func_002B6888(s32 arg0, s32 arg1) {
    s32 sp0;
    s32 i;

    sp0 = 1;
    i = 0;
    while (i < 3) {
        if (func_00407A18(arg1, 1, &sp0) != 0) {
            sp0 = 1;
            i++;
        } else {
            break;
        }
    }
    return sp0 == 0;
}

s32 func_002B67F0(s32 arg0, s32 arg1) {
    s32 sp0;
    s32 i;
    s32 ret;

    ret = 1;
    i = 0;
    sp0 = 1;
    while (sp0 != 0) {
        if (func_00407A18(arg1, 1, &sp0) != 0) {
            i++;
            sp0 = 1;
            if (i >= 11) {
                ret = 0;
            }
        } else {
            i = 0;
        }
    }
    return ret;
}
