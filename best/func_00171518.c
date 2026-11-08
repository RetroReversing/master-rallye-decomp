/* machine draft (m2c) for ee-gcc-2.95.2 -O2 -G0 -fno-schedule-insns, tried by autopilot */
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

f32 func_00171518(void *arg0, f32 fparg0) {
    f32 *var_3;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f3;
    void *temp_4;
    void *var_2;

    var_3 = M2C_FIELD(arg0, f32 **, 4);
    temp_f1_2 = M2C_FIELD(var_3, f32 *, 0);
    temp_4 = var_3 + ((M2C_FIELD(arg0, s32 *, 0) * 8) - 8);
    if (fparg0 <= temp_f1_2) {
        return M2C_FIELD(var_3, f32 *, 4);
    }
    if (M2C_FIELD(temp_4, f32 *, 0) < fparg0) {
        return M2C_FIELD(temp_4, f32 *, 4);
    }
    var_2 = var_3 - 0x8000;
    if (((u32) temp_4 >= (u32) var_3) && (temp_f1_2 < fparg0)) {
loop_6:
        var_3 += 8;
        var_2 = var_3 - 0x8000;
        if ((u32) temp_4 >= (u32) var_3) {
            if (!(*var_3 < fparg0)) {
                var_2 = var_3 - 0x8000;
            } else {
                goto loop_6;
            }
        }
    }
    temp_f1 = M2C_FIELD(var_3, f32 *, 0);
    temp_f3 = M2C_FIELD(var_3, f32 *, 4);
    return temp_f3 + ((M2C_FIELD(var_2, f32 *, 0x7FFC) - temp_f3) * ((temp_f1 - fparg0) / (temp_f1 - M2C_FIELD(var_2, f32 *, 0x7FF8))));
}
