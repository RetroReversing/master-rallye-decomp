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

extern f32 D_00472CA4;

u32 func_001B0878(void *arg0, void *arg1) {
    f32 sp0;
    f32 sp4;
    f32 sp8;
    f32 sp10;
    M2C_UNK32 sp14;
    f32 sp18;
    f32 temp_f0;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f1_3;
    f32 temp_f1_4;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 var_f3;
    s32 temp_2;
    s32 temp_7;
    u32 var_3;
    u32 var_6;
    void *temp_4;
    void *var_5;

    temp_f2 = M2C_FIELD(arg0, f32 *, 0x74);
    temp_7 = M2C_FIELD(arg1, s32 *, 0);
    temp_4 = arg0 + 0x74;
    sp0 = temp_f2;
    var_6 = 0;
    var_f3 = D_00472CA4;
    sp4 = M2C_FIELD(temp_4, f32 *, 4);
    var_3 = 0;
    temp_f1 = M2C_FIELD(temp_4, f32 *, 8);
    sp4 = 0.0f;
    temp_2 = (s32) ((M2C_FIELD(arg1, s32 *, 4) - temp_7) * 0xCCCCCCCD) >> 4;
    sp8 = temp_f1;
    if (temp_2 != 0) {
        var_5 = temp_7 + 0x40;
        do {
            temp_f1_2 = M2C_FIELD(var_5, f32 *, 0);
            sp10 = temp_f1_2;
            temp_f1_3 = temp_f1_2 - temp_f2;
            sp14 = M2C_FIELD(var_5, M2C_UNK32 *, 4);
            temp_f2_2 = M2C_FIELD(var_5, f32 *, 8);
            sp14 = 0;
            temp_f0 = temp_f2_2 - temp_f1;
            temp_f1_4 = (temp_f1_3 * temp_f1_3) + sp4 + (temp_f0 * temp_f0);
            sp18 = temp_f2_2;
            if (temp_f1_4 < var_f3) {
                var_f3 = temp_f1_4;
                var_3 = var_6;
            }
            var_6 += 1;
            var_5 += 0x50;
        } while (var_6 < (u32) temp_2);
    }
    return var_3;
}
