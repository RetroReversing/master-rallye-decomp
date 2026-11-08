extern void func_001D4040(void *, const char *);
extern char D_0044F738[];
extern char D_0044EE08[];
extern char D_0044FA88[];
extern f32 func_0015AD18(void);
extern void func_0015ACE0(f32, f32, f32);

void func_0016D178(void *arg0, f32 *arg1) {
    *arg1 = *(f32 *)((char *)arg0 + 0x30) * 2.5f;
}

void func_0016CB00(void *arg0) {
    func_001D4040(arg0, D_0044F738);
    func_001D4040((char *)arg0 + 4, D_0044EE08);
    func_001D4040((char *)arg0 + 8, D_0044FA88);
    func_001D4040((char *)arg0 + 12, D_0044FA88);
    *(f32 *)((char *)arg0 + 0x24) = -0.2f;
    *(f32 *)((char *)arg0 + 0x28) = 0.2f;
    *(s32 *)((char *)arg0 + 0x10) = 0;
    *(s32 *)((char *)arg0 + 0x14) = 0;
    *(s32 *)((char *)arg0 + 0x18) = 0;
    *(f32 *)((char *)arg0 + 0x1C) = -0.2f;
    *(f32 *)((char *)arg0 + 0x20) = 0.2f;
    *(s32 *)((char *)arg0 + 0x2C) = 0;
    *(s32 *)((char *)arg0 + 0x30) = 0;
}

void func_0016CAC0(void *arg0, f32 *arg1) {
    f32 t = func_0015AD18() * 50.0f;
    func_0015ACE0(*arg1, -t, t);
}

void *func_0016DBB8(void *arg0, void *arg1) {
    void *p = *(void **)((char *)arg1 + 8);
    f32 f0 = *(f32 *)((char *)p + 0x40);
    f32 f1 = *(f32 *)((char *)p + 0x44);
    f32 f2 = *(f32 *)((char *)p + 0x48);
    *(f32 *)((char *)arg0 + 4) = f1;
    *(f32 *)((char *)arg0 + 8) = f2;
    *(f32 *)((char *)arg0 + 0) = f0;
    {
        f32 s0 = f0;
        f32 s1 = f1;
        f32 s2 = f2;
    }
    return arg0;
}
