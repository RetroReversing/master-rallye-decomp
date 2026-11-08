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

extern M2C_UNK D_0048BD29;

s8 *func_003FB548(s8 *arg0) {
    s8 *var_6;
    u8 temp_2;
    u8 var_3;

    var_6 = arg0;
    var_3 = (u8) *arg0;
    if (*arg0 != 0) {
        do {
            if (*((s8) var_3 + &D_0048BD29) & 2) {
                *var_6 = (s8) var_3 - 0x20;
            }
            var_6 += 1;
            temp_2 = *var_6;
            var_3 = temp_2;
        } while (temp_2 != 0);
    }
    return arg0;
}
