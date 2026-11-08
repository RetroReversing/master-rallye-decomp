/* machine draft (m2c), tried by autopilot */
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

f32 func_003F3E80(void *, void *, f32);             /* extern */
extern f32 D_00479C98;
extern f32 D_00479C9C;

void *func_00259F38(void *arg0, void *arg2, f32 fparg0) {
    f32 sp10;
    f32 sp14;
    f32 sp18;
    f32 sp20;
    f32 sp24;
    f32 sp28;
    f32 sp30;
    f32 sp34;
    f32 sp38;
    f32 sp40;
    f32 sp44;
    f32 sp48;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f10;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f3;
    f32 temp_f3_2;
    f32 temp_f4;
    f32 temp_f4_2;
    f32 temp_f5;
    f32 temp_f7;
    f32 temp_f7_2;
    f32 var_f2;
    void *temp_2;
    void *temp_3;
    void *temp_3_2;
    void *temp_5;
    void *temp_7;

    temp_7 = arg2 + 0xC;
    temp_5 = M2C_FIELD(arg2, void **, 0x4C);
    temp_3 = temp_5 + 0xA0;
    temp_f7 = M2C_FIELD(arg2, f32 *, 0xC) * fparg0;
    temp_2 = temp_5 + 0x70;
    temp_f2 = M2C_FIELD(arg2, f32 *, 4) - M2C_FIELD(temp_3, f32 *, 4);
    temp_3_2 = temp_5 + 0x128;
    temp_f1 = M2C_FIELD(arg2, f32 *, 0) - M2C_FIELD(temp_5, f32 *, 0xA0);
    temp_f0 = M2C_FIELD(arg2, f32 *, 8) - M2C_FIELD(temp_3, f32 *, 8);
    temp_f3 = M2C_FIELD(temp_7, f32 *, 4) * fparg0;
    sp40 = temp_f7;
    temp_f4 = M2C_FIELD(temp_7, f32 *, 8) * fparg0;
    sp44 = temp_f3;
    sp48 = temp_f4;
    temp_f7_2 = (temp_f0 * temp_f7) - (temp_f1 * temp_f4);
    temp_f10 = (temp_f1 * temp_f3) - (temp_f2 * temp_f7);
    temp_f2_2 = (temp_f2 * temp_f4) - (temp_f0 * temp_f3);
    sp34 = temp_f7_2;
    sp38 = temp_f10;
    sp30 = temp_f2_2;
    temp_f3_2 = (M2C_FIELD(temp_5, f32 *, 0x70) * temp_f2_2) + (M2C_FIELD(temp_2, f32 *, 4) * temp_f7_2) + (M2C_FIELD(temp_2, f32 *, 8) * temp_f10);
    temp_f5 = (M2C_FIELD(temp_2, f32 *, 0xC) * temp_f2_2) + (M2C_FIELD(temp_2, f32 *, 0x10) * temp_f7_2) + (M2C_FIELD(temp_2, f32 *, 0x14) * temp_f10);
    temp_f4_2 = (M2C_FIELD(temp_2, f32 *, 0x18) * temp_f2_2) + (M2C_FIELD(temp_2, f32 *, 0x1C) * temp_f7_2) + (M2C_FIELD(temp_2, f32 *, 0x20) * temp_f10);
    sp20 = temp_f3_2;
    sp24 = temp_f5;
    sp28 = temp_f4_2;
    temp_f0_2 = M2C_FIELD(temp_5, f32 *, 0x128) + temp_f3_2;
    temp_f1_2 = M2C_FIELD(temp_3_2, f32 *, 4) + temp_f5;
    var_f2 = M2C_FIELD(temp_3_2, f32 *, 8) + temp_f4_2;
    sp10 = temp_f0_2;
    sp14 = temp_f1_2;
    sp18 = var_f2;
    M2C_ERROR(/* unknown instruction: c1 0xc0084 */);
    if (var_f2 != var_f2) {
        var_f2 = func_003F3E80(temp_5, temp_7, (temp_f0_2 * temp_f0_2) + (temp_f1_2 * temp_f1_2) + (var_f2 * var_f2));
    }
    if (var_f2 < (D_00479C98 * D_00479C9C)) {
        sp10 *= 0.99f;
        sp14 *= 0.99f;
        sp18 *= 0.99f;
    }
    M2C_FIELD(arg0, f32 *, 0) = sp10;
    M2C_FIELD(arg0, f32 *, 4) = sp14;
    M2C_FIELD(arg0, f32 *, 8) = sp18;
    return arg0;
}
