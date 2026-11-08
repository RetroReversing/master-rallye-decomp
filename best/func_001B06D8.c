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

s32 func_001B0780(void *, void *, s32);             /* extern */
s32 func_001B0878(void *, s32);                     /* extern */
s32 func_001D5EB0(s32, M2C_UNK, M2C_UNK);           /* extern */
s32 func_001D5F70();                                /* extern */

s32 func_001B06D8(void *arg0) {
    s32 temp_16;
    s32 temp_16_2;
    s32 temp_6;
    s32 var_2;
    u32 temp_2;
    void *temp_5;

    temp_6 = M2C_FIELD(arg0, s32 *, 0x84);
    if (temp_6 != -1) {
        var_2 = func_001B0780(arg0, M2C_FIELD(arg0, void **, 0xAC), temp_6);
    } else {
        var_2 = func_001B0878(M2C_FIELD(arg0, void **, 0xAC), temp_6);
    }
    M2C_FIELD(arg0, s32 *, 0x84) = var_2;
    temp_5 = M2C_FIELD(arg0, void **, 0xAC);
    temp_16_2 = var_2 + func_001D5EB0(func_001D5F70(), 0, 3);
    temp_16 = (temp_16_2 <= -1) ? 0 : temp_16_2;
    temp_2 = ((s32) ((M2C_FIELD(temp_5, s32 *, 4) - M2C_FIELD(temp_5, s32 *, 0)) * 0xCCCCCCCD) >> 4) - 1;
    return (temp_2 >= (u32) temp_16) ? temp_16 : (s32) temp_2;
}
