extern s32 func_001E4280(void);
extern void func_001D4040(s32 *arg0, const char *arg1);
extern f32 func_001E3610(s32 arg0, void *arg1);
extern void func_001E3D10(s32 arg0, void *arg1, s32 arg2);
extern void func_001E3E90(s32 arg0, void *arg1, f32 arg2);
extern char D_0044FE00[];
extern char D_0044FE28[];

void func_00178EC8(void *arg0) {
    s32 sp[16];
    void *t0;
    void *t1;
    void *t2;
    void *v1;
    void *v2;
    
    t0 = (void *)func_001E4280();
    func_001D4040(sp, D_0044FE00);
    if (func_001E3610((s32)t0, sp) >= 0.01f) {
        t1 = (void *)func_001E4280();
        func_001D4040(sp, D_0044FE28);
        func_001E3D10((s32)t1, sp, 1);
    }
    v1 = *(void **)((u8 *)arg0 + 0x94);
    v2 = *(void **)((u8 *)arg0 + 0x98);
    *(f32 *)((u8 *)v2 + 0x94) = *(f32 *)((u8 *)v1 + 0x7C);
    *(f32 *)((u8 *)v2 + 0x98) = *(f32 *)((u8 *)v1 + 0x80);
    *(f32 *)((u8 *)v2 + 0x9C) = *(f32 *)((u8 *)v1 + 0x84);
    *(f32 *)((u8 *)v2 + 0xA0) = *(f32 *)((u8 *)v1 + 0x88);
    func_001E3E90(func_001E4280(), (u8 *)arg0 + 0xAC, 12.0f);
}
