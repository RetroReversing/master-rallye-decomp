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

M2C_UNK *func_002B1FC0(M2C_UNK);                    /* extern */
M2C_UNK *func_003D2910(M2C_UNK);                    /* extern */

void *func_001EE2F8(void *arg0) {
    M2C_UNK *temp_3;
    M2C_UNK *var_3;

    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    var_3 = func_002B1FC0(0xC);
    if (var_3 == NULL) {
        var_3 = func_003D2910(0xC);
    }
    M2C_FIELD(arg0, M2C_UNK **, 0xC) = var_3;
    *var_3 = var_3;
    temp_3 = M2C_FIELD(arg0, M2C_UNK **, 0xC);
    M2C_FIELD(temp_3, M2C_UNK **, 4) = temp_3;
    return arg0;
}
