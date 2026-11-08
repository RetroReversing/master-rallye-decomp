extern s8 func_003D30B0(s32);
extern void func_003D6F68(s32, s32);
extern void func_003D4D70(s32);
extern s32 func_003D4EA0(void **);
extern void func_003D68D0(void **, const char *, ...);
extern int func_003D37E0(void *, s64 *, int *);

extern const char D_00488EC8[];

s32 func_003D4EA0(void **arg0) {
    void *obj;
    s32 v;
    s8 r;

    obj = *arg0;
    v = *(s32 *)obj;
    r = func_003D30B0(v);
    if (r != -1) {
        func_003D6F68(v, (s32)(s8)r);
        return 1;
    }
    ((u8 *)obj)[0x1A] |= 3;
    return 0;
}

s32 func_003D3E88(void **arg0, int arg1) {
    void *obj;
    u8 b;
    s32 ok;

    obj = *arg0;
    b = ((u8 *)obj)[0x1A];
    if (b) {
        ok = 0;
        ((u8 *)obj)[0x1A] = b | 2;
    } else {
        if (*(s32 *)((char *)obj + 4)) {
            func_003D4D70(*(s32 *)((char *)obj + 4));
        }
        ok = 1;
        if ((*(s64 *)((char *)*arg0 + 0x10) & 1)) {
            ok = func_003D4EA0(arg0);
        }
    }
    if (ok) {
        func_003D68D0(arg0, D_00488EC8, arg1);
    }
    return (s32)arg0;
}

s32 func_003D3DE0(void **arg0, s64 *arg1) {
    void *obj;
    u8 b;
    s32 ok;
    s64 tmp;

    obj = *arg0;
    b = ((u8 *)obj)[0x1A];
    if (b) {
        ok = 0;
        ((u8 *)obj)[0x1A] = b | 2;
    } else {
        if (*(s32 *)((char *)obj + 4)) {
            func_003D4D70(*(s32 *)((char *)obj + 4));
        }
        ok = 1;
        if ((*(s64 *)((char *)*arg0 + 0x10) & 1)) {
            ok = func_003D4EA0(arg0);
        }
    }
    if (ok) {
        func_003D68D0(arg0, D_00488EC8, &tmp);
        *arg1 = tmp;
    }
    return (s32)arg0;
}

s32 func_003D3D80(void *arg0, int *arg1) {
    s64 val;
    int flag;

    if (func_003D37E0(arg0, &val, &flag)) {
        if (flag) {
            val = -val;
        }
        *arg1 = (val != 0);
    }
    return (s32)arg0;
}
