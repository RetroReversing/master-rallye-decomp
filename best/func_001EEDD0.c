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

M2C_UNK func_001C5A70(void *, void *, s32);         /* extern */

void func_001EEDD0(void *arg1, void *arg2) {
    f32 *var_2;
    f32 var_f0;
    s32 var_3;
    s32 var_7;
    void *temp_3;
    void *temp_5;

    temp_3 = M2C_FIELD(arg1, void **, 4);
    var_2 = M2C_FIELD(arg1, f32 **, 0);
    var_7 = 0;
    if (var_2 != temp_3) {
        var_f0 = *var_2;
loop_2:
        var_3 = 0;
        if ((fabsf(var_f0 - M2C_FIELD(arg2, f32 *, 0)) <= 0.000001f) && (fabsf(M2C_FIELD(var_2, f32 *, 4) - M2C_FIELD(arg2, f32 *, 4)) <= 0.000001f) && (fabsf(M2C_FIELD(var_2, f32 *, 8) - M2C_FIELD(arg2, f32 *, 8)) <= 0.000001f)) {
            var_3 = 1;
        }
        var_2 += 0xC;
        if (var_3 == 0) {
            if (var_2 != temp_3) {
                var_f0 = *var_2;
                goto loop_2;
            }
        } else {
            var_7 = 1;
        }
    }
    if (var_7 == 0) {
        temp_5 = M2C_FIELD(arg1, void **, 4);
        if (temp_5 != M2C_FIELD(arg1, s32 *, 8)) {
            if (temp_5 != NULL) {
                M2C_FIELD(temp_5, f32 *, 0) = (f32) M2C_FIELD(arg2, f32 *, 0);
                M2C_FIELD(temp_5, f32 *, 4) = (f32) M2C_FIELD(arg2, f32 *, 4);
                M2C_FIELD(temp_5, f32 *, 8) = (f32) M2C_FIELD(arg2, f32 *, 8);
            }
            M2C_FIELD(arg1, void **, 4) = (void *) (M2C_FIELD(arg1, void **, 4) + 0xC);
        } else {
            func_001C5A70(arg1, temp_5, var_7);
        }
    }
}
