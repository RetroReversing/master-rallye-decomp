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

s32 func_00227850(s32);                             /* extern */
void *func_00227868(s32, s32);                      /* extern */
s32 func_00229A48(void *, void *);                  /* extern */
s32 func_00229CF0(void *, void *);                  /* extern */

s32 func_00228F10(void *arg0, void *arg1, s32 arg2) {
    s32 temp_2;
    s32 var_17;
    s32 var_2;
    void *temp_2_2;
    void *temp_2_3;

    var_17 = 0;
    temp_2 = func_00227850(M2C_FIELD(arg0, s32 *, 4));
    var_2 = 1;
    if (temp_2 > 0) {
loop_2:
        if ((arg2 == var_17) || ((temp_2_2 = func_00227868(M2C_FIELD(arg0, s32 *, 4), var_17), var_2 = 0, (func_00229A48(temp_2_2, arg1) == 0)) && ((temp_2_3 = temp_2_2 + 8, (func_00229CF0(temp_2_2, arg1) == 0)) || (var_2 = 0, !(fabsf(1.0f - fabsf((M2C_FIELD(temp_2_2, f32 *, 8) * M2C_FIELD(arg1, f32 *, 0)) + (M2C_FIELD(temp_2_3, f32 *, 4) * M2C_FIELD(arg1, f32 *, 4)) + (M2C_FIELD(temp_2_3, f32 *, 8) * M2C_FIELD(arg1, f32 *, 8)))) < 0.01f))))) {
            var_17 += 1;
            var_2 = 1;
            if (var_17 < temp_2) {
                goto loop_2;
            }
        }
    }
    return var_2;
}
