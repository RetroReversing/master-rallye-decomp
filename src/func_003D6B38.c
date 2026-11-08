s32 func_003D7D08(u32);
s32 func_003D7D68(u32);
s32 func_003D7E50(u32);

s32 func_003D6B38(u32 a) {
    return func_003D7D08(a);
}

s32 func_003D6B58(u32 a) {
    return func_003D7D68(a);
}

s32 func_003D6B78(u32 a) {
    return func_003D7E50(a);
}

extern s8 func_003D30B0(s32);
extern void func_003D6F68(s32, s32);
extern void func_003D4D70(s32);
extern s32 func_003D4EA0(void **);
extern void func_003D6A38(int a, int b, void *c, void *s);

s32 func_003D6988(void **arg0, int arg1, int arg2) {
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
        obj = *arg0;
        func_003D6A38(*(s32 *)obj, arg1, (void *)arg2, obj);
    }
    return (s32)arg0;
}
