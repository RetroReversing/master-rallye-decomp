/* machine draft (m2c), tried by autopilot */
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

s16 *func_003A5340(s16 *arg0) {
    *arg0 = 0;
    *arg0 = (s64) ((s64) *arg0 & ((0x80000000 * 0x10) | 0xFFFF));
    *arg0 = (s64) ((s64) *arg0 & ((0xBFFFFFFF << 5) | 0x1F));
    *arg0 = (s64) ((s64) *arg0 & ((((((0xFFF0 << 0x1C) | 0xFFFF) << 0x10) | 0xFFFF) * 0x10) | 0xF));
    return arg0;
}
