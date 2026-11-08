extern int D_0043C3B0[];

void func_003F0B30(int arg0, int arg1, int arg2) {
    int *p = D_0043C3B0;
    p[1] = arg1;
    p[2] = arg2;
    p[3] = arg0;
}

void func_003AD1B8(float *a, float *b, float *c) {
    c[0] = a[0] - b[0];
    c[1] = a[1] - b[1];
    c[2] = a[2] - b[2];
}

extern void func_003AA878(void *);
extern void func_003B2DF0(void *, void *);
extern void func_003AA8E8(void *, int);
extern void func_003A3660(void *);
extern void func_003B1120(void *, void *);
extern void func_003A3730(void *, int);

void *func_003AD108(void *arg0) {
    char sp[0x60];
    char sp10[0x50];

    func_003AA878(sp);
    func_003B2DF0(arg0, sp);
    func_003AA8E8(sp, 2);
    func_003A3660(sp10);
    func_003B1120((char *)arg0 + 0xC, sp10);
    func_003A3730(sp10, 2);
    return arg0;
}

extern void func_003A5BC8(void *, float, float, float);

void *func_003AD088(void *arg0) {
    func_003A5BC8(arg0, 0.0f, 0.0f, 0.0f);
    func_003A5BC8((char *)arg0 + 0xC, 0.0f, 0.0f, 0.0f);
    *(int *)((char *)arg0 + 0x18) = -1;
    return arg0;
}
