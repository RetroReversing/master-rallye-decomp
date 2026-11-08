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

void *func_00234D08(s32, s32);                      /* extern */
extern f32 D_004264A0;

s32 func_00239BB8(void **arg0, void *arg1, s32 arg2) {
    f32 temp_f1;
    s32 temp_17;
    s32 var_3;
    s32 var_4;
    void *temp_18;
    void *temp_2;
    void *temp_2_2;
    void *var_16;

    temp_2 = *arg0;
    temp_18 = M2C_FIELD(arg1, void **, 0x24);
    var_16 = M2C_FIELD(temp_2, void **, 0);
    var_4 = M2C_FIELD(M2C_FIELD(temp_2, void **, 4), s32 *, 8);
    if (var_16 != temp_2) {
loop_2:
        temp_17 = M2C_FIELD(var_16, s32 *, 8);
        if ((var_4 != arg1) && (temp_17 != arg1)) {
            temp_2_2 = func_00234D08(var_4, temp_17);
            temp_f1 = (M2C_FIELD(temp_18, f32 *, 0) * M2C_FIELD(temp_2_2, f32 *, 0)) + (M2C_FIELD(temp_18, f32 *, 4) * M2C_FIELD(temp_2_2, f32 *, 4)) + (M2C_FIELD(temp_18, f32 *, 8) * M2C_FIELD(temp_2_2, f32 *, 8)) + M2C_FIELD(temp_18, f32 *, 0xC);
            var_3 = 0;
            if (D_004264A0 <= temp_f1) {
                var_3 = 1;
            } else if (temp_f1 <= -D_004264A0) {
                var_3 = -1;
            }
            if (var_3 == arg2) {
                return 1;
            }
            goto block_10;
        }
block_10:
        var_16 = M2C_FIELD(var_16, void **, 0);
        var_4 = temp_17;
        if (var_16 == *arg0) {
            goto block_11;
        }
        goto loop_2;
    }
block_11:
    return 0;
}
