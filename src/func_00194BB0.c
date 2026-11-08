extern int func_001E4280(void);
extern int func_001E3EC0(int, void *, int);
extern int func_001E3D10(int, void *, int);
extern int func_001E33C8(int, void *, int);

extern unsigned char D_0040E7A0[];
extern unsigned char D_0040E7C8[];
extern unsigned char D_0048DED0[];

void func_0016D178(void *arg0, float *arg1) {
    *arg1 = *(float *)((unsigned char *)arg0 + 0x30) * 2.5f;
}

void func_00194810(int arg0, int arg1) {
    func_001E3EC0(func_001E4280(), &D_0040E7A0, arg1);
}

void func_00194B48(int arg0, int arg1) {
    func_001E3EC0(func_001E4280(), &D_0040E7C8, arg1);
}

void func_00194BB0(int arg0, int arg1) {
    int ctx;
    ctx = func_001E4280();
    func_001E3D10(ctx, &D_0048DED0, arg1);
    func_001E33C8(func_001E4280(), &D_0048DED0, 0);
}
