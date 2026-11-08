extern void func_001D4040(void *, const char *);
extern int func_001D2458(void *, const char *);
extern void func_001D2900(void *, const char *);
extern f32 func_001E3610(int, void *);
extern void func_001E3FB0(int, void *, void *);
extern void D_002AD390(void *);
extern int D_002AD408(int);
extern int func_00194C80(int);
extern void func_00196358(void);

extern char D_00471910[];
extern char *D_0048E110[];
extern int D_00425D7C;

void func_0016D178(void *arg0, f32 *arg1) {
    *arg1 = *(f32 *)((u8 *)arg0 + 0x30) * 2.5f;
}

static inline int *keyinit_cf0(int *p, const char *s) { func_001D4040(p, s); return p; }

f32 func_00195CF0(int n) {
    int s[4], k[4];
    int root;
    f32 ret;
    func_001D2458(s, D_00471910);
    func_001D2900(s, D_0048E110[n]);
    root = func_001E4280();
    func_001D4040(k, (char *)s[0]);
    ret = func_001E3610(root, k);
    D_002AD390((void *)s[0]);
    return ret;
}

int func_00196028(void) {
    if (D_00425D7C == 0) {
        D_00425D7C = func_00194C80(D_002AD408(1));
    }
    return D_00425D7C;
}

void func_001965F0(void *arg0, void *arg1, void *arg2) {
    int s[4], k[4];
    int root;
    (void)arg1;
    func_00196358();
    func_001D2900((char *)arg0 + 0xC, *(char **)((char *)arg0 + 0x10));
    root = func_001E4280();
    func_001D4040(s, *(char **)((char *)arg0 + 0xC));
    func_001D4040(k, *(char **)arg2);
    func_001E3FB0(root, s, k);
    D_002AD390(*(void **)arg2);
}
