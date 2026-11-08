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

s32 func_002C0160(u32 arg0, u8 *arg1, u32 arg2) {
    s32 temp_12;
    s32 temp_12_10;
    s32 temp_12_11;
    s32 temp_12_12;
    s32 temp_12_13;
    s32 temp_12_14;
    s32 temp_12_15;
    s32 temp_12_2;
    s32 temp_12_3;
    s32 temp_12_4;
    s32 temp_12_5;
    s32 temp_12_6;
    s32 temp_12_7;
    s32 temp_12_8;
    s32 temp_12_9;
    s32 temp_13;
    u32 var_12;
    u32 var_13;
    u32 var_15;
    u32 var_24;
    u8 *var_14;
    u8 temp_10;
    u8 temp_2;
    u8 temp_2_2;
    u8 temp_3;
    u8 temp_5;
    u8 temp_6;
    u8 temp_7;
    u8 temp_8;
    u8 temp_9;

    var_14 = arg1;
    var_24 = arg2;
    var_13 = arg0 >> 0x10;
    var_12 = arg0 & 0xFFFF;
    if (var_14 == NULL) {
        return 1;
    }
    if (var_24 != 0) {
        do {
            var_15 = (var_24 <= 0x15AFU) ? var_24 : 0x15B0U;
            var_24 -= var_15;
            if ((s32) var_15 >= 0x10) {
                do {
                    var_15 -= 0x10;
                    temp_12 = var_12 + M2C_FIELD(var_14, u8 *, 0);
                    temp_12_2 = temp_12 + M2C_FIELD(var_14, u8 *, 1);
                    temp_12_3 = temp_12_2 + M2C_FIELD(var_14, u8 *, 2);
                    temp_12_4 = temp_12_3 + M2C_FIELD(var_14, u8 *, 3);
                    temp_7 = M2C_FIELD(var_14, u8 *, 8);
                    temp_2 = M2C_FIELD(var_14, u8 *, 9);
                    temp_12_5 = temp_12_4 + M2C_FIELD(var_14, u8 *, 4);
                    temp_8 = M2C_FIELD(var_14, u8 *, 0xA);
                    temp_5 = M2C_FIELD(var_14, u8 *, 0xB);
                    temp_12_6 = temp_12_5 + M2C_FIELD(var_14, u8 *, 5);
                    temp_9 = M2C_FIELD(var_14, u8 *, 0xC);
                    temp_3 = M2C_FIELD(var_14, u8 *, 0xD);
                    temp_12_7 = temp_12_6 + M2C_FIELD(var_14, u8 *, 6);
                    temp_10 = M2C_FIELD(var_14, u8 *, 0xE);
                    temp_13 = var_13 + temp_12 + temp_12_2 + temp_12_3 + temp_12_4 + temp_12_5 + temp_12_6 + temp_12_7;
                    temp_6 = M2C_FIELD(var_14, u8 *, 0xF);
                    temp_12_8 = temp_12_7 + M2C_FIELD(var_14, u8 *, 7);
                    var_14 += 0x10;
                    temp_12_9 = temp_12_8 + temp_7;
                    temp_12_10 = temp_12_9 + temp_2;
                    temp_12_11 = temp_12_10 + temp_8;
                    temp_12_12 = temp_12_11 + temp_5;
                    temp_12_13 = temp_12_12 + temp_9;
                    temp_12_14 = temp_12_13 + temp_3;
                    temp_12_15 = temp_12_14 + temp_10;
                    var_12 = temp_12_15 + temp_6;
                    var_13 = temp_13 + temp_12_8 + temp_12_9 + temp_12_10 + temp_12_11 + temp_12_12 + temp_12_13 + temp_12_14 + temp_12_15 + var_12;
                } while ((s32) var_15 >= 0x10);
            }
            if (var_15 != 0) {
                do {
                    temp_2_2 = *var_14;
                    var_15 -= 1;
                    var_14 += 1;
                    var_12 += temp_2_2;
                    var_13 += var_12;
                } while ((s32) var_15 > 0);
            }
            if (0xFFF1 == 0) {
                M2C_BREAK(0);
            }
            if (0xFFF1 == 0) {
                M2C_BREAK(0);
            }
            var_12 = var_12 % 65521U;
            var_13 = var_13 % 65521U;
        } while (var_24 != 0);
    }
    return (var_13 << 0x10) | var_12;
}
