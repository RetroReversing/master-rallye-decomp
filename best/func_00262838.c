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

void *D_002AD408(M2C_UNK);                          /* extern */
M2C_UNK *func_002B1FC0(M2C_UNK);                    /* extern */
M2C_UNK *func_003D2910(M2C_UNK);                    /* extern */
extern void *D_004267A4;

void *func_00262838(void) {
    M2C_UNK *temp_2;
    M2C_UNK *temp_2_2;
    M2C_UNK *temp_2_3;
    M2C_UNK *temp_2_4;
    M2C_UNK *temp_2_5;
    M2C_UNK *var_2;
    M2C_UNK *var_2_2;
    M2C_UNK *var_2_3;
    M2C_UNK *var_2_4;
    M2C_UNK *var_2_5;
    s32 var_3;
    void *temp_16;

    if (D_004267A4 == NULL) {
        temp_16 = D_002AD408(0x4C);
        var_2 = func_002B1FC0(0x18);
        if (var_2 == NULL) {
            var_2 = func_003D2910(0x18);
        }
        M2C_FIELD(temp_16, M2C_UNK **, 0) = var_2;
        *var_2 = var_2;
        temp_2 = M2C_FIELD(temp_16, M2C_UNK **, 0);
        M2C_FIELD(temp_2, M2C_UNK **, 4) = temp_2;
        var_2_2 = func_002B1FC0(0xC);
        if (var_2_2 == NULL) {
            var_2_2 = func_003D2910(0xC);
        }
        M2C_FIELD(temp_16, M2C_UNK **, 4) = var_2_2;
        *var_2_2 = var_2_2;
        temp_2_2 = M2C_FIELD(temp_16, M2C_UNK **, 4);
        M2C_FIELD(temp_2_2, M2C_UNK **, 4) = temp_2_2;
        var_2_3 = func_002B1FC0(0xC);
        if (var_2_3 == NULL) {
            var_2_3 = func_003D2910(0xC);
        }
        M2C_FIELD(temp_16, M2C_UNK **, 8) = var_2_3;
        *var_2_3 = var_2_3;
        temp_2_3 = M2C_FIELD(temp_16, M2C_UNK **, 8);
        M2C_FIELD(temp_2_3, M2C_UNK **, 4) = temp_2_3;
        var_2_4 = func_002B1FC0(0xC);
        if (var_2_4 == NULL) {
            var_2_4 = func_003D2910(0xC);
        }
        M2C_FIELD(temp_16, M2C_UNK **, 0xC) = var_2_4;
        *var_2_4 = var_2_4;
        temp_2_4 = M2C_FIELD(temp_16, M2C_UNK **, 0xC);
        M2C_FIELD(temp_2_4, M2C_UNK **, 4) = temp_2_4;
        var_2_5 = func_002B1FC0(0xC);
        if (var_2_5 == NULL) {
            var_2_5 = func_003D2910(0xC);
        }
        M2C_FIELD(temp_16, M2C_UNK **, 0x10) = var_2_5;
        var_3 = 3;
        *var_2_5 = var_2_5;
        temp_2_5 = M2C_FIELD(temp_16, M2C_UNK **, 0x10);
        M2C_FIELD(temp_2_5, M2C_UNK **, 4) = temp_2_5;
        do {
            var_3 -= 1;
        } while (var_3 != -1);
        D_004267A4 = temp_16;
        M2C_FIELD(temp_16, s32 *, 0x48) = 1;
        M2C_FIELD(temp_16, s32 *, 0x44) = 0;
    }
    return D_004267A4;
}
