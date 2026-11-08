void *func_001D4DB8(void *arg0) {
    s32 *p = (s32 *)arg0;
    p[3] = 1;
    p[0] = 0;
    p[1] = 0;
    p[2] = 1;
    return arg0;
}

extern s32 D_004262A0;
extern s32 D_002AD5A8(s32);
extern void func_001D4A60(s32);

s32 func_001D49B8(s32 arg0, u8 *arg1, s32 arg2) {
    s32 i;
    u32 crc;
    u32 *tbl;

    if (D_004262A0 == 0) {
        D_004262A0 = D_002AD5A8(0x400);
        func_001D4A60(D_004262A0);
    }

    crc = 0xFFFFFFFF;
    tbl = (u32 *)D_004262A0;
    i = arg2 - 1;
    if (i != -1) {
        do {
            u8 b = *arg1++;
            crc = (crc >> 8) ^ tbl[(u8)(crc ^ b)];
            i--;
        } while (i != -1);
    }
    return ~crc;
}

extern u8 D_00475E78[];
extern s32 func_003FA760(void *, void *);
extern void func_001D4888(void *, void *, void *);
extern void func_001D4040(void *, s32);
extern void D_002AD390(s32);

void func_001D4810(void *arg0, void *arg1) {
    s32 sp0;

    if (arg1 != 0) {
        if (func_003FA760(arg1, D_00475E78) == 0) {
            *(s32 *)arg0 = 0;
            return;
        }
    }
    sp0 = 0;
    func_001D4888(arg0, arg1, &sp0);
    func_001D4040(arg0, sp0);
    D_002AD390(sp0);
}

extern s32 func_001D30E8(void *);

void func_001D47C0(void *arg0, void *arg1) {
    void **slot;

    slot = (void **)((u8 *)arg0 + 4 + (func_001D30E8((u8 *)arg1 + 8) << 2));
    *(void **)((u8 *)arg1 + 4) = *slot;
    *slot = arg1;
}
