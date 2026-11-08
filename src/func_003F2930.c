/* identical to func_003F2628 (matched), with its names changed by decompdecomp */
extern void func_0040AF58(void);
extern void func_0040AFA0(void);

void func_003F2930(int arg0) {
    func_0040AF58();
    *(volatile unsigned int *)0x1000F590 = *(volatile unsigned int *)0x1000F520 | 0x10000;
    *(volatile unsigned int *)0x1000B400 = arg0;
    *(volatile unsigned int *)0x1000F590 = *(volatile unsigned int *)0x1000F520 & 0xFFFEFFFF;
    func_0040AFA0();
}

unsigned int func_003F28C8(int arg0) {
    if (arg0 == 0) {
        volatile unsigned int *p = (volatile unsigned int *)0x10002010;
        while (*p & 0x80000000) {
        }
        return 0;
    } else if (arg0 == 1) {
        return (*(volatile unsigned int *)0x10002010 >> 31) & 1;
    }
    return 0;
}

float func_003F3038(float fparg0) {
    union {
        float f;
        unsigned int i;
    } u;
    u.f = fparg0;
    u.i &= 0x7FFFFFFF;
    return u.f;
}

extern int func_003F5B60(float *);
extern float func_003F6C28(int, float, float);

float func_003F3230(float fparg0) {
    union {
        float f;
        unsigned int i;
    } u;
    unsigned int bits;
    float f1, f2;
    int mode;
    int ret;
    u.f = fparg0;
    bits = u.i & 0x7FFFFFFF;
    if (bits <= 0x3F490FDA) {
        return func_003F6C28(1, 0.0f, 0.0f);
    }
    if (bits > 0x7F7FFFFF) {
        return fparg0 - fparg0;
    }
    ret = func_003F5B60(&f1);
    mode = 1 - ((ret & 1) * 2);
    return func_003F6C28(mode, f1, f2);
}
