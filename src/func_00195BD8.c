extern void func_001D4040(void *, const char *);
extern void func_00195AD0(int, int, int);
extern int func_001D2458(void *, const char *);
extern void func_001D2900(void *, const char *);
extern void func_001E3E90(int, void *, float);
extern void D_002AD390(void *);
extern char D_0044BDF8[];
extern char D_0044CC40[];
extern char D_00471910[];
extern char *D_0048E110[];

void func_0016D178(void *arg0, float *arg1) {
    *arg1 = *(float *)((unsigned char *)arg0 + 0x30) * 2.5f;
}

void *func_00144718(void *arg0) {
    unsigned int name[4];
    unsigned int *p = (unsigned int *)arg0;
    func_001D4040(name, D_0044BDF8);
    p[5] = 0;
    p[3] = 0;
    p[1] = name[0];
    p[0] = 0xFFFFFFFF;
    p[2] = (unsigned int)D_0044CC40;
    func_001D4040(p + 5, (const char *)0);
    return arg0;
}

void func_00195BD8(int arg0) {
    func_00195AD0(arg0, 0, 0);
    func_00195AD0(arg0, 1, 0);
    func_00195AD0(arg0, 2, 0);
    func_00195AD0(arg0, 3, 0);
    func_00195AD0(arg0, 4, 0);
    func_00195AD0(arg0, 5, 0);
    func_00195AD0(arg0, 6, 0);
}

void func_00195C68(int arg0, float arg1) {
    int s[4];
    int k[4];
    int root;
    func_001D2458(s, D_00471910);
    func_001D2900(s, D_0048E110[arg0]);
    root = func_001E4280();
    func_001D4040(k, (const char *)s[0]);
    func_001E3E90(root, k, arg1);
    D_002AD390((void *)s[0]);
}
