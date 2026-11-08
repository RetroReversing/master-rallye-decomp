extern s32 func_001D4010(s32);
extern s32 func_001D6588(void *, s32);
extern s32 func_001D65A0(void *, s32);
extern void func_001D65D0(s32);
extern void func_002060F8(void *);
extern void func_002062A8(void *, void *);
extern u8 D_004262B0[];

s32 func_0028F658(void *arg0, void *arg1, void *arg2, void *arg3) {
    void *obj;

    if (arg1 == 0) return 0;
    obj = *(void **)((u8 *)arg1 + 0x4C);
    if (obj == 0) return 0;
    {
        s32 h = func_001D65A0(D_004262B0, (s32)obj);
        func_002062A8(obj, arg2);
        func_002060F8(obj);
        func_001D65D0(func_001D4010((s32)arg3));
        func_001D6588(D_004262B0, h);
        return 1;
    }
}

extern void func_00205CE0(void *, s32);

s32 func_0028F600(void *arg0, void *arg1, void *arg2) {
    void *obj;

    if (arg1 == 0) return 0;
    obj = *(void **)((u8 *)arg1 + 0x4C);
    if (obj == 0) return 0;
    func_002062A8(obj, arg2);
    func_002060F8(obj);
    func_00205CE0(obj, 0);
    return 1;
}

extern void func_001E2460(void *, void *);
extern void func_001E2470(void *, const char *, void *);
extern void func_001E2510(void *, const char *, void *);
extern void func_001E28F8(void *, const char *, void *);
extern char D_0047B630[];
extern char D_0047B638[];
extern char D_0047B4A8[];

void func_0028F598(char *a, int unused, void *b) {
    u32 ctx[4];
    func_001E2460(ctx, b);
    func_001E2470(ctx, D_0047B630, a + 0x14);
    func_001E28F8(ctx, D_0047B638, a + 0x18);
    func_001E2510(ctx, D_0047B4A8, a + 0x10);
}
