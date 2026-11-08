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

void *func_0024C028(void *arg0) {
    void *temp_6;
    void *temp_3;

    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    temp_6 = arg0 + 8;
    temp_3 = arg0 + 0x34;
    M2C_FIELD(arg0, f32 *, 8) = (f32) M2C_FIELD(&D_00426508, f32 *, 0);
    M2C_FIELD(temp_6, f32 *, 4) = (f32) M2C_FIELD(&D_00426508, f32 *, 4);
    M2C_FIELD(temp_6, f32 *, 8) = (f32) M2C_FIELD(&D_00426508, f32 *, 8);
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    M2C_FIELD(arg0, s32 *, 0x24) = 0;
    M2C_FIELD(arg0, s32 *, 0x28) = 0;
    M2C_FIELD(arg0, s32 *, 0x34) = 0;
    M2C_FIELD(temp_3, s32 *, 4) = 0;
    M2C_FIELD(temp_3, s32 *, 8) = 0;
    M2C_FIELD(temp_3, s32 *, 0xC) = 0;
    M2C_FIELD(arg0, s32 *, 0x44) = 0;
    return arg0;
}
