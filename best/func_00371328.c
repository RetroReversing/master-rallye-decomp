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

f32 func_003F3E80(void *, s32, void *, s32, f32);   /* extern */

void func_00371328(void *arg0) {
    f32 sp8;
    f32 temp_f0;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f1_3;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f3;
    f32 var_f0;
    f32 var_f12;
    s32 temp_7;
    s32 var_5;
    void *temp_2;
    void *temp_2_2;
    void *temp_2_3;
    void *var_2;
    void *var_4;
    void *var_6;

    var_f12 = 0.0f;
    var_6 = arg0 + 0x50;
    var_4 = M2C_FIELD(arg0, void **, 0x18);
    var_5 = M2C_FIELD(var_4, s32 *, 0);
    sp8 = 0.0f;
    M2C_FIELD(arg0, f32 *, 0x50) = 0.0f;
    M2C_FIELD(var_6, f32 *, 4) = 0.0f;
    temp_7 = (s32) ((M2C_FIELD(var_4, s32 *, 4) - var_5) * 0xAAAAAAAB) >> 4;
    M2C_FIELD(var_6, f32 *, 8) = sp8;
    if (temp_7 > 0) {
        var_4 = var_6;
        var_5 = temp_7;
        var_6 = NULL;
        do {
            var_5 -= 1;
            temp_2 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x18), s32 *, 0) + var_6;
            temp_f1 = M2C_FIELD(temp_2, f32 *, 0x20);
            var_6 += 0x30;
            temp_2_2 = temp_2 + 0x20;
            M2C_FIELD(arg0, f32 *, 0x50) = (f32) (M2C_FIELD(arg0, f32 *, 0x50) + temp_f1);
            M2C_FIELD(var_4, f32 *, 4) = (f32) (M2C_FIELD(var_4, f32 *, 4) + M2C_FIELD(temp_2_2, f32 *, 4));
            M2C_FIELD(var_4, f32 *, 8) = (f32) (M2C_FIELD(var_4, f32 *, 8) + M2C_FIELD(temp_2_2, f32 *, 8));
        } while (var_5 != 0);
    }
    temp_2_3 = arg0 + 0x50;
    temp_f1_2 = 1.0f / (f32) temp_7;
    M2C_FIELD(arg0, f32 *, 0x50) = (f32) (M2C_FIELD(arg0, f32 *, 0x50) * temp_f1_2);
    temp_f2 = M2C_FIELD(temp_2_3, f32 *, 4) * temp_f1_2;
    var_f0 = M2C_FIELD(temp_2_3, f32 *, 8) * temp_f1_2;
    M2C_FIELD(temp_2_3, f32 *, 4) = temp_f2;
    M2C_FIELD(temp_2_3, f32 *, 8) = var_f0;
    if (temp_7 > 0) {
        temp_f3 = var_f0;
        var_5 = temp_7;
        var_2 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x18), s32 *, 0) + 0x20;
        do {
            temp_f0 = M2C_FIELD(arg0, f32 *, 0x50) - M2C_FIELD(var_2, f32 *, 0);
            temp_f2_2 = temp_f2 - M2C_FIELD(var_2, f32 *, 4);
            temp_f1_3 = temp_f3 - M2C_FIELD(var_2, f32 *, 8);
            var_f0 = (temp_f0 * temp_f0) + (temp_f2_2 * temp_f2_2) + (temp_f1_3 * temp_f1_3);
            if (var_f12 < var_f0) {
                var_f12 = var_f0;
            }
            var_5 -= 1;
            var_2 += 0x30;
        } while (var_5 != 0);
    }
    M2C_ERROR(/* unknown instruction: c1 0xc0004 */);
    M2C_FIELD(arg0, f32 *, 0x4C) = var_f12;
    if (var_f0 != var_f0) {
        var_f0 = func_003F3E80(var_4, var_5, var_6, temp_7, var_f12);
    }
    M2C_FIELD(arg0, f32 *, 0x48) = var_f0;
}
