extern int func_00157988(int, int);

void func_0015B078(void) {
    func_00157988(1, 0xFFFF);
}

void func_0015B098(void) {
    func_00157988(0, 0xFFFF);
}

extern void *func_002003C0(void);
extern int func_001E4280(void);
extern void func_001D4040(void *, const char *);
extern float func_001E3610(int, void *);

extern char D_00444880[];

void func_0015B018(void) {
    void *v1;
    int v2;
    char sp[0x40];
    func_002003C0();
    ((int *)func_002003C0())[6] = 0;
    v1 = func_002003C0();
    v2 = func_001E4280();
    func_001D4040(sp, D_00444880);
    ((float *)v1)[9] = func_001E3610(v2, sp);
}

void func_0015ADC0(void) {
    float *v1;
    int v2;
    char sp[0x40];
    func_002003C0();
    v2 = func_001E4280();
    func_001D4040(sp, D_00444880);
    v1 = func_002003C0();
    ((float *)v1)[9] = func_001E3610(v2, sp);
    ((float *)func_002003C0())[0] = 0.9f;
    func_002003C0();
    ((int *)func_002003C0())[6] = 0;
}
