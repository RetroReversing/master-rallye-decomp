extern void func_001D4040(void *, const char *);
extern int func_001D2458(void *, const char *);
extern void func_001D2900(void *, const char *);
extern void func_001E3E90(int, void *, float);
extern void D_002AD390(void *);
extern char D_0044BDF8[];
extern char D_0044CC40[];
extern char D_00471910[];
extern char *D_0048E110[];

void *func_00144718(int *arg0) {
    int name[4];
    func_001D4040(name, D_0044BDF8);
    arg0[5] = 0;
    arg0[3] = 0;
    arg0[1] = name[0];
    arg0[0] = -1;
    arg0[2] = (int)D_0044CC40;
    func_001D4040(arg0 + 5, (const char *)0);
    return arg0;
}

static inline int *keyinit_c68(int *p, const char *s) { func_001D4040(p, s); return p; }

void func_00195C68(int arg0, int n, float arg1) {
    int s[4], k[4], root;
    (void)arg0;
    func_001D2458(s, D_00471910);
    func_001D2900(s, D_0048E110[n]);
    root = func_001E4280();
    func_001E3E90(root, keyinit_c68(k, (char *)s[0]), arg1);
    D_002AD390((void *)s[0]);
}
