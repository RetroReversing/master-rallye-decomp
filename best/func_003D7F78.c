/* machine draft (m2c) for ee-gcc-2.9-991111 -O2 -G0, tried by autopilot */
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

s32 func_002B1FC0(s32, s32, s32, s32, s32);         /* extern */
M2C_UNK func_002B2028(s32);                         /* extern */
s32 func_003D7D98();                                /* extern */
M2C_UNK func_003F931C(s32, s32, s32);               /* extern */
M2C_UNK func_003F93CC(s32, s32, s32, s32, s32);     /* extern */

s32 func_003D7F78(void *arg0) {
    s32 temp_18;
    s32 temp_2;
    s32 temp_2_2;
    s32 temp_4;
    s32 temp_5;
    s32 temp_5_2;
    s32 temp_6;
    s32 temp_7;
    s32 temp_8;
    s32 var_19;
    s32 var_21;
    s32 var_2;
    s32 var_2_2;
    s32 var_4;
    s32 var_4_2;
    s32 var_5;
    s32 var_6;
    void *var_6_2;

    temp_2 = func_003D7D98();
    temp_7 = M2C_FIELD(arg0, s32 *, 8);
    temp_5 = M2C_FIELD(arg0, s32 *, 0xC);
    temp_8 = M2C_FIELD(arg0, s32 *, 0x2C);
    var_4 = M2C_FIELD(arg0, s32 *, 0x24);
    temp_18 = (temp_7 - temp_5) - temp_2;
    temp_6 = temp_8 - var_4;
    if (temp_6 < temp_18) {
        var_21 = 0x64;
        temp_2_2 = func_002B1FC0(temp_18 + 0x64, temp_5, temp_6, temp_7, temp_8);
        var_2 = -1;
        if (temp_2_2 != 0) {
            if (temp_2 >= 0) {
                var_19 = temp_2_2 + 0x64;
                func_003F931C(var_19, M2C_FIELD(arg0, s32 *, 0xC) + temp_2, temp_18);
            } else {
                var_19 = temp_2_2 + 0x64;
                func_003F931C(var_19, M2C_FIELD(arg0, s32 *, 0x2C) + temp_2, -temp_2);
                temp_5_2 = M2C_FIELD(arg0, s32 *, 0xC);
                func_003F931C(var_19 - temp_2, temp_5_2, M2C_FIELD(arg0, s32 *, 8) - temp_5_2);
            }
            temp_4 = M2C_FIELD(arg0, s32 *, 0x24);
            var_2_2 = var_19 + temp_18;
            if (temp_4 != 0) {
                func_002B2028(temp_4);
                var_2_2 = var_19 + temp_18;
            }
            var_4 = temp_2_2;
            M2C_FIELD(arg0, s32 *, 0x2C) = var_2_2;
            M2C_FIELD(arg0, s32 *, 0x24) = temp_2_2;
            goto block_15;
        }
    } else {
        var_21 = temp_6 - temp_18;
        if (temp_2 < 0) {
            func_003F93CC(var_4 + var_21, temp_8 + temp_2, -temp_2, temp_7, temp_8);
            var_5 = M2C_FIELD(arg0, s32 *, 0xC);
            var_4_2 = (M2C_FIELD(arg0, s32 *, 0x24) + var_21) - temp_2;
            var_6 = M2C_FIELD(arg0, s32 *, 8) - var_5;
            goto block_14;
        }
        var_6 = temp_18;
        if (temp_18 > 0) {
            var_5 = temp_5 + temp_2;
            var_4_2 = var_4 + var_21;
block_14:
            func_003F931C(var_4_2, var_5, var_6);
            var_4 = M2C_FIELD(arg0, s32 *, 0x24);
        }
block_15:
        var_6_2 = M2C_FIELD(arg0, void **, 0x30);
        M2C_FIELD(arg0, s32 *, 0x28) = (s32) (var_4 + var_21);
        if (var_6_2 != NULL) {
            do {
                M2C_FIELD(var_6_2, s32 *, 8) = (s32) (M2C_FIELD(var_6_2, s32 *, 8) - (M2C_FIELD(arg0, s32 *, 8) - M2C_FIELD(arg0, s32 *, 0xC)));
                var_6_2 = M2C_FIELD(var_6_2, void **, 0);
            } while (var_6_2 != NULL);
        }
        var_2 = 0;
    }
    return var_2;
}
