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

void **func_003DAD78(void **arg0, s32 **arg1) {
    s32 temp_5;
    void *temp_6;

    if (arg1 != arg0) {
        temp_5 = **arg1;
        temp_6 = *arg0;
        if (temp_5 == 0) {
            M2C_FIELD(temp_6, s8 *, 0x1A) = 4;
        } else {
            M2C_FIELD(temp_6, s8 *, 0x1A) = 0;
        }
        M2C_FIELD(temp_6, s32 *, 0) = temp_5;
        M2C_FIELD(temp_6, s16 *, 0x18) = 0x20;
        M2C_FIELD(temp_6, s64 *, 0x10) = 0x11;
        M2C_FIELD(temp_6, s32 *, 0x1C) = 6;
        M2C_FIELD(temp_6, s32 *, 0x20) = 0;
        M2C_FIELD(temp_6, s8 *, 0x1B) = 0;
        M2C_FIELD(temp_6, s32 *, 4) = 0;
        M2C_FIELD(temp_6, s32 *, 8) = 0;
    }
    return arg0;
}
