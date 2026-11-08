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

f32 func_0015ACC8();                                /* extern */
M2C_UNK func_001CA568(void *, void *, void *);      /* extern */
f32 func_003F2F50(f32);                             /* extern */
f32 func_003F3140(f32);                             /* extern */
f32 func_003F36F0(f32, f32);                        /* extern */

void func_002891F0(void *arg0, void *arg1) {
    f32 sp0;
    f32 sp4;
    f32 sp8;
    f32 sp10;
    f32 sp14;
    f32 sp18;
    f32 sp1C;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f11;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f13;
    f32 temp_f1;
    f32 temp_f20;
    f32 temp_f20_2;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f5;
    f32 temp_f5_2;
    f32 temp_f7;
    f32 temp_f8;
    f32 temp_f9;
    f32 temp_f9_2;
    f32 var_f0;
    f32 var_f1;
    s32 var_3;
    void *temp_16;
    void *temp_16_2;
    void *temp_16_3;
    void *temp_2;
    void *temp_2_2;
    void *temp_2_3;
    void *temp_2_4;
    void *temp_2_5;
    void *temp_3;
    void *temp_4;
    void *temp_5;
    void *temp_5_2;
    void *temp_5_3;
    void *var_2;
    void *var_5;

    if (M2C_FIELD(arg0, f32 *, 0x24) > 1.1920929e-7f) {
        M2C_FIELD(arg0, f32 *, 0x2C) = (f32) (M2C_FIELD(arg0, f32 *, 0x2C) + M2C_FIELD(arg0, f32 *, 0x28));
        temp_f20 = func_0015ACC8();
        temp_f12 = M2C_FIELD(arg0, f32 *, 0x2C);
        if (!(temp_f12 >= 0.0f)) {
            var_f0 = temp_f20 - func_003F36F0(temp_f20 - temp_f12, temp_f20);
        } else {
            var_f0 = func_003F36F0(temp_f12, temp_f20);
        }
        M2C_FIELD(arg0, f32 *, 0x2C) = var_f0;
        sp0 = 0.0f;
        sp4 = 0.0f;
        sp8 = 0.0f;
        if (M2C_FIELD(arg0, s32 *, 0xC) != 0) {
            temp_2 = M2C_FIELD(arg1, void **, 0x50);
            var_f1 = M2C_FIELD(temp_2, f32 *, 0x20);
            var_2 = temp_2 + 0x20;
            goto block_14;
        }
        if (M2C_FIELD(arg0, s32 *, 0x10) == 0) {
            if (M2C_FIELD(arg0, s32 *, 0x14) != 0) {
                temp_2_2 = M2C_FIELD(arg1, void **, 0x50);
                var_f1 = M2C_FIELD(temp_2_2, f32 *, 0x40);
                var_2 = temp_2_2 + 0x40;
                goto block_14;
            }
        } else {
            temp_2_3 = M2C_FIELD(arg1, void **, 0x50);
            var_f1 = M2C_FIELD(temp_2_3, f32 *, 0x30);
            var_2 = temp_2_3 + 0x30;
block_14:
            sp0 = var_f1;
            sp4 = M2C_FIELD(var_2, f32 *, 4);
            sp8 = M2C_FIELD(var_2, f32 *, 8);
        }
        var_3 = 0;
        temp_2_4 = arg0 + 0x18;
        if ((fabsf(sp0 - M2C_FIELD(arg0, f32 *, 0x18)) <= 0.02f) && (fabsf(sp4 - M2C_FIELD(temp_2_4, f32 *, 4)) <= 0.02f) && (fabsf(sp8 - M2C_FIELD(temp_2_4, f32 *, 8)) <= 0.02f)) {
            var_3 = 1;
        }
        if (var_3 == 0) {
            temp_16 = arg0 + 0x30;
            M2C_FIELD(arg0, f32 *, 0x18) = sp0;
            M2C_FIELD(temp_2_4, f32 *, 8) = sp8;
            M2C_FIELD(temp_2_4, f32 *, 4) = sp4;
            temp_f20_2 = M2C_FIELD(arg0, f32 *, 0x2C) * 0.5f;
            temp_f0 = func_003F3140(temp_f20_2);
            sp10 = temp_f0 * sp0;
            sp14 = temp_f0 * sp4;
            sp18 = temp_f0 * sp8;
            temp_f0_2 = func_003F2F50(temp_f20_2);
            temp_4 = arg0 + 0x40;
            temp_2_5 = arg0 + 0x50;
            temp_f2 = 2.0f * sp14;
            temp_f5 = 2.0f * sp18;
            temp_f9 = 2.0f * sp10;
            sp1C = temp_f0_2;
            temp_f13 = temp_f2 * sp14;
            temp_3 = arg0 + 0x60;
            temp_f1 = temp_f5 * sp18;
            temp_f12_2 = temp_f2 * temp_f0_2;
            temp_f11 = temp_f5 * temp_f0_2;
            temp_f2_2 = temp_f2 * sp10;
            temp_f7 = temp_f9 * sp10;
            temp_f8 = temp_f5 * sp10;
            temp_f9_2 = temp_f9 * temp_f0_2;
            temp_f5_2 = temp_f5 * sp14;
            M2C_FIELD(arg0, f32 *, 0x30) = (f32) (1.0f - (temp_f13 + temp_f1));
            M2C_FIELD(temp_16, f32 *, 4) = (f32) (temp_f2_2 - temp_f11);
            M2C_FIELD(temp_16, s32 *, 0xC) = 0;
            M2C_FIELD(temp_16, f32 *, 8) = (f32) (temp_f8 + temp_f12_2);
            M2C_FIELD(arg0, f32 *, 0x40) = (f32) (temp_f2_2 + temp_f11);
            M2C_FIELD(temp_4, s32 *, 0xC) = 0;
            M2C_FIELD(temp_4, f32 *, 8) = (f32) (temp_f5_2 - temp_f9_2);
            M2C_FIELD(temp_4, f32 *, 4) = (f32) (1.0f - (temp_f7 + temp_f1));
            M2C_FIELD(arg0, f32 *, 0x50) = (f32) (temp_f8 - temp_f12_2);
            M2C_FIELD(temp_2_5, f32 *, 4) = (f32) (temp_f5_2 + temp_f9_2);
            M2C_FIELD(temp_2_5, f32 *, 8) = (f32) (1.0f - (temp_f7 + temp_f13));
            M2C_FIELD(temp_2_5, s32 *, 0xC) = 0;
            M2C_FIELD(arg0, s32 *, 0x60) = 0;
            M2C_FIELD(temp_3, f32 *, 0xC) = 1.0f;
            M2C_FIELD(temp_3, s32 *, 4) = 0;
            M2C_FIELD(temp_3, s32 *, 8) = 0;
        }
        temp_16_2 = arg0 + 0x30;
        if (M2C_FIELD(arg0, s32 *, 0xC) != 0) {
            var_5 = M2C_FIELD(arg1, void **, 0x50) + 0x30;
            goto block_25;
        }
        if (M2C_FIELD(arg0, s32 *, 0x10) != 0) {
            var_5 = M2C_FIELD(arg1, void **, 0x50) + 0x20;
block_25:
            func_001CA568(temp_16_2, var_5, var_5);
            temp_5 = M2C_FIELD(arg1, void **, 0x50) + 0x40;
            func_001CA568(temp_16_2, temp_5, temp_5);
            return;
        }
        temp_16_3 = arg0 + 0x30;
        if (M2C_FIELD(arg0, s32 *, 0x14) != 0) {
            temp_5_2 = M2C_FIELD(arg1, void **, 0x50) + 0x20;
            func_001CA568(temp_16_3, temp_5_2, temp_5_2);
            temp_5_3 = M2C_FIELD(arg1, void **, 0x50) + 0x30;
            func_001CA568(temp_16_3, temp_5_3, temp_5_3);
        }
    }
}
