extern s32 SetVTLBRefillHandler_2(s32, void *);
extern s32 SetVCommonHandler_2(s32, void *);
extern s32 D_00441CD0[];
extern u8 func_0040BA80[];

s32 func_0040B5C8(s32 arg0, s32 arg1) {
    u32 idx;
    s32 old;
    u32 neg;

    idx = (u32)arg0 - 1;
    if (idx >= 0xD) {
        neg = 0xFFFF;
        neg = (neg << 16) | 0xFFFF;
        return (s32)neg;
    }
    old = D_00441CD0[arg0];
    D_00441CD0[arg0] = arg1;
    if (idx < 3) {
        SetVTLBRefillHandler_2(arg0, &func_0040BA80[0x240]);
    } else {
        SetVCommonHandler_2(arg0, &func_0040BA80[0x240]);
    }
    return old;
}
