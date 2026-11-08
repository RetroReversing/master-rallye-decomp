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

void func_0022ECF8(void *arg0, s32 arg1, void *arg2) {
    f32 sp0;
    f32 sp4;
    f32 sp8;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f1;
    f32 temp_f2;
    f32 temp_f3;
    f32 temp_f4;
    f32 var_f0;
    f32 var_f0_2;
    f32 var_f1;
    f32 var_f2;
    f32 var_f3;
    f32 var_f4;
    f32 var_f4_2;
    f32 var_f4_3;
    f32 var_f5;
    f32 var_f6;
    f32 var_f7;
    f32 var_f8;
    s32 var_2;
    void *var_6;

    var_f7 = M2C_FIELD(arg2, f32 *, 0);
    var_f8 = M2C_FIELD(arg2, f32 *, 4);
    var_f2 = M2C_FIELD(arg2, f32 *, 8);
    var_f3 = var_f7;
    var_f1 = var_f8;
    var_f6 = var_f2;
    if (arg1 > 1) {
        var_6 = arg2 + 0xC;
        var_2 = arg1 - 1;
        do {
            temp_f0 = M2C_FIELD(var_6, f32 *, 0);
            var_f4 = temp_f0;
            if (var_f7 < temp_f0) {
                var_f4 = var_f7;
            }
            var_f7 = var_f4;
            var_f4_2 = var_f3;
            if (var_f3 < temp_f0) {
                var_f4_2 = temp_f0;
            }
            temp_f0_2 = M2C_FIELD(var_6, f32 *, 4);
            var_f3 = var_f4_2;
            var_f4_3 = temp_f0_2;
            if (var_f8 < temp_f0_2) {
                var_f4_3 = var_f8;
            }
            var_f8 = var_f4_3;
            var_f5 = var_f1;
            if (var_f1 < temp_f0_2) {
                var_f5 = temp_f0_2;
            }
            temp_f4 = M2C_FIELD(var_6, f32 *, 8);
            var_f1 = var_f5;
            var_f0 = temp_f4;
            if (var_f2 < temp_f4) {
                var_f0 = var_f2;
            }
            var_f2 = var_f0;
            var_f0_2 = var_f6;
            if (var_f6 < temp_f4) {
                var_f0_2 = temp_f4;
            }
            var_f6 = var_f0_2;
            var_2 -= 1;
            var_6 += 0xC;
        } while (var_2 != 0);
    }
    temp_f1 = (var_f8 + var_f1) * 0.5f;
    temp_f2 = (var_f2 + var_f6) * 0.5f;
    temp_f3 = (var_f7 + var_f3) * 0.5f;
    M2C_FIELD(arg0, f32 *, 4) = temp_f1;
    M2C_FIELD(arg0, f32 *, 8) = temp_f2;
    M2C_FIELD(arg0, f32 *, 0) = temp_f3;
    sp0 = temp_f3;
    sp4 = temp_f1;
    sp8 = temp_f2;
}
