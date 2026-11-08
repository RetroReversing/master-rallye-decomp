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

s32 func_001FD110(void *arg0, void *arg1) {
    f32 temp_f0;
    f32 temp_f1;
    f32 temp_f2;
    f32 var_f1;
    s32 var_2;
    void *temp_2;
    void *temp_3;

    temp_3 = arg1 + 0x40;
    if ((M2C_FIELD(arg0, s32 *, 0x14) != 0) || (var_2 = 1, (M2C_FIELD(arg0, s32 *, 0x1C) != 0))) {
        temp_2 = arg0 + 0x30;
        temp_f0 = M2C_FIELD(arg0, f32 *, 0x30) - M2C_FIELD(arg1, f32 *, 0x40);
        temp_f2 = M2C_FIELD(temp_2, f32 *, 4) - M2C_FIELD(temp_3, f32 *, 4);
        temp_f1 = M2C_FIELD(temp_2, f32 *, 8) - M2C_FIELD(temp_3, f32 *, 8);
        var_f1 = temp_f1 * temp_f1;
        M2C_ERROR(/* unknown instruction: c1 0xc0044 */);
        if (var_f1 != var_f1) {
            var_f1 = func_003F3E80((temp_f0 * temp_f0) + (temp_f2 * temp_f2) + var_f1);
        }
        if ((M2C_FIELD(arg0, s32 *, 0x14) == 0) || (var_2 = 0, !(M2C_FIELD(arg0, f32 *, 0x10) <= var_f1))) {
            var_2 = 1;
            if (M2C_FIELD(arg0, s32 *, 0x1C) != 0) {
                var_2 = 0;
                if (!(var_f1 <= M2C_FIELD(arg0, f32 *, 0x18))) {
                    var_2 = 1;
                }
            }
        }
    }
    return var_2;
}
