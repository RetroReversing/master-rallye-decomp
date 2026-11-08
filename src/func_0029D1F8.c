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
extern void *D_0047CAF8;
extern void *D_00494BE8;

void *func_0029DC70(void *arg0) {
    f32 sp0, sp4, sp8;
    void *vt;
    void *v;
    void *p18;

    *(s32 *)((u8 *)arg0 + 4) = 0;
    *(void **)((u8 *)arg0 + 8) = &D_0044DCD8;
    v = D_00494BE8;
    vt = &D_0047CAF8;
    *(void **)((u8 *)arg0 + 8) = vt;
    *(s32 *)((u8 *)arg0 + 0) = -1;
    *(void **)((u8 *)arg0 + 4) = v;
    p18 = (u8 *)arg0 + 0x18;
    sp8 = 1.0f;
    *(s32 *)((u8 *)arg0 + 0x40) = 0;
    *(s32 *)((u8 *)arg0 + 0x44) = 0;
    *(s32 *)((u8 *)arg0 + 0x50) = 0;
    *(s32 *)((u8 *)arg0 + 0x58) = 0;
    *(s32 *)((u8 *)arg0 + 0x64) = 0;
    *(s32 *)((u8 *)arg0 + 0x68) = 0;
    sp0 = 1.0f;
    sp4 = 1.0f;
    *(f32 *)((u8 *)arg0 + 0x18) = 1.0f;
    *(f32 *)((u8 *)p18 + 4) = 1.0f;
    *(f32 *)((u8 *)p18 + 8) = sp8;
    *(s32 *)((u8 *)arg0 + 0x2C) = 1;
    *(f32 *)((u8 *)arg0 + 0x24) = 1.0f;
    *(s32 *)((u8 *)arg0 + 0x28) = 0;
    *(s32 *)((u8 *)arg0 + 0x30) = 0;
    *(s32 *)((u8 *)arg0 + 0x34) = 0;
    *(s32 *)((u8 *)arg0 + 0x38) = 0;
    *(f32 *)((u8 *)arg0 + 0x3C) = 1.0f;
    *(s32 *)((u8 *)arg0 + 0x48) = 0;
    *(s32 *)((u8 *)arg0 + 0x4C) = 0;
    return arg0;
}

extern s32 func_00297500(void);
extern s32 func_002971B0(s32);
extern s32 func_002971F8(s32);
extern void func_00297398(s32, s32);
extern void func_002973F0(s32, s32);

void func_0029D1F8(void *arg0) {
    s32 temp;

    if (func_002971B0(func_00297500()) == *(s32 *)((u8 *)arg0 + 0xC)) {
        temp = func_002971F8(func_00297500());
        func_002973F0(func_00297500(), 0);
        if (temp == 4) {
            if (*(s32 *)((u8 *)arg0 + 0x10) != 0) {
                func_00297398(func_00297500(), *(s32 *)((u8 *)arg0 + 0x10));
            }
        }
        if (temp == 5) {
            if (*(s32 *)((u8 *)arg0 + 0x14) != 0) {
                func_00297398(func_00297500(), *(s32 *)((u8 *)arg0 + 0x14));
            }
        }
    }
}

extern void *D_002AD408(s32);
extern void func_001E2460(void *, void *);
extern void func_001E2C78(void *, void *, s32);
extern void *D_0044DD18;
extern void *D_0047BA70;
extern void *D_0047BB30;
extern void *D_0047BB40;

void *func_0029D0D0(void *arg0) {
    char sp[0x40];
    void *obj;
    void *p;

    obj = D_002AD408(0x24);
    *(s32 *)((u8 *)obj + 8) = 0;
    *(void **)((u8 *)obj + 0x10) = &D_0044DD18;
    p = (u8 *)obj + 0x14;
    *(s32 *)((u8 *)obj + 0xC) = 0;
    *(s32 *)((u8 *)obj + 4) = 0;
    *(s32 *)((u8 *)obj + 0) = 0;
    *(s32 *)((u8 *)obj + 0x14) = 0;
    *(s32 *)((u8 *)p + 8) = 0;
    *(s32 *)((u8 *)p + 4) = 0;
    *(s32 *)((u8 *)obj + 0x20) = 0;
    func_001E2460(sp, obj);
    func_001E2C78(sp, &D_0047BA70, *(s32 *)((u8 *)arg0 + 0xC));
    func_001E2C78(sp, &D_0047BB30, *(s32 *)((u8 *)arg0 + 0x10));
    func_001E2C78(sp, &D_0047BB40, *(s32 *)((u8 *)arg0 + 0x14));
    return obj;
}
