extern char D_0048E1E8[];
extern char D_00475C60[];
extern s32 func_003FDAF0(s8 *, const char *, void *);
extern s32 func_001D2900(s32, s8 *);
extern void func_001D4040(s32, s32 *);
extern void func_001D2CD8(s32 *, s32);

void func_001D29D0(s32 arg0, const char *format, ...) {
    func_003FDAF0(&D_0048E1E8, format, (char *)0 + 48);
    func_001D2900(arg0, &D_0048E1E8);
}

s32 *func_001D2488(s32 *arg0, s32 *arg1) {
    *arg0 = 0;
    func_001D2CD8(arg0, *arg1);
    return arg0;
}

void func_001D2250(s32 a0, s32 a1, s32 a2, s32 a3) {
    func_001D4040(a3, (s32 *)&D_00475C60);
}

s32 func_001D3920(void *arg0) {
    s32 *v = *(s32**)((char*)arg0 + 4);
    return (v != arg0) ? *v : 0;
}
