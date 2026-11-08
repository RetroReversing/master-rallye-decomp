extern s32 D_0043C3B0[];

void func_003F0B30(s32 arg0, s32 arg1, s32 arg2) {
    register s32 *p = D_0043C3B0;
    p[1] = arg1;
    p[2] = arg2;
    p[3] = arg0;
}

void func_0029A588(s32, s32, s32, s32, s32);

void func_0029A568(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4) {
    func_0029A588(a0, a1, a2, a3, a4);
}

void func_0029A548(s32 a0, s32 a1, s32 a2, s32 a3) {
    func_0029A588(a0, a1, a2, a3, 0);
}

s32 func_00296530(void);

typedef struct { char b[16]; } B16;

void func_00296640(s32 arg0, void *arg1, void *arg2) {
    B16 tmp = *(B16 *)arg2;
    if (func_00296530()) {
        char *p = *(char **)((char *)arg1 + 0x4C);
        f32 *d = (f32 *)(p + 0x10);
        f32 *s = (f32 *)&tmp;
        d[0] = s[0];
        d[1] = s[1];
        d[2] = s[2];
        d[3] = s[3];
        *(s32 *)(p + 0x88) = *(s32 *)(p + 0x88) + 1;
    }
}
