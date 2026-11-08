extern u8 D_0042D690[];
extern u16 D_0042DA10;
extern s32 D_0042DE0C;
extern u8 D_0042DE60[];

void func_0030E9F0(void);
void func_0030EA38(void);
void func_0031E190(s32, s32);
void FlushCache_2(s32);
s32 func_00340CD0(void);
void func_00341198(s32);

void func_00316B88(void) {
    s32 idx;
    s32 base;
    s32 base40;
    u16 tmpu;
    s32 n;

    tmpu = *(volatile u16 *)&D_0042DA10;
    idx = (s32)(s16)tmpu;
    base = (s32)D_0042D690 + (idx * 0xE0);
    base40 = base + 0x40;
    func_0031E190(base40, *(s32 *)*(s32 *)(base + 0x94));
    func_0031E190(base, *(s32 *)*(s32 *)(base40 + 0x14));
    *(s32 *)(base + 0xC0) = 1;
    FlushCache_2(0);
    func_0030EA38();

    n = (s32)(s16)*(volatile u16 *)&D_0042DA10;
    n = n + 1;
    if (n >= 4) n = 0;
    *(volatile u16 *)&D_0042DA10 = (u16)n;
    func_0030E9F0();
}

void func_00316AD8(s32 arg0) {
    f32 scale;
    f32 f138, f130, f134;
    s32 b, r, g;
    s32 neg1;
    u8 *dst;
    s32 tmp;

    func_00341198(func_00340CD0());
    scale = 255.0f;
    dst = D_0042DE60;
    neg1 = -1;

    f138 = *(f32 *)(arg0 + 0x138);
    f130 = *(f32 *)(arg0 + 0x130);
    f134 = *(f32 *)(arg0 + 0x134);
    tmp = D_0042DE0C + 1;
    D_0042DE0C = tmp;

    b = (s32)(f138 * scale);
    r = (s32)(f130 * scale);
    g = (s32)(f134 * scale);

    dst[0x22] = (u8)b;
    dst[0x20] = (u8)r;
    dst[0x21] = (u8)g;

    *(s32 *)(arg0 + 0x158) = neg1;
    *(s32 *)(arg0 + 0x150) = neg1;
    *(s32 *)(arg0 + 0x154) = neg1;
    *(s32 *)(arg0 + 0x15C) = neg1;
}
