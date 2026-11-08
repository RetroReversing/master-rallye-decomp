extern s32 D_0043C3B0[];

void func_003F0B30(s32 arg0, s32 arg1, s32 arg2) {
    register s32 *p = D_0043C3B0;
    p[1] = arg1;
    p[2] = arg2;
    p[3] = arg0;
}

extern s32 Deci2Call_2(s32 cmd, void *buf);

void func_0040B540(s32 arg0) {
    s32 buf[1];
    buf[0] = arg0;
    Deci2Call_2(0x10, buf);
}

extern s32 SetVTLBRefillHandler_2(s32, void *);
extern s32 SetVCommonHandler_2(s32, void *);
extern s32 D_00441CD0[];
extern u8 func_0040BA80[];

s32 func_0040B5C8(s32 arg0, s32 arg1) {
    u32 idx;
    s32 old;

    idx = (u32)arg0 - 1;
    if (idx >= 0xD) {
        return -1;
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

extern void SetSyscall_10(s32 num, s32 addr);
extern void Copy_6(void *dst, void *src, s32 len);
extern void FlushCache_2(s32 mode);
extern s32 GetEntryAddress_8(s32 num);
extern s32 D_00441D10[];
extern u8 D_004419A0[];

void func_0040B6B8(void) {
    s32 i;
    s32 *base;
    s32 *q;
    s32 num;
    s32 addr;

    base = D_00441D10;
    SetSyscall_10(base[0], base[1]);
    Copy_6((void *)0x80075000, D_004419A0, 0x328);
    FlushCache_2(0);
    FlushCache_2(2);
    SetSyscall_10(base[2], base[3]);
    SetSyscall_10(base[4], base[5]);
    i = 3;
    q = base + 6;
    do {
        num = q[0];
        i++;
        addr = GetEntryAddress_8(num);
        SetSyscall_10(q[0], addr);
        q += 2;
    } while ((u32)i < 8);
}
