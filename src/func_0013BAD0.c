extern s32 func_00262838(void);
extern int func_002623F0(int, void *);
extern void func_001D4040(void *, const char *);
extern char D_00446660[];

extern void func_001E2460(void *, void *);
extern void func_001E2470(void *, const char *, void *);
extern void func_001E2510(void *, const char *, void *);
extern void func_001E2A48(void *, const char *, void *);
extern char D_00472380[];
extern char D_00472390[];
extern char D_00472398[];
extern char D_004723B0[];

void func_0016D178(void *arg0, f32 *arg1) {
    *arg1 = *(f32 *)((u8 *)arg0 + 0x30) * 2.5f;
}

s32 func_0013BB10(void *arg0) {
    s32 type = *(s32 *)((u8 *)arg0 + 0x10);

    if (type == 1) {
        return *(s32 *)((u8 *)arg0 + 0x18) + 7;
    }
    if (type < 2) {
        if (type == 0) {
            return *(s32 *)((u8 *)arg0 + 0x14);
        }
        return 0;
    }
    if (type == 2) {
        return *(s32 *)((u8 *)arg0 + 0x1C) + 0xF;
    }
    return 0;
}

static inline __attribute__((always_inline)) void *keyinit(void *p, const char *s) {
    func_001D4040(p, s);
    return p;
}

void func_0013BAD0(void) {
    int key[4];
    int g = func_00262838();
    func_002623F0(g, keyinit(key, D_00446660));
}

void func_0019FE98(char *a, int unused, void *b) {
    u32 ctx[4];
    func_001E2460(ctx, b);
    func_001E2470(ctx, D_00472380, a + 0x10);
    func_001E2510(ctx, D_00472390, a + 0x14);
    func_001E2510(ctx, D_00472398, a + 0x18);
    func_001E2A48(ctx, D_004723B0, a + 0x1C);
}
