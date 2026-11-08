/* machine draft (m2c) for ee-gcc-2.9-991111 -O2 -G0, tried by autopilot */
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

s32 func_003D8118(void *);                          /* extern */

s32 func_003D6C70(void *arg0, s32 arg1) {
    s32 temp_3;
    s32 temp_3_2;
    s32 temp_4;
    s32 temp_4_2;
    s32 var_16;
    s32 var_2;

    var_16 = arg1;
loop_1:
    temp_3 = M2C_FIELD(arg0, s32 *, 4);
    temp_4 = M2C_FIELD(arg0, s32 *, 8) - temp_3;
    if (temp_4 > 0) {
        temp_4_2 = (var_16 < temp_4) ? var_16 : temp_4;
        temp_3_2 = temp_3 + temp_4_2;
        var_16 -= temp_4_2;
        M2C_FIELD(arg0, s32 *, 4) = temp_3_2;
    }
    var_2 = arg1 - var_16;
    if (var_16 != 0) {
        if (func_003D8118(arg0) != -1) {
            goto loop_1;
        }
        var_2 = arg1 - var_16;
    }
    return var_2;
}
