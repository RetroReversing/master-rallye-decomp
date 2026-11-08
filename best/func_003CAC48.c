extern char D_0049B9D0[];
extern void *func_003CA3B0(s32, s32);
s32 func_003CAC48(s32, s32);

s32 func_003CADB0(s32 arg0, s32 arg1) {
    char *base = D_0049B9D0;
    if (*(s32 *)(base + arg0 * 0x70 + arg1 * 0x1C + 0x10)) {
        if (func_003CAC48(arg0, arg0) == 0x3FFFF) {
            return 1;
        }
    }
    return 0;
}

s32 func_003CAC48(s32 arg0, s32 arg1) {
    char *base = D_0049B9D0;
    unsigned char *p;
    s32 v;
    if (*(s32 *)(base + arg0 * 0x70 + arg1 * 0x1C + 0x10) == 0) {
        return 0;
    }
    p = (unsigned char *)func_003CA3B0(arg0, arg0);
    if (p[0x72] != 1) return 0;
    if (p[0x64] < 2) return 0;
    if (p[0x66] < 2) return 0;
    v = (s32)((p[0x79]) | (p[0x7A] << 8) | (p[0x7B] << 16) | (p[0x7C] << 24));
    return v;
}
