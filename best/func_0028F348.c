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

M2C_UNK func_001525D8(void *, void *, void *, M2C_UNK32 *, f32); /* extern */
M2C_UNK func_0028F2E0();                            /* extern */

void func_0028F348(void *arg0, void *arg1) {
    M2C_UNK32 sp0;
    M2C_UNK32 sp4;
    M2C_UNK32 sp8;
    M2C_UNK32 sp10;
    M2C_UNK32 sp14;
    M2C_UNK32 sp18;
    M2C_UNK32 sp1C;
    void *temp_16;
    void *temp_17;
    void *temp_2;
    void *temp_3;
    void *temp_6;

    if (M2C_FIELD(arg0, s32 *, 0xC) == 0) {
        func_0028F2E0();
    }
    temp_17 = M2C_FIELD(arg1, void **, 0x4C);
    temp_16 = temp_17 + 0x50;
    if (temp_17 != NULL) {
        temp_2 = temp_17 + 0x20;
        sp0 = M2C_FIELD(temp_17, M2C_UNK32 *, 0x50);
        temp_3 = temp_17 + 0x30;
        temp_6 = temp_17 + 0x40;
        sp4 = M2C_FIELD(temp_16, M2C_UNK32 *, 4);
        sp10 = 0x3F800000;
        sp1C = 0;
        sp14 = 0;
        sp18 = 0;
        sp8 = M2C_FIELD(temp_16, M2C_UNK32 *, 8);
        M2C_FIELD(temp_17, f32 *, 0x20) = 1.0f;
        M2C_FIELD(temp_2, M2C_UNK32 *, 4) = sp14;
        M2C_FIELD(temp_2, M2C_UNK32 *, 8) = sp18;
        M2C_FIELD(temp_2, M2C_UNK32 *, 0xC) = sp1C;
        sp10 = 0;
        M2C_FIELD(&sp10, f32 *, 4) = 1.0f;
        sp1C = 0;
        sp18 = 0;
        M2C_FIELD(temp_17, M2C_UNK32 *, 0x30) = sp10;
        M2C_FIELD(temp_3, M2C_UNK32 *, 4) = sp14;
        M2C_FIELD(temp_3, M2C_UNK32 *, 8) = sp18;
        M2C_FIELD(temp_3, M2C_UNK32 *, 0xC) = sp1C;
        sp10 = 0;
        sp14 = 0;
        M2C_FIELD(&sp10, f32 *, 8) = 1.0f;
        sp1C = 0;
        M2C_FIELD(temp_17, M2C_UNK32 *, 0x40) = sp10;
        M2C_FIELD(temp_6, M2C_UNK32 *, 4) = sp14;
        M2C_FIELD(temp_6, M2C_UNK32 *, 8) = sp18;
        M2C_FIELD(temp_6, M2C_UNK32 *, 0xC) = sp1C;
        sp10 = 0;
        sp14 = 0;
        sp18 = 0;
        M2C_FIELD(&sp10, f32 *, 0xC) = 1.0f;
        M2C_FIELD(temp_17, M2C_UNK32 *, 0x50) = sp10;
        M2C_FIELD(temp_16, M2C_UNK32 *, 4) = sp14;
        M2C_FIELD(temp_16, M2C_UNK32 *, 8) = sp18;
        M2C_FIELD(temp_16, M2C_UNK32 *, 0xC) = sp1C;
        func_001525D8(temp_2, temp_2, temp_6, &sp10, M2C_FIELD(arg0, f32 *, 0x10));
        M2C_FIELD(temp_17, M2C_UNK32 *, 0x50) = sp0;
        M2C_FIELD(temp_16, M2C_UNK32 *, 4) = sp4;
        M2C_FIELD(temp_16, M2C_UNK32 *, 0xC) = 0x3F800000;
        M2C_FIELD(temp_16, M2C_UNK32 *, 8) = sp8;
    }
}
