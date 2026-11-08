extern s32 D_0043C3B0[];

void func_003F0B30(s32 arg0, s32 arg1, s32 arg2) {
    s32 *p = D_0043C3B0;
    p[1] = arg1;
    p[2] = arg2;
    p[3] = arg0;
}

extern f32 func_00290B28(void *);

f32 func_00290C00(void *arg0, void *arg1) {
    f32 temp_f20;

    temp_f20 = func_00290B28(arg0);
    return func_00290B28(arg1) - temp_f20;
}

extern void func_00290528(void *, f32, f32);

void func_002903C8(void *arg0) {
    *(s32 *)((char *)arg0 + 0x1C) = 1;
    func_00290528(arg0, 5.0f, 8.0f);
    *(f32 *)((char *)arg0 + 0x18) = 2.0f;
    *(f32 *)((char *)arg0 + 0x54) = 70.0f;
    *(f32 *)((char *)arg0 + 0x20) = 3.5f;
    *(f32 *)((char *)arg0 + 0x48) = 0.5f;
    *(f32 *)((char *)arg0 + 0x4C) = 30.0f;
    *(f32 *)((char *)arg0 + 0x50) = 0.3f;
}

extern void func_001D4040(void *, char *);
extern char D_0047B718[];
extern char D_0047D278[];

void *func_00290370(void *arg0) {
    s32 sp[4];

    func_001D4040(sp, D_0047B718);
    *(s32 *)((char *)arg0 + 4) = sp[0];
    *(s32 *)((char *)arg0 + 0) = -1;
    *(void **)((char *)arg0 + 8) = D_0047D278;
    func_002903C8(arg0);
    return arg0;
}
