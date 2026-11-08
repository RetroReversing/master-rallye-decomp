extern s32 iSignalSema_2(s32 sema, void *arg, s32 unk, s32 unk2);
extern u32 D_00441110;
extern u32 D_0049DC20;
extern u8 D_0049DC28[];

s32 func_00403F58(u8 arg0) {
    if (arg0 >= 0x80) {
        return -1;
    }
    if (D_00441110 == 0) {
        return -1;
    }
    u8 *base = D_0049DC28;
    s32 idx = (*(s32 *)(base + 4)) & 0x1FF;
    u8 *p = base + (idx * 2);
    *(s32 *)(base + 4) = idx + 1;
    p[8] = 1;
    p[9] = arg0;
    iSignalSema_2(D_0049DC20, p, idx * 2, 1);
    return (s32)arg0;
}

extern s32 FlushCache_2(s32);
extern s32 func_0040B388(s32, void *, void *);
extern s32 func_00404070(s32);
extern void func_00404118(void);

extern u8 D_0049E150[];
extern u8 D_0049E180[];
extern u8 D_0049E2C0[];

s32 func_004044D0(void) {
    s32 res;
    u8 *p150 = D_0049E150;
    u8 *p180;
    u32 p180k;
    u8 *p2c0;

    FlushCache_2(0);
    res = func_0040B388(0x210, D_0049E150, &func_00404118);
    *(s32 *)p150 = res;
    if (res < 0) {
        return 0;
    }
    *(s32 *)(p150 + 0xC) = 0;
    *(s32 *)(p150 + 4) = 0;
    *(s32 *)(p150 + 8) = 0;
    p180 = D_0049E180;
    p180k = (u32)p180 | 0x20000000;
    p2c0 = D_0049E2C0;
    *(u32 *)(p150 + 0x10) = p180k;
    *(u32 *)(p150 + 0x14) = (u32)p2c0 | 0x20000000;
    *(u16 *)(p180k) = 0x210;
    *(u8 *)(p180k + 6) = 0x45;
    *(u8 *)(p180k + 7) = 0x48;
    *(s32 *)(p180k + 8) = 0;
    *(u16 *)(p180k + 2) = 0;
    *(s32 *)(p150 + 0x18) = func_00404070(0x100);
    return 1;
}

void func_00404590(u8 arg0) {
    volatile u32 *reg = (volatile u32 *)0x1000F130;
    volatile u8 *out = (volatile u8 *)0x1000F180;
    while (reg[0] & 0x8000) {
    }
    *out = arg0;
}

extern s32 func_0040B540(void *, s32);
extern s32 D_00441114;
extern u8 D_0049E400[];

void func_004045C8(s8 arg0) {
    s32 idx = D_00441114;
    u8 *base = D_0049E400;
    if (idx >= 0x7E) {
        D_00441114 = 0;
        base[0x7F] = 0;
        func_0040B540(D_0049E400, idx);
        idx = D_00441114;
    }
    if (arg0 == 0xA) {
        D_00441114 = 0;
        base[idx] = arg0;
        base[idx + 1] = 0;
        func_0040B540(D_0049E400, idx);
        return;
    }
    D_00441114 = idx + 1;
    base[idx] = arg0;
}
