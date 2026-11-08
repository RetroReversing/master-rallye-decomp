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

void func_001B6BA8(void *arg1, void *arg2, s32 *arg3, s32 *arg4) {
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f1;
    f32 temp_f2;
    f32 var_f5;
    f32 var_f6;
    s32 temp_2;
    s32 temp_4;
    s32 var_3;
    void *var_4;

    *arg3 = 0;
    *arg4 = 0;
    if (arg1 != NULL) {
        temp_2 = M2C_FIELD(arg1, s32 *, 0);
        temp_4 = M2C_FIELD(arg1, s32 *, 4);
        var_3 = temp_2;
        if (temp_2 != temp_4) {
            var_f5 = 1e12f;
            var_f6 = 1e12f;
            if (var_3 != temp_4) {
                var_4 = var_3 + 0x40;
                do {
                    temp_f0 = M2C_FIELD(var_4, f32 *, 0) - M2C_FIELD(arg2, f32 *, 0);
                    temp_f2 = M2C_FIELD(var_4, f32 *, 4) - M2C_FIELD(arg2, f32 *, 4);
                    temp_f1 = M2C_FIELD(var_4, f32 *, 8) - M2C_FIELD(arg2, f32 *, 8);
                    temp_f0_2 = (temp_f0 * temp_f0) + (temp_f2 * temp_f2) + (temp_f1 * temp_f1);
                    if (temp_f0_2 < var_f6) {
                        var_f5 = var_f6;
                        var_f6 = temp_f0_2;
                        *arg4 = *arg3;
                        *arg3 = var_3;
                    } else if (temp_f0_2 < var_f5) {
                        *arg4 = var_3;
                        var_f5 = temp_f0_2;
                    }
                    var_3 += 0x50;
                    var_4 += 0x50;
                } while (var_3 != M2C_FIELD(arg1, s32 *, 4));
            }
        }
    }
}
