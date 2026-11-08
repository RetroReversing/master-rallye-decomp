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

s32 func_002971B0(s32);                             /* extern */
s32 func_00297340(s32, s32);                        /* extern */
s32 func_00297500();                                /* extern */

void func_00297018(void *arg0) {
    f32 temp_f2;
    f32 var_f0;

    if ((func_00297340(func_00297500(), M2C_FIELD(arg0, s32 *, 0xC)) != 0) || (func_002971B0(func_00297500()) == M2C_FIELD(arg0, s32 *, 0xC))) {
        if (M2C_FIELD(arg0, s32 *, 0x64) == 0) {
            if (M2C_FIELD(arg0, f32 *, 0x5C) <= 0.0001f) {
                M2C_FIELD(arg0, s32 *, 0x64) = 1;
            }
            goto block_8;
        }
        goto block_11;
    }
    if (M2C_FIELD(arg0, s32 *, 0x64) != 0) {
        if (M2C_FIELD(arg0, f32 *, 0x2C) <= M2C_FIELD(arg0, f32 *, 0x5C)) {
            M2C_FIELD(arg0, s32 *, 0x64) = 0;
        }
block_8:
        if (M2C_FIELD(arg0, s32 *, 0x64) == 0) {
            goto block_13;
        }
block_11:
        temp_f2 = M2C_FIELD(arg0, f32 *, 0x5C);
        if ((temp_f2 - M2C_FIELD(arg0, f32 *, 0x2C)) < 0.0001f) {
            M2C_FIELD(arg0, s32 *, 0x60) = 1;
            var_f0 = temp_f2 + 1.0f;
            goto block_15;
        }
    } else {
block_13:
        if (M2C_FIELD(arg0, f32 *, 0x5C) > 0.0f) {
            M2C_FIELD(arg0, s32 *, 0x60) = 0;
            var_f0 = M2C_FIELD(arg0, f32 *, 0x5C) - 1.0f;
block_15:
            M2C_FIELD(arg0, f32 *, 0x5C) = var_f0;
        }
    }
}
