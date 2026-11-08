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

extern f32 D_004264A0;

s32 func_00251768(M2C_UNK ***arg0, void *arg1, s32 arg2) {
    M2C_UNK **temp_2;
    M2C_UNK *var_4;
    f32 temp_f2;
    s32 var_2;
    s32 var_5;
    void *temp_2_2;
    void *var_3;

    temp_2 = *arg0;
    var_4 = *temp_2;
    if (var_4 != temp_2) {
        var_3 = M2C_FIELD(var_4, void **, 8);
loop_2:
        temp_2_2 = M2C_FIELD(var_3, void **, 0xC);
        temp_f2 = (M2C_FIELD(arg1, f32 *, 0) * M2C_FIELD(temp_2_2, f32 *, 0)) + (M2C_FIELD(arg1, f32 *, 4) * M2C_FIELD(temp_2_2, f32 *, 4)) + (M2C_FIELD(arg1, f32 *, 8) * M2C_FIELD(temp_2_2, f32 *, 8)) + M2C_FIELD(arg1, f32 *, 0xC);
        var_5 = 0;
        if (fabsf(temp_f2) < D_004264A0) {
            var_5 = 1;
        }
        if (var_5 != 0) {
            var_4 = *var_4;
            goto block_15;
        }
        var_2 = 0;
        if (D_004264A0 <= temp_f2) {
            var_2 = 1;
        } else if (temp_f2 <= -D_004264A0) {
            var_2 = -1;
        }
        if (arg2 != var_2) {
            var_4 = *var_4;
block_15:
            if (var_4 != temp_2) {
                var_3 = M2C_FIELD(var_4, void **, 8);
                goto loop_2;
            }
            /* Duplicate return node #18. Try simplifying control flow for better match */
            return 0;
        }
        return 1;
    }
    return 0;
}
