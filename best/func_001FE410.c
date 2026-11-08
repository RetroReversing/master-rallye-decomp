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

s32 func_001FE3A8();                                /* extern */

s32 func_001FE410(s32 **arg0, void *arg1, void *arg2, s32 arg3) {
    f32 temp_f0;
    f32 temp_f1;
    f32 temp_f2;
    f32 var_f3;
    f32 var_f4;
    f32 var_f5;
    f32 var_f6;
    f32 var_f7;
    f32 var_f8;
    s32 var_3;
    void *var_2;

    if (arg3 < func_001FE3A8()) {
        var_f4 = 100000.0f;
        var_3 = 3;
        var_f3 = -100000.0f;
        var_f8 = 100000.0f;
        var_f5 = 100000.0f;
        var_f6 = -100000.0f;
        var_f7 = -100000.0f;
        var_2 = (arg3 * 4 * 0x50) + (**arg0 + 0x40);
        do {
            temp_f0 = M2C_FIELD(var_2, f32 *, 0);
            temp_f1 = M2C_FIELD(var_2, f32 *, 4);
            temp_f2 = M2C_FIELD(var_2, f32 *, 8);
            if (temp_f0 < var_f8) {
                var_f8 = temp_f0;
            }
            if (var_f6 < temp_f0) {
                var_f6 = temp_f0;
            }
            if (temp_f1 < var_f4) {
                var_f4 = temp_f1;
            }
            if (var_f3 < temp_f1) {
                var_f3 = temp_f1;
            }
            if (temp_f2 < var_f5) {
                var_f5 = temp_f2;
            }
            if (var_f7 < temp_f2) {
                var_f7 = temp_f2;
            }
            var_3 -= 1;
            var_2 += 0x50;
        } while (var_3 >= 0);
        M2C_FIELD(arg1, f32 *, 8) = var_f5;
        M2C_FIELD(arg1, f32 *, 0) = var_f8;
        M2C_FIELD(arg1, f32 *, 4) = var_f4;
        M2C_FIELD(arg2, f32 *, 8) = var_f7;
        M2C_FIELD(arg2, f32 *, 0) = var_f6;
        M2C_FIELD(arg2, f32 *, 4) = var_f3;
        return 1;
    }
    return 0;
}
