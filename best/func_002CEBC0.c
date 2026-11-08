extern f32 D_004297F0;
extern s32 D_004297F4;
extern char D_00483560[];
extern char D_00483598[];
extern char D_004835B8[];
extern char D_004835D8[];
extern void *func_002CE9C0(const char *, s32);
extern s32 func_002CEAF8(void *);
extern s32 func_002CEE90(s32, s32, f32);
extern s32 func_003F9698(const char *, ...);
extern s32 func_002CEDC8(s32, f32);
extern s32 func_0030CA08(s32);
extern s32 func_0030D4D0(s32);

void func_002CEBC0(const char *name, s32 a1, f32 f12) {
    void *t;
    func_003F9698(D_00483560);
    func_003F9698(D_00483598, name);
    func_003F9698(D_00483560);
    t = func_002CE9C0(name, 1);
    if (t != NULL) {
        if (func_002CEAF8(t) != 0) {
            func_002CEE90(*(s32*)((u8*)t + 4), a1, f12);
            D_004297F0 = f12;
        } else {
            func_003F9698(D_004835B8, name);
        }
    }
}

void func_002CEC78(void) {
    void *t;
    t = func_002CE9C0(NULL, 0);
    if (t != NULL) {
        func_002CECB0(*(s32*)((u8*)t + 4));
        D_004297F0 = 0.0f;
    }
}

void func_002CECB0(f32 a) {
    func_002CEDC8(0, 0.0f);
    D_004297F4 = 1;
    func_0030CA08(0);
    func_0030CA08(1);
    func_0030D4D0(0);
    func_003F9698(D_004835D8);
}

void func_002CEB78(f32 f12) {
    void *t;
    t = func_002CE9C0(NULL, 0);
    if (t != NULL) {
        func_002CEDC8(*(s32*)((u8*)t + 4), f12);
        D_004297F0 = f12;
    }
}
