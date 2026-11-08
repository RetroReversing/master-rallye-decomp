extern void *D_002AD408(s32);
extern char D_0044DD18[];
extern void func_001E2460(void *, void *);
extern void func_001E2E38(void *, const char *, void *);
extern void func_001E2C08(void *, const char *, f32);
extern const char D_0047BB58[];
extern const char D_0047BB60[];
extern const char D_0047B4A8[];

void *func_002A09B8(void *arg0) {
    u8 sp[0x50];
    void *obj = D_002AD408(0x24);
    void *p = (u8 *)obj + 0x14;

    *(s32 *)((u8 *)obj + 0x8) = 0;
    *(void **)((u8 *)obj + 0x10) = D_0044DD18;
    *(s32 *)((u8 *)obj + 0xC) = 0;
    *(s32 *)((u8 *)obj + 0x4) = 0;
    *(s32 *)((u8 *)obj + 0x0) = 0;
    *(s32 *)((u8 *)obj + 0x14) = 0;
    *(s32 *)((u8 *)p + 0x8) = 0;
    *(s32 *)((u8 *)p + 0x4) = 0;
    *(s32 *)((u8 *)obj + 0x20) = 0;

    func_001E2460(sp + 0x10, obj);
    func_001E2E38(sp + 0x10, D_0047BB58, (u8 *)arg0 + 0xC);
    func_001E2E38(sp + 0x10, D_0047BB60, (u8 *)arg0 + 0x10);
    func_001E2C08(sp + 0x10, D_0047B4A8, *(f32 *)((u8 *)arg0 + 0x14));
    return obj;
}
