void *D_002AD408(s32);
void func_001D4040(void *, const char *);
void func_001E2460(void *, void *);
void func_001E2E38(void *, const char *, void *);
void func_00164150(void *);
void func_00165550(void *, s32);
void func_001E2510(void *, const char *, void *);

extern char D_0044F5B8[];
extern char D_0044F5D0[];
extern void *D_0044DD18;
extern char D_0044F590[];
extern char D_0044F5A8[];
extern void *D_00474090;
extern char D_0044F150[];
extern char D_0044F168[];
extern char D_0044F180[];
extern char D_0044F190[];
extern char D_0044F1A8[];
extern char D_0044F1C0[];

void *func_00164F38(void *arg0) {
    s32 sp[8];
    s32 sp20[4];
    void *obj;

    obj = D_002AD408(0x24);
    func_001D4040(sp, D_0044F5B8);
    *(s32 *)((u8 *)obj + 8) = 0;
    *(s32 *)((u8 *)obj + 0xC) = 0;
    *(s32 *)((u8 *)obj + 4) = 0;
    *(s32 *)((u8 *)obj + 0) = 0;
    *(s32 *)((u8 *)obj + 0x14) = 0;
    *(void **)((u8 *)obj + 0x10) = &D_0044DD18;
    *(s32 *)((u8 *)obj + 0x1C) = 0;
    *(s32 *)((u8 *)obj + 0x18) = 0;
    *(s32 *)((u8 *)obj + 0x20) = sp[0];
    func_001E2460(sp20, obj);
    func_001E2E38(sp20, D_0044F5D0, (u8 *)arg0 + 0xC);
    return obj;
}

void *func_00164D48(void *arg0) {
    s32 sp[4];

    func_001D4040(sp, D_0044F590);
    *(s32 *)((u8 *)arg0 + 0xC) = 0;
    *(s32 *)((u8 *)arg0 + 0) = -1;
    *(s32 *)((u8 *)arg0 + 4) = sp[0];
    *(void **)((u8 *)arg0 + 8) = &D_00474090;
    func_00165550((u8 *)arg0 + 0x10, sp[0]);
    *(s32 *)((u8 *)arg0 + 0x88) = 0;
    *(s32 *)((u8 *)arg0 + 0x90) = 0;
    *(s32 *)((u8 *)arg0 + 0x8C) = 0;
    func_00164150((u8 *)arg0 + 0x94);
    *(s32 *)((u8 *)arg0 + 0xB4) = 0;
    func_001D4040((u8 *)arg0 + 0xC, D_0044F5A8);
    return arg0;
}

void func_001640A8(void *arg0, s32 arg1, void *arg2) {
    s32 sp[4];

    func_001E2460(sp, arg2);
    func_001E2510(sp, D_0044F150, (u8 *)arg0 + 0x1C);
    func_001E2510(sp, D_0044F168, (u8 *)arg0 + 0x18);
    func_001E2510(sp, D_0044F180, (u8 *)arg0 + 0x20);
    func_001E2510(sp, D_0044F190, (u8 *)arg0 + 0x28);
    func_001E2510(sp, D_0044F1A8, (u8 *)arg0 + 0x24);
    func_001E2510(sp, D_0044F1C0, (u8 *)arg0 + 0x2C);
}
