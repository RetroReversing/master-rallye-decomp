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

M2C_UNK func_002AD530(void *);                      /* extern */
M2C_UNK func_002B2028(M2C_UNK *);                   /* extern */

void func_003B8EF8(M2C_UNK **arg0) {
    M2C_UNK *temp_2;
    M2C_UNK *temp_3_2;
    M2C_UNK *var_17;
    M2C_UNK *var_18;
    void **var_16;
    void *temp_2_2;
    void *temp_3;

    temp_2 = *arg0;
    var_17 = M2C_FIELD(temp_2, M2C_UNK **, 0);
    if (var_17 != temp_2) {
        var_18 = var_17;
        do {
            temp_3 = M2C_FIELD(var_18, void **, 8);
            var_17 = *var_17;
            if (temp_3 != NULL) {
                var_16 = temp_3 + (M2C_FIELD(temp_3, s32 *, -0x10) * 8);
                if (temp_3 != var_16) {
                    __repair_rows: {
                        var_16 -= 8;
                        temp_2_2 = *var_16;
                        M2C_FIELD(temp_2_2, M2C_UNK (**)(void *, M2C_UNK), 0x14)(var_16 + M2C_FIELD(temp_2_2, s16 *, 0x10), 0);
                    }
if (M2C_FIELD(var_18, void **, 8) != var_16) goto __repair_rows;
                }
                func_002AD530(M2C_FIELD(var_18, void **, 8) - 0x10);
            }
            func_002B2028(var_18);
            var_18 = var_17;
        } while (var_17 != *arg0);
    }
    M2C_FIELD(*arg0, M2C_UNK **, 0) = *arg0;
    temp_3_2 = *arg0;
    M2C_FIELD(temp_3_2, M2C_UNK **, 4) = temp_3_2;
}
