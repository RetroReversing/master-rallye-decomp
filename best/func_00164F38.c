void *D_002AD408(s32);
void func_001D4040(void *, const char *);
void func_001E2460(void *, void *);
void func_001E2E38(void *, const char *, void *);

extern char D_0044F5B8[];
extern char D_0044F5D0[];
extern void *D_0044DD18;

void *func_00164F38(void *arg0) {
    s32 sp[8];
    s32 sp20[4];
    void *obj;
    s32 *p14;
    s32 v;

    obj = D_002AD408(0x24);
    func_001D4040(sp, D_0044F5B8);
    *(s32 *)((u8 *)obj + 8) = 0;
    *(s32 *)((u8 *)obj + 0xC) = 0;
    *(s32 *)((u8 *)obj + 4) = 0;
    p14 = (s32 *)((u8 *)obj + 0x14);
    *(s32 *)((u8 *)obj + 0) = 0;
    *p14 = 0;
    *(void **)((u8 *)obj + 0x10) = &D_0044DD18;
    v = sp[0];
    p14[2] = 0;
    p14[1] = 0;
    *(s32 *)((u8 *)obj + 0x20) = v;
    func_001E2460(sp20, obj);
    func_001E2E38(sp20, D_0044F5D0, (u8 *)arg0 + 0xC);
    return obj;
}
