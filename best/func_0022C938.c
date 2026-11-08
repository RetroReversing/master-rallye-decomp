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

void *func_0022C938(void *arg0) {
    void *temp_2;
    void *temp_3;
    void *temp_5;
    void *temp_6;
    void *temp_7;
    void *temp_8;

    M2C_FIELD(arg0, s32 *, 0) = 0;
    temp_2 = arg0 + 0xC;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    temp_3 = arg0 + 0x18;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    temp_5 = arg0 + 0x2C;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    temp_6 = arg0 + 0x38;
    M2C_FIELD(temp_2, s32 *, 8) = 0;
    temp_7 = arg0 + 0x44;
    M2C_FIELD(temp_2, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    M2C_FIELD(temp_3, s32 *, 8) = 0;
    temp_8 = arg0 + 0x58;
    M2C_FIELD(temp_3, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 0x24) = 0;
    M2C_FIELD(arg0, s32 *, 0x28) = 0;
    M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    M2C_FIELD(temp_5, s32 *, 8) = 0;
    M2C_FIELD(temp_5, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 0x38) = 0;
    M2C_FIELD(temp_6, s32 *, 8) = 0;
    M2C_FIELD(temp_6, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 0x44) = 0;
    M2C_FIELD(temp_7, s32 *, 8) = 0;
    M2C_FIELD(temp_7, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 0x50) = 0;
    M2C_FIELD(arg0, s32 *, 0x54) = 0;
    M2C_FIELD(arg0, f32 *, 0x58) = (f32) M2C_FIELD(&D_00426508, f32 *, 0);
    M2C_FIELD(temp_8, f32 *, 4) = (f32) M2C_FIELD(&D_00426508, f32 *, 4);
    M2C_FIELD(temp_8, f32 *, 8) = (f32) M2C_FIELD(&D_00426508, f32 *, 8);
    M2C_FIELD(arg0, s32 *, 0x64) = 0;
    M2C_FIELD(arg0, s32 *, 0x68) = 0;
    return arg0;
}
