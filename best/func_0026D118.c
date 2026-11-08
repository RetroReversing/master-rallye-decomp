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

M2C_UNK func_0026CF20(s32 *, M2C_UNK, s32, s32, s32); /* extern */

void func_0026D118(s32 *arg0, s32 *arg1, s32 arg2) {
    s32 *var_16;
    s32 *var_17;
    s32 temp_7;
    s32 var_18;

    var_17 = arg1;
    if (((s32) (var_17 - arg0) >> 2) >= 2) {
        var_18 = arg1 - arg0;
        var_16 = var_17;
loop_2:
        var_16 -= 4;
        temp_7 = *var_16;
        var_18 -= 4;
        *var_16 = *arg0;
        var_17 -= 4;
        func_0026CF20(arg0, 0, var_18 >> 2, temp_7, arg2);
        if (((s32) (var_17 - arg0) >> 2) >= 2) {
            goto loop_2;
        }
    }
}
