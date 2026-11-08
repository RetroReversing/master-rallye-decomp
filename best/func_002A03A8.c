typedef struct {
    u8 pad0[12];
    s32 unkC;
    u8 pad10[4];
    s32 unk14;
    s32 unk18;
    u8 pad1C[8];
    s32 unk24;
    s32 unk28;
    s32 unk2C;
} S_func_002A03A8_arg0;

extern s32 func_001E2460(s32 *arg0, s32 arg1);
extern s32 func_001E2510(s32 *arg0, const char *arg1, s32 *arg2);
extern s32 func_001E25B0(s32 *arg0, const char *arg1, s32 *arg2);
extern s32 func_001E28F8(s32 *arg0, const char *arg1, s32 *arg2);

extern const char D_0047BA70[];
extern const char D_0047BB30[];
extern const char D_0047BB40[];
extern const char D_0047BB50[];
extern const char D_0047BB58[];
extern const char D_0047C2D8[];
extern const char D_0047C2E0[];
extern const char D_0047C2E8[];
extern const char D_0047C2F8[];

void func_002A03A8(S_func_002A03A8_arg0 *arg0, s32 arg2) {
    s32 sp[0xC];
    
    func_001E2460(sp, arg2);
    func_001E25B0(sp, D_0047BA70, &arg0->unk24);
    func_001E25B0(sp, D_0047BB30, &arg0->unk28);
    func_001E25B0(sp, D_0047BB40, &arg0->unk2C);
    func_001E25B0(sp, D_0047BB50, &arg0->unkC);
    func_001E25B0(sp, D_0047C2D8, (s32 *)((u8 *)arg0 + 0x1C));
    func_001E25B0(sp, D_0047C2E0, (s32 *)((u8 *)arg0 + 0x20));
    func_001E28F8(sp, D_0047BB58, (s32 *)((u8 *)arg0 + 0x10));
    func_001E2510(sp, D_0047C2E8, &arg0->unk14);
    func_001E2510(sp, D_0047C2F8, &arg0->unk18);
}
