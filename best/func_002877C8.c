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

void **func_00201350();                             /* extern */

void func_002877C8(void *arg0) {
    M2C_UNK32 sp0;
    M2C_UNK32 sp4;
    M2C_UNK32 sp8;
    M2C_UNK32 spC;
    void *temp_2;
    void *temp_3;
    void *temp_4;
    void *temp_5;
    void *temp_6;

    temp_3 = *func_00201350();
    sp4 = 0;
    sp8 = 0;
    temp_2 = temp_3 + 0x90;
    spC = 0;
    temp_4 = temp_3 + 0xA0;
    sp0 = 0x3F800000;
    temp_6 = temp_3 + 0xB0;
    M2C_FIELD(temp_3, f32 *, 0x90) = 1.0f;
    temp_5 = temp_3 + 0xC0;
    M2C_FIELD(temp_2, M2C_UNK32 *, 4) = sp4;
    M2C_FIELD(temp_2, M2C_UNK32 *, 8) = sp8;
    M2C_FIELD(temp_2, M2C_UNK32 *, 0xC) = spC;
    sp0 = 0;
    sp4 = 0x3F800000;
    sp8 = 0;
    spC = 0;
    M2C_FIELD(temp_3, M2C_UNK32 *, 0xA0) = sp0;
    M2C_FIELD(temp_4, M2C_UNK32 *, 4) = sp4;
    M2C_FIELD(temp_4, M2C_UNK32 *, 8) = sp8;
    M2C_FIELD(temp_4, M2C_UNK32 *, 0xC) = spC;
    sp4 = sp0;
    sp8 = 0x3F800000;
    spC = sp0;
    M2C_FIELD(temp_3, M2C_UNK32 *, 0xB0) = sp0;
    M2C_FIELD(temp_6, M2C_UNK32 *, 4) = sp4;
    M2C_FIELD(temp_6, M2C_UNK32 *, 8) = sp8;
    M2C_FIELD(temp_6, M2C_UNK32 *, 0xC) = spC;
    spC = 0x3F800000;
    sp4 = sp0;
    sp8 = sp0;
    M2C_FIELD(temp_3, M2C_UNK32 *, 0xC0) = sp0;
    M2C_FIELD(temp_5, M2C_UNK32 *, 4) = sp4;
    M2C_FIELD(temp_5, M2C_UNK32 *, 8) = sp8;
    M2C_FIELD(temp_5, M2C_UNK32 *, 0xC) = spC;
    M2C_FIELD(temp_3, M2C_UNK32 *, 0xC0) = sp0;
    M2C_FIELD(temp_5, M2C_UNK32 *, 8) = sp0;
    M2C_FIELD(temp_5, M2C_UNK32 *, 4) = sp0;
    M2C_FIELD(arg0, M2C_UNK32 *, 0x18) = sp0;
    M2C_FIELD(arg0, f32 *, 0x20) = 10.0f;
    M2C_FIELD(arg0, M2C_UNK32 *, 0x14) = sp0;
}
