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

s32 func_00203180(void *arg0, void *arg1) {
    f32 *var_3;
    f32 temp_f3;
    s32 var_2;
    s32 var_4;
    s32 var_4_2;
    void *temp_2;
    void *temp_3;

    temp_2 = arg1 + 0xC;
    temp_3 = arg1 + 0x18;
    M2C_FIELD(arg1, f32 *, 0) = (f32) ((M2C_FIELD(arg0, f32 *, 0x10) * M2C_FIELD(arg0, f32 *, 0x20)) - (M2C_FIELD(arg0, f32 *, 0x14) * M2C_FIELD(arg0, f32 *, 0x1C)));
    M2C_FIELD(arg1, f32 *, 4) = (f32) ((M2C_FIELD(arg0, f32 *, 8) * M2C_FIELD(arg0, f32 *, 0x1C)) - (M2C_FIELD(arg0, f32 *, 4) * M2C_FIELD(arg0, f32 *, 0x20)));
    M2C_FIELD(arg1, f32 *, 8) = (f32) ((M2C_FIELD(arg0, f32 *, 4) * M2C_FIELD(arg0, f32 *, 0x14)) - (M2C_FIELD(arg0, f32 *, 8) * M2C_FIELD(arg0, f32 *, 0x10)));
    M2C_FIELD(arg1, f32 *, 0xC) = (f32) ((M2C_FIELD(arg0, f32 *, 0x14) * M2C_FIELD(arg0, f32 *, 0x18)) - (M2C_FIELD(arg0, f32 *, 0xC) * M2C_FIELD(arg0, f32 *, 0x20)));
    M2C_FIELD(temp_2, f32 *, 4) = (f32) ((M2C_FIELD(arg0, f32 *, 0) * M2C_FIELD(arg0, f32 *, 0x20)) - (M2C_FIELD(arg0, f32 *, 8) * M2C_FIELD(arg0, f32 *, 0x18)));
    M2C_FIELD(temp_2, f32 *, 8) = (f32) ((M2C_FIELD(arg0, f32 *, 8) * M2C_FIELD(arg0, f32 *, 0xC)) - (M2C_FIELD(arg0, f32 *, 0) * M2C_FIELD(arg0, f32 *, 0x14)));
    M2C_FIELD(arg1, f32 *, 0x18) = (f32) ((M2C_FIELD(arg0, f32 *, 0xC) * M2C_FIELD(arg0, f32 *, 0x1C)) - (M2C_FIELD(arg0, f32 *, 0x10) * M2C_FIELD(arg0, f32 *, 0x18)));
    M2C_FIELD(temp_3, f32 *, 4) = (f32) ((M2C_FIELD(arg0, f32 *, 4) * M2C_FIELD(arg0, f32 *, 0x18)) - (M2C_FIELD(arg0, f32 *, 0) * M2C_FIELD(arg0, f32 *, 0x1C)));
    M2C_FIELD(temp_3, f32 *, 8) = (f32) ((M2C_FIELD(arg0, f32 *, 0) * M2C_FIELD(arg0, f32 *, 0x10)) - (M2C_FIELD(arg0, f32 *, 4) * M2C_FIELD(arg0, f32 *, 0xC)));
    temp_f3 = (M2C_FIELD(arg0, f32 *, 0) * M2C_FIELD(arg1, f32 *, 0)) + (M2C_FIELD(arg0, f32 *, 4) * M2C_FIELD(arg1, f32 *, 0xC)) + (M2C_FIELD(arg0, f32 *, 8) * M2C_FIELD(arg1, f32 *, 0x18));
    var_4 = 0;
    if (fabsf(temp_f3) <= 0.000001f) {
        return 0;
    }
    var_2 = 0 * 0xC;
    do {
        var_3 = var_2 + arg1;
        var_4_2 = 2;
loop_4:
        var_4_2 -= 1;
        *var_3 *= 1.0f / temp_f3;
        var_3 += 4;
        if (var_4_2 >= 0) {
            goto loop_4;
        }
        var_4 += 1;
        var_2 = var_4 * 0xC;
    } while (var_4 < 3);
    return 1;
}
