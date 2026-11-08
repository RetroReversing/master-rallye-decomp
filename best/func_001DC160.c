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

s32 func_001DC160(void *arg0, void *arg1, f32 fparg0) {
    f32 sp0;
    f32 sp4;
    f32 sp8;
    f32 sp10;
    f32 sp14;
    f32 sp18;
    f32 temp_f0;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f1_3;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f3;
    f32 temp_f3_2;
    s32 var_2;
    void *temp_2;
    void *temp_2_2;
    void *temp_3;
    void *temp_3_2;

    temp_2 = arg0 + 0x18;
    temp_3 = arg0 + 0xC;
    temp_f1 = M2C_FIELD(arg1, f32 *, 0) - M2C_FIELD(arg0, f32 *, 0x18);
    sp0 = temp_f1;
    temp_f3 = M2C_FIELD(arg1, f32 *, 4) - M2C_FIELD(temp_2, f32 *, 4);
    sp4 = temp_f3;
    temp_f2 = M2C_FIELD(arg1, f32 *, 8) - M2C_FIELD(temp_2, f32 *, 8);
    sp8 = temp_f2;
    temp_f1_2 = (temp_f1 * temp_f1) + (temp_f3 * temp_f3) + (temp_f2 * temp_f2);
    temp_f0 = (temp_f1 * M2C_FIELD(arg0, f32 *, 0xC)) + (temp_f3 * M2C_FIELD(temp_3, f32 *, 4)) + (temp_f2 * M2C_FIELD(temp_3, f32 *, 8));
    if (!(temp_f0 < 0.0f) || (var_2 = 0, !(fparg0 < temp_f1_2))) {
        var_2 = 0;
        if (!(fparg0 < (temp_f1_2 - (temp_f0 * temp_f0)))) {
            temp_2_2 = arg0 + 0x24;
            temp_3_2 = arg0 + 0xC;
            temp_f1_3 = M2C_FIELD(arg1, f32 *, 0) - M2C_FIELD(arg0, f32 *, 0x24);
            sp10 = temp_f1_3;
            temp_f3_2 = M2C_FIELD(arg1, f32 *, 4) - M2C_FIELD(temp_2_2, f32 *, 4);
            sp14 = temp_f3_2;
            temp_f2_2 = M2C_FIELD(arg1, f32 *, 8) - M2C_FIELD(temp_2_2, f32 *, 8);
            sp18 = temp_f2_2;
            var_2 = 1;
            if (((temp_f1_3 * M2C_FIELD(arg0, f32 *, 0xC)) + (temp_f3_2 * M2C_FIELD(temp_3_2, f32 *, 4)) + (temp_f2_2 * M2C_FIELD(temp_3_2, f32 *, 8))) > 0.0f) {
                var_2 = 0;
                if (!(fparg0 < ((temp_f1_3 * temp_f1_3) + (temp_f3_2 * temp_f3_2) + (temp_f2_2 * temp_f2_2)))) {
                    var_2 = 1;
                }
            }
        }
    }
    return var_2;
}
