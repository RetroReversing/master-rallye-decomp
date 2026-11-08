extern s32 D_0043C3B0[];

extern s32 func_003ACFB8(void *);
extern s32 func_003B0588(s32, s32, void *);
extern s32 func_003A5AA8(void *, s32);
extern s32 func_003B01C8(s32);
extern s32 func_003AFF08(s32);

void func_003F0B30(s32 a0, s32 a1, s32 a2) {
    register s32 *p = D_0043C3B0;
    p[1] = a1;
    p[2] = a2;
    p[3] = a0;
}

void func_003AA0E8(s32 arg0, s32 arg1) {
    char buf[16];
    func_003ACFB8(buf);
    func_003B0588(arg0, arg1, buf);
    func_003A5AA8(buf, 2);
}

s32 func_003A9DB0(s32 arg0, s32 arg1) {
    return func_003B01C8(arg0) + arg1 * 12;
}

s32 func_003A9D48(s32 arg0, s32 arg1) {
    return func_003AFF08(arg0) + arg1 * 4;
}
