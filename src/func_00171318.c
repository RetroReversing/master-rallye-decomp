/* identical to func_002928F8 (matched), with its names changed by decompdecomp */
extern void func_00171430(void *);

/* func_00171318 */
void *func_00171318(void *arg0) {
    *(s32 *)arg0 = 0;
    *(s32 *)((u8 *)arg0 + 4) = 0;
    func_00171430(arg0);
    return arg0;
}

/* func_0027E3E8 */
extern void func_001E2460(void *, void *);
extern void func_001E2510(void *, const char *, void *);
extern void func_001E28F8(void *, const char *, void *);
extern char D_0047AD00[];
extern char D_0047AD18[];
extern char D_0047AD20[];
extern char D_0047AD28[];

void func_0027E3E8(char *a, int unused, void *b) {
    u32 ctx[4];
    func_001E2460(ctx, b);
    func_001E28F8(ctx, D_0047AD00, a + 0x18);
    func_001E2510(ctx, D_0047AD18, a + 0xC);
    func_001E2510(ctx, D_0047AD20, a + 0x10);
    func_001E2510(ctx, D_0047AD28, a + 0x14);
}

/* func_0027DFB0 */
extern void func_001D4040(void *, const char *);
extern char D_0047ACF0[];
extern char D_0047D678[];

void *func_0027DFB0(s32 *p) {
    u32 k;
    func_001D4040(&k, D_0047ACF0);
    p[0] = -1;
    p[6] = 0;
    p[1] = k;
    p[2] = (s32)D_0047D678;
    ((f32 *)p)[3] = 0.0f;
    ((f32 *)p)[5] = 0.0f;
    ((f32 *)p)[4] = 0.0f;
    func_001D4040(p + 6, (const char *)0);
    return p;
}

/* func_0027DDB0 */
extern void *D_002AD408(s32);
extern char D_00479FB8[];
extern char D_0047A088[];

void *func_0027DDB0(void *arg0) {
    void *obj;
    u32 k;
    obj = D_002AD408(12);
    func_001D4040(&k, D_00479FB8);
    *(s32 *)((u8 *)obj + 4) = (s32)D_0047A088;
    *(u32 *)obj = k;
    *(s32 *)((u8 *)obj + 8) = *(s32 *)((u8 *)arg0 + 8);
    return obj;
}
