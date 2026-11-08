extern void func_001D4040(void *, void *);
extern s32 func_0021F4B0(void);
extern void *func_0021E9C0(s32, void *);
extern void *func_00127378(void *);
extern void func_00126BC0(void *);
extern s32 func_001E4280(void);
extern s32 func_001E3650(s32, void *);

extern char D_00448A90[];
extern char D_00448748[];

void *func_00127378(void *arg0) {
    s32 temp;
    char buf[16];
    temp = func_0021F4B0();
    func_001D4040(buf, arg0);
    return (void *)((s32 *)func_0021E9C0(temp, buf))[2];
}

void func_001273C8(void *arg0) {
    void *p = func_00127378(D_00448A90);
    if (((s32 *)p)[0xC] != 0) {
        s32 ctx;
        char buf[16];
        ctx = func_001E4280();
        func_001D4040(buf, D_00448748);
        if (func_001E3650(ctx, buf) == 0) {
            func_00126BC0(arg0);
            ((s32 *)arg0)[0x15] = 1;
        } else {
            ((s32 *)arg0)[0xC] = 0;
            ((s32 *)arg0)[0x15] = 1;
            ((s32 *)arg0)[0xF] = 0;
        }
    }
}
