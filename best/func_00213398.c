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

M2C_UNK D_002AD390(s32);                            /* extern */
M2C_UNK func_002B2028(M2C_UNK *);                   /* extern */

void func_00213398(M2C_UNK **arg0) {
    M2C_UNK *temp_2;
    M2C_UNK *temp_3;
    M2C_UNK *var_16;
    M2C_UNK *var_17;

    temp_2 = *arg0;
    var_17 = M2C_FIELD(temp_2, M2C_UNK **, 0);
    if (var_17 != temp_2) {
        var_16 = var_17;
        do {
            var_17 = *var_17;
            D_002AD390(M2C_FIELD(var_16, s32 *, 8));
            func_002B2028(var_16);
            var_16 = var_17;
        } while (var_17 != *arg0);
    }
    M2C_FIELD(*arg0, M2C_UNK **, 0) = *arg0;
    temp_3 = *arg0;
    M2C_FIELD(temp_3, M2C_UNK **, 4) = temp_3;
}
