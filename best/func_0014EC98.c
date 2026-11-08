extern void *D_002AD408(int);
extern void *func_001D4040(void *, const char *);
extern void func_001E2460(void *, void *);
extern void func_001E2C78(void *, const char *, int);
extern void func_001E25B0(void *, const char *, unsigned int *);
extern unsigned int func_00193B60(void);
extern unsigned int func_001930D8(unsigned int, unsigned int);
extern void *func_0021E290(void *);
extern void *func_00205BF8(void *);
extern void func_0021E540(void *, void *, unsigned int, unsigned int, unsigned int);
extern void func_0021E740(void *, int);

extern const char D_0044C598[];
extern const char D_0044BC38[];
extern unsigned long D_0044DD18;

void *func_0014EC98(void) {
    unsigned long sp[0x18];
    void *v0;
    void *v1;
    void *a0;
    void *s1;
    
    v0 = D_002AD408(0x24);
    a0 = (void *)((unsigned char *)v0 + 0x14);
    func_001D4040(sp, D_0044C598);
    ((unsigned int *)v0)[0] = 0;
    ((unsigned int *)v0)[1] = 0;
    ((unsigned int *)v0)[2] = 0;
    ((unsigned int *)v0)[3] = 0;
    v1 = (void *)&D_0044DD18;
    ((unsigned int *)v0)[4] = (unsigned int)v1;
    ((unsigned int *)a0)[0] = 0;
    ((unsigned int *)a0)[1] = 0;
    ((unsigned int *)v0)[5] = 0;
    ((unsigned int *)v0)[8] = ((unsigned int *)sp)[0];
    s1 = (void *)((unsigned char *)sp + 0x20);
    ((unsigned int *)a0)[2] = 0;
    ((unsigned int *)a0)[1] = 0;
    func_001E2460(s1, v0);
    func_001E2C78(s1, D_0044BC38, 0);
    return v0;
}

void func_0014ED38(void *arg0, int arg2) {
    unsigned long sp[0xC];
    unsigned int sp4;
    void *a0;
    void *a1;
    
    a0 = sp;
    func_001E2460(a0, (void *)arg2);
    a1 = D_0044BC38;
    func_001E25B0(a0, a1, &sp4);
    ((unsigned int *)arg0)[10] = func_001930D8(func_00193B60(), sp4);
}

void *func_0014ED90(void) {
    void *v0;
    void *v1;
    unsigned int a1;
    unsigned long t0;
    
    v0 = func_0021E290(D_002AD408(0x7C));
    v1 = func_00205BF8(D_002AD408(0x90));
    a1 = ((unsigned int *)v1)[34] + 1;
    t0 = ((unsigned long long *)v1)[15];
    t0 = (t0 & ~0x3ULL) | 1ULL;
    ((unsigned long long *)v1)[15] = t0;
    ((unsigned int *)v1)[25] = 2;
    ((unsigned int *)v1)[34] = a1;
    func_0021E540(v0, v1, a1, 1, 2);
    func_0021E740(v0, 2);
    ((unsigned int *)v0)[0] = ((unsigned int *)v0)[0] & ~2;
    return v0;
}

int func_0014EE30(void *arg0, int arg1) {
    unsigned int temp;
    if (arg1 < 0) {
        return -1;
    }
    temp = func_001E4280();
    if (func_001E38C8(temp, ((unsigned int *)arg0)[23] + arg1 * 4) == 0) {
        return -1;
    }
    temp = func_001E4280();
    return func_001E3650(temp, ((unsigned int *)arg0)[23] + arg1 * 4);
}
