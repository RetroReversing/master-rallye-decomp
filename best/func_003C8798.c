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

void func_003C8798(void *arg0, s16 arg1, s16 arg2, s32 arg3) {
    s64 temp_6;
    s64 var_2;
    u64 temp_2;

    temp_2 = M2C_FIELD(arg0, u64 *, 0x30);
    temp_6 = ((s64) ((s64) arg2 << 0x30) >> 0x30) - ((u64) (((s64) (((temp_2 >> 0x30) & 0x7FF) << 0x20) >> 0x20) + 1) >> 1);
    if ((arg3 << 0x10) != 0) {
        var_2 = ((temp_6 * 0x10) + 8) << 0x20;
    } else {
        var_2 = temp_6 << 0x24;
    }
    M2C_FIELD(arg0, s64 *, 0x20) = (s64) (((((s64) ((s64) arg1 << 0x30) >> 0x30) - ((u64) (((s64) (((temp_2 >> 0x10) & 0x7FF) << 0x20) >> 0x20) + 1) >> 1)) * 0x10) | var_2);
}
