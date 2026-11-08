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

s32 func_002C0368();                                /* extern */
s32 func_002C0370();                                /* extern */
s32 func_002C0378();                                /* extern */
s32 func_002C0668();                                /* extern */
s32 func_002C06A0(s32 *);                           /* extern */
extern u32 D_00428DD8;
extern s32 D_00496968;

s32 func_002C0558(void) {
    s8 spF;
    s32 *var_5;
    s32 temp_16;
    s32 temp_16_2;
    s32 temp_16_3;
    s32 var_3;
    s8 *var_2;
    s8 var_3_2;
    u32 var_3_3;

    temp_16 = func_002C0368() & 1;
    if ((temp_16 & func_002C0370()) == 1) {
        var_3_2 = 0xF;
        var_2 = &spF;
        __repair_rows: {
            *var_2 = var_3_2;
            var_3_2 -= 1;
            var_2 -= 1;
        }
if (var_3_2 >= 0) goto __repair_rows;
        var_3 = 1 ^ 1;
        if (1 == 1) {
            temp_16_2 = (func_002C0668() != 0) ? 0 : 1;
            var_3 = temp_16_2 ^ 1;
            if (temp_16_2 == 1) {
                var_3_3 = 0;
                if (D_00428DD8 != 0) {
                    var_5 = &D_00496968;
                    do {
                        *var_5 = var_3_3 - 3;
                        var_3_3 += 1;
                        var_5 += 4;
                    } while (var_3_3 < (u32) D_00428DD8);
                }
                temp_16_3 = (func_002C06A0(&D_00496968) == 0) ? temp_16_2 : 0;
                var_3 = temp_16_3 ^ 1;
                if (temp_16_3 == 1) {
                    var_3 = (func_002C0378() & 1) ^ 1;
                }
            }
        }
        return (var_3 == 0) ? 0 : -1;
    }
    return -1;
}
