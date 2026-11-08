void func_001D4040(void *, const char *);
extern char D_0044F108[];
extern void *D_00474208;
extern char D_0044EBA8[];
extern char D_0044EAC8[];
extern void *D_00473640;

s32 func_001D4010(void *);
s32 func_002AD350(f32);
void func_003F9698(const char *, s32, s32);

void *func_00163B70(void *arg0) {
    s32 sp[4];

    func_001D4040(sp, D_0044F108);
    *(s32 *)((u8 *)arg0 + 4) = sp[0];
    *(s32 *)((u8 *)arg0 + 0) = -1;
    *(void **)((u8 *)arg0 + 8) = &D_00474208;
    *(f32 *)((u8 *)arg0 + 0x18) = 180.0f;
    *(f32 *)((u8 *)arg0 + 0x1C) = 20.0f;
    *(f32 *)((u8 *)arg0 + 0x24) = 80.0f;
    *(f32 *)((u8 *)arg0 + 0x28) = 40.0f;
    *(f32 *)((u8 *)arg0 + 0x2C) = 1.0f;
    *(f32 *)((u8 *)arg0 + 0x20) = 1.0f;
    *(s32 *)((u8 *)arg0 + 0x14) = 0;
    *(s32 *)((u8 *)arg0 + 0xC) = 0;
    *(s32 *)((u8 *)arg0 + 0x10) = 0;
    return arg0;
}

void func_0015F3C8(void *arg0, void *arg1) {
    void *p17;
    s32 t18;
    s32 t2;

    p17 = *(void **)((u8 *)arg1 + 8);
    t18 = func_001D4010((u8 *)arg1 + 0x5C);
    t2 = func_002AD350(*(f32 *)((u8 *)p17 + 0xC));
    func_003F9698(D_0044EBA8, t18, t2);
}

void func_0015F1E8(void *arg0, void *arg1) {
    void *p = *(void **)((u8 *)arg1 + 8);
    if (p != 0) {
        *(s32 *)((u8 *)p + 0x18) = 0;
        *(f32 *)((u8 *)p + 0xC) = 0.5f;
        *(s32 *)((u8 *)p + 0x10) = 0;
        *(s32 *)((u8 *)p + 0x14) = 0;
    }
}

void *func_0015EF70(void *arg0) {
    s32 sp[4];

    func_001D4040(sp, D_0044EAC8);
    *(s32 *)((u8 *)arg0 + 4) = sp[0];
    *(s32 *)((u8 *)arg0 + 0) = -1;
    *(void **)((u8 *)arg0 + 8) = &D_00473640;
    *(f32 *)((u8 *)arg0 + 0x10) = 0.033333335f;
    *(f32 *)((u8 *)arg0 + 0x14) = 10.0f;
    *(s32 *)((u8 *)arg0 + 0xC) = 0;
    return arg0;
}
