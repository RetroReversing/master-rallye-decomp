extern void *D_0044DCD8;
extern void *D_0047CAF8;
extern void *D_00494BE8;

void *func_0029DC70(void *arg0) {
    *(s32 *)((u8 *)arg0 + 4) = 0;
    *(void **)((u8 *)arg0 + 8) = &D_0044DCD8;
    {
        void *v = D_00494BE8;
        void *vt = &D_0047CAF8;
        f32 one = 1.0f;
        void *p = (u8 *)arg0 + 0x18;

        *(void **)((u8 *)arg0 + 8) = vt;
        *(void **)((u8 *)arg0 + 4) = v;
        *(f32 *)((u8 *)arg0 + 0x18) = one;
        *(s32 *)((u8 *)arg0 + 0x40) = 0;
        *(s32 *)((u8 *)arg0 + 0x44) = 0;
        *(s32 *)((u8 *)arg0 + 0x50) = 0;
        *(s32 *)((u8 *)arg0 + 0x58) = 0;
        *(s32 *)((u8 *)arg0 + 0x64) = 0;
        *(s32 *)((u8 *)arg0 + 0x68) = 0;
        *(f32 *)((u8 *)p + 0) = one;
        *(f32 *)((u8 *)p + 4) = one;
        *(f32 *)((u8 *)p + 8) = one;
        *(s32 *)((u8 *)arg0 + 0x2C) = 1;
        *(f32 *)((u8 *)arg0 + 0x24) = one;
        *(s32 *)((u8 *)arg0 + 0x28) = 0;
        *(s32 *)((u8 *)arg0 + 0x30) = 0;
        *(s32 *)((u8 *)arg0 + 0x34) = 0;
        *(s32 *)((u8 *)arg0 + 0x38) = 0;
        *(f32 *)((u8 *)arg0 + 0x3C) = one;
        *(s32 *)((u8 *)arg0 + 0x48) = 0;
        *(s32 *)((u8 *)arg0 + 0x4C) = 0;
        *(s32 *)((u8 *)arg0 + 0) = -1;
    }
    return arg0;
}

extern s32 func_001E4280(void);
extern f32 func_001E3610(s32, void *);
extern void func_001E3E90(s32, void *, f32);

void func_0029DBB0(void *arg0) {
    f32 f21;
    f32 f20;
    s32 v18 = *(s32 *)((u8 *)arg0 + 0x18);
    s32 v1c = *(s32 *)((u8 *)arg0 + 0x1C);
    f32 f20v = *(f32 *)((u8 *)arg0 + 0x20);

    f21 = (f20v - (f32)v18) / (f32)(v1c - v18);
    func_001E3E90(func_001E4280(), (u8 *)arg0 + 0x10, f21);
    f20 = func_001E3610(func_001E4280(), (u8 *)arg0 + 0x44);
    f20 = f20 + (func_001E3610(func_001E4280(), (u8 *)arg0 + 0x48) - f20) * f21;
    func_001E3E90(func_001E4280(), (u8 *)arg0 + 0x4C, f20);
}

extern void *D_0044DCD8;
extern void *D_0047C938;
extern void *D_00494BE0;

void *func_0029D2B8(void *arg0) {
    *(s32 *)((u8 *)arg0 + 4) = 0;
    *(void **)((u8 *)arg0 + 8) = &D_0044DCD8;
    {
        void *v = D_00494BE0;
        void *vt = &D_0047C938;
        *(s32 *)((u8 *)arg0 + 0) = -1;
        *(void **)((u8 *)arg0 + 4) = v;
        *(void **)((u8 *)arg0 + 8) = vt;
        *(s32 *)((u8 *)arg0 + 0x14) = 1;
        *(s32 *)((u8 *)arg0 + 0x10) = 0;
        *(s32 *)((u8 *)arg0 + 0x30) = 0;
        *(s32 *)((u8 *)arg0 + 0x34) = 0;
        *(s32 *)((u8 *)arg0 + 0x38) = 0;
        *(s32 *)((u8 *)arg0 + 0x3C) = 0;
        *(s32 *)((u8 *)arg0 + 0x44) = 0;
        *(s32 *)((u8 *)arg0 + 0x48) = 0;
        *(s32 *)((u8 *)arg0 + 0x4C) = 0;
        *(s32 *)((u8 *)arg0 + 0x18) = 0;
        *(s32 *)((u8 *)arg0 + 0x1C) = 0;
        *(s32 *)((u8 *)arg0 + 0x20) = 0;
        *(s32 *)((u8 *)arg0 + 0x24) = 0;
        *(s32 *)((u8 *)arg0 + 0x28) = 0;
        *(s32 *)((u8 *)arg0 + 0x2C) = 0;
        *(s32 *)((u8 *)arg0 + 0xC) = 0;
        *(s32 *)((u8 *)arg0 + 0x40) = 0;
    }
    return arg0;
}
