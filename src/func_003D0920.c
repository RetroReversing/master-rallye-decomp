extern u32 D_00436208[];
extern void *func_003CD828(void *);
extern void func_003CDDB0(void **, unsigned int, unsigned int, unsigned int, signed char);

void **func_003D0920(void **a, unsigned int b, signed char c) {
    void *p;
    if (D_00436208[3]) {
        p = func_003CD828(D_00436208);
    } else {
        p = (char *)D_00436208 + 0x10;
        ++D_00436208[2];
    }
    *a = p;
    func_003CDDB0(a, 0, 0xFFFFFFFFU, b, c);
    return a;
}
