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

M2C_UNK func_001CF448(f32 *, s32, s32, f32, f32, f32); /* extern */
extern f32 D_004264A0;

s32 func_002509C8(void *arg0, s32 arg1, s32 arg2) {
    f32 sp20;
    f32 sp24;
    f32 sp28;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f1;
    f32 temp_f2;
    f32 temp_f3;
    f32 temp_f4;
    f32 temp_f5;
    s32 var_2;
    s32 var_5;
    s32 var_6;
    void *temp_16;
    void *temp_18;
    void *temp_21;
    void *temp_2;
    void *temp_2_2;
    void *temp_2_3;
    void *temp_2_4;
    void *temp_2_5;
    void *var_17;
    void *var_20;
    void *var_3;

    var_5 = arg1;
    var_6 = arg2;
    temp_2 = M2C_FIELD(arg0, void **, 0);
    var_17 = M2C_FIELD(temp_2, void **, 0);
    var_20 = M2C_FIELD(M2C_FIELD(temp_2, void **, 4), void **, 8);
    if (var_17 != temp_2) {
        temp_21 = arg0 + 8;
loop_2:
        temp_18 = M2C_FIELD(var_17, void **, 8);
        temp_16 = M2C_FIELD(var_20, void **, 0xC);
        temp_2_2 = M2C_FIELD(temp_18, void **, 0xC);
        temp_f2 = M2C_FIELD(temp_16, f32 *, 0) - M2C_FIELD(temp_2_2, f32 *, 0);
        temp_f1 = M2C_FIELD(temp_16, f32 *, 4) - M2C_FIELD(temp_2_2, f32 *, 4);
        temp_f5 = M2C_FIELD(arg0, f32 *, 8);
        temp_f0 = M2C_FIELD(temp_16, f32 *, 8) - M2C_FIELD(temp_2_2, f32 *, 8);
        temp_f3 = M2C_FIELD(temp_21, f32 *, 8);
        temp_f4 = M2C_FIELD(temp_21, f32 *, 4);
        sp24 = (temp_f0 * temp_f5) - (temp_f2 * temp_f3);
        sp28 = (temp_f2 * temp_f4) - (temp_f1 * temp_f5);
        sp20 = (temp_f1 * temp_f3) - (temp_f0 * temp_f4);
        func_001CF448(&sp20, var_5, var_6, temp_f2, temp_f1, temp_f0);
        var_6 = 0;
        var_5 = 0;
        temp_2_3 = M2C_FIELD(arg0, void **, 0);
        var_3 = M2C_FIELD(temp_2_3, void **, 0);
        if (var_3 != temp_2_3) {
loop_4:
            temp_2_4 = M2C_FIELD(var_3, void **, 8);
            if ((temp_2_4 != var_20) && (temp_2_4 != temp_18)) {
                temp_2_5 = M2C_FIELD(temp_2_4, void **, 0xC);
                temp_f0_2 = (sp20 * M2C_FIELD(temp_2_5, f32 *, 0)) + (sp24 * M2C_FIELD(temp_2_5, f32 *, 4)) + (sp28 * M2C_FIELD(temp_2_5, f32 *, 8)) + -((sp20 * M2C_FIELD(temp_16, f32 *, 0)) + (sp24 * M2C_FIELD(temp_16, f32 *, 4)) + (sp28 * M2C_FIELD(temp_16, f32 *, 8)));
                if (temp_f0_2 < -D_004264A0) {
                    var_5 += 1;
                } else if (D_004264A0 < temp_f0_2) {
                    var_6 += 1;
                }
                if ((var_6 == 0) || (var_2 = 0, (var_5 == 0))) {
                    goto block_12;
                }
            } else {
block_12:
                var_3 = M2C_FIELD(var_3, void **, 0);
                if (var_3 == temp_2_3) {
                    goto block_13;
                }
                goto loop_4;
            }
        } else {
block_13:
            var_17 = M2C_FIELD(var_17, void **, 0);
            var_20 = temp_18;
            if (var_17 == M2C_FIELD(arg0, void **, 0)) {
                goto block_14;
            }
            goto loop_2;
        }
    } else {
block_14:
        var_2 = 1;
    }
    return var_2;
}
