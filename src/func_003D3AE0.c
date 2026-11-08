/* identical to func_003D3A80 (matched), with its names changed by decompdecomp */
extern s8 func_003D30B0(s32);
extern void func_003D6F68(s32, s32);
extern s32 func_003D37E0(void *, s64 *, int *);

s32 func_003D4EA0(void **arg0) {
    void *obj;
    s32 v;
    s32 r;

    obj = *arg0;
    v = *(s32 *)obj;
    r = func_003D30B0(v);
    if (r != -1) {
        func_003D6F68(*(s32 *)obj, r);
        return 1;
    }
    ((u8 *)obj)[0x1A] |= 3;
    return 0;
}

s32 func_003D3C00(void *arg0, s64 *arg1) {
    s64 val;
    int flag;

    if (func_003D37E0(arg0, &val, &flag)) {
        if (flag) {
            val = -val;
        }
        *arg1 = val;
    }
    return (s32)arg0;
}

s32 func_003D3B40(void *arg0, s32 *arg1) {
    s64 val;
    int flag;

    if (func_003D37E0(arg0, &val, &flag)) {
        if (flag) {
            val = -val;
        }
        *arg1 = (s32)val;
    }
    return (s32)arg0;
}

s32 func_003D3AE0(void *arg0, u16 *arg1) {
    s64 val;
    int flag;

    if (func_003D37E0(arg0, &val, &flag)) {
        if (flag) {
            val = -val;
        }
        *arg1 = (u16)val;
    }
    return (s32)arg0;
}
