extern s8 D_0048E1E8[];
extern s32 func_003FDAF0(s8 *, const char *, void *);
extern s32 func_001D2900(s32, s8 *);

void func_001D29D0(s32 arg0, const char *format, ...) {
    func_003FDAF0(&D_0048E1E8, format, (char *)0 + 0x70);
    func_001D2900(arg0, &D_0048E1E8);
}

s32 func_001D3920(void *arg0) {
    s32 *v = *(s32**)((char*)arg0 + 4);
    return (v != arg0) ? *v : 0;
}
