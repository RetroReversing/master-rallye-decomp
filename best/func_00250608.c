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

M2C_UNK *func_002B1FC0(M2C_UNK, s32, M2C_UNK **);   /* extern */
M2C_UNK *func_003D2910(M2C_UNK);                    /* extern */

void func_00250608(M2C_UNK **arg0, s32 arg1, s32 arg2, s32 arg3) {
    M2C_UNK *sp0;
    M2C_UNK *sp10;
    M2C_UNK *sp20;
    M2C_UNK *sp30;
    M2C_UNK *temp_2;
    M2C_UNK *temp_2_3;
    M2C_UNK *temp_3;
    M2C_UNK *temp_3_2;
    M2C_UNK *temp_4;
    M2C_UNK *var_2;
    M2C_UNK *var_4;
    s32 temp_2_2;
    s32 var_7;

    temp_2 = *arg0;
    sp0 = temp_2;
    temp_3 = M2C_FIELD(temp_2, M2C_UNK **, 4);
    sp0 = temp_3;
    temp_4 = M2C_FIELD(temp_2, M2C_UNK **, 0);
    var_7 = M2C_FIELD(temp_3, s32 *, 8);
    sp0 = temp_4;
    sp10 = temp_2;
    if (temp_4 != temp_2) {
loop_1:
        temp_2_2 = M2C_FIELD(sp0, s32 *, 8);
        if ((var_7 != arg1) || (temp_2_2 != arg2)) {
            if (temp_2_2 != arg1) {
                sp30 = sp0;
                goto block_14;
            }
            if (var_7 != arg2) {
                sp30 = sp0;
block_14:
                var_7 = temp_2_2;
                temp_3_2 = *arg0;
                temp_2_3 = M2C_FIELD(sp0, M2C_UNK **, 0);
                sp10 = temp_3_2;
                sp0 = temp_2_3;
                if (temp_2_3 == temp_3_2) {

                } else {
                    goto loop_1;
                }
            } else {
                goto block_9;
            }
        } else {
block_9:
            sp20 = sp0;
            var_4 = func_002B1FC0(0xC, var_7, arg0);
            var_2 = var_4 + 8;
            if (var_4 == NULL) {
                var_4 = func_003D2910(0xC);
                var_2 = var_4 + 8;
            }
            if (var_2 != NULL) {
                M2C_FIELD(var_4, s32 *, 8) = arg3;
            }
            M2C_FIELD(var_4, M2C_UNK **, 0) = sp20;
            M2C_FIELD(var_4, M2C_UNK **, 4) = (M2C_UNK *) M2C_FIELD(sp20, M2C_UNK **, 4);
            *M2C_FIELD(sp20, M2C_UNK **, 4) = var_4;
            M2C_FIELD(sp20, M2C_UNK **, 4) = var_4;
            sp10 = var_4;
        }
    }
}
