extern void _iEnableIntc_2(void);
extern void sync(void);

void func_00403B50(void) {
    _iEnableIntc_2();
    sync();
}

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
    s32 idx = (*(s32 *)(D_0049DC28 + 4)) & 0x1FF;
    u8 *base = D_0049DC28;
    u8 *p = base + (idx * 2);
    *(s32 *)(base + 4) = idx + 1;
    p[8] = 1;
    p[9] = arg0;
    iSignalSema_2(D_0049DC20, p, idx * 2, 1);
    return arg0;
}

s32 func_00403698(s32 dummy, void *arg1) {
    *(s64 *)((u8 *)arg1 + 0x48) = 0;
    *(s32 *)((u8 *)arg1 + 4) = 0x2000;
    return 0;
}

extern u8 D_0049E040[];

s32 func_00404070(s32 arg0) {
    u8 *p = D_0049E040;
    u8 *q = p + 0x10;
    *(s32 *)(D_0049E040) = arg0;
    *(u8 **)(p + 8) = q;
    *(s32 *)(p + 4) = 0;
    *(u8 **)(p + 0xC) = q;
    return (s32)(u32)p;
}
