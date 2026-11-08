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

f32 func_00171108(s32 *, void *, s32);              /* extern */
f32 func_00171220(s32 *, void *, s32);              /* extern */

f32 func_00171010(s32 *arg0, void *arg1, s32 arg2) {
    f32 var_f20;

    var_f20 = 0.0f;
    if (M2C_FIELD(arg1, s32 *, 0x1C) != 0) {
        if (*arg0 == 1) {
            goto block_5;
        }
        goto block_6;
    }
    if (*arg0 == 2) {
block_5:
        var_f20 = func_00171220(arg0, arg1, arg2) + 0.0f;
        goto block_8;
    }
block_6:
    if (*arg0 == 0) {
        var_f20 = 0.0f + func_00171220(arg0, arg1, arg2);
block_8:
        if ((*arg0 == 0) && (M2C_FIELD(M2C_FIELD(M2C_FIELD(arg1, void **, 0x18), void **, 0x18), f32 *, 8) == 0.0f)) {
            var_f20 += func_00171108(arg0, arg1, arg2);
        }
    }
    return var_f20 * 250.0f * M2C_FIELD(arg1, f32 *, 0x44);
}
