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

s32 func_003E0C98(void *, s32, M2C_UNK);            /* extern */
s32 func_003E0DB0(void *);                          /* extern */
M2C_UNK func_003F9698(M2C_UNK *);                   /* extern */
extern M2C_UNK D_00481890;
extern M2C_UNK D_00481898;

s32 func_002C3510(void *arg0) {
    s32 var_16;
    s32 var_2;
    s32 var_2_2;
    s32 var_2_3;
    s32 var_3;
    s32 var_4;
    s32 var_5;
    void *temp_3;
    void *temp_3_2;
    void *temp_4;

    var_16 = 0;
    if ((M2C_FIELD(arg0, s32 *, 0x2C) == 0) && (temp_4 = arg0 + 0x38, (M2C_FIELD(arg0, s32 *, 0x28) != 0))) {
        var_2_2 = func_003E0DB0(temp_4) != 0;
        if (M2C_FIELD(arg0, s32 *, 0x20) != 0) {
            if (var_2_2 != 0) {
                func_003F9698(&D_00481890);
                temp_3 = M2C_FIELD(arg0, void **, 0);
                M2C_FIELD(temp_3, M2C_UNK (**)(void *), 0x44)(arg0 + M2C_FIELD(temp_3, s16 *, 0x40));
                temp_3_2 = M2C_FIELD(arg0, void **, 0);
                M2C_FIELD(temp_3_2, M2C_UNK (**)(void *, s32), 0x34)(arg0 + M2C_FIELD(temp_3_2, s16 *, 0x30), M2C_FIELD(arg0, s32 *, 0x20));
                var_2_2 = 0;
                goto block_5;
            }
            goto block_6;
        }
block_5:
        var_2 = 0;
        if (var_2_2 == 0) {
block_6:
loop_20:
            if (func_003E0C98(temp_4, M2C_FIELD(arg0, s32 *, 0x10), 0x5A0) < 0) {
                func_003F9698(&D_00481898);
                var_3 = 0xF4240;
loop_13:
                if (var_3 >= 0) {
                    var_3 -= 1;
                    var_4 = 0x30;
loop_10:
                    var_4 -= 1;
                    if (var_4 >= 0) {
                        goto loop_10;
                    }
                    goto loop_13;
                }
                var_2_3 = 0xF4240;
loop_19:
                if (var_2_3 >= 0) {
                    var_2_3 -= 1;
                    var_5 = 0x30;
loop_16:
                    var_5 -= 1;
                    if (var_5 >= 0) {
                        goto loop_16;
                    }
                    goto loop_19;
                }
                goto loop_20;
            }
            var_16 = 1;
            goto block_22;
        }
    } else {
block_22:
        var_2 = var_16;
    }
    return var_2;
}
