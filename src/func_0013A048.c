extern s32 func_001E4280(void);
extern s32 func_001E3650(s32, void *);
extern void func_001E3EC0(s32, void *, s32);
extern void func_001D4040(void *, const char *);
extern void func_0011E278(s32, s32);
extern char D_00445C50[];

void func_0013A048(void *arg0) {
    s32 g1;
    s32 v;
    s32 ctx[4];
    char *name;

    g1 = func_001E4280();
    name = D_00445C50;
    func_001D4040(ctx, name);
    v = func_001E3650(g1, ctx);
    if (v < 0x13) {
        s32 g2;
        v = v + 1;
        g2 = func_001E4280();
        func_001D4040(ctx, name);
        func_001E3EC0(g2, ctx, v);
        func_0011E278(*(s32 *)((u8 *)arg0 + 0xC), 0x2B);
    }
}

void func_00139FA8(void *arg0) {
    s32 g1;
    s32 v;
    s32 ctx[4];
    char *name;

    g1 = func_001E4280();
    name = D_00445C50;
    func_001D4040(ctx, name);
    v = func_001E3650(g1, ctx);
    if (v > 0) {
        s32 g2;
        v = v - 1;
        g2 = func_001E4280();
        func_001D4040(ctx, name);
        func_001E3EC0(g2, ctx, v);
        func_0011E278(*(s32 *)((u8 *)arg0 + 0xC), 0x2B);
    }
}
