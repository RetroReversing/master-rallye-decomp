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

s32 func_00227850();                                /* extern */
void *func_00227880(s32, s32);                      /* extern */
f32 func_003F3E80(f32);                             /* extern */
extern f32 D_004264A0;

s32 func_00227958(s32 arg0) {
    f32 temp_f0;
    f32 temp_f1;
    f32 temp_f2;
    f32 var_f0;
    s32 temp_21;
    s32 temp_2;
    s32 var_16;
    s32 var_16_2;
    s32 var_2;
    s32 var_2_2;
    s32 var_5;
    void *temp_18;
    void *temp_2_2;

    var_16 = 0;
    temp_2 = func_00227850();
    var_2 = 0;
    if (temp_2 > 0) {
        var_5 = 0;
loop_2:
        var_16_2 = var_16 + 1;
        temp_18 = func_00227880(arg0, var_5);
        temp_21 = var_16_2;
        if (var_16_2 < temp_2) {
loop_4:
            temp_2_2 = func_00227880(arg0, var_16_2);
            temp_f0 = M2C_FIELD(temp_18, f32 *, 0) + M2C_FIELD(temp_2_2, f32 *, 0);
            temp_f2 = M2C_FIELD(temp_18, f32 *, 4) + M2C_FIELD(temp_2_2, f32 *, 4);
            temp_f1 = M2C_FIELD(temp_18, f32 *, 8) + M2C_FIELD(temp_2_2, f32 *, 8);
            var_f0 = temp_f1 * temp_f1;
            M2C_ERROR(/* unknown instruction: c1 0xc0004 */);
            if (var_f0 != var_f0) {
                var_f0 = func_003F3E80((temp_f0 * temp_f0) + (temp_f2 * temp_f2) + var_f0);
            }
            var_2_2 = 1;
            if (!(fabsf(var_f0) < D_004264A0)) {
                var_2_2 = 0;
            }
            if ((var_2_2 == 0) || (var_2 = 1, !(fabsf(M2C_FIELD(temp_18, f32 *, 0xC) + M2C_FIELD(temp_2_2, f32 *, 0xC)) < D_004264A0))) {
                var_16_2 += 1;
                if (var_16_2 >= temp_2) {
                    goto block_11;
                }
                goto loop_4;
            }
        } else {
block_11:
            var_16 = temp_21;
            var_5 = var_16;
            if (var_16 >= temp_2) {
                var_2 = 0;
            } else {
                goto loop_2;
            }
        }
    }
    return var_2;
}
