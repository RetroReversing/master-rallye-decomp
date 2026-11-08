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

void func_00237DB8(M2C_UNK **arg0, s32 arg1) {
    M2C_UNK *sp10;
    M2C_UNK *var_2;
    M2C_UNK *var_4;

    sp10 = *arg0;
    var_4 = func_002B1FC0(0xC);
    var_2 = var_4 + 8;
    if (var_4 == NULL) {
        var_4 = func_003D2910(0xC);
        var_2 = var_4 + 8;
    }
    if (var_2 != NULL) {
        M2C_FIELD(var_4, s32 *, 8) = arg1;
    }
    M2C_FIELD(var_4, M2C_UNK **, 0) = sp10;
    M2C_FIELD(var_4, M2C_UNK **, 4) = (M2C_UNK *) M2C_FIELD(sp10, M2C_UNK **, 4);
    *M2C_FIELD(sp10, M2C_UNK **, 4) = var_4;
    M2C_FIELD(sp10, M2C_UNK **, 4) = var_4;
}
