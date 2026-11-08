extern void func_003F9698(const char *fmt, ...);
extern char D_0047E618[];
extern char D_0047E648[];
extern char D_0047E670[];
extern char D_0047E698[];

extern void *D_002AD408(int size);
extern void *func_002B47B0(void *arg0);
extern int func_003F85D8(int a, int b);

extern void *D_004281B8;

typedef struct {
    int pad[6];
    int field_18;
} S_B47B0;

void func_002B3E18(S_B47B0 *arg0, int arg1, int arg2, int arg3) {
    volatile int sp0 = arg1;
    volatile int sp4 = arg2;
    volatile int sp8 = arg3;

    if (sp4) {
        func_003F9698(D_0047E618, sp8);
        func_003F9698(D_0047E648, sp0);
        func_003F9698(D_0047E670, sp4);
        return;
    }
    func_003F9698(D_0047E698, (char *)arg0->field_18 + 0x20);
}

void *func_002B4740(void) {
    void *p;

    p = D_004281B8;
    if (p == 0) {
        p = D_002AD408(0x1C);
        p = func_002B47B0(p);
        D_004281B8 = p;
    }
    return D_004281B8;
}

void *func_002B47B0(S_B47B0 *arg0) {
    arg0->field_18 = func_003F85D8(0x40, 0x40);
    return arg0;
}
