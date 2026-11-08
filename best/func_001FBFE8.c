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

void func_001FBFE8(void *arg0) {
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f0_4;
    f32 temp_f0_5;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f1_3;
    f32 temp_f1_4;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f3;
    f32 var_f0;
    f32 var_f0_2;

    temp_f2 = M2C_FIELD(arg0, f32 *, 0x1C);
    temp_f0 = M2C_FIELD(arg0, f32 *, 0);
    temp_f3 = M2C_FIELD(arg0, f32 *, 8);
    M2C_FIELD(arg0, f32 *, 0x14) = temp_f0;
    M2C_FIELD(arg0, f32 *, 0x18) = temp_f2;
    temp_f0_2 = temp_f0 + (temp_f2 * 0.033333335f);
    M2C_FIELD(arg0, f32 *, 0) = temp_f0_2;
    if ((temp_f0_2 < temp_f3) && (temp_f2 < 0.0f)) {
        if (M2C_FIELD(arg0, s32 *, 4) == 0) {
            temp_f0_3 = temp_f3 - temp_f0_2;
            temp_f1 = M2C_FIELD(arg0, f32 *, 0xC);
            if (temp_f0_3 >= 0.0f) {
                var_f0 = temp_f1 - temp_f0_3;
            } else {
                var_f0 = temp_f1 + temp_f0_3;
            }
            M2C_FIELD(arg0, f32 *, 0) = var_f0;
        } else {
            M2C_FIELD(arg0, f32 *, 0) = temp_f3;
        }
    }
    temp_f2_2 = M2C_FIELD(arg0, f32 *, 0);
    temp_f1_2 = M2C_FIELD(arg0, f32 *, 0xC);
    if ((temp_f1_2 < temp_f2_2) && (M2C_FIELD(arg0, f32 *, 0x1C) > 0.0f)) {
        if (M2C_FIELD(arg0, s32 *, 4) == 0) {
            temp_f0_4 = temp_f2_2 - temp_f1_2;
            temp_f1_3 = M2C_FIELD(arg0, f32 *, 8);
            if (temp_f0_4 >= 0.0f) {
                var_f0_2 = temp_f1_3 + temp_f0_4;
            } else {
                var_f0_2 = temp_f1_3 - temp_f0_4;
            }
            M2C_FIELD(arg0, f32 *, 0) = var_f0_2;
        } else {
            M2C_FIELD(arg0, f32 *, 0) = temp_f1_2;
        }
    }
    temp_f1_4 = M2C_FIELD(arg0, f32 *, 0x24);
    if (temp_f1_4 > 0.0f) {
        temp_f0_5 = M2C_FIELD(arg0, f32 *, 0x20) + 0.033333335f;
        M2C_FIELD(arg0, f32 *, 0x20) = temp_f0_5;
        if (temp_f1_4 <= temp_f0_5) {
            M2C_FIELD(arg0, f32 *, 0x24) = 0.0f;
            M2C_FIELD(arg0, f32 *, 0x20) = 0.0f;
        }
    }
}
