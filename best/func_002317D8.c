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

f32 sqrtf(f32);                                     /* extern */
extern f32 D_004265E4;

s32 func_002317D8(void *arg0, void *arg1) {
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f1;
    f32 temp_f2;
    f32 temp_f4;
    f32 temp_f4_2;
    f32 temp_f6;
    f32 temp_f7;
    f32 temp_f8;
    f32 temp_f9;
    f32 var_f1;
    s32 var_2;
    void *temp_2;
    void *temp_3;

    temp_f9 = M2C_FIELD(arg0, f32 *, 0);
    temp_f8 = M2C_FIELD(arg0, f32 *, 4);
    temp_f7 = M2C_FIELD(arg0, f32 *, 8);
    temp_3 = arg1 + 0xC;
    if ((1.0f - D_004265E4) < ((temp_f9 * M2C_FIELD(arg1, f32 *, 0)) + (temp_f8 * M2C_FIELD(arg1, f32 *, 4)) + (temp_f7 * M2C_FIELD(arg1, f32 *, 8)))) {
        temp_f4 = M2C_FIELD(arg1, f32 *, 0xC);
        temp_f6 = M2C_FIELD(arg0, f32 *, 0xC);
        temp_2 = arg0 + 0xC;
        temp_f2 = ((temp_f4 - temp_f6) * temp_f9) + ((M2C_FIELD(temp_3, f32 *, 4) - M2C_FIELD(temp_2, f32 *, 4)) * temp_f8) + ((M2C_FIELD(temp_3, f32 *, 8) - M2C_FIELD(temp_2, f32 *, 8)) * temp_f7);
        temp_f4_2 = (temp_f6 + (temp_f9 * temp_f2)) - temp_f4;
        temp_f0 = (M2C_FIELD(temp_2, f32 *, 4) + (temp_f8 * temp_f2)) - M2C_FIELD(temp_3, f32 *, 4);
        temp_f1 = (M2C_FIELD(temp_2, f32 *, 8) + (temp_f7 * temp_f2)) - M2C_FIELD(temp_3, f32 *, 8);
        var_f1 = temp_f1 * temp_f1;
        M2C_ERROR(/* unknown instruction: c1 0xc0044 */);
        temp_f0_2 = D_004265E4;
        if (var_f1 != var_f1) {
            var_f1 = sqrtf((temp_f4_2 * temp_f4_2) + (temp_f0 * temp_f0) + var_f1);
        }
        var_2 = 1;
        if (!(var_f1 < temp_f0_2)) {
            goto block_4;
        }
    } else {
block_4:
        var_2 = 0;
    }
    return var_2;
}
