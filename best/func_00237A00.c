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

M2C_UNK func_00273490(void *, s32);                 /* extern */
M2C_UNK *func_002B1FC0(M2C_UNK);                    /* extern */
M2C_UNK func_002B2028(M2C_UNK *);                   /* extern */
M2C_UNK *func_003D2910(M2C_UNK);                    /* extern */
M2C_UNK func_003F93CC(M2C_UNK *, M2C_UNK *, s32);   /* extern */
extern M2C_UNK D_0040E618;

void *func_00237A00(void *arg0, s32 arg1) {
    M2C_UNK *temp_16;
    M2C_UNK *temp_16_2;
    M2C_UNK *temp_16_3;
    M2C_UNK *temp_17;
    M2C_UNK *temp_17_2;
    M2C_UNK *temp_2;
    M2C_UNK *temp_3_2;
    M2C_UNK *temp_4;
    M2C_UNK *var_17;
    M2C_UNK *var_2;
    s32 temp_20;
    s32 temp_2_2;
    s32 var_6;
    void *temp_18;
    void *temp_3;

    var_2 = func_002B1FC0(0xC);
    if (var_2 == NULL) {
        var_2 = func_003D2910(0xC);
    }
    M2C_FIELD(arg0, M2C_UNK **, 0) = var_2;
    temp_18 = arg0 + 4;
    *var_2 = var_2;
    temp_3 = arg0 + 0x10;
    temp_2 = M2C_FIELD(arg0, M2C_UNK **, 0);
    M2C_FIELD(temp_2, M2C_UNK **, 4) = temp_2;
    M2C_FIELD(arg0, M2C_UNK **, 4) = NULL;
    M2C_FIELD(temp_18, M2C_UNK **, 4) = NULL;
    M2C_FIELD(temp_18, M2C_UNK **, 8) = NULL;
    M2C_FIELD(arg0, M2C_UNK **, 0x10) = NULL;
    M2C_FIELD(temp_3, M2C_UNK **, 4) = NULL;
    M2C_FIELD(temp_3, s32 *, 8) = 0;
    func_00273490(arg0, arg1);
    temp_17 = M2C_FIELD(arg0, M2C_UNK **, 4);
    temp_16 = M2C_FIELD(temp_18, M2C_UNK **, 4);
    func_003F93CC(temp_17, temp_16, 0);
    temp_3_2 = M2C_FIELD(temp_18, M2C_UNK **, 4) - (temp_16 - temp_17);
    M2C_FIELD(temp_18, M2C_UNK **, 4) = temp_3_2;
    temp_16_2 = M2C_FIELD(arg0, M2C_UNK **, 4);
    if ((u32) ((s32) (M2C_FIELD(temp_18, M2C_UNK **, 8) - temp_16_2) >> 2) < 8U) {
        temp_20 = (s32) (temp_3_2 - temp_16_2) >> 2;
        var_17 = func_002B1FC0(0x20);
        var_6 = temp_20 * 4;
        if (var_17 == NULL) {
            var_17 = func_003D2910(0x20);
            var_6 = temp_20 * 4;
        }
        func_003F93CC(var_17, temp_16_2, var_6);
        temp_4 = M2C_FIELD(arg0, M2C_UNK **, 4);
        temp_2_2 = (s32) (M2C_FIELD(temp_18, M2C_UNK **, 8) - temp_4) >> 2;
        if (temp_2_2 != 0) {
            if ((temp_2_2 * 4) != 0) {
                func_002B2028(temp_4);
            } else {
                *temp_4 = M2C_FIELD(&D_0040E618, M2C_UNK **, -4);
                M2C_FIELD(&D_0040E618, M2C_UNK **, -4) = temp_4;
            }
        }
        M2C_FIELD(temp_18, M2C_UNK **, 8) = (M2C_UNK *) (var_17 + 0x20);
        M2C_FIELD(temp_18, M2C_UNK **, 4) = (M2C_UNK *) (var_17 + var_6);
        M2C_FIELD(arg0, M2C_UNK **, 4) = var_17;
    }
    temp_17_2 = M2C_FIELD(arg0, M2C_UNK **, 0x10);
    temp_16_3 = M2C_FIELD(temp_3, M2C_UNK **, 4);
    func_003F93CC(temp_17_2, temp_16_3, 0);
    M2C_FIELD(temp_3, M2C_UNK **, 4) = (M2C_UNK *) (M2C_FIELD(temp_3, M2C_UNK **, 4) - (temp_16_3 - temp_17_2));
    return arg0;
}
