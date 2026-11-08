extern void func_001D2458(void *, s32, void *);
extern s32 D_0040DC68[];
void *func_00118538(void *arg0, void *arg1, s32 arg2) {
    s32 *p = &D_0040DC68[arg2];
    func_001D2458(arg0, *p, p);
    return arg0;
}
