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

M2C_UNK func_0016FCF8(void *, s32, s32, void *);    /* extern */

void func_0016FEE0(void *arg0, s32 arg1) {
    s32 *var_3;
    s32 temp_2;
    s32 temp_4;
    s32 temp_5;
    s32 temp_5_2;
    s32 var_4;
    s32 var_5;

    temp_2 = M2C_FIELD(arg0, s32 *, 0x80) - 1;
    temp_5 = (temp_2 > 0) ? temp_2 : 0;
    temp_5_2 = ((temp_5 ^ 1) == 0) ? 0 : temp_5;
    temp_4 = temp_5_2 * 4;
    if (M2C_FIELD((arg0 + temp_4), s32 *, 0x84) != 0) {
        func_0016FCF8(arg0, temp_5_2, arg1, arg0);
    } else {
        var_4 = 1;
        var_3 = temp_4 + 0x84 + arg0;
        var_5 = temp_5_2 - 1;
loop_4:
        var_3 -= 4;
        if (var_5 >= 0) {
            if (*var_3 == 0) {
                var_5 -= 1;
                goto loop_4;
            }
        } else {
            var_4 = 0;
        }
        if (var_4 != 0) {
            if (var_5 != 1) {
                func_0016FCF8(arg0, var_5, arg1, arg0);
            }
        }
    }
}
