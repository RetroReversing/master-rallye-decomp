extern void *D_002AD408(s32);
extern void func_001E2460(void *, void *);
extern void func_001E2C78(void *, void *, s32);
extern void *D_0044DD18;
extern void *D_0047BA70;
extern void *D_0047BB30;
extern void *D_0047BB40;

void *func_0029D0D0(void *arg0) {
    char sp[0x30];
    void *obj;
    void *p;
    void *self = arg0;

    obj = D_002AD408(0x24);
    *(s32 *)((u8 *)obj + 8) = 0;
    *(void **)((u8 *)obj + 0x10) = &D_0044DD18;
    p = (u8 *)obj + 0x14;
    *(s32 *)((u8 *)obj + 0xC) = 0;
    *(s32 *)((u8 *)obj + 4) = 0;
    *(s32 *)((u8 *)obj + 0) = 0;
    *(s32 *)((u8 *)obj + 0x14) = 0;
    *(s32 *)((u8 *)p + 8) = 0;
    *(s32 *)((u8 *)p + 4) = 0;
    *(s32 *)((u8 *)obj + 0x20) = 0;
    func_001E2460(sp + 0x10, obj);
    func_001E2C78(sp + 0x10, &D_0047BA70, *(s32 *)((u8 *)self + 0xC));
    func_001E2C78(sp + 0x10, &D_0047BB30, *(s32 *)((u8 *)self + 0x10));
    func_001E2C78(sp + 0x10, &D_0047BB40, *(s32 *)((u8 *)self + 0x14));
    return obj;
}
