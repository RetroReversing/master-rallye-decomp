/* machine draft (m2c) for ee-gcc-2.95.3 -O1 -G0, tried by autopilot */
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

u32 func_001D30E8(u32 *arg0, s8 *arg1) {
    s8 *var_5;
    u32 temp_3;
    u32 var_6;
    u8 var_3;

    var_5 = arg1;
    var_6 = 0;
    var_3 = (u8) *var_5;
    if (*var_5 != 0) {
        do {
            var_6 = (var_6 * 0x10) + (s8) var_3;
            temp_3 = var_6 & 0xF0000000;
            var_5 += 1;
            if (temp_3 != 0) {
                var_6 = var_6 ^ (temp_3 >> 0x18) ^ temp_3;
            }
            var_3 = (u8) *var_5;
        } while (*var_5 != 0);
    }
    return var_6 % (u32) *arg0;
}
