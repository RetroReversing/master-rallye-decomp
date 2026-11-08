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
M2C_UNK func_003F931C(M2C_UNK *, void *, M2C_UNK *); /* extern */
extern M2C_UNK D_0040E618;

M2C_UNK *func_003C2CB0(M2C_UNK **arg0) {
    M2C_UNK *temp_17;
    M2C_UNK *temp_2;
    M2C_UNK *temp_6;
    M2C_UNK *var_16_2;
    s32 var_16;
    u32 temp_4;
    u32 var_17;

    var_17 = 0x10;
    temp_4 = *arg0 + 1;
    var_16 = 0x20;
    if (temp_4 > 0x10U) {
        var_17 = 0x10 * 2;
loop_2:
        if (var_17 < temp_4) {
            var_17 *= 2;
            goto loop_2;
        }
        var_16 = var_17 + 0x10;
    }
    if (var_16 != 0) {
        temp_2 = func_002B1FC0(var_16);
        if (temp_2 != NULL) {
            var_16_2 = temp_2;
        } else {
            var_16_2 = func_003D2910(var_16);
        }
    } else if (M2C_FIELD(&D_0040E618, M2C_UNK **, -4) != NULL) {
        var_16_2 = M2C_FIELD(&D_0040E618, M2C_UNK **, -4);
        M2C_FIELD(&D_0040E618, M2C_UNK **, -4) = (M2C_UNK *) *M2C_FIELD(&D_0040E618, M2C_UNK **, -4);
    } else {
        var_16_2 = func_00152D28(0);
    }
    M2C_FIELD(var_16_2, u32 *, 4) = var_17;
    M2C_FIELD(var_16_2, s32 *, 8) = 1;
    M2C_FIELD(var_16_2, s32 *, 0xC) = 0;
    temp_6 = *arg0;
    temp_17 = var_16_2 + 0x10;
    if (temp_6 != NULL) {
        func_003F931C(temp_17, arg0 + 0x10, temp_6);
    }
    M2C_FIELD(var_16_2, M2C_UNK **, 0) = *arg0;
    return temp_17;
}
