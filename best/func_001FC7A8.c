/* machine draft (m2c) for ee-gcc-2.95.3 -O1 -G0, tried by autopilot */
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

M2C_UNK func_001567E8(f32 *, f32 *);                /* extern */
f32 func_0015ACB0(void *, void *);                  /* extern */
f32 func_003F33C8(M2C_UNK);                         /* extern */

s32 func_001FC7A8(void **arg0, void *arg1) {
    f32 sp0;
    f32 sp4;
    f32 sp10;
    f32 sp14;
    f32 sp20;
    f32 sp24;
    f32 sp28;
    f32 sp30;
    f32 sp34;
    f32 sp38;
    f32 sp40;
    f32 sp44;
    f32 sp50;
    f32 sp54;
    f32 sp58;
    f32 sp60;
    f32 sp64;
    f32 sp68;
    f32 *var_16;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f1;
    f32 temp_f21;
    f32 temp_f2;
    f32 temp_f3;
    f32 var_f20;
    f32 var_f4;
    s32 var_2;
    void *temp_2;
    void *temp_2_2;
    void *temp_3;
    void *temp_4;
    void *temp_6;
    void *var_17;

    temp_6 = *arg0;
    temp_4 = M2C_FIELD(temp_6, void **, 0);
    if (((s32) ((M2C_FIELD(temp_6, void **, 4) - temp_4) * 0xCCCCCCCD) >> 4) >= 3) {
        var_f20 = 0.0f;
        temp_2 = *arg0;
        temp_f21 = func_0015ACB0(temp_4, temp_6);
        temp_f1 = M2C_FIELD(arg1, f32 *, 0);
        temp_f3 = M2C_FIELD(arg1, f32 *, 8);
        var_17 = M2C_FIELD(temp_2, void **, 0);
        sp4 = temp_f3;
        sp0 = temp_f1;
        temp_3 = M2C_FIELD(temp_2, void **, 4);
        temp_f2 = M2C_FIELD(temp_3, f32 *, -0x10);
        temp_2_2 = temp_3 - 0x10;
        sp20 = temp_f2;
        sp24 = M2C_FIELD(temp_2_2, f32 *, 4);
        sp28 = M2C_FIELD(temp_2_2, f32 *, 8);
        sp30 = M2C_FIELD(temp_3, f32 *, -0x10);
        sp34 = M2C_FIELD(temp_2_2, f32 *, 4);
        temp_f0 = M2C_FIELD(temp_2_2, f32 *, 8);
        sp10 = temp_f2 - temp_f1;
        sp38 = temp_f0;
        sp14 = temp_f0 - temp_f3;
        func_001567E8(&sp10, &sp10);
        sp20 = 0.0f;
        sp24 = 0.0f;
        var_16 = var_17 + 0x40;
        if (var_17 != M2C_FIELD(*arg0, void **, 4)) {
            var_f4 = M2C_FIELD(var_17, f32 *, 0x40);
loop_3:
            sp50 = var_f4;
            var_17 += 0x50;
            sp54 = M2C_FIELD(var_16, f32 *, 4);
            sp58 = M2C_FIELD(var_16, f32 *, 8);
            sp60 = M2C_FIELD(var_16, f32 *, 0);
            sp64 = M2C_FIELD(var_16, f32 *, 4);
            temp_f0_2 = M2C_FIELD(var_16, f32 *, 8);
            sp20 = var_f4 - sp0;
            var_16 += 0x50;
            sp68 = temp_f0_2;
            sp44 = temp_f0_2;
            sp40 = var_f4;
            sp24 = temp_f0_2 - sp4;
            func_001567E8(&sp20, &sp20);
            func_0015ACE0((sp10 * sp20) + (sp14 * sp24), -0.99999f, 0.99999f);
            var_f20 += func_003F33C8(M2C_ERROR(/* Read from unset register $f0 */));
            sp10 = sp20;
            sp14 = sp24;
            if (var_17 != M2C_FIELD(*arg0, void **, 4)) {
                var_f4 = *var_16;
                goto loop_3;
            }
        }
        var_2 = 1;
        if (!(fabsf(var_f20 - (2.0f * temp_f21)) < 0.1f)) {
            goto block_7;
        }
    } else {
block_7:
        var_2 = 0;
    }
    return var_2;
}
