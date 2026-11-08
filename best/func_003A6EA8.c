extern void func_0030C148(void *arg0, void *arg1);
extern void *D_00487AC8;

void func_003A7C30(void *arg0, void *arg1) {
    volatile void *fp;
    void *s1;
    void *s0;
    fp = (void *)0;
    s1 = arg0;
    s0 = arg1;
    *(void **)((u8 *)s1 + 8) = &D_00487AC8;
    func_0030C148(s1, s0);
    (void)fp;
}

extern s32 func_003D12F0(void *arg0);
extern void *func_00213B70(void *arg0, void *arg1, void *arg2, s32 arg3);

void *func_003A6F18(void *arg0, void *arg1, void *arg2) {
    volatile void *fp;
    void *s0;
    void *s1;
    void *s2;
    s32 v;
    void *r;
    fp = (void *)0;
    s0 = arg0;
    s2 = arg1;
    s1 = arg2;
    v = func_003D12F0(s2);
    r = func_00213B70(s0, s2, s1, v);
    (void)fp;
    return r;
}

extern void func_003A45E8(void *arg0, const char *arg1);
extern void func_003ADA88(void *arg0, void *arg1);
extern char D_00487470[];
extern void *D_00487EE8;

void *func_003A6EA8(void *arg0) {
    volatile void *fp;
    char sp[32];
    void *s0;
    fp = (void *)0;
    s0 = arg0;
    func_003A45E8(sp, D_00487470);
    func_003ADA88(s0, sp);
    *(void **)((u8 *)s0 + 8) = &D_00487EE8;
    (void)fp;
    return s0;
}
