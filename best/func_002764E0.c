/* machine draft (m2c) for ee-gcc-2.95.2 -O2 -G0 -fno-schedule-insns, tried by autopilot */
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

M2C_UNK func_002B2028(M2C_UNK *);                   /* extern */

void func_002764E0(M2C_UNK **arg0) {
    M2C_UNK *temp_2;
    M2C_UNK *temp_3;
    M2C_UNK *var_16;
    M2C_UNK *var_17;
    s32 temp_2_2;
    void *temp_2_3;
    void *temp_6;

    temp_2 = *arg0;
    var_16 = M2C_FIELD(temp_2, M2C_UNK **, 0);
    if (var_16 != temp_2) {
        var_17 = var_16;
        do {
            temp_6 = M2C_FIELD(var_17, void **, 8);
            var_16 = *var_16;
            if (temp_6 != NULL) {
                temp_2_2 = M2C_FIELD(temp_6, s32 *, 0) - 1;
                M2C_FIELD(temp_6, s32 *, 0) = temp_2_2;
                if (temp_2_2 == 0) {
                    temp_2_3 = M2C_FIELD(temp_6, void **, 4);
                    M2C_FIELD(temp_2_3, M2C_UNK (**)(void *, M2C_UNK, void *), 0xC)(temp_6 + M2C_FIELD(temp_2_3, s16 *, 8), 3, temp_6);
                }
            }
            func_002B2028(var_17);
            var_17 = var_16;
        } while (var_16 != *arg0);
    }
    M2C_FIELD(*arg0, M2C_UNK **, 0) = *arg0;
    temp_3 = *arg0;
    M2C_FIELD(temp_3, M2C_UNK **, 4) = temp_3;
}
