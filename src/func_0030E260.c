extern int func_003D6F68(int, signed char);
extern void func_0030C350(int);
extern void func_0030C3C0(void);
extern void func_0030C508(unsigned int);
extern void func_003F9698(const char *, ...);
extern unsigned int D_0042D5F4;
extern const char D_00484D38[];
extern const char D_00484D58[];
extern const char D_00484D80[];

typedef struct { int x0; unsigned char pad[0x16]; unsigned char b1A; } S_D59E0;

void **func_003D59E0(void **arg0, signed char arg1) {
    S_D59E0 *s = (S_D59E0 *)*arg0;
    if (s->b1A == 0) {
        if (func_003D6F68(*(int *)s, arg1) == -1) {
            ((S_D59E0 *)*arg0)->b1A = 4;
        }
    }
    return arg0;
}

int func_0030E260(unsigned int arg0) {
    if (!(arg0 < D_0042D5F4)) {
        return -1;
    }
    func_0030C350(0x2F);
    func_0030C508(arg0);
    func_0030C3C0();
    return 0;
}

int func_0030E208(unsigned int arg0) {
    if (!(arg0 < D_0042D5F4)) {
        return -1;
    }
    func_0030C350(0x2E);
    func_0030C508(arg0);
    func_0030C3C0();
    return 0;
}

int func_0030E0B0(unsigned int arg0, unsigned int *arg1) {
    unsigned int count = arg1[2];
    if (arg0 < count) {
        return (int)arg1[arg0 + 3];
    }
    func_003F9698(D_00484D80);
    func_003F9698(D_00484D38, count);
    func_003F9698(D_00484D58, arg0);
    return -1;
}
