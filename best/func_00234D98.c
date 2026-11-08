/* machine draft (m2c) for ee-gcc-2.95.2 -O2 -G0 -fno-schedule-insns, tried by autopilot */
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

f32 func_003F3E80(f32);                             /* extern */
extern f32 D_004264A0;

void *func_00234D98(void *arg0, void *arg1) {
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f0_4;
    f32 temp_f0_5;
    f32 temp_f0_6;
    f32 temp_f0_7;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    f32 temp_f2_4;
    f32 var_f1;
    f32 var_f1_2;
    f32 var_f1_3;
    f32 var_f1_4;
    s32 var_2_2;
    s32 var_2_3;
    s32 var_2_4;
    s32 var_2_5;
    void *temp_2;
    void *temp_2_2;
    void *temp_3;
    void *temp_3_2;
    void *temp_3_3;
    void *temp_3_4;
    void *var_2;

    temp_2 = M2C_FIELD(arg0, void **, 0);
    temp_3 = M2C_FIELD(arg1, void **, 0);
    temp_f0 = M2C_FIELD(temp_2, f32 *, 0) - M2C_FIELD(temp_3, f32 *, 0);
    temp_f2 = M2C_FIELD(temp_2, f32 *, 4) - M2C_FIELD(temp_3, f32 *, 4);
    var_f1 = M2C_FIELD(temp_2, f32 *, 8) - M2C_FIELD(temp_3, f32 *, 8);
    M2C_ERROR(/* unknown instruction: c1 0xc0044 */);
    if (var_f1 != var_f1) {
        var_f1 = func_003F3E80((temp_f0 * temp_f0) + (temp_f2 * temp_f2) + (var_f1 * var_f1));
    }
    var_2_2 = 1;
    if (!(var_f1 < (D_004264A0 * 10.0f))) {
        var_2_2 = 0;
    }
    var_2 = M2C_FIELD(arg0, void **, 0);
    if (var_2_2 == 0) {
        temp_3_2 = M2C_FIELD(arg1, void **, 4);
        temp_f0_2 = M2C_FIELD(var_2, f32 *, 0) - M2C_FIELD(temp_3_2, f32 *, 0);
        temp_f2_2 = M2C_FIELD(var_2, f32 *, 4) - M2C_FIELD(temp_3_2, f32 *, 4);
        var_f1_2 = M2C_FIELD(var_2, f32 *, 8) - M2C_FIELD(temp_3_2, f32 *, 8);
        M2C_ERROR(/* unknown instruction: c1 0xc0044 */);
        temp_f0_3 = D_004264A0;
        if (var_f1_2 != var_f1_2) {
            var_f1_2 = func_003F3E80((temp_f0_2 * temp_f0_2) + (temp_f2_2 * temp_f2_2) + (var_f1_2 * var_f1_2));
        }
        var_2_3 = 1;
        if (!(var_f1_2 < (temp_f0_3 * 10.0f))) {
            var_2_3 = 0;
        }
        if (var_2_3 == 0) {
            temp_2_2 = M2C_FIELD(arg0, void **, 4);
            temp_3_3 = M2C_FIELD(arg1, void **, 0);
            temp_f0_4 = M2C_FIELD(temp_2_2, f32 *, 0) - M2C_FIELD(temp_3_3, f32 *, 0);
            temp_f2_3 = M2C_FIELD(temp_2_2, f32 *, 4) - M2C_FIELD(temp_3_3, f32 *, 4);
            var_f1_3 = M2C_FIELD(temp_2_2, f32 *, 8) - M2C_FIELD(temp_3_3, f32 *, 8);
            M2C_ERROR(/* unknown instruction: c1 0xc0044 */);
            temp_f0_5 = D_004264A0;
            if (var_f1_3 != var_f1_3) {
                var_f1_3 = func_003F3E80((temp_f0_4 * temp_f0_4) + (temp_f2_3 * temp_f2_3) + (var_f1_3 * var_f1_3));
            }
            var_2_4 = 1;
            if (!(var_f1_3 < (temp_f0_5 * 10.0f))) {
                var_2_4 = 0;
            }
            var_2 = M2C_FIELD(arg0, void **, 4);
            if (var_2_4 == 0) {
                temp_3_4 = M2C_FIELD(arg1, void **, 4);
                temp_f0_6 = M2C_FIELD(var_2, f32 *, 0) - M2C_FIELD(temp_3_4, f32 *, 0);
                temp_f2_4 = M2C_FIELD(var_2, f32 *, 4) - M2C_FIELD(temp_3_4, f32 *, 4);
                var_f1_4 = M2C_FIELD(var_2, f32 *, 8) - M2C_FIELD(temp_3_4, f32 *, 8);
                M2C_ERROR(/* unknown instruction: c1 0xc0044 */);
                temp_f0_7 = D_004264A0;
                if (var_f1_4 != var_f1_4) {
                    var_f1_4 = func_003F3E80((temp_f0_6 * temp_f0_6) + (temp_f2_4 * temp_f2_4) + (var_f1_4 * var_f1_4));
                }
                var_2_5 = 1;
                if (!(var_f1_4 < (temp_f0_7 * 10.0f))) {
                    var_2_5 = 0;
                }
                if (var_2_5 != 0) {
                    return M2C_FIELD(arg0, void **, 4);
                }
                var_2 = NULL;
                /* Duplicate return node #26. Try simplifying control flow for better match */
                return var_2;
            }
            /* Duplicate return node #26. Try simplifying control flow for better match */
            return var_2;
        }
        return M2C_FIELD(arg0, void **, 0);
    }
    return var_2;
}
