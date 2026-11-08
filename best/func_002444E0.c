/* machine draft (m2c) for ee-gcc-2.95.3 -O1 -G0, tried by autopilot */
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

void *func_002444E0(void *arg0) {
    void *temp_10;
    void *temp_11;
    void *temp_2;
    void *temp_3;
    void *temp_5;
    void *temp_9;

    temp_2 = arg0 + 0x1C;
    M2C_FIELD(arg0, f32 *, 0x14) = 0.4f;
    temp_9 = arg0 + 0x28;
    M2C_FIELD(arg0, f32 *, 0x18) = 0.2f;
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = -1;
    temp_3 = arg0 + 0x34;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    temp_10 = arg0 + 0x48;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    temp_5 = arg0 + 0x54;
    M2C_FIELD(temp_2, s32 *, 8) = 0;
    temp_11 = arg0 + 0x68;
    M2C_FIELD(temp_2, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 0x28) = 0;
    M2C_FIELD(temp_9, s32 *, 8) = 0;
    M2C_FIELD(temp_9, s32 *, 4) = 0;
    M2C_FIELD(arg0, f32 *, 0x34) = (f32) M2C_FIELD(&D_00426508, f32 *, 0);
    M2C_FIELD(temp_3, f32 *, 4) = (f32) M2C_FIELD(&D_00426508, f32 *, 4);
    M2C_FIELD(temp_3, s32 *, 0x10) = -1;
    M2C_FIELD(temp_3, f32 *, 8) = (f32) M2C_FIELD(&D_00426508, f32 *, 8);
    M2C_FIELD(temp_3, s32 *, 0xC) = 0;
    M2C_FIELD(arg0, s32 *, 0x48) = 0;
    M2C_FIELD(temp_10, s32 *, 8) = 0;
    M2C_FIELD(temp_10, s32 *, 4) = 0;
    M2C_FIELD(arg0, f32 *, 0x54) = (f32) M2C_FIELD(&D_00426508, f32 *, 0);
    M2C_FIELD(temp_5, f32 *, 4) = (f32) M2C_FIELD(&D_00426508, f32 *, 4);
    M2C_FIELD(temp_5, s32 *, 0x10) = -1;
    M2C_FIELD(temp_5, f32 *, 8) = (f32) M2C_FIELD(&D_00426508, f32 *, 8);
    M2C_FIELD(temp_5, s32 *, 0xC) = 0;
    M2C_FIELD(arg0, s32 *, 0x68) = 0;
    M2C_FIELD(temp_11, s32 *, 8) = 0;
    M2C_FIELD(temp_11, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    return arg0;
}
