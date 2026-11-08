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

void func_0036A5A8(void *arg0, void *arg1, void *arg2, s32 arg3) {
    void *temp_2;
    void *temp_2_2;
    void *temp_3;
    void *temp_3_2;
    void *temp_4;
    void *temp_4_2;
    void *temp_5;
    void *temp_5_2;
    void *temp_6;
    void *temp_7;
    void *temp_8;
    void *var_11;
    void *var_12;
    void *var_13;

    if ((M2C_FIELD(arg0, s32 *, 0xD0) == 0) || (var_11 = arg2 + 0x10, ((((s64) (M2C_FIELD(M2C_FIELD(arg1, void **, 0x4C), s64 *, 0x78) << 0x1E) >> 0x20) & 1) == 0)) || (var_12 = arg2 + 0x20, var_13 = arg2 + 0x30, (arg3 != 0))) {
        temp_3 = arg0 + 0x90;
        M2C_FIELD(arg0, s32 *, 0xD0) = 1;
        temp_4 = arg2 + 0x10;
        temp_2 = arg0 + 0xA0;
        temp_5 = arg2 + 0x20;
        temp_7 = arg0 + 0xB0;
        temp_6 = arg2 + 0x30;
        temp_8 = arg0 + 0xC0;
        M2C_FIELD(arg0, f32 *, 0x90) = (f32) M2C_FIELD(arg2, f32 *, 0);
        var_11 = temp_4;
        var_12 = temp_5;
        var_13 = temp_6;
        M2C_FIELD(temp_3, f32 *, 4) = (f32) M2C_FIELD(arg2, f32 *, 4);
        M2C_FIELD(temp_3, f32 *, 8) = (f32) M2C_FIELD(arg2, f32 *, 8);
        M2C_FIELD(temp_3, f32 *, 0xC) = (f32) M2C_FIELD(arg2, f32 *, 0xC);
        M2C_FIELD(arg0, f32 *, 0xA0) = (f32) M2C_FIELD(arg2, f32 *, 0x10);
        M2C_FIELD(temp_2, f32 *, 4) = (f32) M2C_FIELD(temp_4, f32 *, 4);
        M2C_FIELD(temp_2, f32 *, 8) = (f32) M2C_FIELD(temp_4, f32 *, 8);
        M2C_FIELD(temp_2, f32 *, 0xC) = (f32) M2C_FIELD(temp_4, f32 *, 0xC);
        M2C_FIELD(arg0, f32 *, 0xB0) = (f32) M2C_FIELD(arg2, f32 *, 0x20);
        M2C_FIELD(temp_7, f32 *, 4) = (f32) M2C_FIELD(temp_5, f32 *, 4);
        M2C_FIELD(temp_7, f32 *, 8) = (f32) M2C_FIELD(temp_5, f32 *, 8);
        M2C_FIELD(temp_7, f32 *, 0xC) = (f32) M2C_FIELD(temp_5, f32 *, 0xC);
        M2C_FIELD(arg0, f32 *, 0xC0) = (f32) M2C_FIELD(arg2, f32 *, 0x30);
        M2C_FIELD(temp_8, f32 *, 4) = (f32) M2C_FIELD(temp_6, f32 *, 4);
        M2C_FIELD(temp_8, f32 *, 8) = (f32) M2C_FIELD(temp_6, f32 *, 8);
        M2C_FIELD(temp_8, f32 *, 0xC) = (f32) M2C_FIELD(temp_6, f32 *, 0xC);
    }
    temp_2_2 = arg0 + 0x50;
    temp_3_2 = arg0 + 0x60;
    temp_4_2 = arg0 + 0x70;
    M2C_FIELD(arg0, f32 *, 0x50) = (f32) M2C_FIELD(arg2, f32 *, 0);
    temp_5_2 = arg0 + 0x80;
    M2C_FIELD(temp_2_2, f32 *, 4) = (f32) M2C_FIELD(arg2, f32 *, 4);
    M2C_FIELD(temp_2_2, f32 *, 8) = (f32) M2C_FIELD(arg2, f32 *, 8);
    M2C_FIELD(temp_2_2, f32 *, 0xC) = (f32) M2C_FIELD(arg2, f32 *, 0xC);
    M2C_FIELD(arg0, f32 *, 0x60) = (f32) M2C_FIELD(arg2, f32 *, 0x10);
    M2C_FIELD(temp_3_2, f32 *, 4) = (f32) M2C_FIELD(var_11, f32 *, 4);
    M2C_FIELD(temp_3_2, f32 *, 8) = (f32) M2C_FIELD(var_11, f32 *, 8);
    M2C_FIELD(temp_3_2, f32 *, 0xC) = (f32) M2C_FIELD(var_11, f32 *, 0xC);
    M2C_FIELD(arg0, f32 *, 0x70) = (f32) M2C_FIELD(arg2, f32 *, 0x20);
    M2C_FIELD(temp_4_2, f32 *, 4) = (f32) M2C_FIELD(var_12, f32 *, 4);
    M2C_FIELD(temp_4_2, f32 *, 8) = (f32) M2C_FIELD(var_12, f32 *, 8);
    M2C_FIELD(temp_4_2, f32 *, 0xC) = (f32) M2C_FIELD(var_12, f32 *, 0xC);
    M2C_FIELD(arg0, f32 *, 0x80) = (f32) M2C_FIELD(arg2, f32 *, 0x30);
    M2C_FIELD(temp_5_2, f32 *, 4) = (f32) M2C_FIELD(var_13, f32 *, 4);
    M2C_FIELD(temp_5_2, f32 *, 8) = (f32) M2C_FIELD(var_13, f32 *, 8);
    M2C_FIELD(temp_5_2, f32 *, 0xC) = (f32) M2C_FIELD(var_13, f32 *, 0xC);
}
