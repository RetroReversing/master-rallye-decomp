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

void func_00170EB0(void **arg1, void **arg2, f32 *arg3, f32 *arg4, f32 fparg0, f32 fparg1) {
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f22;
    f32 temp_f3;
    f32 temp_f3_2;
    f32 temp_f3_3;
    f32 var_f1;
    f32 var_f2;
    void *temp_2;
    void *temp_3;

    temp_3 = *arg1;
    temp_2 = *arg2;
    temp_f22 = M2C_FIELD(temp_3, f32 (**)(void *), 0x14)(arg1 + M2C_FIELD(temp_3, s16 *, 0x10));
    temp_f0 = M2C_FIELD(temp_2, f32 (**)(void *), 0x14)(arg2 + M2C_FIELD(temp_2, s16 *, 0x10));
    temp_f3 = temp_f22 + temp_f0;
    if (!(fabsf(temp_f3) < 100.0f)) {
        var_f2 = (temp_f22 * fparg0) / temp_f3;
        var_f1 = (temp_f0 * fparg0) / temp_f3;
        temp_f0_2 = fabsf(var_f2);
        temp_f3_2 = fabsf(var_f1);
        if ((temp_f0_2 < temp_f3_2) && ((fparg1 * temp_f0_2) < temp_f3_2)) {
            var_f2 = fparg0 / (fparg1 + 1.0f);
            var_f1 = fparg0 - var_f2;
        }
        temp_f3_3 = fabsf(var_f2);
        temp_f0_3 = fabsf(var_f1);
        if ((temp_f0_3 < temp_f3_3) && ((fparg1 * temp_f0_3) < temp_f3_3)) {
            var_f1 = fparg0 / (fparg1 + 1.0f);
            var_f2 = fparg0 - var_f1;
        }
    } else {
        var_f2 = fparg0 * 0.5f;
        var_f1 = var_f2;
    }
    *arg3 = var_f1;
    *arg4 = var_f2;
}
