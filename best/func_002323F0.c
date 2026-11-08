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

extern f32 D_004265E4;

s32 func_002323F0(void *arg0, void *arg1) {
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f3;
    f32 temp_f5;
    f32 temp_f6;
    f32 temp_f7;
    s32 var_2;
    void *temp_2;

    temp_f3 = M2C_FIELD(arg0, f32 *, 0);
    temp_f6 = M2C_FIELD(arg0, f32 *, 4);
    temp_f7 = M2C_FIELD(arg0, f32 *, 8);
    temp_f5 = -D_004265E4;
    temp_f0 = (temp_f3 * M2C_FIELD(arg1, f32 *, 0)) + (temp_f6 * M2C_FIELD(arg1, f32 *, 4)) + (temp_f7 * M2C_FIELD(arg1, f32 *, 8));
    var_2 = 0;
    if ((temp_f5 < temp_f0) && ((temp_2 = arg1 + 0xC, !(temp_f0 < D_004265E4)) || ((temp_f0_2 = ((temp_f3 * M2C_FIELD(arg1, f32 *, 0xC)) + (temp_f6 * M2C_FIELD(temp_2, f32 *, 4)) + (temp_f7 * M2C_FIELD(temp_2, f32 *, 8))) - M2C_FIELD(arg0, f32 *, 0xC), var_2 = 0, (temp_f5 < temp_f0_2)) && (var_2 = 1, !(temp_f0_2 < D_004265E4))))) {
        var_2 = 0;
    }
    return var_2;
}
