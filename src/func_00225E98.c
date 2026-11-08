extern void *func_00225EE0(void);
extern void *func_00225280(void *, void *);
extern void func_00225518(void *, int);
extern void func_00225740(void *, int);
extern void func_00225960(void *, void *);
extern void func_00225B30(void *, void *);
extern float D_00426508[3];

void func_00225C00(void) {
    long long buf[2] __attribute__((aligned(16))); /* 0x10 bytes at sp+0 */
    void *p1;
    void *p2;

    p1 = func_00225EE0();
    p2 = func_00225280(buf, p1);
    func_00225960((void *)((unsigned int)buf | 1), p2);
    if (p1 != 0) {
        func_00225740(p1, 3);
    }
    if (p2 != 0) {
        func_00225518(p2, 3);
    }
}

void func_00225E98(void) {
    long long buf[2] __attribute__((aligned(16)));
    void *p1;

    p1 = func_00225EE0();
    func_00225B30(buf, p1);
    if (p1 != 0) {
        func_00225740(p1, 3);
    }
}

void func_00226638(void *arg0) {
    float *s = D_00426508;
    float x = s[0];
    float y = s[1];
    float z = s[2];
    float *v1 = (float *)((char *)arg0 + 0xC);
    float *v2 = (float *)((char *)arg0 + 0x18);

    *(int *)((char *)arg0 + 0) = 0;
    *(int *)((char *)arg0 + 4) = 0;
    *(int *)((char *)arg0 + 8) = 0;
    v1[0] = x; v1[1] = y; v1[2] = z;
    v2[0] = x; v2[1] = y; v2[2] = z;
}
