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

f32 func_001DBA58(void *arg0) {
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f1;
    f32 temp_f2;
    f32 var_f3;
    s32 temp_2;
    void *var_4;

    temp_2 = M2C_FIELD(arg0, s32 *, 4);
    var_4 = M2C_FIELD(arg0, void **, 0);
    var_f3 = 0.0f;
    if (var_4 != temp_2) {
        do {
            temp_f0 = M2C_FIELD(var_4, f32 *, 0);
            temp_f2 = M2C_FIELD(var_4, f32 *, 4);
            temp_f1 = M2C_FIELD(var_4, f32 *, 8);
            temp_f0_2 = (temp_f0 * temp_f0) + (temp_f2 * temp_f2) + (temp_f1 * temp_f1);
            if (var_f3 < temp_f0_2) {
                var_f3 = temp_f0_2;
            }
            var_4 += 0xC;
        } while (var_4 != temp_2);
    }
    return var_f3;
}
