extern void func_001D4040(void *arg0, const char *arg1);
extern char D_00471208[];
extern char D_004736C0[];

void func_0016D178(void *arg0, f32 *arg1) {
    *arg1 = *(f32 *)((u8 *)arg0 + 0x30) * 2.5f;
}

void *func_0018D9D0(void *arg0) {
    s32 sp[4];
    func_001D4040(sp, D_00471208);
    *(s32 *)((u8 *)arg0 + 0x0) = sp[0];
    *(s32 *)((u8 *)arg0 + 0x4) = (s32)D_004736C0;
    *(s32 *)((u8 *)arg0 + 0x8) = 0;
    *(s32 *)((u8 *)arg0 + 0xC) = 0;
    *(s32 *)((u8 *)arg0 + 0x10) = 0;
    *(s32 *)((u8 *)arg0 + 0x14) = 0;
    *(s32 *)((u8 *)arg0 + 0x18) = 0;
    *(s32 *)((u8 *)arg0 + 0x1C) = 0;
    *(s32 *)((u8 *)arg0 + 0x20) = 0;
    *(s32 *)((u8 *)arg0 + 0x24) = 0;
    *(s32 *)((u8 *)arg0 + 0x28) = 0;
    *(s32 *)((u8 *)arg0 + 0x2C) = 0;
    *(s32 *)((u8 *)arg0 + 0x30) = 0;
    *(s32 *)((u8 *)arg0 + 0x34) = 0;
    *(s32 *)((u8 *)arg0 + 0x38) = 0;
    return arg0;
}

extern void *D_002AD408(s32);
extern void *func_0018D9D0(void *);

void *func_0018DA80(void *arg0) {
    void *obj = func_0018D9D0(D_002AD408(0x3C));
    *(s32 *)((u8 *)obj + 0x0) = *(s32 *)((u8 *)arg0 + 0x0);
    *(f32 *)((u8 *)obj + 0x8) = *(f32 *)((u8 *)arg0 + 0x8);
    *(f32 *)((u8 *)obj + 0xC) = *(f32 *)((u8 *)arg0 + 0xC);
    *(f32 *)((u8 *)obj + 0x10) = *(f32 *)((u8 *)arg0 + 0x10);
    *(f32 *)((u8 *)obj + 0x14) = *(f32 *)((u8 *)arg0 + 0x14);
    *(f32 *)((u8 *)obj + 0x18) = *(f32 *)((u8 *)arg0 + 0x18);
    *(f32 *)((u8 *)obj + 0x1C) = *(f32 *)((u8 *)arg0 + 0x1C);
    *(f32 *)((u8 *)obj + 0x20) = *(f32 *)((u8 *)arg0 + 0x20);
    *(f32 *)((u8 *)obj + 0x24) = *(f32 *)((u8 *)arg0 + 0x24);
    *(f32 *)((u8 *)obj + 0x28) = *(f32 *)((u8 *)arg0 + 0x28);
    *(f32 *)((u8 *)obj + 0x2C) = *(f32 *)((u8 *)arg0 + 0x2C);
    *(f32 *)((u8 *)obj + 0x30) = *(f32 *)((u8 *)arg0 + 0x30);
    *(f32 *)((u8 *)obj + 0x34) = *(f32 *)((u8 *)arg0 + 0x34);
    *(f32 *)((u8 *)obj + 0x38) = *(f32 *)((u8 *)arg0 + 0x38);
    return obj;
}

extern s32 func_001E4280(void);
extern void func_001E3650(s32, void *);

void func_00191630(void *arg0) {
    s32 sp[4];
    s32 tmp = func_001E4280();
    func_001D4040(sp, *(const char **)((u8 *)arg0 + 0x10));
    func_001E3650(tmp, sp);
}
