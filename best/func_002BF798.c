extern s32 D_00428DC0;
extern void func_002BF6A8(void);
extern s32 GetThreadId_2(void);
extern void SetAlarm_2(u16 ticks, void *cb, s32 tid);
extern void SleepThread_2(void);
extern void func_002BF688(void *a, void *b, void *c);

void func_002BF798(s32 arg0) {
    s32 ticks;
    s32 v;

    if (D_00428DC0 == 0) {
        func_002BF6A8();
    }
    v = D_00428DC0 * arg0;
    ticks = v + 0x3FF;
    if (ticks < 0) {
        ticks = v + 0x7FE;
    }
    ticks = ticks >> 10;
    if (ticks <= 0) {
        ticks = 1;
    }
    SetAlarm_2((u16)(ticks & 0xFFFF), func_002BF688, GetThreadId_2());
    SleepThread_2();
}
