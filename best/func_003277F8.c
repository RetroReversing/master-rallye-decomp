extern int D_0043C3B0[12];

void func_003F0B30(int arg0, int arg1, int arg2) {
    int *p = D_0043C3B0;
    p[3] = arg0;
    p[1] = arg1;
    p[2] = arg2;
}

void func_00327E30(void *arg0, void *arg1, float arg2) {
    float *d = (float *)((char *)arg0 + 0x20);
    float *s = (float *)arg1;
    d[0] = s[0];
    d[1] = s[1];
    d[3] = arg2;
    d[2] = s[2];
}

extern int D_004854F0;
extern void func_00327D08(void *);

void *func_003277F8(void *arg0, int arg1, int arg2, int arg3) {
    char *p = (char *)arg0;
    char *q = p + 0x20;
    *(int *)(p + 0xC) = arg1;
    *(void **)(p + 4) = &D_004854F0;
    *(int *)(p + 0x18) = 0x7FFFFFFF;
    *(int *)(p + 0) = 0;
    *(int *)(p + 8) = 0;
    *(int *)(p + 0x10) = 0;
    *(int *)(p + 0x14) = 0;
    *(int *)(q + 0) = 0;
    *(int *)(q + 0xC) = 0;
    *(int *)(q + 4) = 0;
    *(int *)(q + 8) = 0;
    *(int *)(p + 0x38) = arg3;
    func_00327D08(q);
    return arg0;
}

void *func_00327788(void *arg0, int arg1, int arg2) {
    char *p = (char *)arg0;
    char *q = p + 0x20;
    *(int *)(p + 0xC) = arg1;
    *(void **)(p + 4) = &D_004854F0;
    *(int *)(p + 0x18) = 0x7FFFFFFF;
    *(int *)(p + 0) = 0;
    *(int *)(p + 8) = 0;
    *(int *)(p + 0x10) = 0;
    *(int *)(p + 0x14) = 0;
    *(int *)(q + 0) = 0;
    *(int *)(q + 0xC) = 0;
    *(int *)(q + 4) = 0;
    *(int *)(q + 8) = 0;
    *(int *)(p + 0x38) = arg2;
    func_00327D08(q);
    return arg0;
}
