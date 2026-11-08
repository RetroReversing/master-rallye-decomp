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

f32 func_00205988(s32, s32, s32);                   /* extern */
s32 func_00234D08(void *, s32);                     /* extern */

f32 func_00239FD8(void **arg0) {
    f32 var_f20;
    s32 temp_16;
    s32 temp_5;
    s32 temp_6_2;
    s32 var_16;
    void *temp_17;
    void *temp_2;
    void *temp_6;
    void *var_17;

    var_f20 = 0.0f;
    temp_2 = *arg0;
    temp_17 = M2C_FIELD(M2C_FIELD(temp_2, void **, 4), void **, 8);
    temp_16 = M2C_FIELD(temp_17, s32 *, 0);
    if (temp_16 != func_00234D08(temp_17, M2C_FIELD(M2C_FIELD(temp_2, void **, 0), s32 *, 8))) {
        var_16 = M2C_FIELD(temp_17, s32 *, 0);
    } else {
        var_16 = M2C_FIELD(temp_17, s32 *, 4);
    }
    var_17 = M2C_FIELD(*arg0, void **, 0);
loop_6:
    temp_6 = M2C_FIELD(var_17, void **, 8);
    temp_5 = M2C_FIELD(temp_6, s32 *, 0);
    temp_6_2 = M2C_FIELD(temp_6, s32 *, 4);
    if ((var_16 != temp_5) && (var_16 != temp_6_2)) {
        var_17 = M2C_FIELD(var_17, void **, 0);
        var_f20 += func_00205988(var_16, temp_5, temp_6_2);
        goto loop_6;
    }
    return var_f20;
}
