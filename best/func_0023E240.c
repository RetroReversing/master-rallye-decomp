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

extern M2C_UNK D_00426508;

void *func_0023E240(void *arg0) {
    void *temp_10;
    void *temp_11;
    void *temp_12;
    void *temp_13;
    register void *temp_14;
    void *temp_15;
    void *temp_16;
    void *temp_17;
    void *temp_18;
    void *temp_19;
    void *temp_6;
    void *temp_7;
    void *temp_8;

    temp_6 = arg0 + 0xC;
    M2C_FIELD(arg0, f32 *, 0) = (f32) M2C_FIELD(&D_00426508, f32 *, 0);
    temp_7 = arg0 + 0x2C;
    temp_8 = arg0 + 0x38;
    temp_10 = arg0 + 0x54;
    temp_11 = arg0 + 0x60;
    temp_12 = arg0 + 0x6C;
    M2C_FIELD(arg0, f32 *, 4) = (f32) M2C_FIELD(&D_00426508, f32 *, 4);
    temp_13 = arg0 + 0x78;
    temp_14 = arg0 + 0x84;
    temp_15 = arg0 + 0x90;
    temp_16 = arg0 + 0x9C;
    temp_17 = arg0 + 0xA8;
    temp_18 = arg0 + 0xB4;
    M2C_FIELD(arg0, f32 *, 8) = (f32) M2C_FIELD(&D_00426508, f32 *, 8);
    temp_19 = arg0 + 0xC0;
    M2C_FIELD(arg0, f32 *, 0xC) = (f32) M2C_FIELD(&D_00426508, f32 *, 0);
    M2C_FIELD(temp_6, f32 *, 4) = (f32) M2C_FIELD(&D_00426508, f32 *, 4);
    M2C_FIELD(temp_6, f32 *, 8) = (f32) M2C_FIELD(&D_00426508, f32 *, 8);
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    M2C_FIELD(arg0, s32 *, 0x24) = 0;
    M2C_FIELD(arg0, s32 *, 0x28) = 0;
    M2C_FIELD(arg0, f32 *, 0x2C) = (f32) M2C_FIELD(&D_00426508, f32 *, 0);
    M2C_FIELD(temp_7, f32 *, 4) = (f32) M2C_FIELD(&D_00426508, f32 *, 4);
    M2C_FIELD(temp_7, f32 *, 8) = (f32) M2C_FIELD(&D_00426508, f32 *, 8);
    M2C_FIELD(arg0, f32 *, 0x38) = (f32) M2C_FIELD(&D_00426508, f32 *, 0);
    M2C_FIELD(temp_8, f32 *, 4) = (f32) M2C_FIELD(&D_00426508, f32 *, 4);
    M2C_FIELD(temp_8, f32 *, 8) = (f32) M2C_FIELD(&D_00426508, f32 *, 8);
    M2C_FIELD(arg0, s32 *, 0x48) = -1;
    M2C_FIELD(arg0, s32 *, 0x44) = -1;
    M2C_FIELD(arg0, s32 *, 0x4C) = 0;
    M2C_FIELD(arg0, s32 *, 0x50) = 0;
    M2C_FIELD(arg0, s32 *, 0x54) = 0;
    M2C_FIELD(temp_10, s32 *, 8) = 0;
    M2C_FIELD(temp_10, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 0x60) = 0;
    M2C_FIELD(temp_11, s32 *, 8) = 0;
    M2C_FIELD(temp_11, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 0x6C) = 0;
    M2C_FIELD(temp_12, s32 *, 8) = 0;
    M2C_FIELD(temp_12, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 0x78) = 0;
    M2C_FIELD(temp_13, s32 *, 8) = 0;
    M2C_FIELD(temp_13, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 0x84) = 0;
    M2C_FIELD(temp_14, s32 *, 8) = 0;
    M2C_FIELD(temp_14, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 0x90) = 0;
    M2C_FIELD(temp_15, s32 *, 8) = 0;
    M2C_FIELD(temp_15, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 0x9C) = 0;
    M2C_FIELD(temp_16, s32 *, 8) = 0;
    M2C_FIELD(temp_16, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 0xA8) = 0;
    M2C_FIELD(temp_17, s32 *, 4) = 0;
    M2C_FIELD(temp_17, s32 *, 8) = 0;
    M2C_FIELD(arg0, s32 *, 0xB4) = 0;
    M2C_FIELD(temp_18, s32 *, 8) = 0;
    M2C_FIELD(temp_18, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 0xC0) = 0;
    M2C_FIELD(temp_19, s32 *, 4) = 0;
    M2C_FIELD(temp_19, s32 *, 8) = 0;
    M2C_FIELD(arg0, s32 *, 0xDC) = 1;
    return arg0;
}
