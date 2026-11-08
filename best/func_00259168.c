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

extern M2C_UNK D_004264A8;

void *func_00259168(void *arg0) {
    void *temp_5;

    M2C_FIELD(arg0, M2C_UNK32 *, 0x14) = 0;
    M2C_FIELD(arg0, s32 *, 8) = -1;
    temp_5 = arg0 + 0x14;
    M2C_FIELD(arg0, s32 *, 4) = -1;
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    M2C_FIELD(temp_5, M2C_UNK32 *, 4) = 0;
    M2C_FIELD(temp_5, M2C_UNK32 *, 8) = 0;
    M2C_FIELD(arg0, M2C_UNK32 *, 0x14) = (M2C_UNK32) M2C_FIELD(&D_004264A8, M2C_UNK32 *, 0);
    M2C_FIELD(temp_5, M2C_UNK32 *, 4) = (M2C_UNK32) M2C_FIELD(&D_004264A8, M2C_UNK32 *, 4);
    M2C_FIELD(temp_5, M2C_UNK32 *, 8) = (M2C_UNK32) M2C_FIELD(&D_004264A8, M2C_UNK32 *, 8);
    M2C_FIELD(temp_5, f32 *, 0xC) = (f32) M2C_FIELD(&D_004264A8, f32 *, 0xC);
    M2C_FIELD(temp_5, s32 *, 0x10) = (s32) M2C_FIELD(&D_004264A8, s32 *, 0x10);
    return arg0;
}
