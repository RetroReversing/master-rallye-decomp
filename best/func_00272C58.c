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

M2C_UNK func_00271FC8(M2C_UNK **, M2C_UNK **, void *, void **, M2C_UNK); /* extern */
M2C_UNK func_00272BC0(M2C_UNK **, M2C_UNK **, M2C_UNK **, M2C_UNK **, void **); /* extern */

M2C_UNK **func_00272C58(M2C_UNK **arg0, void ***arg1, void **arg4) {
    M2C_UNK *sp0;
    M2C_UNK *sp10;
    M2C_UNK *sp20;
    M2C_UNK *sp30;
    M2C_UNK *sp40;
    M2C_UNK *sp50;
    M2C_UNK *sp60;
    M2C_UNK *temp_2;
    M2C_UNK *temp_4;
    M2C_UNK *temp_5;
    s32 temp_3_2;
    void **temp_3;
    void **var_8;
    void *var_6;

    var_8 = arg4;
    if (arg0 != arg1) {
        temp_2 = *arg0;
        temp_3 = *arg1;
        temp_4 = *temp_2;
        sp10 = temp_2;
        sp0 = temp_4;
        var_6 = *temp_3;
        if (temp_4 != temp_2) {
            var_8 = temp_3;
            if (var_6 != temp_3) {
                temp_5 = sp0;
loop_4:
                sp30 = temp_5;
                sp20 = temp_5;
                sp0 = M2C_FIELD(temp_5, M2C_UNK **, 0);
                temp_3_2 = M2C_FIELD(var_6, s32 *, 8);
                var_6 = M2C_FIELD(var_6, void **, 0);
                M2C_FIELD(temp_5, s32 *, 8) = temp_3_2;
                if (sp0 != sp10) {
                    if (var_6 != var_8) {
                        goto loop_4;
                    }
                }
            }
        }
        if (var_6 == temp_3) {
            sp40 = sp0;
            sp50 = sp10;
            func_00272BC0(&sp20, arg0, &sp40, &sp50, var_8);
        } else {
            sp60 = sp10;
            sp20 = sp10;
            func_00271FC8(arg0, &sp60, var_6, temp_3, 0);
        }
    }
    return arg0;
}
