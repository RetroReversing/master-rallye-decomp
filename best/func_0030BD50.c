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

M2C_UNK *func_00152D28(M2C_UNK, M2C_UNK *);         /* extern */
M2C_UNK *func_002B1FC0(s32);                        /* extern */
M2C_UNK *func_0030AFC8(s32, s32, M2C_UNK *, M2C_UNK); /* extern */
M2C_UNK *func_003D2910(s32);                        /* extern */
extern M2C_UNK D_0040E618;

void *func_0030BD50(void *arg0, void *arg1) {
    M2C_UNK *temp_2_2;
    M2C_UNK *var_3;
    s32 temp_2;
    s32 var_17;

    M2C_FIELD(arg0, M2C_UNK **, 0) = NULL;
    M2C_FIELD(arg0, M2C_UNK **, 4) = NULL;
    temp_2 = (s32) (M2C_FIELD(arg1, s32 *, 4) - M2C_FIELD(arg1, s32 *, 0)) >> 3;
    M2C_FIELD(arg0, void **, 8) = NULL;
    if (temp_2 != 0) {
        var_17 = temp_2 * 8;
        if (var_17 != 0) {
            temp_2_2 = func_002B1FC0(var_17);
            var_3 = temp_2_2;
            if (temp_2_2 == NULL) {
                var_3 = func_003D2910(var_17);
            }
        } else if (M2C_FIELD(&D_0040E618, M2C_UNK **, -4) != NULL) {
            var_3 = M2C_FIELD(&D_0040E618, M2C_UNK **, -4);
            M2C_FIELD(&D_0040E618, M2C_UNK **, -4) = (M2C_UNK *) *M2C_FIELD(&D_0040E618, M2C_UNK **, -4);
        } else {
            var_3 = func_00152D28(0, M2C_FIELD(&D_0040E618, M2C_UNK **, -4));
        }
    } else {
        var_3 = NULL;
        var_17 = 0;
    }
    M2C_FIELD(arg0, M2C_UNK **, 0) = var_3;
    M2C_FIELD(arg0, M2C_UNK **, 4) = var_3;
    M2C_FIELD(arg0, void **, 8) = (void *) (var_3 + var_17);
    M2C_FIELD(arg0, M2C_UNK **, 4) = func_0030AFC8(M2C_FIELD(arg1, s32 *, 0), M2C_FIELD(arg1, s32 *, 4), var_3, 0);
    return arg0;
}
