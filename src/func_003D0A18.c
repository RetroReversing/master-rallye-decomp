extern u32 D_00436208[];
extern void *func_003CD828(void *);
extern void func_003CD948(void **, unsigned int, unsigned int, int, int);
extern int func_003FA9B8(int);
extern void func_003F94D0(int, signed char, int, signed char);

void **func_003D0AF0(void **a, int b, int c) {
    void *p;
    if (D_00436208[3]) {
        p = func_003CD828(D_00436208);
    } else {
        p = (char *)D_00436208 + 16;
        ++D_00436208[2];
    }
    *a = p;
    func_003CD948(a, 0, 0xFFFFFFFFU, b, c);
    return a;
}

void **func_003D0A18(void **a, int b) {
    void *p;
    if (D_00436208[3]) {
        p = func_003CD828(D_00436208);
    } else {
        p = (char *)D_00436208 + 16;
        ++D_00436208[2];
    }
    *a = p;
    func_003CD948(a, 0, 0xFFFFFFFFU, b, func_003FA9B8(b));
    return a;
}

void func_003D09E0(int arg0, int arg1, signed char arg2, int arg3) {
    func_003F94D0(arg0 + 0x10 + arg1, arg2, arg3, arg2);
}

void func_003D7B00(void *arg0, int arg1) {
    if (!*(int *)((char *)arg0 + 0)) {
        arg1 |= 4;
    }
    *(unsigned char *)((char *)arg0 + 0x1A) = arg1;
}
