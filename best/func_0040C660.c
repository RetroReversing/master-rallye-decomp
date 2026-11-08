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

s32 func_002ABEC8(s32, s32);                        /* extern */
s32 func_002ABF20(s32, s32);                        /* extern */
s32 func_002ABF88(s32, s64);                        /* extern */
s32 func_002AC4B0(s32, M2C_UNK);                    /* extern */
s64 func_002AC650(s32);                             /* extern */
s32 func_002AD350();                                /* extern */
s32 func_0040C758(u64);                             /* extern */

s32 func_0040C660(void) {
    s32 temp_2;
    s32 temp_2_2;
    s32 temp_2_4;
    s32 var_16;
    s32 var_2;
    s32 var_2_2;
    s64 temp_2_3;
    u64 temp_16;

    temp_2 = func_002AD350();
    var_2 = 0;
    if (func_002AC4B0(temp_2, 0) >= 0) {
        // Error: negative shift count
        // At instruction: bltz $s0, .L0040C6C4
        if (M2C_ERROR()) {
            var_2_2 = func_0040C758(temp_16);
        } else {
            temp_2_2 = func_0040C758(temp_2_3 | (temp_16 >> 1));
            var_2_2 = func_002ABEC8(temp_2_2, temp_2_2);
        }
        temp_2_4 = func_002ABF20(temp_2, var_2_2);
        if (func_002AC4B0(temp_2_4, 0) < 0) {
            var_16 = temp_16 - ((u64) (func_002AC650(func_002ABF20(0, temp_2_4)) << 0x20) >> 0x20);
        } else {
            var_16 = temp_16 + ((u64) (func_002AC650(temp_2_4) << 0x20) >> 0x20);
        }
        var_2 = var_16;
    }
    return var_2;
}
