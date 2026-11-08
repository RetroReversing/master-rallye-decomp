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

void func_001DB620(void *arg0, void *arg1) {
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f1_3;
    f32 temp_f1_4;
    f32 temp_f1_5;
    f32 temp_f1_6;

    temp_f1 = M2C_FIELD(arg1, f32 *, 0);
    if (temp_f1 < M2C_FIELD(arg0, f32 *, 0)) {
        M2C_FIELD(arg0, f32 *, 0) = temp_f1;
    }
    temp_f1_2 = M2C_FIELD(arg1, f32 *, 0);
    if (M2C_FIELD(arg0, f32 *, 0xC) < temp_f1_2) {
        M2C_FIELD(arg0, f32 *, 0xC) = temp_f1_2;
    }
    temp_f1_3 = M2C_FIELD(arg1, f32 *, 4);
    if (temp_f1_3 < M2C_FIELD(arg0, f32 *, 4)) {
        M2C_FIELD(arg0, f32 *, 4) = temp_f1_3;
    }
    temp_f1_4 = M2C_FIELD(arg1, f32 *, 4);
    if (M2C_FIELD(arg0, f32 *, 0x10) < temp_f1_4) {
        M2C_FIELD(arg0, f32 *, 0x10) = temp_f1_4;
    }
    temp_f1_5 = M2C_FIELD(arg1, f32 *, 8);
    if (temp_f1_5 < M2C_FIELD(arg0, f32 *, 8)) {
        M2C_FIELD(arg0, f32 *, 8) = temp_f1_5;
    }
    temp_f1_6 = M2C_FIELD(arg1, f32 *, 8);
    if (M2C_FIELD(arg0, f32 *, 0x14) < temp_f1_6) {
        M2C_FIELD(arg0, f32 *, 0x14) = temp_f1_6;
    }
}
