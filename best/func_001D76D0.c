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

void *func_001D6BB0();                              /* extern */

s32 func_001D76D0(s32 arg0, s32 arg1) {
    s32 temp_2;
    void **temp_7;
    void *temp_3;

    temp_7 = M2C_FIELD(func_001D6BB0(), void ***, 4);
    temp_3 = *temp_7;
    temp_2 = M2C_FIELD(temp_3, s32 (**)(void *, s32, s32, void **), 0x24)(temp_7 + M2C_FIELD(temp_3, s16 *, 0x20), arg0 + 0x1C, arg1, temp_7);
    return (temp_2 < 0) ? -1 : temp_2;
}
