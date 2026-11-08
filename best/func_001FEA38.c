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

M2C_UNK func_001FE778(f32 *, void *, f32 *, f32 *, void *); /* extern */
f32 func_003F3E80(f32);                             /* extern */
extern f32 D_00478348;

void *func_001FEA38(void *arg0, void *arg1, void *arg2) {
    f32 sp0;
    f32 sp4;
    f32 sp8;
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
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f2;
    f32 temp_f3;
    f32 var_f0;
    f32 var_f20;
    s32 temp_3;
    s32 var_2;
    void *temp_2;
    void *temp_2_2;
    void *temp_2_3;
    void *var_17;
    void *var_18;
    void *var_8;

    temp_2 = M2C_FIELD(arg1, void **, 4);
    if ((temp_2 != NULL) && (temp_3 = M2C_FIELD(temp_2, s32 *, 4), temp_2_2 = M2C_FIELD(temp_2, void **, 0), (temp_2_2 != temp_3))) {
        var_8 = temp_2_2;
        var_17 = temp_2_2 + 0x50;
        var_f20 = D_00478348;
        if (var_17 != temp_3) {
            var_18 = var_17 + 0x40;
            do {
                temp_2_3 = var_8 + 0x40;
                sp30 = M2C_FIELD(var_18, f32 *, 0);
                sp34 = M2C_FIELD(var_18, f32 *, 4);
                sp38 = M2C_FIELD(var_18, f32 *, 8);
                sp40 = M2C_FIELD(var_8, f32 *, 0x40);
                sp44 = M2C_FIELD(temp_2_3, f32 *, 4);
                sp48 = M2C_FIELD(temp_2_3, f32 *, 8);
                func_001FE778(&sp20, arg2, &sp40, &sp30, var_8);
                temp_f1 = sp20 - M2C_FIELD(arg2, f32 *, 0);
                temp_f3 = sp24 - M2C_FIELD(arg2, f32 *, 4);
                sp10 = sp20;
                sp14 = sp24;
                var_f0 = sp28 - M2C_FIELD(arg2, f32 *, 8);
                sp18 = sp28;
                sp20 = temp_f1;
                sp28 = var_f0;
                M2C_ERROR(/* unknown instruction: c1 0xc0004 */);
                sp24 = temp_f3;
                if (var_f0 != var_f0) {
                    var_f0 = func_003F3E80((temp_f1 * temp_f1) + (temp_f3 * temp_f3) + (var_f0 * var_f0));
                }
                var_2 = 1;
                if (!(var_f0 < var_f20)) {
                    var_2 = 0;
                }
                if (var_2 != 0) {
                    temp_f0 = sp10 - M2C_FIELD(arg2, f32 *, 0);
                    temp_f2 = sp14 - M2C_FIELD(arg2, f32 *, 4);
                    sp30 = temp_f0;
                    temp_f1_2 = sp18 - M2C_FIELD(arg2, f32 *, 8);
                    sp34 = temp_f2;
                    sp38 = temp_f1_2;
                    M2C_ERROR(/* unknown instruction: c1 0xc0044 */);
                    var_f20 = temp_f1_2;
                    if (temp_f1_2 != temp_f1_2) {
                        var_f20 = func_003F3E80((temp_f0 * temp_f0) + (temp_f2 * temp_f2) + (temp_f1_2 * temp_f1_2));
                    }
                    sp0 = sp10;
                    sp8 = sp18;
                    M2C_FIELD(arg1, f32 *, 0) = sp14;
                    sp4 = sp14;
                }
                var_8 = var_17;
                var_17 += 0x50;
                var_18 += 0x50;
            } while (var_17 != M2C_FIELD(M2C_FIELD(arg1, void **, 4), s32 *, 4));
        }
        M2C_FIELD(arg0, f32 *, 0) = sp0;
        M2C_FIELD(arg0, f32 *, 4) = sp4;
        M2C_FIELD(arg0, f32 *, 8) = sp8;
    } else {
        M2C_FIELD(arg0, f32 *, 0) = 0.0f;
        M2C_FIELD(arg0, f32 *, 4) = 0.0f;
        M2C_FIELD(arg0, f32 *, 8) = 0.0f;
    }
    return arg0;
}
