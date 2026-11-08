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

void *func_00231690(void *arg0) {
    void *temp_6;
    void *temp_7;
    void *temp_8;

    temp_6 = arg0 + 0xC;
    temp_7 = arg0 + 0x18;
    temp_8 = arg0 + 0x24;
    M2C_FIELD(arg0, f32 *, 0) = (f32) M2C_FIELD(&D_00426508, f32 *, 0);
    M2C_FIELD(arg0, f32 *, 4) = (f32) M2C_FIELD(&D_00426508, f32 *, 4);
    M2C_FIELD(arg0, f32 *, 8) = (f32) M2C_FIELD(&D_00426508, f32 *, 8);
    M2C_FIELD(arg0, f32 *, 0xC) = (f32) M2C_FIELD(&D_00426508, f32 *, 0);
    M2C_FIELD(temp_6, f32 *, 4) = (f32) M2C_FIELD(&D_00426508, f32 *, 4);
    M2C_FIELD(temp_6, f32 *, 8) = (f32) M2C_FIELD(&D_00426508, f32 *, 8);
    M2C_FIELD(arg0, f32 *, 0x18) = (f32) M2C_FIELD(&D_00426508, f32 *, 0);
    M2C_FIELD(temp_7, f32 *, 4) = (f32) M2C_FIELD(&D_00426508, f32 *, 4);
    M2C_FIELD(temp_7, f32 *, 8) = (f32) M2C_FIELD(&D_00426508, f32 *, 8);
    M2C_FIELD(arg0, f32 *, 0x24) = (f32) M2C_FIELD(&D_00426508, f32 *, 0);
    M2C_FIELD(temp_8, f32 *, 4) = (f32) M2C_FIELD(&D_00426508, f32 *, 4);
    M2C_FIELD(temp_8, f32 *, 8) = (f32) M2C_FIELD(&D_00426508, f32 *, 8);
    M2C_FIELD(arg0, s32 *, 0x38) = -1;
    return arg0;
}
