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

M2C_UNK func_00362D68(void *);                      /* extern */
extern M2C_UNK D_004864A0;

void *func_00362458(void *arg0) {
    M2C_UNK32 sp10;
    M2C_UNK32 sp14;
    M2C_UNK32 sp18;
    M2C_UNK32 sp1C;
    void *temp_2;
    void *temp_3;
    void *temp_4;
    void *temp_5;
    void *temp_7;

    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_004864A0;
    func_00362D68(arg0 + 8);
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    temp_2 = arg0 + 0x20;
    M2C_FIELD(temp_2, s32 *, 8) = 0;
    temp_3 = arg0 + 0x70;
    M2C_FIELD(temp_2, s32 *, 4) = 0;
    sp14 = 0;
    temp_4 = arg0 + 0x80;
    temp_5 = arg0 + 0x90;
    temp_7 = arg0 + 0xA0;
    sp10 = 0x3F800000;
    sp1C = 0;
    sp18 = 0;
    M2C_FIELD(arg0, f32 *, 0x70) = 1.0f;
    M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    M2C_FIELD(arg0, s32 *, 0xB0) = 0;
    M2C_FIELD(temp_3, M2C_UNK32 *, 4) = sp14;
    M2C_FIELD(temp_3, M2C_UNK32 *, 8) = sp18;
    M2C_FIELD(temp_3, M2C_UNK32 *, 0xC) = sp1C;
    sp10 = sp14;
    M2C_FIELD(&sp10, f32 *, 4) = 1.0f;
    sp1C = sp14;
    M2C_FIELD(arg0, M2C_UNK32 *, 0x80) = sp10;
    sp18 = sp14;
    M2C_FIELD(temp_4, M2C_UNK32 *, 4) = sp14;
    M2C_FIELD(temp_4, M2C_UNK32 *, 8) = sp18;
    M2C_FIELD(temp_4, M2C_UNK32 *, 0xC) = sp1C;
    sp10 = sp14;
    M2C_FIELD(&sp10, f32 *, 8) = 1.0f;
    sp1C = sp14;
    M2C_FIELD(arg0, M2C_UNK32 *, 0x90) = sp10;
    M2C_FIELD(temp_5, M2C_UNK32 *, 4) = sp14;
    M2C_FIELD(temp_5, M2C_UNK32 *, 8) = sp18;
    M2C_FIELD(temp_5, M2C_UNK32 *, 0xC) = sp1C;
    sp18 = sp14;
    sp10 = sp14;
    M2C_FIELD(&sp10, f32 *, 0xC) = 1.0f;
    M2C_FIELD(arg0, M2C_UNK32 *, 0xA0) = sp10;
    M2C_FIELD(temp_7, M2C_UNK32 *, 4) = sp14;
    M2C_FIELD(temp_7, M2C_UNK32 *, 8) = sp18;
    M2C_FIELD(temp_7, M2C_UNK32 *, 0xC) = sp1C;
    return arg0;
}
