extern s32 func_002CEDC8(f32);
extern s32 func_0030CA08(s32);
extern s32 func_0030D4D0(s32);
extern s32 func_003F9698(s32 *);
extern s32 D_004297F4;
extern s32 D_004835D8;

void func_002CECB0(s32 a) {
    func_002CEDC8(0.0f);
    D_004297F4 = 1;
    func_0030CA08(0);
    func_0030CA08(1);
    func_0030D4D0(0);
    func_003F9698(&D_004835D8);
}

extern void *func_002CE9C0(void *, s32);
extern s32 D_004297F0;

void func_002CEC78(void *p) {
    void *t = func_002CE9C0(p, 0);
    if (t != NULL) {
        func_002CECB0(*(s32 *)((char *)t + 4));
        D_004297F0 = 0;
    }
}
