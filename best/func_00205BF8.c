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

M2C_UNK func_00205EA0(M2C_UNK);                     /* extern */
extern M2C_UNK D_004785B0;

void *func_00205BF8(void *arg0) {
    void *temp_2;
    void *temp_3;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_004785B0;
    temp_3 = arg0 + 4;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    temp_2 = arg0 + 0x10;
    M2C_FIELD(temp_3, s32 *, 8) = 0;
    M2C_FIELD(temp_3, s32 *, 4) = 0;
    M2C_FIELD(temp_2, f32 *, 8) = 1.0f;
    M2C_FIELD(temp_2, f32 *, 4) = 1.0f;
    M2C_FIELD(arg0, f32 *, 0x10) = 1.0f;
    M2C_FIELD(temp_2, f32 *, 0xC) = 1.0f;
    M2C_FIELD(arg0, s32 *, 0x88) = -2;
    M2C_FIELD(arg0, s32 *, 0x84) = -2;
    func_00205EA0(-2);
    return arg0;
}
