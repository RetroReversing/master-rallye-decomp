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

u32 func_002C07C8(s32, u32, u8 *, s32 *);           /* extern */

s32 func_002C0B90(s32 arg0, u32 arg1, u8 *arg2, s32 *arg3) {
    u32 var_7;
    u8 *temp_17;
    u8 *temp_3;
    u8 *temp_6;
    u8 *var_4;
    u8 *var_6;
    u8 temp_2;
    u8 var_3;

    var_6 = arg2;
    temp_17 = var_6;
    if (arg1 < 0xEU) {
        var_7 = arg1;
    } else {
        var_7 = func_002C07C8(arg0, arg1, temp_17, arg3);
        var_6 = &temp_17[*arg3];
    }
    if (var_7 != 0) {
        var_4 = (arg0 + arg1) - var_7;
        if ((var_6 == temp_17) && (var_7 < 0xEFU)) {
            *var_6 = var_7 + 0x11;
            goto block_16;
        }
        temp_3 = var_6 - 0x8000;
        if (var_7 < 4U) {
            M2C_FIELD(temp_3, u8 *, 0x7FFE) = (u8) (M2C_FIELD(temp_3, u8 *, 0x7FFE) | var_7);
        } else {
            if (var_7 < 0x13U) {
                *var_6 = var_7 - 3;
            } else {
                var_3 = var_7 - 0x12;
loop_14:
                *var_6 = 0;
                var_6 += 1;
                if (var_3 >= 0x100U) {
                    var_3 -= 0xFF;
                    goto loop_14;
                }
                *var_6 = var_3;
            }
block_16:
            var_6 += 1;
        }
        do {
            temp_2 = *var_4;
            var_7 -= 1;
            var_4 += 1;
            *var_6 = temp_2;
            var_6 += 1;
        } while (var_7 != 0);
    }
    M2C_FIELD(var_6, u8 *, 0) = 0x11;
    temp_6 = var_6 + 1;
    M2C_FIELD(var_6, s8 *, 1) = 0;
    M2C_FIELD(temp_6, s8 *, 1) = 0;
    *arg3 = (temp_6 + 1 + 1) - temp_17;
    return 0;
}
