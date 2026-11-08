extern void func_00195948(int, int, int);
extern int func_001930D8(int, int);
extern int func_00193138(int, int);
extern int func_00193B60(void);
extern void func_001D4040(void*, const char*);
extern void func_0021E4F0(void*);
extern void func_0029EA38(int);
extern void func_0029ECB8(int, const char*);
extern void func_003FA310(void*, const char*, int);

extern int func_001D2458(void*, const char*);
extern void func_001D2900(void*, const char*);
extern int func_001E3598(int, void*);
extern void D_002AD390(void*);

extern char D_004718F8[];
extern char *D_0048E0F0[];
extern char D_0044BE10[];
extern char D_0044BE20[];

static inline int* keyinit(int *p, const char *s) { func_001D4040(p, s); return p; }

void func_00195A50(int arg0) {
    func_00195948(arg0, 0, 0);
    func_00195948(arg0, 1, 0);
    func_00195948(arg0, 2, 0);
    func_00195948(arg0, 3, 0);
    func_00195948(arg0, 4, 0);
    func_00195948(arg0, 5, 0);
}

void func_00144898(int *arg0, int *arg1) {
    char buf[32];
    int ret;

    ret = func_00193138(func_00193B60(), arg0[3]);
    if (ret == 0) {
        func_0021E4F0(arg1);
    }
    func_003FA310(buf, D_0044BE10, func_001930D8(func_00193B60(), arg0[3]));
    func_001D4040(arg0 + 5, buf);
    if (arg1[1] != 0) {
        func_0029EA38(arg1[1]);
        func_0029ECB8(arg1[1], D_0044BE20);
    }
    arg0[4] = 0;
}

int func_00195B58(int u, int n) {
    int s[4], k[4], root, v;
    func_001D2458(s, D_004718F8);
    func_001D2900(s, D_0048E0F0[n]);
    root = func_001E4280();
    v = func_001E3598(root, (int)keyinit(k, (char*)s[0]));
    D_002AD390((void*)s[0]);
    return v;
}
