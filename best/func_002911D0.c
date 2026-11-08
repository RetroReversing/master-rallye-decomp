extern s32 D_0043C3B0[];

void func_003F0B30(s32 arg0, s32 arg1, s32 arg2) {
    s32 *p = D_0043C3B0;
    p[3] = arg0;
    p[1] = arg1;
    p[2] = arg2;
}

extern void func_001D4040(void *, const char *);
extern char D_0047B778[];
extern char D_0047CCF8[];
extern char D_0047AD68[];

static inline void vinit3(void *p, f32 x) {
    ((f32 *)p)[0] = x;
    ((s32 *)p)[1] = 0;
    ((s32 *)p)[2] = 0;
}

void *func_00291250(void *arg0) {
    s32 k;
    func_001D4040(&k, D_0047B778);
    *(s32 *)((u8 *)arg0 + 4) = k;
    *(s32 *)((u8 *)arg0 + 0) = -1;
    *(s32 *)((u8 *)arg0 + 8) = (s32)D_0047CCF8;
    *(s32 *)((u8 *)arg0 + 0x18) = 1;
    *(s32 *)((u8 *)arg0 + 0xC) = 0;
    *(s32 *)((u8 *)arg0 + 0x14) = 0;
    *(s32 *)((u8 *)arg0 + 0x1C) = 0;
    *(s32 *)((u8 *)arg0 + 0x24) = 0;
    *(s32 *)((u8 *)arg0 + 0x20) = 0;
    *(f32 *)((u8 *)arg0 + 0x28) = 1.0f;
    *(s32 *)((u8 *)arg0 + 0x30) = 0;
    *(s32 *)((u8 *)arg0 + 0x2C) = 0;
    *(s32 *)((u8 *)arg0 + 0x34) = 0;
    *(s32 *)((u8 *)arg0 + 0x3C) = 0;
    *(s32 *)((u8 *)arg0 + 0x38) = 0;
    *(s32 *)((u8 *)arg0 + 0x40) = 0;
    *(s32 *)((u8 *)arg0 + 0x8C) = 0;
    func_001D4040((u8 *)arg0 + 0x40, D_0047AD68);
    return arg0;
}

extern void func_001E2460(void *, void *);
extern void func_001E2510(void *, const char *, void *);
extern char D_0047B740[];
extern char D_0047B750[];
extern char D_0047B760[];
extern char D_0047B768[];

void func_002911D0(char *a, int unused, void *b) {
    u32 ctx[4];
    func_001E2460(ctx, b);
    func_001E2510(ctx, D_0047B740, a + 0xC);
    func_001E2510(ctx, D_0047B750, a + 0x10);
    func_001E2510(ctx, D_0047B760, a + 0x20);
    func_001E2510(ctx, D_0047B768, a + 0x48);
}

extern void *func_00201350(void);
extern void func_001CB748(void *, void *, void *, s32, f32, f32, f32);

void func_00290F88(void *arg0) {
    void **p;
    s32 base;
    f32 tmp0[3];
    f32 tmp1[3];

    p = (void **)func_00201350();
    base = *(s32 *)p + 0x90;

    tmp0[0] = *(f32 *)((u8 *)arg0 + 0x30) + *(f32 *)((u8 *)arg0 + 0x3C);
    tmp0[1] = *(f32 *)((u8 *)arg0 + 0x34) + *(f32 *)((u8 *)arg0 + 0x40);
    tmp0[2] = *(f32 *)((u8 *)arg0 + 0x38) + *(f32 *)((u8 *)arg0 + 0x44);

    tmp1[0] = 0.0f;
    tmp1[1] = 1.0f;
    tmp1[2] = 0.0f;

    func_001CB748((u8 *)arg0 + 0x30, tmp0, tmp1, base,
                  tmp0[0], tmp0[1], tmp0[2]);
}
