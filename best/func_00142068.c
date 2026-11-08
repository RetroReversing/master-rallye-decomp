/* machine draft (m2c) for ee-gcc-2.9-991111 -O2 -G0, tried by autopilot */
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

void func_00142068(void *arg1, f32 fparg0) {
    f32 sp0;
    f32 sp4;
    f32 sp8;
    f32 spC;
    f32 temp_f12;
    f32 var_f12;
    f32 var_f1;

    var_f12 = fparg0;
    var_f1 = 1.0f;
    if (var_f12 > 1.0f) {
        var_f12 = 1.0f;
    }
    if (var_f12 < 0.0f) {
        var_f12 = 0.0f;
    }
    temp_f12 = 1.0f - var_f12;
    if (temp_f12 > 0.8f) {
        M2C_FIELD(arg1, M2C_UNK32 *, 0xC) = 0x3F800000;
        sp0 = 1.0f;
        sp4 = 1.0f;
        sp8 = 1.0f;
        spC = 1.0f;
        M2C_FIELD(arg1, f32 *, 0) = 1.0f;
        M2C_FIELD(arg1, f32 *, 4) = 1.0f;
        M2C_FIELD(arg1, f32 *, 8) = 1.0f;
    } else {
        if ((temp_f12 > 0.6f) && (temp_f12 <= 0.8f)) {
            M2C_FIELD(arg1, f32 *, 8) = 0.0f;
            M2C_FIELD(arg1, M2C_UNK32 *, 0xC) = 0x3F800000;
            sp0 = 0.0f;
            sp4 = 1.0f;
            sp8 = 0.0f;
            spC = 1.0f;
            M2C_FIELD(arg1, f32 *, 0) = 0.0f;
            goto block_20;
        }
        if ((temp_f12 > 0.4f) && (temp_f12 <= 0.6f)) {
            sp8 = 0.0f;
            M2C_FIELD(arg1, M2C_UNK32 *, 0xC) = 0x3F800000;
            M2C_FIELD(arg1, f32 *, 8) = sp8;
            sp0 = 1.0f;
            sp4 = 1.0f;
            spC = 1.0f;
            M2C_FIELD(arg1, f32 *, 0) = 1.0f;
            M2C_FIELD(arg1, f32 *, 4) = 1.0f;
        } else {
            if (!(temp_f12 > 0.2f)) {
                sp4 = 0.0f;
                goto block_19;
            }
            if (!(temp_f12 <= 0.4f)) {
                sp4 = 0.0f;
block_19:
                var_f1 = sp4;
                M2C_FIELD(arg1, M2C_UNK32 *, 0xC) = 0x3F800000;
                M2C_FIELD(arg1, f32 *, 8) = var_f1;
                sp0 = 1.0f;
                sp8 = 0.0f;
                spC = 1.0f;
                M2C_FIELD(arg1, f32 *, 0) = 1.0f;
block_20:
                M2C_FIELD(arg1, f32 *, 4) = var_f1;
            } else {
                M2C_FIELD(arg1, f32 *, 4) = 0.75f;
                M2C_FIELD(arg1, f32 *, 8) = 0.3f;
                M2C_FIELD(arg1, M2C_UNK32 *, 0xC) = 0x3F800000;
                sp0 = 1.0f;
                sp4 = 0.75f;
                sp8 = 0.3f;
                spC = 1.0f;
                M2C_FIELD(arg1, f32 *, 0) = 1.0f;
            }
        }
    }
    M2C_FIELD(arg1, M2C_UNK32 *, 0xC) = 0;
}
