extern void *D_002AD408(s32);
extern void func_001D4040(void *, const char *);
extern void func_001E2460(void *, void *, s32);
extern void func_001E2C08(void *, const char *, f32);
extern void D_0044DD18;
extern char D_0047B728[];
extern char D_0047B740[];
extern char D_0047B750[];
extern char D_0047B760[];
extern char D_0047B768[];

void *func_002910E8(void *arg0) {
    s32 sp0;
    char sp20[0x30];
    void *obj;
    s32 v;

    obj = D_002AD408(0x24);
    func_001D4040(&sp0, D_0047B728);
    v = sp0;
    *(s32 *)((u8 *)obj + 0x8) = 0;
    *(void **)((u8 *)obj + 0x10) = &D_0044DD18;
    *(s32 *)((u8 *)obj + 0xC) = 0;
    *(s32 *)((u8 *)obj + 0x4) = 0;
    *(s32 *)((u8 *)obj + 0x0) = 0;
    *(s32 *)((u8 *)obj + 0x14) = 0;
    *(s32 *)((u8 *)obj + 0x18) = 0;
    *(s32 *)((u8 *)obj + 0x1C) = 0;
    *(s32 *)((u8 *)obj + 0x20) = v;
    func_001E2460(sp20, obj, v);
    func_001E2C08(sp20, D_0047B740, *(f32 *)((u8 *)arg0 + 0xC));
    func_001E2C08(sp20, D_0047B750, *(f32 *)((u8 *)arg0 + 0x10));
    func_001E2C08(sp20, D_0047B760, *(f32 *)((u8 *)arg0 + 0x20));
    func_001E2C08(sp20, D_0047B768, *(f32 *)((u8 *)arg0 + 0x48));
    return obj;
}
