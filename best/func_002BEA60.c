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

s32 func_002BEA40(s32);                             /* extern */
extern s32 D_00428D98;

s32 func_002BEA60(void) {
    s32 var_2;

    var_2 = 1;
    if (D_00428D98 != 0) {
        var_2 = func_002BEA40(D_00428D98);
        if (var_2 != 0) {
            D_00428D98 = 0;
        }
    }
    return var_2;
}
