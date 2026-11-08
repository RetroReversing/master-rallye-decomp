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

s32 func_001D4010(void *);                          /* extern */
s32 func_002CDD18(s32);                             /* extern */
s32 func_002CE238(s32, s32, M2C_UNK);               /* extern */
M2C_UNK func_002CE408(s32, f32, f32);               /* extern */
s32 func_002D1460(void *);                          /* extern */
f32 func_003F3E80(f32);                             /* extern */

void func_002D1AF0(void *arg0, void *arg1, void *arg2, s32 arg3, f32 fparg0) {
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f12;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f2;
    f32 temp_f3;
    f32 var_f0;
    f32 var_f12;
    f32 var_f1;
    f32 var_f20;
    s32 temp_2;
    s32 temp_3;
    s32 var_19;
    void *var_16;
    void *var_20;

    temp_3 = M2C_FIELD(arg0, s32 *, 0x1C);
    if (temp_3 != 0) {
        var_20 = arg1 + 0x34;
        if (temp_3 != 1) {

        } else {
            var_20 = arg1 + 0x34;
            if (func_002CDD18(M2C_FIELD(arg0, s32 *, 8)) == 0) {
                M2C_FIELD(arg0, s32 *, 0x1C) = 0;
                goto block_9;
            }
        }
    } else {
        temp_2 = func_002D1460(arg0);
        if (temp_2 >= 0) {
            if (func_002CE238(func_001D4010(arg0 + 0x34), temp_2, 0) != 0) {
                M2C_FIELD(arg0, s32 *, 8) = temp_2;
                M2C_FIELD(arg0, s32 *, 0x1C) = 1;
            } else {
                goto block_9;
            }
        } else {
block_9:
            M2C_FIELD(arg0, s32 *, 8) = -1;
        }
        var_20 = arg1 + 0x34;
    }
    var_f20 = 0.0f;
    if (arg3 > 0) {
        var_16 = arg2;
        var_19 = arg3;
        do {
            temp_f0 = M2C_FIELD(var_16, f32 *, 0) - M2C_FIELD(var_20, f32 *, 0);
            temp_f2 = M2C_FIELD(var_16, f32 *, 4) - M2C_FIELD(var_20, f32 *, 4);
            temp_f1 = M2C_FIELD(var_16, f32 *, 8) - M2C_FIELD(var_20, f32 *, 8);
            var_f1 = temp_f1 * temp_f1;
            M2C_ERROR(/* unknown instruction: c1 0xc0044 */);
            if (var_f1 != var_f1) {
                var_f1 = func_003F3E80((temp_f0 * temp_f0) + (temp_f2 * temp_f2) + var_f1);
            }
            temp_f3 = M2C_FIELD(arg1, f32 *, 0x1C);
            temp_f0_2 = M2C_FIELD(arg1, f32 *, 0x18);
            if (temp_f3 < var_f1) {
                var_f0 = 0.0f;
            } else if (!(var_f1 < temp_f0_2)) {
                var_f0 = ((temp_f3 - var_f1) / (temp_f3 - temp_f0_2)) * M2C_FIELD(arg1, f32 *, 0x10);
            } else {
                var_f0 = M2C_FIELD(arg1, f32 *, 0x10);
            }
            if (arg3 >= 2) {
                var_f20 *= 0.65f;
            }
            var_f20 = (var_f20 + var_f0) * fparg0;
            var_19 -= 1;
            if (var_f20 > 1.0f) {
                var_f20 = 1.0f;
            }
            var_16 += 0xC;
        } while (var_19 != 0);
    }
    if (!(var_f20 < 0.05f)) {
        M2C_FIELD(arg0, f32 *, 0x20) = var_f20;
        M2C_FIELD(arg1, s32 *, 4) = 0;
        temp_f1_2 = M2C_FIELD(arg0, f32 *, 0x20);
        var_f12 = temp_f1_2 * 0.9f;
        if (temp_f1_2 != M2C_FIELD(arg0, f32 *, 0x2C)) {
            if (var_f12 > 1.0f) {
                var_f12 = 1.0f;
            }
            func_002CE408(M2C_FIELD(arg0, s32 *, 8), var_f12, var_f12);
        }
    } else {
        M2C_FIELD(arg0, f32 *, 0x20) = 0.0f;
        temp_f12 = M2C_FIELD(arg0, f32 *, 0x20);
        if (M2C_FIELD(arg0, f32 *, 0x2C) == temp_f12) {
            M2C_FIELD(arg1, s32 *, 4) = 0;
        } else {
            func_002CE408(M2C_FIELD(arg0, s32 *, 8), temp_f12, temp_f12);
            M2C_FIELD(arg1, s32 *, 4) = 0;
        }
    }
    M2C_FIELD(arg0, f32 *, 0x2C) = (f32) M2C_FIELD(arg0, f32 *, 0x20);
}
