void func_001D4040(void *, const char *);
void func_002A1D30(s32, void *, s32, s32);
s32 func_002A2458(void);
extern char D_0044E920[];

void func_0015E8E0(void) {
    s32 sp[4];
    s32 t = func_002A2458();
    func_001D4040(sp, D_0044E920);
    func_002A1D30(t, sp, 0, 1);
}
