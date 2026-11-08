extern void *func_002003C0(void);
extern int func_001E4280(void);
extern void func_001D4040(void *, const char *);
extern float func_001E3610(int, void *);

extern char D_00444880[];

void func_0015ADC0(void) {
    void *p1;
    void *p2;
    void *p3;
    int v;
    char buf[0x40];
    
    p1 = func_002003C0();
    v = func_001E4280();
    func_001D4040(buf, D_00444880);
    ((float *)p1)[9] = func_001E3610(v, buf);
    p2 = func_002003C0();
    ((float *)p2)[0] = 0.9f;
    p3 = func_002003C0();
    ((int *)p3)[6] = 0;
}
