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

void func_0023E538(void *arg0) {
    void *temp_10;
    void *temp_11;
    void *temp_12;
    void *temp_13;
    void *temp_14;
    void *temp_5;
    void *temp_6;
    void *temp_7;
    void *temp_8;
    void *temp_9;

    temp_5 = arg0 + 0x54;
    temp_6 = arg0 + 0x60;
    temp_7 = arg0 + 0x6C;
    M2C_FIELD(arg0, f32 *, 0x54) = (f32) M2C_FIELD(&D_00426508, f32 *, 0);
    temp_8 = arg0 + 0x78;
    temp_9 = arg0 + 0x84;
    temp_10 = arg0 + 0x90;
    temp_11 = arg0 + 0x9C;
    temp_12 = arg0 + 0xA8;
    temp_13 = arg0 + 0xB4;
    M2C_FIELD(temp_5, f32 *, 4) = (f32) M2C_FIELD(&D_00426508, f32 *, 4);
    temp_14 = arg0 + 0xC0;
    M2C_FIELD(temp_5, f32 *, 8) = (f32) M2C_FIELD(&D_00426508, f32 *, 8);
    M2C_FIELD(arg0, f32 *, 0x60) = (f32) M2C_FIELD(&D_00426508, f32 *, 0);
    M2C_FIELD(temp_6, f32 *, 4) = (f32) M2C_FIELD(&D_00426508, f32 *, 4);
    M2C_FIELD(temp_6, f32 *, 8) = (f32) M2C_FIELD(&D_00426508, f32 *, 8);
    M2C_FIELD(arg0, f32 *, 0x6C) = (f32) M2C_FIELD(&D_00426508, f32 *, 0);
    M2C_FIELD(temp_7, f32 *, 4) = (f32) M2C_FIELD(&D_00426508, f32 *, 4);
    M2C_FIELD(temp_7, f32 *, 8) = (f32) M2C_FIELD(&D_00426508, f32 *, 8);
    M2C_FIELD(arg0, f32 *, 0x78) = (f32) M2C_FIELD(&D_00426508, f32 *, 0);
    M2C_FIELD(temp_8, f32 *, 4) = (f32) M2C_FIELD(&D_00426508, f32 *, 4);
    M2C_FIELD(temp_8, f32 *, 8) = (f32) M2C_FIELD(&D_00426508, f32 *, 8);
    M2C_FIELD(arg0, f32 *, 0x84) = (f32) M2C_FIELD(&D_00426508, f32 *, 0);
    M2C_FIELD(temp_9, f32 *, 4) = (f32) M2C_FIELD(&D_00426508, f32 *, 4);
    M2C_FIELD(temp_9, f32 *, 8) = (f32) M2C_FIELD(&D_00426508, f32 *, 8);
    M2C_FIELD(arg0, f32 *, 0x90) = (f32) M2C_FIELD(&D_00426508, f32 *, 0);
    M2C_FIELD(temp_10, f32 *, 4) = (f32) M2C_FIELD(&D_00426508, f32 *, 4);
    M2C_FIELD(temp_10, f32 *, 8) = (f32) M2C_FIELD(&D_00426508, f32 *, 8);
    M2C_FIELD(arg0, f32 *, 0x9C) = (f32) M2C_FIELD(&D_00426508, f32 *, 0);
    M2C_FIELD(temp_11, f32 *, 4) = (f32) M2C_FIELD(&D_00426508, f32 *, 4);
    M2C_FIELD(temp_11, f32 *, 8) = (f32) M2C_FIELD(&D_00426508, f32 *, 8);
    M2C_FIELD(arg0, f32 *, 0xA8) = (f32) M2C_FIELD(&D_00426508, f32 *, 0);
    M2C_FIELD(temp_12, f32 *, 4) = (f32) M2C_FIELD(&D_00426508, f32 *, 4);
    M2C_FIELD(temp_12, f32 *, 8) = (f32) M2C_FIELD(&D_00426508, f32 *, 8);
    M2C_FIELD(arg0, f32 *, 0xB4) = (f32) M2C_FIELD(&D_00426508, f32 *, 0);
    M2C_FIELD(temp_13, f32 *, 4) = (f32) M2C_FIELD(&D_00426508, f32 *, 4);
    M2C_FIELD(temp_13, f32 *, 8) = (f32) M2C_FIELD(&D_00426508, f32 *, 8);
    M2C_FIELD(arg0, f32 *, 0xC0) = (f32) M2C_FIELD(&D_00426508, f32 *, 0);
    M2C_FIELD(temp_14, f32 *, 4) = (f32) M2C_FIELD(&D_00426508, f32 *, 4);
    M2C_FIELD(temp_14, f32 *, 8) = (f32) M2C_FIELD(&D_00426508, f32 *, 8);
    M2C_FIELD(arg0, s32 *, 0xD0) = 0;
    M2C_FIELD(arg0, s32 *, 0xCC) = 0;
}
