extern void *D_002AD408(s32);
extern void func_001D4040(void *, const char *);
extern void func_001E2460(void *, void *);
extern void func_001E2E38(void *, const char *, void *);
extern void func_001E2C08(void *, const char *, f32);
extern char D_0047B348[];
extern char D_0047B370[];
extern char D_0047AF40[];
extern void *D_0044DD18;

void *func_0028BA20(void *arg0) {
    s32 k[8];
    s32 reg[4];
    void *obj = D_002AD408(0x24);

    func_001D4040(k, D_0047B348);
    *(s32 *)((u8 *)obj + 8) = 0;
    *(void **)((u8 *)obj + 0x10) = D_0044DD18;
    *(s32 *)((u8 *)obj + 0xC) = 0;
    *(s32 *)((u8 *)obj + 4) = 0;
    *(s32 *)((u8 *)obj + 0) = 0;
    *(s32 *)((u8 *)obj + 0x14) = 0;
    *(s32 *)((u8 *)obj + 0x1C) = 0;
    *(s32 *)((u8 *)obj + 0x18) = 0;
    *(s32 *)((u8 *)obj + 0x20) = k[0];

    func_001E2460(reg, obj);
    func_001E2E38(reg, D_0047B370, (u8 *)arg0 + 0x14);
    func_001E2C08(reg, D_0047AF40, *(f32 *)((u8 *)arg0 + 0x10));
    return obj;
}
