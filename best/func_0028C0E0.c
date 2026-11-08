extern void *D_002AD408(s32);
extern void func_001D4040(void *, const char *);
extern void func_001E2460(void *, void *);
extern void func_001E2E38(void *, const char *, void *);
extern void func_001E2C08(void *, const char *, f32);
extern void func_001E2C78(void *, const char *, s32);
extern void func_001E2F18(void *, const char *, void *);

extern char D_0044DD18[];
extern char D_0047B3A0[];
extern char D_0047B3D8[];
extern char D_0047B3F0[];
extern char D_0047B400[];
extern char D_0047B408[];
extern char D_0047B410[];
extern char D_0047B418[];
extern char D_0047B420[];
extern char D_0047B430[];
extern char D_0047B440[];
extern char D_0047B450[];
extern char D_0047B460[];
extern char D_0047B470[];

void *func_0028C0E0(void *arg0) {
    s32 k[8];
    s32 reg[4];
    void *obj;
    s32 val;
    void *dd;
    s32 *v;

    obj = D_002AD408(0x24);
    func_001D4040(k, D_0047B3A0);

    val = k[0];
    dd = D_0044DD18;
    v = (s32 *)((u8 *)obj + 0x14);

    *(s32 *)((u8 *)obj + 8) = 0;
    *(void **)((u8 *)obj + 0x10) = dd;
    *(s32 *)((u8 *)obj + 0xC) = 0;
    *(s32 *)((u8 *)obj + 4) = 0;
    *(s32 *)((u8 *)obj + 0) = 0;
    *(s32 *)((u8 *)obj + 0x14) = 0;
    v[2] = 0;
    v[1] = 0;
    *(s32 *)((u8 *)obj + 0x20) = val;

    func_001E2460(reg, obj);

    func_001E2E38(reg, D_0047B3D8, (u8 *)arg0 + 0xC);
    func_001E2C08(reg, D_0047B3F0, *(f32 *)((u8 *)arg0 + 0x34));
    func_001E2C08(reg, D_0047B400, *(f32 *)((u8 *)arg0 + 0x38));
    func_001E2C08(reg, D_0047B408, *(f32 *)((u8 *)arg0 + 0x3C));
    func_001E2C08(reg, D_0047B410, *(f32 *)((u8 *)arg0 + 0x40));
    func_001E2C08(reg, D_0047B418, *(f32 *)((u8 *)arg0 + 0x44));
    func_001E2C08(reg, D_0047B420, *(f32 *)((u8 *)arg0 + 0x48));
    func_001E2F18(reg, D_0047B430, (u8 *)arg0 + 0x50);
    func_001E2F18(reg, D_0047B440, (u8 *)arg0 + 0x5C);
    func_001E2F18(reg, D_0047B450, (u8 *)arg0 + 0x68);
    func_001E2C78(reg, D_0047B460, *(s32 *)((u8 *)arg0 + 0x74));
    func_001E2C78(reg, D_0047B470, *(s32 *)((u8 *)arg0 + 0x78));

    return obj;
}
