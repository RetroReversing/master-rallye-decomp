/* machine draft (m2c) for ee-gcc-2.9-991111 -O2 -G0, tried by autopilot */
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

void func_003D6E00(void *arg0, s32 arg2) {
    void *temp_8;

    temp_8 = M2C_FIELD(arg0, void **, 0x50);
    M2C_FIELD(temp_8, M2C_UNK (**)(void *, M2C_UNK, s32, void *), 0x44)(arg0 + M2C_FIELD(temp_8, s16 *, 0x40), 0, arg2, temp_8);
}
