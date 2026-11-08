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

s32 func_004072B0(s32, M2C_UNK, M2C_UNK);           /* extern */

s32 func_002B7528(s32 arg1) {
    s32 temp_2;
    s32 var_17;

    var_17 = 0;
    func_004072B0(arg1, 0, 1);
    if (func_004072B0(arg1, 0, 2) != -1) {
        temp_2 = func_004072B0(arg1, 0, 1);
        var_17 = (temp_2 >= 1) ? temp_2 : 0;
    }
    return var_17;
}
