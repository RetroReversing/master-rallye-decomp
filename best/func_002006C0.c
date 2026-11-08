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

void func_002006C0(void *arg0) {
    M2C_UNK32 sp0;
    M2C_UNK32 sp4;
    M2C_UNK32 sp8;
    M2C_UNK32 spC;
    M2C_UNK32 temp_f2;
    void *temp_10;
    void *temp_2;
    void *temp_3;
    void *temp_5;
    void *temp_6;
    void *temp_7;
    void *temp_8;
    void *temp_9;

    sp4 = 0;
    temp_2 = arg0 + 0x90;
    temp_f2 = sp4;
    temp_5 = arg0 + 0xA0;
    M2C_FIELD(arg0, s32 *, 4) = 1;
    temp_6 = arg0 + 0xB0;
    M2C_FIELD(arg0, f32 *, 0x38) = 45.0f;
    temp_7 = arg0 + 0xC0;
    sp8 = 0;
    temp_3 = arg0 + 0x40;
    spC = 0;
    temp_8 = arg0 + 0x50;
    sp0 = 0x3F800000;
    temp_9 = arg0 + 0x60;
    M2C_FIELD(arg0, s32 *, 0xD0) = 0;
    temp_10 = arg0 + 0x70;
    M2C_FIELD(arg0, f32 *, 0x90) = 1.0f;
    M2C_FIELD(arg0, f32 *, 0) = 45.0f;
    M2C_FIELD(temp_2, M2C_UNK32 *, 4) = temp_f2;
    M2C_FIELD(temp_2, M2C_UNK32 *, 8) = sp8;
    M2C_FIELD(temp_2, M2C_UNK32 *, 0xC) = spC;
    sp8 = temp_f2;
    spC = temp_f2;
    sp0 = temp_f2;
    sp4 = 0x3F800000;
    M2C_FIELD(arg0, M2C_UNK32 *, 0xA0) = temp_f2;
    M2C_FIELD(temp_5, f32 *, 4) = 1.0f;
    M2C_FIELD(temp_5, M2C_UNK32 *, 8) = sp8;
    M2C_FIELD(temp_5, M2C_UNK32 *, 0xC) = spC;
    sp8 = 0x3F800000;
    spC = temp_f2;
    sp0 = temp_f2;
    sp4 = temp_f2;
    M2C_FIELD(arg0, M2C_UNK32 *, 0xB0) = temp_f2;
    M2C_FIELD(temp_6, M2C_UNK32 *, 4) = temp_f2;
    M2C_FIELD(temp_6, M2C_UNK32 *, 8) = sp8;
    M2C_FIELD(temp_6, M2C_UNK32 *, 0xC) = spC;
    sp8 = temp_f2;
    spC = 0x3F800000;
    sp0 = temp_f2;
    sp4 = temp_f2;
    M2C_FIELD(arg0, M2C_UNK32 *, 0xC0) = temp_f2;
    M2C_FIELD(temp_7, M2C_UNK32 *, 4) = temp_f2;
    M2C_FIELD(temp_7, M2C_UNK32 *, 8) = sp8;
    M2C_FIELD(temp_7, M2C_UNK32 *, 0xC) = spC;
    sp8 = temp_f2;
    spC = temp_f2;
    sp0 = 0x3F800000;
    sp4 = temp_f2;
    M2C_FIELD(arg0, f32 *, 0x40) = 1.0f;
    M2C_FIELD(temp_3, M2C_UNK32 *, 4) = temp_f2;
    M2C_FIELD(temp_3, M2C_UNK32 *, 8) = sp8;
    M2C_FIELD(temp_3, M2C_UNK32 *, 0xC) = spC;
    sp8 = temp_f2;
    sp0 = temp_f2;
    sp4 = 0x3F800000;
    spC = temp_f2;
    M2C_FIELD(arg0, M2C_UNK32 *, 0x50) = temp_f2;
    M2C_FIELD(temp_8, f32 *, 4) = 1.0f;
    M2C_FIELD(temp_8, M2C_UNK32 *, 8) = sp8;
    M2C_FIELD(temp_8, M2C_UNK32 *, 0xC) = spC;
    sp0 = temp_f2;
    sp4 = temp_f2;
    sp8 = 0x3F800000;
    spC = temp_f2;
    M2C_FIELD(arg0, M2C_UNK32 *, 0x60) = temp_f2;
    M2C_FIELD(temp_9, M2C_UNK32 *, 4) = temp_f2;
    M2C_FIELD(temp_9, M2C_UNK32 *, 8) = sp8;
    M2C_FIELD(temp_9, M2C_UNK32 *, 0xC) = spC;
    spC = 0x3F800000;
    sp8 = temp_f2;
    sp0 = temp_f2;
    sp4 = temp_f2;
    M2C_FIELD(arg0, M2C_UNK32 *, 0x70) = temp_f2;
    M2C_FIELD(temp_10, M2C_UNK32 *, 4) = temp_f2;
    M2C_FIELD(temp_10, M2C_UNK32 *, 8) = sp8;
    M2C_FIELD(temp_10, M2C_UNK32 *, 0xC) = spC;
    M2C_FIELD(arg0, s32 *, 0x8C) = 0xF0;
    M2C_FIELD(arg0, s32 *, 0x88) = 0x140;
    M2C_FIELD(arg0, s32 *, 0x80) = 0;
    M2C_FIELD(arg0, s32 *, 0x84) = 0;
}
