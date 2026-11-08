extern void func_001D29D0(void *dst, const char *fmt, int arg);
extern void func_001D4040(void *obj, void *ptr);
extern void D_002AD390(void *ptr);
extern const char D_0047BB28[];

void *func_002974B0(void *arg0, int arg1) {
    void *sp0 = NULL;
    func_001D29D0(&sp0, D_0047BB28, arg1);
    func_001D4040(arg0, sp0);
    D_002AD390(sp0);
    return arg0;
}
