/* machine draft (m2c) for ee-gcc-2.95.2 -O2 -G0 -fno-schedule-insns, tried by autopilot */
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

u32 func_003FA9B8();                                /* extern */

u32 func_002BFD98(u8 *arg0) {
    s32 temp_2;
    u32 temp_9;
    u32 var_7;
    u32 var_8;
    u8 *var_16;
    u8 temp_6;

    var_16 = arg0;
    var_7 = func_003FA9B8();
    temp_9 = (var_7 >> 5) | 1;
    var_8 = var_7;
    if (var_7 >= temp_9) {
        do {
            temp_6 = *var_16;
            var_8 -= temp_9;
            temp_2 = (((temp_6 ^ 0x2F) != 0) ? temp_6 : 0x5CU) & 0xDF;
            var_16 += 1;
            var_7 ^= (var_7 << 5) + (var_7 >> 2) + temp_2;
        } while (var_8 >= temp_9);
    }
    return var_7;
}
