extern void func_001D4040(void *, const char *);
extern int func_001D2458(void *, const char *);
extern void func_001D2900(void *, const char *);
extern f32 func_001E3610(int, void *);
extern void func_001E3FB0(int, void *, void *);
extern void D_002AD390(void *);
extern void func_00196358(void);

extern char D_00471910[];
extern char *D_0048E110[];

static inline int *keyinit(int *p, const char *s) { func_001D4040(p, s); return p; }

f32 func_00195CF0(int arg0, int n) {
    int s[4], k[4];
    int root;
    f32 ret;
    (void)arg0;
    func_001D2458(s, D_00471910);
    func_001D2900(s, D_0048E110[n]);
    root = func_001E4280();
    ret = func_001E3610(root, keyinit(k, (char *)s[0]));
    D_002AD390((void *)s[0]);
    return ret;
}

typedef struct {
    char pad[0xC];
    char *unkC;
    char *unk10;
} S965F0;

void func_001965F0(S965F0 *arg0, void *arg1, void **arg2) {
    int s[4], k[4];
    int root;
    (void)arg1;
    func_00196358();
    func_001D2900(arg0->unkC, arg0->unk10);
    root = func_001E4280();
    func_001D4040(s, arg0->unkC);
    func_001D4040(k, (char *)*arg2);
    func_001E3FB0(root, s, k);
    D_002AD390(*arg2);
}
