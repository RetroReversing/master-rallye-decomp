extern void func_001D4040(void *, const char *);
extern int func_001D2458(void *, const char *);
extern void func_001D2900(void *, const char *);
extern void func_001E3E90(int, void *, float);
extern void D_002AD390(void *);
extern char D_0044BDF8[];
extern char D_0044CC40[];
extern char D_00471910[];
extern char *D_0048E110[];

void *func_00144718(void *arg0) {
    int name[4];
    int *p = (int *)arg0;
    int v;
    func_001D4040(name, D_0044BDF8);
    v = name[0];
    p[5] = 0;
    p[3] = 0;
    p[1] = v;
    p[0] = -1;
    p[2] = (int)D_0044CC40;
    func_001D4040(p + 5, (const char *)0);
    return arg0;
}

void func_00195C68(int arg0, float arg1) {
    char s[16];
    char k[16];
    int root;
    func_001D2458(s, D_00471910);
    func_001D2900(s, D_0048E110[arg0]);
    root = func_001E4280();
    func_001D4040(k, *(const char **)s);
    func_001E3E90(root, k, arg1);
    D_002AD390(*(void **)s);
}
