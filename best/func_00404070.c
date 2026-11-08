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

extern M2C_UNK D_0049E040;

M2C_UNK *func_00404070(s32 arg0) {
    void *temp_4;

    M2C_FIELD(&D_0049E040, s32 *, 0) = arg0;
    temp_4 = &D_0049E040 + 0x10;
    M2C_FIELD(&D_0049E040, s32 *, 4) = 0;
    M2C_FIELD(&D_0049E040, void **, 0xC) = temp_4;
    M2C_FIELD(&D_0049E040, void **, 8) = temp_4;
    return &D_0049E040;
}
