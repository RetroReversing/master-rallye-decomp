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
extern M2C_UNK D_0047A820;

void *func_00228190(void *arg0) {
    void *temp_5;

    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, M2C_UNK **, 0x28) = &D_0047A820;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    temp_5 = arg0 + 0x1C;
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    M2C_FIELD(arg0, f32 *, 0x1C) = (f32) M2C_FIELD(&D_00426508, f32 *, 0);
    M2C_FIELD(temp_5, f32 *, 4) = (f32) M2C_FIELD(&D_00426508, f32 *, 4);
    M2C_FIELD(temp_5, f32 *, 8) = (f32) M2C_FIELD(&D_00426508, f32 *, 8);
    return arg0;
}
