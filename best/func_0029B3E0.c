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

void func_0029B3E0(void *arg0, void *arg1) {
    f32 temp_f1;
    void *temp_2;
    void *temp_2_2;
    void *temp_2_3;
    void *temp_2_4;
    void *temp_6;

    temp_6 = arg0 + 0x54;
    temp_f1 = M2C_FIELD(arg0, f32 *, 0x10);
    M2C_FIELD(arg0, f32 *, 0x48) = temp_f1;
    M2C_FIELD(arg0, s32 *, 0x3C) = 0;
    M2C_FIELD(arg0, s32 *, 0x40) = 0;
    M2C_FIELD(arg0, f32 *, 0x4C) = (f32) ((M2C_FIELD(arg0, f32 *, 0x14) - temp_f1) / (f32) (M2C_FIELD(arg0, s32 *, 0x1C) - M2C_FIELD(arg0, s32 *, 0x18)));
    temp_2 = M2C_FIELD(arg1, void **, 0x50);
    temp_2_2 = temp_2 + 0x50;
    M2C_FIELD(arg0, f32 *, 0x54) = (f32) M2C_FIELD(temp_2, f32 *, 0x50);
    M2C_FIELD(temp_6, f32 *, 4) = (f32) M2C_FIELD(temp_2_2, f32 *, 4);
    M2C_FIELD(temp_6, f32 *, 8) = (f32) M2C_FIELD(temp_2_2, f32 *, 8);
    temp_2_3 = M2C_FIELD(arg1, void **, 0x4C);
    if (temp_2_3 != NULL) {
        temp_2_4 = temp_2_3 + 0x50;
        M2C_FIELD(arg0, f32 *, 0x54) = (f32) M2C_FIELD(temp_2_3, f32 *, 0x50);
        M2C_FIELD(temp_6, f32 *, 4) = (f32) M2C_FIELD(temp_2_4, f32 *, 4);
        M2C_FIELD(temp_6, f32 *, 8) = (f32) M2C_FIELD(temp_2_4, f32 *, 8);
    }
    M2C_FIELD(arg0, s32 *, 0x6C) = 1;
}
