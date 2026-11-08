extern s32 D_0043C3B0[];
extern u8 D_0042D690[];
extern u16 D_0042DA10;
extern s32 D_0042DE0C;
extern u8 D_0042DE60[];
extern u32 D_0042D5F4;

void func_0030C350(s32);
void func_0030C3C0(void);
void func_0030C508(s32);
void func_0030C5B0(s32);
void func_0030E9F0(void);
void func_0030EA38(void);
void func_0031E190(s32, s32);
void FlushCache_2(s32);
s32 func_00340CD0(void);
void func_00341198(s32);

/* Known regalloc blocker ($t0 vs $v0) */
void func_003F0B30(s32 arg0, s32 arg1, s32 arg2) {
    register s32 *p = D_0043C3B0;
    p[1] = arg1;
    p[2] = arg2;
    p[3] = arg0;
}

void func_00316B88(void) {
    s16 idx;
    s32 base;
    s32 *pbase;

    idx = (s16)D_0042DA10;
    base = (s32)D_0042D690 + (idx * 0xE0);
    pbase = (s32 *)base;
    func_0031E190(base + 0x40, *(s32 *)pbase[0x94 / 4]);
    func_0031E190(base, *(s32 *)*(s32 *)(base + 0x54));
    pbase[0xC0 / 4] = 1;
    FlushCache_2(0);
    func_0030EA38();

    idx = (s16)D_0042DA10 + 1;
    if (idx >= 4) idx = 0;
    D_0042DA10 = (u16)idx;
    func_0030E9F0();
}

void func_00316AD8(s32 arg0) {
    f32 scale;
    s32 r, g, b;
    u8 *p;

    func_00341198(func_00340CD0());

    scale = 255.0f;
    D_0042DE0C++;
    p = D_0042DE60;

    b = (s32)(*(f32 *)(arg0 + 0x138) * scale);
    r = (s32)(*(f32 *)(arg0 + 0x130) * scale);
    g = (s32)(*(f32 *)(arg0 + 0x134) * scale);
    p[0x22] = (u8)b;
    p[0x20] = (u8)r;
    p[0x21] = (u8)g;

    *(s32 *)(arg0 + 0x158) = -1;
    *(s32 *)(arg0 + 0x150) = -1;
    *(s32 *)(arg0 + 0x154) = -1;
    *(s32 *)(arg0 + 0x15C) = -1;
}

s32 func_0030E2B8(u32 arg0, u32 arg1) {
    if (!(arg0 < D_0042D5F4)) {
        return -1;
    }
    func_0030C350(0x30);
    func_0030C508(arg0);
    func_0030C508(arg1);
    func_0030C3C0();
    return 0;
}
