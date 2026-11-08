extern void func_001E2460(void *, s32);
extern s32 func_001E2470(void *, void *, void *);
extern s32 func_001E2510(void *, void *, void *);
extern s32 func_001E25B0(void *, void *, void *);

extern char D_0047BA70[];
extern char D_0047BAE0[];
extern char D_0047BBB0[];
extern char D_0047BE60[];
extern char D_0047BE70[];
extern char D_0047BE80[];
extern char D_0047BE90[];
extern char D_0047BEA0[];
extern char D_0047BEA8[];
extern char D_0047BEC0[];
extern char D_0047BED8[];
extern char D_0047BEF0[];
extern char D_0047BF08[];

void func_0029B2B0(void *arg0, s32 arg1) {
    char sp[0x30];
    func_001E2460(sp, arg1);
    func_001E25B0(sp, D_0047BA70, arg0 + 0xC);
    func_001E2510(sp, D_0047BE60, arg0 + 0x10);
    func_001E2510(sp, D_0047BE70, arg0 + 0x14);
    func_001E25B0(sp, D_0047BBB0, arg0 + 0x18);
    func_001E25B0(sp, D_0047BE80, arg0 + 0x1C);
    func_001E2470(sp, D_0047BE90, arg0 + 0x20);
    func_001E2470(sp, D_0047BEA0, arg0 + 0x28);
    func_001E2470(sp, D_0047BEA8, arg0 + 0x24);
    func_001E2470(sp, D_0047BEC0, arg0 + 0x2C);
    func_001E2470(sp, D_0047BED8, arg0 + 0x30);
    func_001E2470(sp, D_0047BEF0, arg0 + 0x34);
    func_001E2470(sp, D_0047BF08, arg0 + 0x38);
    func_001E2470(sp, D_0047BAE0, arg0 + 0x74);
}
