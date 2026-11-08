extern s32 D_0043C3B0[];
void func_003F0B30(s32 arg0, s32 arg1, s32 arg2) {
    register s32 *p = D_0043C3B0;
    p[1] = arg1;
    p[2] = arg2;
    p[3] = arg0;
}

extern void func_003AB738(void *);
void func_003A3390(void *arg0) {
    s32 *p = (s32 *)arg0;
    s32 v = p[2] - 1;
    p[2] = v;
    if (v == 0) {
        func_003AB738(arg0);
    }
}

extern s32 func_003A32A8(s32);
extern void func_003D2EB8(void *, s32);
extern u32 D_0040E618[];
void func_003A32E8(void *arg0, s32 arg1) {
    if (arg1 != 0) {
        func_003D2EB8(arg0, arg1);
    } else {
        s32 idx = func_003A32A8(arg1);
        u32 *slot = &D_0040E618[idx];
        *(u32 *)arg0 = *slot;
        *slot = (u32)arg0;
    }
}

s32 func_003A32A8(s32 arg0) {
    return ((u32)(arg0 + 7) >> 3) - 1;
}
