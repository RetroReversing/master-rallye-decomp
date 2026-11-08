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

u64 func_003D6C10();                                /* extern */
s64 func_003F83E8(s32, M2C_UNK, s64, s32);          /* extern */

u64 func_003DF458(void *arg0, s32 arg1, s64 arg2) {
    if (!((((s32) M2C_FIELD(arg0, s32 *, 0) >> 1) ^ 1) & 1)) {
        return (u64) (func_003F83E8(arg1, 1, (s64) (arg2 << 0x20) >> 0x20, M2C_FIELD(arg0, s32 *, 0x58)) << 0x20) >> 0x20;
    }
    return func_003D6C10();
}
