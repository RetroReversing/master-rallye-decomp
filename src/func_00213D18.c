/* identical to func_00153F40 (matched), with its names changed by decompdecomp */
extern s32 func_003F9288(void *, void *, u32);
s32 func_00213D18(void **arg0, void **arg1, s32 arg2, u32 arg3) {
    void *a = *arg0;
    void *b = *arg1;
    u32 lenb = *(u32 *)((char *)b - 0x10);
    s32 lena = *(s32 *)((char *)a - 0x10);
    u32 rem = (u32)(lena - arg2);
    u32 n = (arg3 < rem) ? arg3 : rem;
    if (lenb < n) n = lenb;
    s32 r = func_003F9288((char *)a + arg2, b, n);
    if (r != 0) return r;
    if (n == arg3) return 0;
    return (*(s32 *)((char *)*arg0 - 0x10) - arg2) - (s32)(*(u32 *)((char *)*arg1 - 0x10));
}

extern void D_002AD390(void *);
extern u8 D_0044D800[];
extern u8 D_0044DCD8[];
void func_00159900(void *arg0, s32 arg1) {
    *(void **)((char *)arg0 + 8) = (void *)D_0044D800;
    D_002AD390(*(void **)((char *)arg0 + 0x34));
    arg1 = arg1 & 1;
    *(void **)((char *)arg0 + 8) = (void *)D_0044DCD8;
    if (arg1) D_002AD390(arg0);
}

extern s32 func_00296710(void);
extern s32 func_002965B8(s32, s32, f32, f32);
void func_00159988(s32 a0, s32 a1, f32 f0, f32 f1) {
    s32 t = func_00296710();
    func_002965B8(t, a1, f0, f1);
}

extern s32 func_00296640(s32, s32, void *);
void func_001599D8(s32 a0, s32 a1, void *a2) {
    long long buf[2];
    buf[0] = *(long long *)a2;
    buf[1] = *(long long *)((char *)a2 + 8);
    s32 t = func_00296710();
    func_00296640(t, a1, buf);
}
