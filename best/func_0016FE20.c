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

M2C_UNK func_0016FCF8(void *, s32, M2C_UNK, s32, void *); /* extern */

void func_0016FE20(void *arg0) {
    s32 *var_3;
    s32 temp_3;
    s32 temp_4;
    s32 temp_6;
    s32 temp_7;
    s32 var_5;
    s32 var_6;

    temp_7 = M2C_FIELD(arg0, s32 *, 0x60) - 1;
    temp_3 = M2C_FIELD(arg0, s32 *, 0x80) + 1;
    temp_6 = (temp_7 >= temp_3) ? temp_3 : temp_7;
    var_6 = ((temp_6 ^ 1) == 0) ? 2 : temp_6;
    temp_4 = var_6 * 4;
    if (M2C_FIELD((arg0 + temp_4), s32 *, 0x84) != 0) {
        func_0016FCF8(arg0, (temp_7 >= var_6) ? var_6 : temp_7, 0, temp_7, arg0);
        return;
    }
    var_5 = 1;
    var_3 = temp_4 + 0x84 + arg0;
loop_4:
    var_6 += 1;
    var_3 += 4;
    if (temp_7 >= var_6) {
        if (*var_3 == 0) {
            goto loop_4;
        }
    } else {
        var_5 = 0;
    }
    if (var_5 != 0) {
        func_0016FCF8(arg0, var_6, 0, temp_7, arg0);
    }
}
