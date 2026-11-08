extern void func_001D4040(void *, const char *);
extern char D_0047ACF0[];
extern char D_0047D678[];

void *func_0027DFB0(void *arg0) {
    u32 k;
    s32 *p = (s32 *)arg0;
    f32 *fp = (f32 *)arg0;
    s32 vtable;
    f32 zero;

    func_001D4040(&k, D_0047ACF0);
    k = *(u32 *)&k;
    zero = 0.0f;
    vtable = (s32)D_0047D678;
    p[0] = -1;
    p[6] = 0;
    p[1] = (s32)k;
    p[2] = vtable;
    fp[3] = zero;
    fp[5] = zero;
    fp[4] = zero;
    func_001D4040(p + 6, (const char *)0);
    return arg0;
}
