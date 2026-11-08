/* machine draft (m2c), tried by autopilot */
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

extern M2C_UNK D_00426518;
extern M2C_UNK D_00426528;
extern M2C_UNK D_00426538;

void func_0027C7A0(void *arg0) {
    f32 sp0;
    f32 sp4;
    f32 sp8;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f1;
    f32 temp_f2;
    f32 temp_f3;
    f32 temp_f4;
    void *temp_2;
    void *temp_5;
    void *temp_6;
    void *temp_9;

    temp_2 = arg0 + 0xBC;
    temp_6 = arg0 + 0xF8;
    temp_9 = arg0 + 0xE0;
    temp_5 = arg0 + 0xEC;
    temp_f0 = (M2C_FIELD(arg0, f32 *, 0xBC) * M2C_FIELD(&D_00426538, f32 *, 0)) + (M2C_FIELD(temp_2, f32 *, 4) * M2C_FIELD(&D_00426538, f32 *, 4)) + (M2C_FIELD(temp_2, f32 *, 8) * M2C_FIELD(&D_00426538, f32 *, 8));
    temp_f4 = (M2C_FIELD(temp_2, f32 *, 0xC) * M2C_FIELD(&D_00426538, f32 *, 0)) + (M2C_FIELD(temp_2, f32 *, 0x10) * M2C_FIELD(&D_00426538, f32 *, 4)) + (M2C_FIELD(temp_2, f32 *, 0x14) * M2C_FIELD(&D_00426538, f32 *, 8));
    sp8 = (M2C_FIELD(temp_2, f32 *, 0x18) * M2C_FIELD(&D_00426538, f32 *, 0)) + (M2C_FIELD(temp_2, f32 *, 0x1C) * M2C_FIELD(&D_00426538, f32 *, 4)) + (M2C_FIELD(temp_2, f32 *, 0x20) * M2C_FIELD(&D_00426538, f32 *, 8));
    M2C_FIELD(arg0, f32 *, 0xF8) = temp_f0;
    sp0 = temp_f0;
    sp4 = temp_f4;
    M2C_FIELD(temp_6, f32 *, 4) = temp_f4;
    M2C_FIELD(temp_6, f32 *, 8) = sp8;
    temp_f1 = (M2C_FIELD(arg0, f32 *, 0xBC) * M2C_FIELD(&D_00426528, f32 *, 0)) + (M2C_FIELD(temp_2, f32 *, 4) * M2C_FIELD(&D_00426528, f32 *, 4)) + (M2C_FIELD(temp_2, f32 *, 8) * M2C_FIELD(&D_00426528, f32 *, 8));
    temp_f3 = (M2C_FIELD(temp_2, f32 *, 0xC) * M2C_FIELD(&D_00426528, f32 *, 0)) + (M2C_FIELD(temp_2, f32 *, 0x10) * M2C_FIELD(&D_00426528, f32 *, 4)) + (M2C_FIELD(temp_2, f32 *, 0x14) * M2C_FIELD(&D_00426528, f32 *, 8));
    temp_f0_2 = (M2C_FIELD(temp_2, f32 *, 0x18) * M2C_FIELD(&D_00426528, f32 *, 0)) + (M2C_FIELD(temp_2, f32 *, 0x1C) * M2C_FIELD(&D_00426528, f32 *, 4)) + (M2C_FIELD(temp_2, f32 *, 0x20) * M2C_FIELD(&D_00426528, f32 *, 8));
    sp0 = temp_f1;
    sp4 = temp_f3;
    sp8 = temp_f0_2;
    M2C_FIELD(arg0, f32 *, 0xE0) = temp_f1;
    M2C_FIELD(temp_9, f32 *, 4) = temp_f3;
    M2C_FIELD(temp_9, f32 *, 8) = temp_f0_2;
    temp_f0_3 = (M2C_FIELD(arg0, f32 *, 0xBC) * M2C_FIELD(&D_00426518, f32 *, 0)) + (M2C_FIELD(temp_2, f32 *, 4) * M2C_FIELD(&D_00426518, f32 *, 4)) + (M2C_FIELD(temp_2, f32 *, 8) * M2C_FIELD(&D_00426518, f32 *, 8));
    temp_f2 = (M2C_FIELD(temp_2, f32 *, 0xC) * M2C_FIELD(&D_00426518, f32 *, 0)) + (M2C_FIELD(temp_2, f32 *, 0x10) * M2C_FIELD(&D_00426518, f32 *, 4)) + (M2C_FIELD(temp_2, f32 *, 0x14) * M2C_FIELD(&D_00426518, f32 *, 8));
    sp8 = (M2C_FIELD(temp_2, f32 *, 0x18) * M2C_FIELD(&D_00426518, f32 *, 0)) + (M2C_FIELD(temp_2, f32 *, 0x1C) * M2C_FIELD(&D_00426518, f32 *, 4)) + (M2C_FIELD(temp_2, f32 *, 0x20) * M2C_FIELD(&D_00426518, f32 *, 8));
    M2C_FIELD(arg0, f32 *, 0xEC) = temp_f0_3;
    sp0 = temp_f0_3;
    sp4 = temp_f2;
    M2C_FIELD(temp_5, f32 *, 4) = temp_f2;
    M2C_FIELD(temp_5, f32 *, 8) = sp8;
}
