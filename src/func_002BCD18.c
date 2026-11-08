extern s32 D_0043C3B0[];

void func_003F0B30(s32 arg0, s32 arg1, s32 arg2) {
    s32 *p = D_0043C3B0;
    p[1] = arg1;
    p[2] = arg2;
    p[3] = arg0;
}

extern void func_002BC938(void *a0, void *a1);
extern void func_002BEE48(void *a0, s32 a1);

s32 func_002BCF08(void *arg0, void *arg1) {
    u32 *p1 = (u32 *)arg1;
    p1[0x6C / 4] = (u32)arg1;
    func_002BC938((char *)arg1 + 0x64, (char *)arg0 + 0x28);
    func_002BEE48(((void **)arg0)[5], 1);
    return 1;
}

extern void func_002B2028(void *a0);
extern void func_003F9698(const char *fmt, ...);
extern char D_00480598[];

void func_002BCEC8(void *arg0) {
    if (arg0 != 0) {
        if (((s32 *)arg0)[3] != 0) {
            func_003F9698(D_00480598);
        } else {
            func_002B2028(arg0);
        }
    }
}

extern s32 D_00428CC0;
extern char D_00480560[];
extern void *func_002B1FC0(void *a0);

void *func_002BCD18(void *arg0) {
    void *buf;
    s32 n;
    void *p;
    u32 aligned;

    buf = (char *)arg0 + 0x48;
    n = D_00428CC0 + 1;
    D_00428CC0 = n;
    func_003F9698(D_00480560, n, buf);
    p = func_002B1FC0(buf);
    aligned = ((u32)p + 0x47) & 0xFFFFFFC0;
    *(void **)(aligned - 8) = p;
    return (void *)aligned;
}
