/* machine draft (m2c) for ee-gcc-2.95.3 -O1 -G0, tried by autopilot */
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

s32 *func_00396130(s32 arg0, s32 *arg1, s32 *arg2, s32 arg3, s32 arg4) {
    s32 sp0;
    s32 *var_5;
    s32 *var_6;

    var_5 = arg1;
    var_6 = arg2;
    sp0 = (s32) (var_5 - arg0) >> 2;
loop_1:
    if (sp0 > 0) {
        var_6 -= 4;
        var_5 -= 4;
        *var_6 = *var_5;
        sp0 -= 1;
        goto loop_1;
    }
    return var_6;
}
