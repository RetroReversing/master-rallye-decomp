/* machine draft (m2c) for ee-gcc-2.95.2 -O2 -G0, tried by autopilot */
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

f32 func_001D5DF0(s32 *arg0) {
    s32 temp_4;
    s32 temp_5;

    temp_5 = *arg0;
    temp_4 = ((temp_5 % 44488) * 0xBC8F) - ((temp_5 / 44488) * 0xD47);
    *arg0 = temp_4;
    if (temp_4 <= 0) {
        *arg0 = temp_4 + 0x7FFFFFFF;
    }
    return (f32) (*arg0 & 0xFFFFFF) * 5.9604645e-8f;
}
