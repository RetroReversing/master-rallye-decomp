/* machine draft (m2c), tried by autopilot */
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

M2C_UNK func_003FFAC0(void *, M2C_UNK *);           /* extern */
M2C_UNK *func_003FFAF0(s32, M2C_UNK);               /* extern */
M2C_UNK *func_003FFE98(void *, M2C_UNK);            /* extern */
M2C_UNK *func_003FFED0(void *, M2C_UNK *, M2C_UNK *); /* extern */
extern M2C_UNK D_0048C5E0;

M2C_UNK *func_00400100(void *arg0, M2C_UNK *arg1, s32 arg2) {
    M2C_UNK *temp_2;
    M2C_UNK *temp_5;
    M2C_UNK *var_16;
    M2C_UNK *var_18;
    M2C_UNK *var_2;
    M2C_UNK *var_2_3;
    s32 temp_3;
    s32 var_17;
    s32 var_2_2;

    /* Flowgraph is not reducible, falling back to gotos-only mode. */
    temp_3 = arg2 & 3;
    var_18 = arg1;
    if (temp_3 == 0) {
        goto block_2;
    }
    var_18 = func_003FFAF0(*(((temp_3 - 1) * 4) + &D_0048C5E0), 0);
block_2:
    var_17 = arg2 >> 2;
    var_2 = var_18;
    if (var_17 == 0) {
        goto block_16;
    }
    var_16 = M2C_FIELD(arg0, M2C_UNK **, 0x48);
    var_2_2 = var_17 & 1;
    if (var_16 != NULL) {
        goto block_10;
    }
    temp_2 = func_003FFE98(arg0, 0x271);
    var_16 = temp_2;
    M2C_FIELD(arg0, M2C_UNK **, 0x48) = temp_2;
    *var_16 = NULL;
    goto block_9;
block_6:
    if (var_2_3 != NULL) {
        goto block_8;
    }
    var_2_3 = func_003FFED0(arg0, var_16, var_16);
    *var_16 = var_2_3;
    *var_2_3 = NULL;
block_8:
    var_16 = var_2_3;
block_9:
    var_2_2 = var_17 & 1;
block_10:
    if (var_2_2 == 0) {
        goto block_12;
    }
    temp_5 = var_18;
    var_18 = func_003FFED0(arg0, var_18, var_16);
    func_003FFAC0(arg0, temp_5);
block_12:
    var_17 = var_17 >> 1;
    if (var_17 == 0) {
        goto block_14;
    }
    var_2_3 = *var_16;
    goto block_6;
block_14:
    var_2 = var_18;
block_16:
    return var_2;
}
