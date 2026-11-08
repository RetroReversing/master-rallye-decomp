extern void func_001E2460(void *, void *);
extern void func_001E28F8(void *, void *, void *);
extern void func_001E2510(void *, void *, void *);
extern char D_00479BE8[];
extern char D_00479BF0[];
extern char D_00479C00[];
extern char D_00479C10[];

void func_00261FA8(void *arg0, void *arg1, void *arg2) {
    char ctx[0x30];
    func_001E2460(ctx, arg2);
    func_001E28F8(ctx, D_00479BE8, (u8 *)arg0 + 0x14);
    func_001E2510(ctx, D_00479BF0, (u8 *)arg0 + 0x1C);
    func_001E2510(ctx, D_00479C00, (u8 *)arg0 + 0x18);
    func_001E2510(ctx, D_00479C10, (u8 *)arg0 + 0x20);
}
