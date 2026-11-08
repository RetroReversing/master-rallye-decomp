extern void func_001D4040(void *, const char *);
extern char D_00444DA8[];
extern char D_0044DAB0[];

void *func_001028E0(s32 *p) {
    s32 k;

    func_001D4040(&k, D_00444DA8);
    p[1] = k;
    p[0] = -1;
    p[2] = (s32)D_0044DAB0;
    p[3] = 0;
    p[4] = 0;
    p[5] = 0;
    p[6] = 1;
    p[7] = 1;
    p[8] = 0;
    return p;
}
