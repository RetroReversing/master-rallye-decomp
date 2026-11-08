/* machine draft (m2c) for ee-gcc-2.95.2 -O2 -G0 -fno-schedule-insns, tried by autopilot */
#ifndef M2C_DEFINES
#define M2C_DEFINES
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#define M2C_ERROR(desc) (0)
#define M2C_CARRY 0
#define M2C_OVERFLOW(a) (0)
#endif

s64 D_002BFA80(void *);                             /* extern */
s32 GetThreadId_2();                                /* extern */
M2C_UNK SetAlarm_2(M2C_UNK, M2C_UNK *, s32);        /* extern */
M2C_UNK SleepThread_2();                            /* extern */
void *func_002BF920();                              /* extern */
s64 func_0040BDE0(M2C_UNK, s64);                    /* extern */
s64 func_0040CF38(s32, s64);                        /* extern */
extern s32 D_00428DC0;
extern M2C_UNK func_002BF688;

void func_002BF6A8(void) {
    s32 temp_16;
    s64 temp_17;
    s64 temp_18;

    temp_18 = (s64) (D_002BFA80(func_002BF920()) << 0x20) >> 0x20;
    temp_17 = (s64) (D_002BFA80(func_002BF920()) << 0x20) >> 0x20;
    SetAlarm_2(0x10, &func_002BF688, GetThreadId_2());
    SleepThread_2();
    temp_16 = (((s64) (D_002BFA80(func_002BF920()) << 0x20) >> 0x20) - temp_17) - (temp_17 - temp_18);
    D_00428DC0 = (s32) ((s64) (func_0040BDE0(0x100000, (s64) (func_0040CF38((MULT_HI(temp_16, 0xFA000) << 0x20) | ((u64) ((temp_16 * 0xFA000) << 0x20) >> 0x20), M2C_FIELD(func_002BF920(), s64 *, 0x10)) << 0x1C) >> 0x20) << 0x20) >> 0x20);
}
