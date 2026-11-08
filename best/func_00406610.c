extern s32 D_0043C3B0[];
extern s32 D_004411B0;
extern char D_004A1040[];
extern s32 D_004411AC;
extern void func_004065B0(void);
extern s32 WaitSema_2(s32);
extern s32 SignalSema_2(s32);
extern s32 CreateSema_2(void *, s32, s32, s32);

void func_003F0B30(s32 arg0, s32 arg1, s32 arg2) {
    s32 *p = D_0043C3B0;
    p[3] = arg0;
    p[1] = arg1;
    p[2] = arg2;
}

void *func_00406610(void) {
    func_004065B0();
    WaitSema_2(D_004411B0);
    char *p = D_004A1040;
    char *end = D_004A1040 + 0x200;
    if (p < end) {
        while (1) {
            if (*(s32 *)(p + 4) == 0) {
                *(s32 *)(p + 4) = 0x10000000;
                SignalSema_2(D_004411B0);
                return (void *)p;
            }
            p += 0x10;
            if (p >= end) break;
        }
    }
    SignalSema_2(D_004411B0);
    return NULL;
}

void *func_00406698(u32 arg0) {
    func_004065B0();
    WaitSema_2(D_004411B0);
    if (arg0 >= 0x20U) {
        SignalSema_2(D_004411B0);
        return NULL;
    }
    SignalSema_2(D_004411B0);
    return (void *)(D_004A1040 + arg0 * 0x10);
}

void func_00406AC8(void) {
    if (D_004411AC == -1) {
        char buf[0x40];
        *(s32 *)(buf + 0x4) = 1;
        *(s32 *)(buf + 0x8) = 1;
        *(s32 *)(buf + 0x14) = 0;
        D_004411AC = CreateSema_2(buf, 1, 1, 0);
    }
}
