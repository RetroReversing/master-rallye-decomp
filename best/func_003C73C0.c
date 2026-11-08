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

u32 func_003C73C0(void *arg0, s32 arg1) {
    s32 var_6;

    var_6 = (s32) M2C_FIELD(arg0, s32 *, 0x1B4) >> arg1;
    if (M2C_FIELD(arg0, s32 *, 0x1B8) >= 2) {
        var_6 = ((arg1 ^ (M2C_FIELD(arg0, s32 *, 0x1BC) - 1)) == 0) ? (var_6 * 2) : var_6;
    }
    return (u32) ((((((s32) M2C_FIELD(arg0, s32 *, 0x1B0) >> arg1) + 0xF) & ~0xF) * 2 * ((var_6 > 7) ? var_6 : 8)) + 0xFF) >> 8;
}
