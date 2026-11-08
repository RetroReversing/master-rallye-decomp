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

s64 func_003D7D98(void *arg0) {
    s32 temp_3;
    s32 var_5;
    void *var_4;

    var_4 = M2C_FIELD(arg0, void **, 0x30);
    var_5 = M2C_FIELD(arg0, s32 *, 8) - M2C_FIELD(arg0, s32 *, 0xC);
    if (var_4 != NULL) {
        do {
            temp_3 = M2C_FIELD(var_4, s32 *, 8);
            var_4 = M2C_FIELD(var_4, void **, 0);
            var_5 = (temp_3 < var_5) ? temp_3 : var_5;
        } while (var_4 != NULL);
    }
    return (s64) ((s64) var_5 << 0x20) >> 0x20;
}
