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

M2C_UNK *func_00152D28(M2C_UNK, u32, u32, s32);     /* extern */
M2C_UNK *func_002B1FC0(s32, u32, u32, s32);         /* extern */
M2C_UNK func_002B2028(M2C_UNK *, M2C_UNK *);        /* extern */
M2C_UNK *func_003D2910(s32);                        /* extern */
M2C_UNK func_003F931C(M2C_UNK *, M2C_UNK *, M2C_UNK *); /* extern */
extern M2C_UNK D_0040E618;

void func_00308450(M2C_UNK **arg0, s32 arg1, u32 arg2) {
    M2C_UNK *temp_2;
    M2C_UNK *temp_4_2;
    M2C_UNK *temp_5_2;
    M2C_UNK *temp_5_3;
    M2C_UNK *temp_6;
    M2C_UNK *var_16_2;
    M2C_UNK *var_17_2;
    s32 temp_2_2;
    s32 var_16;
    s32 var_7;
    u32 temp_19;
    u32 temp_4;
    u32 temp_5;
    u32 var_17;
    u32 var_6;
    void *temp_3;

    var_6 = arg2;
    var_7 = 0;
    temp_19 = var_6;
    M2C_FIELD(*arg0, s32 *, -4) = 0;
    temp_3 = *arg0 - 0x10;
    temp_4 = arg1 + 1;
    if (((u32) M2C_FIELD(temp_3, u32 *, 8) >= 2U) || (var_6 = M2C_FIELD(temp_3, u32 *, 4), ((var_6 < temp_4) != 0)) || ((u32) (((temp_4 > 0xFU) ? temp_4 : 0x10U) * 2) < var_6)) {
        var_7 = 1;
    }
    temp_5 = arg1 + 1;
    if (var_7 != 0) {
        var_17 = 0x10;
        var_16 = 0x20;
        if (temp_5 > 0x10U) {
            var_17 = 0x10 * 2;
loop_7:
            if (var_17 < temp_5) {
                var_17 *= 2;
                goto loop_7;
            }
            var_16 = var_17 + 0x10;
        }
        if (var_16 != 0) {
            temp_2 = func_002B1FC0(var_16, temp_5, var_6, var_7);
            if (temp_2 != NULL) {
                var_16_2 = temp_2;
            } else {
                var_16_2 = func_003D2910(var_16);
            }
        } else if (M2C_FIELD(&D_0040E618, M2C_UNK **, -4) != NULL) {
            var_16_2 = M2C_FIELD(&D_0040E618, M2C_UNK **, -4);
            M2C_FIELD(&D_0040E618, M2C_UNK **, -4) = (M2C_UNK *) *M2C_FIELD(&D_0040E618, M2C_UNK **, -4);
        } else {
            var_16_2 = func_00152D28(0, temp_5, var_6, var_7);
        }
        M2C_FIELD(var_16_2, u32 *, 4) = var_17;
        M2C_FIELD(var_16_2, s32 *, 8) = 1;
        M2C_FIELD(var_16_2, s32 *, 0xC) = 0;
        if (temp_19 != 0) {
            temp_5_2 = *arg0;
            temp_6 = M2C_FIELD(temp_5_2, M2C_UNK **, -0x10);
            var_17_2 = var_16_2 + 0x10;
            if (temp_6 != NULL) {
                func_003F931C(var_17_2, temp_5_2, temp_6);
            }
            M2C_FIELD(var_16_2, M2C_UNK **, 0) = M2C_FIELD(*arg0, M2C_UNK **, -0x10);
        } else {
            M2C_FIELD(var_16_2, M2C_UNK **, 0) = NULL;
            var_17_2 = var_16_2 + 0x10;
        }
        temp_5_3 = *arg0;
        temp_4_2 = temp_5_3 - 0x10;
        temp_2_2 = M2C_FIELD(temp_4_2, s32 *, 8) - 1;
        M2C_FIELD(temp_4_2, s32 *, 8) = temp_2_2;
        if (temp_2_2 == 0) {
            if ((M2C_FIELD(temp_4_2, s32 *, 4) + 0x10) != 0) {
                func_002B2028(temp_4_2, temp_5_3);
            } else {
                M2C_FIELD(temp_5_3, M2C_UNK **, -0x10) = (M2C_UNK *) M2C_FIELD(&D_0040E618, M2C_UNK **, -4);
                M2C_FIELD(&D_0040E618, M2C_UNK **, -4) = temp_4_2;
            }
        }
        *arg0 = var_17_2;
    }
}
