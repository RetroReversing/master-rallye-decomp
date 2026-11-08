extern s32 D_004411AC;
extern s32 D_004411B0;
extern char D_004A1040[];
extern void func_004065B0(void);
extern s32 WaitSema_2(s32);
extern s32 SignalSema_2(s32);
extern s32 CreateSema_2(void *);

void func_00406AC8(void) {
    if (D_004411AC == -1) {
        int buf[6];
        buf[1] = 1;
        buf[2] = 1;
        buf[5] = 0;
        D_004411AC = CreateSema_2(buf);
    }
}

void *func_00406698(u32 arg0) {
    func_004065B0();
    WaitSema_2(D_004411B0);
    if (arg0 < 0x20U) {
        SignalSema_2(D_004411B0);
        return (void *)(D_004A1040 + (arg0 << 4));
    }
    SignalSema_2(D_004411B0);
    return (void *)0;
}
