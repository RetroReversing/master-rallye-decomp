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

void func_0029D850(void *arg0, void *arg1) {
    f32 sp4;
    M2C_UNK32 sp8;
    f32 temp_f0;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f2;
    s32 temp_3;
    void *temp_2;
    void *temp_3_2;

    temp_3 = M2C_FIELD(arg0, s32 *, 0x18);
    temp_f2 = (f32) temp_3;
    temp_f1 = temp_f2 + ((f32) (M2C_FIELD(arg0, s32 *, 0x1C) - temp_3) * func_001E3610(func_001E4280(), (s32) (arg0 + 0x10)));
    M2C_FIELD(arg0, f32 *, 0x20) = temp_f1;
    if (temp_f1 < temp_f2) {
        M2C_FIELD(arg0, f32 *, 0x20) = temp_f2;
    }
    temp_f1_2 = (f32) M2C_FIELD(arg0, s32 *, 0x1C);
    if (temp_f1_2 < M2C_FIELD(arg0, f32 *, 0x20)) {
        M2C_FIELD(arg0, f32 *, 0x20) = temp_f1_2;
    }
    temp_3_2 = M2C_FIELD(arg1, void **, 0x4C);
    sp8 = 0;
    temp_f0 = M2C_FIELD(arg0, f32 *, 0x24) + (f32) M2C_FIELD(arg0, s32 *, 0x2C);
    temp_2 = temp_3_2 + 0x50;
    sp4 = temp_f0;
    M2C_FIELD(temp_3_2, f32 *, 0x50) = (f32) (M2C_FIELD(arg0, f32 *, 0x20) + (f32) M2C_FIELD(arg0, s32 *, 0x28));
    M2C_FIELD(temp_2, f32 *, 4) = temp_f0;
    M2C_FIELD(temp_2, f32 *, 0xC) = 1.0f;
    M2C_FIELD(temp_2, M2C_UNK32 *, 8) = sp8;
}
