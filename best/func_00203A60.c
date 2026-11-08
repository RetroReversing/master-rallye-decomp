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

f32 func_003F3E80(f32);                             /* extern */

s32 func_00203A60(void *arg0) {
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f10;
    f32 temp_f10_2;
    f32 temp_f10_3;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f12_3;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f1_3;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    f32 temp_f3;
    f32 temp_f4;
    f32 temp_f5;
    f32 temp_f5_2;
    f32 temp_f5_3;
    f32 temp_f6;
    f32 temp_f6_2;
    f32 temp_f6_3;
    f32 temp_f6_4;
    f32 temp_f6_5;
    f32 temp_f7;
    f32 temp_f7_2;
    f32 temp_f7_3;
    f32 temp_f7_4;
    f32 temp_f7_5;
    f32 temp_f8;
    f32 temp_f8_2;
    f32 temp_f8_3;
    f32 temp_f9;
    f32 var_f0;
    f32 var_f0_2;
    f32 var_f0_3;
    s32 var_2;

    temp_f0 = M2C_FIELD(arg0, f32 *, 0);
    temp_f2 = M2C_FIELD(arg0, f32 *, 0xC);
    temp_f1 = M2C_FIELD(arg0, f32 *, 0x18);
    var_f0 = (temp_f0 * temp_f0) + (temp_f2 * temp_f2);
    M2C_ERROR(/* unknown instruction: c1 0xc0004 */);
    if (var_f0 != var_f0) {
        var_f0 = func_003F3E80(var_f0 + (temp_f1 * temp_f1));
    }
    var_2 = 0;
    if (!(var_f0 < 0.00001f)) {
        temp_f12 = 1.0f / var_f0;
        temp_f5 = M2C_FIELD(arg0, f32 *, 4);
        temp_f6 = M2C_FIELD(arg0, f32 *, 0x10);
        temp_f7 = M2C_FIELD(arg0, f32 *, 0x1C);
        temp_f2_2 = M2C_FIELD(arg0, f32 *, 0) * temp_f12;
        temp_f1_2 = M2C_FIELD(arg0, f32 *, 0xC) * temp_f12;
        temp_f0_2 = M2C_FIELD(arg0, f32 *, 0x18) * temp_f12;
        M2C_FIELD(arg0, f32 *, 0) = temp_f2_2;
        M2C_FIELD(arg0, f32 *, 0xC) = temp_f1_2;
        M2C_FIELD(arg0, f32 *, 0x18) = temp_f0_2;
        temp_f10 = (temp_f2_2 * temp_f5) + (temp_f1_2 * temp_f6) + (temp_f0_2 * temp_f7);
        temp_f5_2 = temp_f5 - (temp_f10 * temp_f2_2);
        temp_f6_2 = temp_f6 - (temp_f10 * temp_f1_2);
        temp_f7_2 = temp_f7 - (temp_f10 * temp_f0_2);
        M2C_FIELD(arg0, f32 *, 4) = temp_f5_2;
        M2C_FIELD(arg0, f32 *, 0x10) = temp_f6_2;
        var_f0_2 = temp_f7_2 * temp_f7_2;
        M2C_ERROR(/* unknown instruction: c1 0xc0004 */);
        M2C_FIELD(arg0, f32 *, 0x1C) = temp_f7_2;
        if (var_f0_2 != var_f0_2) {
            var_f0_2 = func_003F3E80((temp_f5_2 * temp_f5_2) + (temp_f6_2 * temp_f6_2) + var_f0_2);
        }
        var_2 = 0;
        if (!(var_f0_2 < 0.00001f)) {
            temp_f7_3 = M2C_FIELD(arg0, f32 *, 8);
            temp_f12_2 = 1.0f / var_f0_2;
            temp_f8 = M2C_FIELD(arg0, f32 *, 0x14);
            temp_f3 = M2C_FIELD(arg0, f32 *, 0);
            temp_f9 = M2C_FIELD(arg0, f32 *, 0xC);
            temp_f6_3 = M2C_FIELD(arg0, f32 *, 0x20);
            temp_f2_3 = M2C_FIELD(arg0, f32 *, 0x18);
            temp_f5_3 = M2C_FIELD(arg0, f32 *, 4) * temp_f12_2;
            temp_f4 = M2C_FIELD(arg0, f32 *, 0x10) * temp_f12_2;
            temp_f10_2 = (temp_f3 * temp_f7_3) + (temp_f9 * temp_f8) + (temp_f2_3 * temp_f6_3);
            temp_f1_3 = M2C_FIELD(arg0, f32 *, 0x1C) * temp_f12_2;
            M2C_FIELD(arg0, f32 *, 4) = temp_f5_3;
            M2C_FIELD(arg0, f32 *, 0x10) = temp_f4;
            M2C_FIELD(arg0, f32 *, 0x1C) = temp_f1_3;
            temp_f7_4 = temp_f7_3 - (temp_f10_2 * temp_f3);
            temp_f8_2 = temp_f8 - (temp_f10_2 * temp_f9);
            temp_f6_4 = temp_f6_3 - (temp_f10_2 * temp_f2_3);
            temp_f10_3 = (temp_f5_3 * temp_f7_4) + (temp_f4 * temp_f8_2) + (temp_f1_3 * temp_f6_4);
            temp_f7_5 = temp_f7_4 - (temp_f10_3 * temp_f5_3);
            temp_f8_3 = temp_f8_2 - (temp_f10_3 * temp_f4);
            temp_f6_5 = temp_f6_4 - (temp_f10_3 * temp_f1_3);
            M2C_FIELD(arg0, f32 *, 8) = temp_f7_5;
            M2C_FIELD(arg0, f32 *, 0x14) = temp_f8_3;
            var_f0_3 = (temp_f7_5 * temp_f7_5) + (temp_f8_3 * temp_f8_3);
            M2C_ERROR(/* unknown instruction: c1 0xc0004 */);
            M2C_FIELD(arg0, f32 *, 0x20) = temp_f6_5;
            if (var_f0_3 != var_f0_3) {
                var_f0_3 = func_003F3E80(var_f0_3 + (temp_f6_5 * temp_f6_5));
            }
            var_2 = 0;
            if (!(var_f0_3 < 0.00001f)) {
                temp_f12_3 = 1.0f / var_f0_3;
                var_2 = 1;
                M2C_FIELD(arg0, f32 *, 8) = (f32) (M2C_FIELD(arg0, f32 *, 8) * temp_f12_3);
                M2C_FIELD(arg0, f32 *, 0x20) = (f32) (M2C_FIELD(arg0, f32 *, 0x20) * temp_f12_3);
                M2C_FIELD(arg0, f32 *, 0x14) = (f32) (M2C_FIELD(arg0, f32 *, 0x14) * temp_f12_3);
            }
        }
    }
    return var_2;
}
