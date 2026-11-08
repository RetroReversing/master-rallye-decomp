extern void D_002AD390(void);
extern s32 D_0047D9A8;

void func_002AFF20(void *arg0, s32 arg1) {
    s32 temp;
    temp = arg1 & 1;
    *(void **)arg0 = &D_0047D9A8;
    if (temp != 0) {
        D_002AD390();
    }
}

s32 func_002B2118(s32 arg0) {
    s32 v;

    v = arg0 - 2;
    if (v < 0) {
        v = 0;
    }

    if (v < 0x40) {
        return (v + 1) << 3;
    }
    if (v < 0x60) {
        return (v << 6) - 0xDC0;
    }
    if (v < 0x70) {
        return ((v - 0x5F) << 9) + 0xA00;
    }
    if (v < 0x78) {
        return ((v - 0x6F) << 12) + 0x2A00;
    }
    if (v < 0x7C) {
        return ((v - 0x77) << 15) + 0xAA00;
    }
    if (v < 0x7E) {
        return ((v - 0x7B) << 18) + 0x2AA00;
    }
    return 0x01000000;
}

extern void (*D_00426AC0)(void);

void func_002AD758(void) {
    D_00426AC0();
}

extern void func_003F7300(void) __attribute__((noreturn));

void func_002AD748(void) {
    func_003F7300();
}
