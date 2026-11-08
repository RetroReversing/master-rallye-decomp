extern void func_001D2458(void*, const char*);
extern void func_001D2900(void*, const char*);
extern void func_001D4040(void*, const char*);
extern int func_001E3598(int, int);
extern void D_002AD390(void*);

extern char D_004718C8[];
extern char *D_0048E090[];
extern char D_004718E0[];
extern char *D_0048E0D8[];
extern char D_0044BE30[];
extern char D_0044CC00[];

static inline int* keyinit(int *p, const char *s) { func_001D4040(p, s); return p; }

void func_0016D178(void *arg0, f32 *arg1) {
    *arg1 = *(f32 *)((u8 *)arg0 + 0x30) * 2.5f;
}

int func_00195788(int u, int n) {
    int s[4], k[4], root, v;
    func_001D2458(s, D_004718C8);
    func_001D2900(s, D_0048E090[n]);
    root = func_001E4280();
    v = func_001E3598(root, (int)keyinit(k, (char*)s[0]));
    D_002AD390((void*)s[0]);
    return v;
}

void *func_00144A68(s32 *p) {
    s32 k;
    func_001D4040(&k, D_0044BE30);
    p[1] = k;
    p[0] = -1;
    p[2] = (s32)D_0044CC00;
    p[7] = 0;
    p[8] = 0;
    p[9] = 0;
    p[3] = 0;
    return p;
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
