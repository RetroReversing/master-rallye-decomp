extern s32 D_0043C3B0[];

extern s32 func_002AFEB8(s32, s32);
extern s32 func_002C61E8(s32, s32, s32);

void func_003F0B30(s32 arg0, s32 arg1, s32 arg2) {
    register s32 *p = D_0043C3B0;
    p[1] = arg1;
    p[2] = arg2;
    p[3] = arg0;
}

s32 func_00399FF0(s32 arg0, s32 arg1) {
    s32 *dst = (s32 *)arg0;
    s32 *src = (s32 *)arg1;
    s32 *p = (s32 *)func_002AFEB8(8, arg0);
    if (p != 0) {
        *(s64 *)p = *(s64 *)src;
    }
    return (s32)p;
}

s32 func_00399B70(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    return func_002C61E8(arg0, arg1, arg2);
}

s32 *func_00399AF0(s32 *arg0, s32 arg1, s32 *arg2) {
    s32 *p0 = arg0;
    s32 sp4 = arg1;
    s32 *p8 = arg2;
    while (sp4 != 0) {
        *p0 = *p8;
        sp4 -= 1;
        p0 += 1;
    }
    return p0;
}
