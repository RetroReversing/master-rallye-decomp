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

s64 func_002ABF88(s64, s64);                        /* extern */

void func_002B9BE0(s32 arg0) {
    s32 var_16;
    s64 var_2;

    var_2 = 0xFFC0 << 0x2E;
    var_16 = arg0;
    if (var_16 != 0) {
        do {
            var_16 -= 1;
            var_2 = func_002ABF88(var_2, 0x8048 << 0x2F);
        } while (var_16 != 0);
    }
}
