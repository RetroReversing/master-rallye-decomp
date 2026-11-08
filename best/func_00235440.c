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

s32 func_00235440(void *arg0, void *arg1) {
    f32 sp0;
    f32 sp4;
    f32 sp8;
    f32 sp10;
    f32 sp14;
    f32 sp18;
    f32 sp20;
    f32 sp24;
    f32 sp28;
    f32 temp_f0;
    f32 temp_f10;
    f32 temp_f11;
    f32 temp_f12;
    f32 temp_f13;
    f32 temp_f14;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f3;
    f32 temp_f3_2;
    f32 temp_f5;
    f32 temp_f5_2;
    f32 temp_f5_3;
    f32 temp_f6;
    f32 temp_f6_2;
    f32 temp_f7;
    f32 temp_f8;
    f32 temp_f8_2;
    f32 temp_f9;
    s32 var_2;
    void *temp_2;
    void *temp_3;
    void *temp_4;
    void *temp_6;

    temp_3 = arg0 + 8;
    temp_2 = arg1 + 8;
    temp_f8 = M2C_FIELD(arg0, f32 *, 8);
    temp_f14 = M2C_FIELD(arg1, f32 *, 8);
    temp_f6 = M2C_FIELD(temp_3, f32 *, 4);
    temp_f12 = M2C_FIELD(temp_2, f32 *, 4);
    temp_f5 = M2C_FIELD(temp_3, f32 *, 8);
    temp_f13 = M2C_FIELD(temp_2, f32 *, 8);
    temp_6 = M2C_FIELD(arg0, void **, 0);
    temp_4 = M2C_FIELD(arg1, void **, 0);
    temp_f11 = (temp_f8 * temp_f14) + (temp_f6 * temp_f12) + (temp_f5 * temp_f13);
    if (!(temp_f11 <= 0.999f) || (temp_f7 = temp_f14 * temp_f11, temp_f9 = temp_f12 * temp_f11, temp_f10 = temp_f13 * temp_f11, temp_f8_2 = temp_f8 - temp_f7, temp_f1 = M2C_FIELD(temp_6, f32 *, 0) - M2C_FIELD(temp_4, f32 *, 0), temp_f3 = M2C_FIELD(temp_6, f32 *, 4) - M2C_FIELD(temp_4, f32 *, 4), temp_f6_2 = temp_f6 - temp_f9, sp20 = temp_f7, sp0 = temp_f1, temp_f2 = M2C_FIELD(temp_6, f32 *, 8) - M2C_FIELD(temp_4, f32 *, 8), sp4 = temp_f3, temp_f5_2 = temp_f5 - temp_f10, sp24 = temp_f9, sp8 = temp_f2, sp28 = temp_f10, sp10 = temp_f8_2, sp14 = temp_f6_2, sp18 = temp_f5_2, temp_f3_2 = M2C_FIELD(temp_6, f32 *, 0) - M2C_FIELD(temp_4, f32 *, 0), temp_f5_3 = ((temp_f1 * temp_f8_2) + (temp_f3 * temp_f6_2) + (temp_f2 * temp_f5_2)) / ((temp_f11 * temp_f11) - 1.0f), temp_f2_2 = M2C_FIELD(temp_6, f32 *, 4) - M2C_FIELD(temp_4, f32 *, 4), sp0 = temp_f3_2, temp_f0 = M2C_FIELD(temp_6, f32 *, 8) - M2C_FIELD(temp_4, f32 *, 8), sp4 = temp_f2_2, sp8 = temp_f0, temp_f1_2 = (temp_f3_2 * temp_f14) + (temp_f2_2 * temp_f12) + (temp_f0 * temp_f13) + (temp_f5_3 * temp_f11), !(temp_f5_3 >= 0.0f)) || ((var_2 = 0, (temp_f5_3 <= M2C_FIELD(arg0, f32 *, 0x14))) && (temp_f1_2 >= 0.0f) && (var_2 = 1, !(temp_f1_2 <= M2C_FIELD(arg1, f32 *, 0x14))))) {
        var_2 = 0;
    }
    return var_2;
}
