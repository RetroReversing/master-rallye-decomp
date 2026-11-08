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

s32 func_0021D890(void *arg0, void *arg1, void *arg2) {
    f32 temp_f0;
    f32 temp_f1;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f3;
    f32 temp_f3_2;
    f32 temp_f4;
    f32 temp_f5;
    f32 temp_f6;
    s32 var_4;
    void *temp_2;
    void *temp_3;
    void *temp_7;

    temp_2 = arg0 + 4;
    temp_7 = arg1 + 0x40;
    temp_3 = arg2 + 0x40;
    temp_f2 = M2C_FIELD(arg0, f32 *, 4);
    temp_f3 = M2C_FIELD(temp_2, f32 *, 4);
    temp_f1 = M2C_FIELD(arg1, f32 *, 0x40) - temp_f2;
    temp_f0 = M2C_FIELD(arg2, f32 *, 0x40) - temp_f2;
    temp_f4 = M2C_FIELD(temp_7, f32 *, 4) - temp_f3;
    temp_f6 = M2C_FIELD(temp_2, f32 *, 8);
    temp_f5 = M2C_FIELD(temp_3, f32 *, 4) - temp_f3;
    temp_f3_2 = M2C_FIELD(temp_3, f32 *, 8) - temp_f6;
    temp_f2_2 = M2C_FIELD(temp_7, f32 *, 8) - temp_f6;
    var_4 = 1;
    if (!(((temp_f1 * temp_f1) + (temp_f4 * temp_f4) + (temp_f2_2 * temp_f2_2)) < ((temp_f0 * temp_f0) + (temp_f5 * temp_f5) + (temp_f3_2 * temp_f3_2)))) {
        var_4 = 0;
    }
    return var_4;
}
