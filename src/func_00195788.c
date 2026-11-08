extern int func_001D2458(void*, const char*);
extern void func_001D2900(void*, const char*);
extern void func_001D4040(void*, const char*);
extern void D_002AD390(void*);
extern int func_001E3598(int, void*);

extern char D_004718C8[];
extern char *D_0048E090[];
extern char D_004718E0[];
extern char *D_0048E0D8[];

static inline int* keyinit(int *p, const char *s) { func_001D4040(p, s); return p; }

int func_00195788(int u, int n) {
    int s[4], k[4], root, v;
    func_001D2458(s, D_004718C8);
    func_001D2900(s, D_0048E090[n]);
    root = func_001E4280();
    v = func_001E3598(root, (int)keyinit(k, (char*)s[0]));
    D_002AD390((void*)s[0]);
    return v;
}

int func_001959D0(int u, int n) {
    int s[4], k[4], root, v;
    func_001D2458(s, D_004718E0);
    func_001D2900(s, D_0048E0D8[n]);
    root = func_001E4280();
    v = func_001E3598(root, (int)keyinit(k, (char*)s[0]));
    D_002AD390((void*)s[0]);
    return v;
}
