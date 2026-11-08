/* machine draft (m2c), tried by autopilot */
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

s64 *func_003C7880(s32);                            /* extern */

s32 func_003C8C48(s16 arg0, s16 arg1, s16 arg2) {
    s32 temp_2;
    s32 temp_2_2;
    s32 temp_2_3;
    s32 temp_3;
    s32 var_2;
    s32 var_6;
    s64 *temp_5;

    temp_3 = arg1 + 0x3F;
    temp_5 = func_003C7880(arg2 << 0x10);
    if (arg0 & 2) {
        temp_2 = arg2 + 0x3F;
        var_6 = (s32) ((temp_2 > -1) ? temp_2 : (arg2 + 0x7E)) >> 6;
    } else {
        temp_2_2 = arg2 + 0x1F;
        var_6 = (s32) ((temp_2_2 > -1) ? temp_2_2 : (arg2 + 0x3E)) >> 5;
    }
    temp_2_3 = ((s32) ((temp_3 > -1) ? temp_3 : (arg1 + 0x7E)) >> 6) * var_6;
    if ((*temp_5 & ((0xFFFF << 0x20) | 0xFFFF)) == 1) {
        var_2 = temp_2_3 << 0x10;
    } else {
        var_2 = temp_2_3 << 0x11;
    }
    return var_2 >> 0x10;
}
