extern void func_003E1708(void *arg0, void *sp);
extern int func_003FA310(void *sp, const char *fmt, int a, int b);
extern const char D_00489E68[];

int func_003E6328(void *arg0, void *arg1) {
    int *p = (int *)arg0;
    int *q = (int *)arg1;
    int t4 = p[0xE0 / 4];
    int var17;
    if (t4 != 0) {
        var17 = 1;
        if (p[0xDC / 4] >= q[1] && t4 < q[2]) {
            var17 = 0;
        }
    } else {
        if (p[0xE4 / 4] < q[3] * q[4]) {
            var17 = 0;
        } else {
            var17 = 1;
        }
    }
    if (var17 == 0) {
        char sp[0x130];
        func_003FA310(sp, D_00489E68, q[1], q[2]);
        func_003E1708(arg0, sp);
    }
    return var17;
}
