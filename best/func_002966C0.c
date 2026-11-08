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

s32 func_00296530();                                /* extern */

void func_002966C0(void *arg1, s32 arg2) {
    void *temp_5;

    if (func_00296530() != 0) {
        temp_5 = M2C_FIELD(arg1, void **, 0x4C);
        M2C_FIELD(temp_5, s64 *, 0x78) = (s64) ((M2C_FIELD(temp_5, s64 *, 0x78) & ~1) | (arg2 & 1));
    }
}
