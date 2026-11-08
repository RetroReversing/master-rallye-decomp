extern s32 func_00262838(void);
extern void func_001D4040(void *, const char *);
extern s32 func_001E4280(void);
extern s32 func_001E3650(s32, void *);
extern void func_001E3EC0(s32, void *, s32);
extern void func_0011E278(s32, s32);

extern char D_0044AF40[];
extern char D_0044CE80[];
extern char D_00445C50[];

void func_0016D178(void *arg0, f32 *arg1) {
    *arg1 = *(f32 *)((u8 *)arg0 + 0x30) * 2.5f;
}

void *func_0013A0F0(void *arg0) {
    s32 key[4];
    func_001D4040(key, D_0044AF40);
    *(s32 *)((u8 *)arg0 + 0x4) = key[0];
    *(s32 *)((u8 *)arg0 + 0x0) = -1;
    *(s32 *)((u8 *)arg0 + 0x8) = (s32)D_0044CE80;
    *(s32 *)((u8 *)arg0 + 0x20) = 7;
    *(s32 *)((u8 *)arg0 + 0x24) = 8;
    *(s32 *)((u8 *)arg0 + 0x28) = 0xE;
    *(s32 *)((u8 *)arg0 + 0x30) = 1;
    *(s32 *)((u8 *)arg0 + 0xC) = 0;
    *(s32 *)((u8 *)arg0 + 0x10) = 0;
    *(s32 *)((u8 *)arg0 + 0x14) = 0;
    *(s32 *)((u8 *)arg0 + 0x18) = 0;
    *(s32 *)((u8 *)arg0 + 0x1C) = 0;
    *(s32 *)((u8 *)arg0 + 0x40) = 0;
    *(s32 *)((u8 *)arg0 + 0x44) = 0;
    return arg0;
}

void func_0013A048(void *arg0) {
    s32 v;
    s32 ctx[16];

    v = func_001E3650(func_001E4280(), (func_001D4040(ctx, D_00445C50), ctx));
    if (v < 0x13) {
        func_001E3EC0(func_001E4280(), (func_001D4040(ctx, D_00445C50), ctx), v + 1);
        func_0011E278(*(s32 *)((u8 *)arg0 + 0xC), 0x2B);
    }
}

void func_00139FA8(void *arg0) {
    s32 v;
    s32 ctx[16];

    v = func_001E3650(func_001E4280(), (func_001D4040(ctx, D_00445C50), ctx));
    if (v > 0) {
        func_001E3EC0(func_001E4280(), (func_001D4040(ctx, D_00445C50), ctx), v - 1);
        func_0011E278(*(s32 *)((u8 *)arg0 + 0xC), 0x2B);
    }
}
