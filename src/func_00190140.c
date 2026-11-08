/* identical to func_00190590 (matched), with its names changed by decompdecomp */
extern void func_0018FAF0(void *, void *, void *);
extern s32 func_001E4280(void);
extern void func_001D4040(void *, const char *);
extern s32 func_001E3820(s32, void *, void *);
extern void func_0018DE60(void *, void *);
extern void func_002B2028(void *);
extern u32 D_0040E618[];
extern u32 D_0040E680[];
extern char D_0044E838[];
#define F(p,o,t) (*(t *)((char *)(p)+(o)))
static inline __attribute__((always_inline)) void *mk(void *p, const char *s) { func_001D4040(p, s); return p; }
#define REL() { char *p = F(key,0,char *); char *q = p - 16; \
  if (--F(q,8,int) == 0) { \
    if (F(q,4,int) + 16) func_002B2028(q); \
    else { F(p,-16,u32) = D_0040E618[-1]; D_0040E618[-1] = (u32)q; } } }
s32 func_00190140(void *self, s32 a1, void *a2) {
    char key[16];
    char tmp[16];
    s32 mgr;
    char *p, *s;
    void *node;
    func_0018FAF0(key, self, (void *)a1);
    mgr = func_001E4280();
    p = F(key,0,char *);
    if (F(p,-16,int) == 0) {
        s = (char *)D_0044E838;
    } else {
        *(char *)(p + F(p,-16,int)) = 0;
        s = F(key,0,char *);
    }
    node = (void *)func_001E3820(mgr, mk(tmp, s), D_0040E680);
    if (node == NULL) {
        REL();
        return 0;
    }
    func_0018DE60(node, a2);
    REL();
    return 1;
}
