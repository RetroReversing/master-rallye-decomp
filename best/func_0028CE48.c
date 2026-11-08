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

M2C_UNK func_001525D8(void *, void *, void *, f32); /* extern */
M2C_UNK func_0028CE38();                            /* extern */

void func_0028CE48(void *arg0, void *arg1) {
    M2C_UNK32 sp0;
    M2C_UNK32 sp4;
    M2C_UNK32 sp8;
    M2C_UNK32 spC;
    void *temp_16;
    void *temp_2;
    void *temp_2_2;
    void *temp_2_3;
    void *temp_2_4;
    void *temp_3;
    void *temp_3_2;
    void *temp_4;
    void *temp_4_2;
    void *temp_5;
    void *temp_6;

    if (M2C_FIELD(arg0, s32 *, 0xC) == 0) {
        func_0028CE38();
    }
    temp_2 = M2C_FIELD(arg1, void **, 0x50);
    temp_16 = arg0 + 0x14;
    temp_2_2 = temp_2 + 0x50;
    M2C_FIELD(arg0, M2C_UNK32 *, 0x14) = (M2C_UNK32) M2C_FIELD(temp_2, M2C_UNK32 *, 0x50);
    M2C_FIELD(temp_16, f32 *, 4) = (f32) M2C_FIELD(temp_2_2, f32 *, 4);
    M2C_FIELD(temp_16, f32 *, 8) = (f32) M2C_FIELD(temp_2_2, f32 *, 8);
    sp4 = 0;
    temp_3 = M2C_FIELD(arg1, void **, 0x50);
    sp0 = 0x3F800000;
    sp8 = 0;
    temp_2_3 = temp_3 + 0x20;
    spC = 0;
    temp_4 = temp_3 + 0x30;
    M2C_FIELD(temp_3, f32 *, 0x20) = 1.0f;
    temp_5 = temp_3 + 0x40;
    temp_6 = temp_3 + 0x50;
    M2C_FIELD(temp_2_3, M2C_UNK32 *, 4) = sp4;
    M2C_FIELD(temp_2_3, M2C_UNK32 *, 8) = sp8;
    M2C_FIELD(temp_2_3, M2C_UNK32 *, 0xC) = spC;
    sp0 = 0;
    sp4 = 0x3F800000;
    sp8 = 0;
    spC = 0;
    M2C_FIELD(temp_3, M2C_UNK32 *, 0x30) = sp0;
    M2C_FIELD(temp_4, M2C_UNK32 *, 4) = sp4;
    M2C_FIELD(temp_4, M2C_UNK32 *, 8) = sp8;
    M2C_FIELD(temp_4, M2C_UNK32 *, 0xC) = spC;
    sp4 = sp0;
    sp8 = 0x3F800000;
    spC = sp0;
    M2C_FIELD(temp_3, M2C_UNK32 *, 0x40) = sp0;
    M2C_FIELD(temp_5, M2C_UNK32 *, 4) = sp4;
    M2C_FIELD(temp_5, M2C_UNK32 *, 8) = sp8;
    M2C_FIELD(temp_5, M2C_UNK32 *, 0xC) = spC;
    spC = 0x3F800000;
    sp4 = sp0;
    sp8 = sp0;
    M2C_FIELD(temp_3, M2C_UNK32 *, 0x50) = sp0;
    M2C_FIELD(temp_6, M2C_UNK32 *, 4) = sp4;
    M2C_FIELD(temp_6, M2C_UNK32 *, 8) = sp8;
    M2C_FIELD(temp_6, M2C_UNK32 *, 0xC) = spC;
    temp_4_2 = M2C_FIELD(arg1, void **, 0x50) + 0x20;
    func_001525D8(temp_4_2, temp_4_2, temp_6, M2C_FIELD(arg0, f32 *, 0x10));
    temp_3_2 = M2C_FIELD(arg1, void **, 0x50);
    temp_2_4 = temp_3_2 + 0x50;
    M2C_FIELD(temp_3_2, M2C_UNK32 *, 0x50) = (M2C_UNK32) M2C_FIELD(arg0, M2C_UNK32 *, 0x14);
    M2C_FIELD(temp_2_4, f32 *, 4) = (f32) M2C_FIELD(temp_16, f32 *, 4);
    M2C_FIELD(temp_2_4, f32 *, 0xC) = 1.0f;
    M2C_FIELD(temp_2_4, f32 *, 8) = (f32) M2C_FIELD(temp_16, f32 *, 8);
}
