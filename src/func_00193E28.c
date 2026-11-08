extern char D_00471738[];
extern void func_001D4040(void *a0, s32 a1);
extern void func_001E3EC0(s32 a0, void *a1, void *a2);
extern void func_001E33C8(s32 a0, void *a1, s32 a2);
extern s32 func_001E4280(void);

void func_00193E28(void *arg0, void *arg1) {
    void *saved;
    s32 v1;
    s32 v2;
    u8 tmp[16];

    saved = arg1;
    v1 = func_001E4280();
    func_001D4040(tmp, (s32)D_00471738);
    func_001E3EC0(v1, tmp, saved);
    v2 = func_001E4280();
    func_001D4040(tmp, (s32)D_00471738);
    func_001E33C8(v2, tmp, 0);
}
