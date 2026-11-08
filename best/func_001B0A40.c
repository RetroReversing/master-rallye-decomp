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

f32 func_001D5DF0(s32);                             /* extern */
f32 func_001D5E70(s32, M2C_UNK, M2C_UNK);           /* extern */
s32 func_001D5F70();                                /* extern */
void **func_00201350();                             /* extern */
f32 func_003F3E80(f32);                             /* extern */

void func_001B0A40(void *arg0, void *arg1) {
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
    f32 sp50;
    f32 sp54;
    f32 sp58;
    f32 sp60;
    f32 sp64;
    f32 sp68;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f0_4;
    f32 temp_f0_5;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f1_3;
    f32 temp_f1_4;
    f32 temp_f1_5;
    f32 temp_f20;
    f32 temp_f20_2;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    f32 temp_f2_4;
    f32 temp_f3;
    f32 temp_f3_2;
    f32 temp_f3_3;
    f32 temp_f4;
    f32 temp_f4_2;
    f32 temp_f5;
    f32 temp_f5_2;
    f32 temp_f6;
    f32 temp_f6_2;
    f32 temp_f7;
    f32 var_f0;
    f32 var_f0_2;
    f32 var_f1;
    f32 var_f2;
    f32 var_f3;
    f32 var_f4;
    s32 temp_4;
    void *temp_2;
    void *temp_2_2;
    void *temp_2_3;
    void *temp_2_4;
    void *temp_3;
    void *temp_3_2;
    void *temp_3_3;

    M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    M2C_FIELD(arg0, f32 *, 0x28) = (f32) (M2C_FIELD(arg0, f32 *, 0x28) + func_001D5E70(func_001D5F70(), 0, 0x41700000));
    temp_f20 = func_001D5E70(func_001D5F70(), 0, 0x42700000);
    temp_f0 = M2C_FIELD(arg0, f32 *, 0x24);
    if (func_001D5DF0(func_001D5F70()) > 0.5f) {
        var_f0 = temp_f0 + temp_f20;
    } else {
        var_f0 = temp_f0 - temp_f20;
    }
    M2C_FIELD(arg0, f32 *, 0x24) = var_f0;
    temp_3 = *func_00201350();
    temp_2 = arg0 + 0xC;
    temp_f1 = M2C_FIELD(temp_3, f32 *, 0xC0) - M2C_FIELD(arg0, f32 *, 0xC);
    temp_f3 = temp_f1 * temp_f1;
    temp_f0_2 = M2C_FIELD((temp_3 + 0xC0), f32 *, 8);
    sp14 = 0.0f;
    var_f0_2 = temp_f0_2 - M2C_FIELD(temp_2, f32 *, 8);
    sp10 = temp_f1;
    temp_f12 = temp_f3 + sp14 + (var_f0_2 * var_f0_2);
    sp18 = var_f0_2;
    if (temp_f12 <= 1.1920929e-7f) {
        sp18 = sp14;
        sp10 = sp14;
    } else {
        M2C_ERROR(/* unknown instruction: c1 0xc0004 */);
        if (var_f0_2 != var_f0_2) {
            var_f0_2 = func_003F3E80(temp_f12);
        }
        temp_f1_2 = 1.0f / var_f0_2;
        sp10 *= temp_f1_2;
        sp18 *= temp_f1_2;
        sp14 *= temp_f1_2;
    }
    sp24 = 0.0f;
    sp20 = sp18;
    sp28 = -sp10;
    temp_f20_2 = func_001D5E70(func_001D5F70(), 0, 0x3DF5C28F);
    temp_2_2 = arg0 + 0x18;
    if (func_001D5DF0(func_001D5F70()) > 0.5f) {
        temp_f1_3 = sp20 * temp_f20_2;
        temp_f0_3 = -(1.0f - temp_f20_2);
        temp_f3_2 = sp28 * temp_f20_2;
        temp_f2 = sp24 * temp_f20_2;
        sp50 = temp_f1_3;
        temp_f4 = sp18 * temp_f0_3;
        temp_f6 = sp10 * temp_f0_3;
        sp58 = temp_f3_2;
        temp_f5 = sp14 * temp_f0_3;
        sp54 = temp_f2;
        sp48 = temp_f4;
        var_f4 = temp_f4 + temp_f3_2;
        sp40 = temp_f6;
        var_f1 = temp_f6 + temp_f1_3;
        sp44 = temp_f5;
        var_f2 = temp_f5 + temp_f2;
    } else {
        temp_f5_2 = -temp_f20_2;
        temp_f1_4 = sp20 * temp_f5_2;
        temp_f0_4 = -(1.0f - temp_f20_2);
        temp_f3_3 = sp28 * temp_f5_2;
        temp_f2_2 = sp24 * temp_f5_2;
        sp60 = temp_f1_4;
        temp_f4_2 = sp18 * temp_f0_4;
        temp_f7 = sp10 * temp_f0_4;
        sp68 = temp_f3_3;
        temp_f6_2 = sp14 * temp_f0_4;
        sp64 = temp_f2_2;
        sp48 = temp_f4_2;
        var_f4 = temp_f4_2 + temp_f3_3;
        sp40 = temp_f7;
        var_f1 = temp_f7 + temp_f1_4;
        sp44 = temp_f6_2;
        var_f2 = temp_f6_2 + temp_f2_2;
    }
    sp38 = var_f4;
    M2C_FIELD(arg0, f32 *, 0x18) = var_f1;
    sp30 = var_f1;
    sp34 = var_f2;
    M2C_FIELD(temp_2_2, f32 *, 4) = var_f2;
    M2C_FIELD(temp_2_2, f32 *, 8) = sp38;
    M2C_FIELD(arg0, f32 *, 0x1C) = func_001D5E70(func_001D5F70(), 0x3A83126F, 0x3E4CCCCD);
    temp_f1_5 = M2C_FIELD(arg0, f32 *, 0x18);
    temp_f2_3 = M2C_FIELD(temp_2_2, f32 *, 4);
    temp_f0_5 = M2C_FIELD(temp_2_2, f32 *, 8);
    var_f3 = 1.1920929e-7f;
    temp_f12_2 = (temp_f1_5 * temp_f1_5) + (temp_f2_3 * temp_f2_3) + (temp_f0_5 * temp_f0_5);
    if (!(temp_f12_2 <= 1.1920929e-7f)) {
        M2C_ERROR(/* unknown instruction: c1 0xc00c4 */);
        if (1.1920929e-7f != 1.1920929e-7f) {
            var_f3 = func_003F3E80(temp_f12_2);
        }
        temp_f2_4 = 1.0f / var_f3;
        M2C_FIELD(arg0, f32 *, 0x18) = (f32) (M2C_FIELD(arg0, f32 *, 0x18) * temp_f2_4);
        M2C_FIELD(temp_2_2, f32 *, 4) = (f32) (M2C_FIELD(temp_2_2, f32 *, 4) * temp_f2_4);
        M2C_FIELD(temp_2_2, f32 *, 8) = (f32) (M2C_FIELD(temp_2_2, f32 *, 8) * temp_f2_4);
    } else {
        M2C_FIELD(arg0, f32 *, 0x18) = 0.0f;
        M2C_FIELD(temp_2_2, f32 *, 8) = 0.0f;
        M2C_FIELD(temp_2_2, f32 *, 4) = 0.0f;
    }
    temp_3_2 = M2C_FIELD(arg1, void **, 0x50);
    temp_4 = (0xBFFFFFFF * 0x10) | 0xF;
    M2C_FIELD(temp_3_2, s64 *, 0x70) = (s64) (M2C_FIELD(temp_3_2, s64 *, 0x70) & temp_4);
    temp_2_3 = M2C_FIELD(arg1, void **, 0x50);
    M2C_FIELD(temp_2_3, f32 *, 0x50) = (f32) M2C_FIELD(arg0, f32 *, 0xC);
    temp_2_4 = temp_2_3 + 0x50;
    M2C_FIELD(temp_2_4, f32 *, 4) = (f32) M2C_FIELD(temp_2, f32 *, 4);
    M2C_FIELD(temp_2_4, f32 *, 0xC) = 1.0f;
    M2C_FIELD(temp_2_4, f32 *, 8) = (f32) M2C_FIELD(temp_2, f32 *, 8);
    temp_3_3 = M2C_FIELD(arg1, void **, 0x50);
    M2C_FIELD(temp_3_3, s64 *, 0x70) = (s64) ((M2C_FIELD(temp_3_3, s64 *, 0x70) & temp_4) | (0x8000 << 0x13));
}
