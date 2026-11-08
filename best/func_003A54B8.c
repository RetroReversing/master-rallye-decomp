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

void func_003A54B8(s64 *arg0, f32 fparg0) {
    s32 sp0;
    s32 var_3;

    sp0 = 0x44800000;
    var_3 = sp0;
    if (var_3 > 0xFFFF) {
        var_3 = 0xFFFF;
    }
    if (var_3 < 1) {
        var_3 = 1;
    }
    *arg0 = (*arg0 & ((((((0xFFF0 << 0x1C) | 0xFFFF) << 0x10) | 0xFFFF) * 0x10) | 0xF)) | ((((u64) ((s64) var_3 << 0x20) >> 0x20) & 0xFFFF) << 0x24);
}
