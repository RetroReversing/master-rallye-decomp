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

M2C_UNK func_00242B10();                            /* extern */
M2C_UNK *func_002B1FC0(M2C_UNK);                    /* extern */
M2C_UNK *func_003D2910(M2C_UNK);                    /* extern */
extern M2C_UNK D_00487FB0;

void *func_003B7EA0(void *arg0) {
    M2C_UNK *temp_2;
    M2C_UNK *temp_2_2;
    M2C_UNK *temp_2_3;
    M2C_UNK *temp_3;
    M2C_UNK *var_2;
    M2C_UNK *var_2_2;
    M2C_UNK *var_2_3;
    M2C_UNK *var_3;

    func_00242B10();
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00487FB0;
    var_2 = func_002B1FC0(0x14);
    if (var_2 == NULL) {
        var_2 = func_003D2910(0x14);
    }
    M2C_FIELD(arg0, M2C_UNK **, 0x3C) = var_2;
    *var_2 = var_2;
    temp_2 = M2C_FIELD(arg0, M2C_UNK **, 0x3C);
    M2C_FIELD(temp_2, M2C_UNK **, 4) = temp_2;
    var_2_2 = func_002B1FC0(0x14);
    if (var_2_2 == NULL) {
        var_2_2 = func_003D2910(0x14);
    }
    M2C_FIELD(arg0, M2C_UNK **, 0x40) = var_2_2;
    *var_2_2 = var_2_2;
    temp_2_2 = M2C_FIELD(arg0, M2C_UNK **, 0x40);
    M2C_FIELD(temp_2_2, M2C_UNK **, 4) = temp_2_2;
    var_2_3 = func_002B1FC0(0x14);
    if (var_2_3 == NULL) {
        var_2_3 = func_003D2910(0x14);
    }
    M2C_FIELD(arg0, M2C_UNK **, 0x44) = var_2_3;
    *var_2_3 = var_2_3;
    temp_2_3 = M2C_FIELD(arg0, M2C_UNK **, 0x44);
    M2C_FIELD(temp_2_3, M2C_UNK **, 4) = temp_2_3;
    var_3 = func_002B1FC0(0x14);
    if (var_3 == NULL) {
        var_3 = func_003D2910(0x14);
    }
    M2C_FIELD(arg0, M2C_UNK **, 0x48) = var_3;
    *var_3 = var_3;
    temp_3 = M2C_FIELD(arg0, M2C_UNK **, 0x48);
    M2C_FIELD(temp_3, M2C_UNK **, 4) = temp_3;
    M2C_FIELD(arg0, s32 *, 0x4C) = 0;
    return arg0;
}
