extern void *D_002AD408(s32);
extern void func_001D4040(void *, const char *);
extern void func_001E2460(void *, void *);
extern void func_001E2E38(void *, const char *, void *);
extern void func_0018F170(void *, void *, void *);
extern void *func_001E3820(void *, void *, void *);
extern void *func_0021E9C0(void *, void *);
extern void *func_0021F4B0(void);
extern void func_001E28F8(void *, void *, void *);
extern void func_003FA310(void *, const char *, s32);

extern char D_00470108[];
extern char D_00470130[];
extern char D_00470138[];
extern char D_004711D0[];
extern void *D_0044DD18;
extern void D_0040E698;

void func_0016D178(void *arg0, f32 *arg1) {
    *arg1 = *(f32 *)((u8 *)arg0 + 0x30) * 2.5f;
}

void *func_001858B8(void) {
    void *obj;
    void *tmp;
    s32 stack[8];
    void *sp20[4];

    obj = D_002AD408(0x24);
    func_001D4040(stack, D_00470108);
    tmp = (u8 *)obj + 0x14;
    *(s32 *)((u8 *)obj + 0x8) = 0;
    *(void **)((u8 *)obj + 0x10) = &D_0044DD18;
    *(s32 *)((u8 *)obj + 0xC) = 0;
    *(s32 *)((u8 *)obj + 0x4) = 0;
    *(s32 *)((u8 *)obj + 0x0) = 0;
    *(s32 *)((u8 *)tmp + 0x0) = 0;
    *(s32 *)((u8 *)tmp + 0x8) = 0;
    *(s32 *)((u8 *)tmp + 0x4) = 0;
    *(s32 *)((u8 *)obj + 0x20) = stack[0];
    func_001E2460(sp20, obj);
    func_001D4040(stack, D_00470130);
    func_001E2E38(sp20, D_00470138, stack);
    return obj;
}

void func_00189060(void *arg0, void *arg1, void *arg2) {
    void *v;
    void *ctx;

    (void)arg0;
    if (*(s32 *)((u8 *)arg1 + 0x20) == 0) {
        v = func_0021E9C0(func_0021F4B0(), (u8 *)arg1 + 0x1C);
        *(void **)((u8 *)arg1 + 0x20) = v;
        if (v == 0) {
            return;
        }
    }
    ctx = (void *)func_001E4280();
    if (*(void **)((u8 *)arg1 + 0x20) == 0) {
        *(void **)((u8 *)arg1 + 0x20) = func_0021E9C0(func_0021F4B0(), (u8 *)arg1 + 0x1C);
    }
    v = func_001E3820(ctx, (u8 *)*(void **)((u8 *)arg1 + 0x20) + 0x5C, &D_0040E698);
    if (v != 0) {
        func_0018F170(v, arg1, arg2);
    }
}

void func_0018CE40(void *arg0, void *arg1) {
    s32 i;
    char buf[256];
    char sp100[32];

    func_001E2460(sp100, arg1);
    if (*(s32 *)((u8 *)arg0 + 0xC) > 0) {
        i = 0;
        do {
            func_003FA310(buf, D_004711D0, i);
            func_001E28F8(sp100, buf, (void *)(*(u32 *)((u8 *)arg0 + 0x10) + (i * 4)));
            i++;
        } while (i < *(s32 *)((u8 *)arg0 + 0xC));
    }
}
