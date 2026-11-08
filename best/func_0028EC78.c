extern void *D_002AD408(s32);
extern void func_001D4040(void *, const char *);
extern void func_001E2460(void *, void *, s32);
extern void func_001E2B98(void *, const char *, s32);
extern void func_001E2E38(void *, const char *, void *);

extern char D_0044DD18[];
extern char D_0047B5D0[];
extern char D_0047B618[];
extern char D_0047B630[];
extern char D_0047B638[];

void *func_0028EC78(void *arg0)
{
    s32 k[8];
    s32 reg[4];
    void *obj;
    s32 val;

    obj = D_002AD408(0x24);
    func_001D4040(k, D_0047B5D0);

    val = k[0];
    *(s32 *)((u8 *)obj + 0x08) = 0;
    *(void **)((u8 *)obj + 0x10) = D_0044DD18;
    *(s32 *)((u8 *)obj + 0x0C) = 0;
    *(s32 *)((u8 *)obj + 0x04) = 0;
    *(s32 *)((u8 *)obj + 0x00) = 0;
    *(s32 *)((u8 *)obj + 0x14) = 0;
    *(s32 *)((u8 *)obj + 0x1C) = 0;
    *(s32 *)((u8 *)obj + 0x18) = 0;
    *(s32 *)((u8 *)obj + 0x20) = val;

    func_001E2460(reg, obj, val);

    func_001E2B98(reg, D_0047B618, *(s32 *)((u8 *)arg0 + 0x14));
    func_001E2B98(reg, D_0047B630, *(s32 *)((u8 *)arg0 + 0x10));
    func_001E2E38(reg, D_0047B638, (u8 *)arg0 + 0x18);

    return obj;
}
