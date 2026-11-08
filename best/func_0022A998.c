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

void func_0022A998(M2C_UNK **arg0) {
    M2C_UNK *temp_3;
    M2C_UNK *var_2;

    var_2 = *arg0;
    temp_3 = var_2;
    __repair_rows: {
        var_2 = *var_2;
    }
if (var_2 != temp_3) goto __repair_rows;
}
