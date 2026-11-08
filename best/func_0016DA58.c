/* machine draft (m2c) for ee-gcc-2.95.2 -O2 -G0 -fno-schedule-insns, tried by autopilot */
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

f32 func_0016DA38(void *);                          /* extern */

void *func_0016DA58(void *arg0, void *arg1) {
    f32 sp0;
    f32 sp4;
    f32 sp8;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f2;
    f32 temp_f4;
    void *temp_3;

    sp0 = 0.0f;
    sp4 = 0.0f;
    sp8 = 0.0f;
    temp_3 = M2C_FIELD(arg1, void **, 8);
    temp_f2 = func_0016DA38(arg1);
    if (M2C_FIELD(temp_3, s32 *, 0x3C) != 0) {
        temp_f4 = M2C_FIELD(temp_3, f32 *, 0xC);
        temp_f1 = M2C_FIELD(temp_3, f32 *, 0x10);
        temp_f0 = temp_f2 * M2C_FIELD(temp_3, f32 *, 0x14);
        sp4 = (temp_f2 * temp_f4 * temp_f1) / 12.0f;
        sp8 = (temp_f0 * temp_f1) / 12.0f;
        sp0 = (temp_f0 * temp_f4) / 12.0f;
    } else {
        temp_f0_2 = M2C_FIELD(temp_3, f32 *, 0x30);
        sp0 = temp_f2 * (temp_f0_2 * temp_f0_2);
        temp_f1_2 = M2C_FIELD(temp_3, f32 *, 0x34);
        sp4 = temp_f2 * (temp_f1_2 * temp_f1_2);
        temp_f0_3 = M2C_FIELD(temp_3, f32 *, 0x38);
        sp8 = temp_f2 * (temp_f0_3 * temp_f0_3);
    }
    M2C_FIELD(arg0, f32 *, 0) = sp0;
    M2C_FIELD(arg0, f32 *, 4) = sp4;
    M2C_FIELD(arg0, f32 *, 8) = sp8;
    return arg0;
}
