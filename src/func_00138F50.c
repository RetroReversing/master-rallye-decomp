extern void func_001D4040(void *, const char *);
extern void D_002AD530(void *);
extern void *D_002AD5A8(int);

extern char D_0044AC88[];
extern char D_0044CEE8[];

void func_0016D178(void *arg0, f32 *arg1) {
    *arg1 = *(f32 *)((u8 *)arg0 + 0x30) * 2.5f;
}

void *func_00138F50(s32 *p) {
    s32 k;
    func_001D4040(&k, D_0044AC88);
    p[1] = k;
    p[2] = (s32)D_0044CEE8;
    p[0] = -1;
    p[7] = -1;
    p[4] = 0;
    p[3] = 0;
    p[6] = 0;
    p[8] = 0;
    p[9] = 0;
    p[10] = 0;
    return p;
}

void func_001A15F8(void *arg0) {
    void **sp = (void **)((u8 *)arg0 + 4);
    char *q;

    if (*sp != 0) {
        D_002AD530(*sp);
    }
    q = (char *)D_002AD5A8(0x13E800);
    *sp = q;
    q[0] = 0;
    q[1] = 0;
}
