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

s32 func_002C2B30(void *arg0, s32 arg1) {
    s32 temp_16;
    void *temp_3;

    temp_16 = M2C_FIELD(arg0, s32 *, 0x6C);
    M2C_FIELD(arg0, s32 *, 0x6C) = arg1;
    if (arg1 != 0) {
        temp_3 = M2C_FIELD(arg0, void **, 0);
        M2C_FIELD(temp_3, M2C_UNK (**)(void *, void *), 0x54)(arg0 + M2C_FIELD(temp_3, s16 *, 0x50), arg0);
    }
    return temp_16;
}
