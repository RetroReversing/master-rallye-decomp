extern int func_003E67F0(void *arg0, int a, int b, int c);
extern int func_003E6900(void *arg0, int a, int b, int c);

void func_003E5FE0(void *arg0, int arg1, int arg2) {
    int *p = (int *)arg0;
    int v;
    if (arg2 != 0) {
        if (p[0x174 / 4] == 3) {
            int var5;
            if (p[0x150 / 4] != 3) {
                var5 = p[0x1B8 / 4];
            } else {
                var5 = p[0x1C4 / 4];
            }
            func_003E67F0(arg0, var5, arg1 - 1, arg1);
        } else {
            int var5, var6;
            if (p[0x150 / 4] != 3) {
                var5 = p[0x1C8 / 4];
                var6 = p[0x1D8 / 4];
            } else {
                var5 = p[0x1D4 / 4];
                var6 = p[0x1E4 / 4];
            }
            func_003E6900(arg0, var5, var6, arg1 - 1);
        }
    }
    v = p[0xF8 / 4];
    if (v == 1) {
        p[0xF8 / 4] = 2;
    }
}

extern void func_003E1708(void *arg0, void *sp);
extern int func_003FA310(void *sp, const char *fmt, int a, int b);
extern const char D_00489E68[];

void func_003E6328(void *arg0, void *arg1) {
    int *p = (int *)arg0;
    int *q = (int *)arg1;
    int var17 = 0;
    if (p[0xE0 / 4] != 0) {
        var17 = 0;
        if (p[0xDC / 4] >= q[1]) {
            var17 = (p[0xE0 / 4] < q[2]) ^ 1;
        } else {
            var17 = 1;
        }
    } else {
        int prod = q[3] * q[4];
        var17 = (p[0xE4 / 4] < prod) ^ 1;
    }
    if (var17 == 0) {
        unsigned char sp[0x130];
        func_003FA310(sp, D_00489E68, q[1], q[2]);
        func_003E1708(arg0, sp);
    }
    return var17;
}

extern void func_0040AF58(void);
extern void func_0040AFA0(unsigned int);

void func_003E6C10(unsigned int arg0, unsigned int arg1) {
    func_0040AF58();
    *(volatile unsigned int *)0x1000B010 = (arg0 & 0x0FFFFFFF) | 0x80000000;
    *(volatile unsigned int *)0x1000B020 = arg1 >> 4;
    *(volatile unsigned int *)0x1000B000 = 0x100;
    func_0040AFA0(0x80000000);
}
