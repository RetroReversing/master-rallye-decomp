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

M2C_UNK *func_00152D28(M2C_UNK);                    /* extern */
M2C_UNK *func_002B1FC0(s32);                        /* extern */
M2C_UNK *func_003D2910(s32);                        /* extern */
M2C_UNK func_003F93CC(M2C_UNK *, s32, s32);         /* extern */
extern M2C_UNK D_0040E618;

void *func_00275B08(void *arg0, s32 arg1, void *arg2) {
    M2C_UNK *temp_2_2;
    M2C_UNK *var_17;
    s32 temp_16;
    s32 temp_2;
    s32 temp_2_3;
    s32 var_16;
    void *var_18;
    void *var_19;

    var_19 = arg0;
    var_18 = arg2;
    if (var_19 != arg1) {
        do {
            if (var_18 != NULL) {
                M2C_FIELD(var_18, M2C_UNK **, 0) = NULL;
                M2C_FIELD(var_18, M2C_UNK **, 4) = NULL;
                temp_2 = (s32) (M2C_FIELD(var_19, s32 *, 4) - M2C_FIELD(var_19, s32 *, 0)) >> 2;
                M2C_FIELD(var_18, void **, 8) = NULL;
                if (temp_2 != 0) {
                    var_16 = temp_2 * 4;
                    if (var_16 != 0) {
                        temp_2_2 = func_002B1FC0(var_16);
                        var_17 = temp_2_2;
                        if (temp_2_2 == NULL) {
                            var_17 = func_003D2910(var_16);
                        }
                    } else if (M2C_FIELD(&D_0040E618, M2C_UNK **, -4) != NULL) {
                        var_17 = M2C_FIELD(&D_0040E618, M2C_UNK **, -4);
                        M2C_FIELD(&D_0040E618, M2C_UNK **, -4) = (M2C_UNK *) *M2C_FIELD(&D_0040E618, M2C_UNK **, -4);
                    } else {
                        var_17 = func_00152D28(0);
                    }
                } else {
                    var_17 = NULL;
                    var_16 = 0;
                }
                M2C_FIELD(var_18, M2C_UNK **, 0) = var_17;
                M2C_FIELD(var_18, void **, 8) = (void *) (var_17 + var_16);
                M2C_FIELD(var_18, M2C_UNK **, 4) = var_17;
                temp_2_3 = M2C_FIELD(var_19, s32 *, 0);
                temp_16 = M2C_FIELD(var_19, s32 *, 4) - temp_2_3;
                func_003F93CC(var_17, temp_2_3, (temp_16 >> 2) * 4);
                M2C_FIELD(var_18, M2C_UNK **, 4) = (M2C_UNK *) (var_17 + temp_16);
            }
            var_19 += 0xC;
            var_18 += 0xC;
        } while (var_19 != arg1);
    }
    return var_18;
}
