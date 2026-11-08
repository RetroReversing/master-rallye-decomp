extern void func_001E2460(void *, s32);
extern void func_001E25B0(void *, const char *, void *);
extern const char D_004471E8[];
extern const char D_00444D00[];
extern const char D_004471F8[];

static inline void *init_a(void *p, s32 a) { func_001E2460(p, a); return p; }

void func_0011B5B8(void *arg0, s32 arg1, s32 arg2) {
    u8 buf[0x10];
    init_a(buf, arg2);
    func_001E25B0(buf, D_004471E8, (u8 *)arg0 + 0xC);
    func_001E25B0(buf, D_00444D00, (u8 *)arg0 + 0x10);
    func_001E25B0(buf, D_004471F8, (u8 *)arg0 + 0x14);
}

extern void func_001D4040(void *, const char *);
extern const char D_004471C8[];
extern void *D_0044D6A8;

static inline void *init_b(void *p, const char *s) { func_001D4040(p, s); return p; }

void *func_0011B488(void *arg0) {
    u8 buf[0x10];
    s32 *k = (s32 *)init_b(buf, D_004471C8);
    *(s32 *)((u8 *)arg0 + 0x4) = *k;
    *(s32 *)arg0 = -1;
    *(void **)((u8 *)arg0 + 0x8) = D_0044D6A8;
    *(s32 *)((u8 *)arg0 + 0xC) = 0;
    *(s32 *)((u8 *)arg0 + 0x10) = 0;
    *(s32 *)((u8 *)arg0 + 0x14) = 0;
    return arg0;
}

extern const char D_00446628[];
extern void *D_0044D800;

void *func_0011B708(void *arg0) {
    u8 buf[0x10];
    s32 *k = (s32 *)init_b(buf, D_00446628);
    f32 f1 = 1.0f;
    *(s32 *)((u8 *)arg0 + 0x4) = *k;
    *(s32 *)arg0 = -1;
    *(void **)((u8 *)arg0 + 0x8) = D_0044D800;
    *(s32 *)((u8 *)arg0 + 0x28) = 1;
    *(f32 *)((u8 *)arg0 + 0x54) = f1;
    *(s32 *)((u8 *)arg0 + 0x2C) = 0;
    *(s32 *)((u8 *)arg0 + 0x34) = 0;
    *(s32 *)((u8 *)arg0 + 0x44) = 0;
    *(s32 *)((u8 *)arg0 + 0xC) = 0;
    *(s32 *)((u8 *)arg0 + 0x10) = 0;
    *(s32 *)((u8 *)arg0 + 0x14) = 0;
    *(s32 *)((u8 *)arg0 + 0x18) = 0;
    *(s32 *)((u8 *)arg0 + 0x1C) = 0;
    *(s32 *)((u8 *)arg0 + 0x20) = 1;
    *(s32 *)((u8 *)arg0 + 0x24) = 1;
    *(s32 *)((u8 *)arg0 + 0x30) = 0;
    *(s32 *)((u8 *)arg0 + 0x38) = 0;
    *(s32 *)((u8 *)arg0 + 0x3C) = 0;
    *(s32 *)((u8 *)arg0 + 0x40) = 0;
    *(s32 *)((u8 *)arg0 + 0x48) = 0;
    *(s32 *)((u8 *)arg0 + 0x4C) = 0;
    *(s32 *)((u8 *)arg0 + 0x50) = 0;
    *(s32 *)((u8 *)arg0 + 0x58) = 0;
    *(s32 *)((u8 *)arg0 + 0x5C) = 0;
    *(s32 *)((u8 *)arg0 + 0x60) = 0;
    return arg0;
}

extern void func_0011C718(void *, s32);
extern s32 func_001D4010(void *, s32);
extern s32 *func_001E3700(s32, void *);
extern s32 func_001E4280(void);
extern s32 func_003FA760(s32, s32);

void func_0011BBF8(void *arg0) {
    s32 sp[16];
    s32 *v2;
    s32 var3 = 0;
    v2 = *(s32 **)((u8 *)arg0 + 0x44);
    if (v2 == 0) {
        return;
    }
    s32 tmp = *func_001E3700(func_001E4280(), (u8 *)arg0 + 0x44);
    func_001D4010(sp, tmp);
    if (*(s32 *)((u8 *)arg0 + 0x34) != 0 && v2 != 0) {
        s32 res = func_003FA760((s32)v2, *(s32 *)((u8 *)arg0 + 0x34));
        if (res == 0) {
            var3 = 1;
        } else {
            var3 = 0;
        }
    }
    if (var3 == 0) {
        func_0011C718(arg0, func_001D4010(sp, 0));
        return;
    }
}
