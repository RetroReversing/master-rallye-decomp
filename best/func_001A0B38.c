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

s32 *func_001A12E0();                               /* extern */
M2C_UNK func_001E3E90(s32, s32, f32);               /* extern */

void func_001A0B38(s32 arg1, s32 arg2, void *arg3, void *arg4) {
    f32 temp_f0;
    f32 temp_f21;
    f32 var_f1;
    f32 var_f20;
    f32 var_f22;
    s32 temp_16;

    temp_16 = M2C_FIELD(arg3, s32 *, 0x28);
    temp_f0 = M2C_FIELD(arg3, f32 *, 0x40);
    var_f20 = 10.0f;
    var_f22 = 1.0f;
    temp_f21 = fabsf(temp_f0 * M2C_FIELD(arg3, f32 *, 0xC)) + fabsf(temp_f0 * M2C_FIELD(M2C_FIELD(arg4, void **, 8), f32 *, 0x14));
    if (temp_16 == *func_001A12E0()) {
        var_f20 = 15.0f;
        var_f1 = 0.02f;
        goto block_8;
    }
    if (temp_16 == M2C_FIELD(func_001A12E0(), s32 *, 4)) {
        var_f22 = (temp_f21 - 10.0f) * 0.1f;
    } else if (temp_16 == M2C_FIELD(func_001A12E0(), s32 *, 0xC)) {
        var_f20 = 8.0f;
    } else if (temp_16 == M2C_FIELD(func_001A12E0(), s32 *, 8)) {
        var_f20 = 8.0f;
        var_f1 = 0.01f;
block_8:
        var_f22 = (temp_f21 - var_f20) * var_f1;
    } else if (temp_16 == M2C_FIELD(func_001A12E0(), s32 *, 0x10)) {
        var_f20 = 0.0f;
    }
    if (var_f22 > 1.0f) {
        var_f22 = 1.0f;
    }
    if (var_f20 < temp_f21) {
        func_001E3E90(arg1, arg2, var_f22);
        return;
    }
    func_001E3E90(arg1, arg2, 0.0f);
}
