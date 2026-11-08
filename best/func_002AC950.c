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

extern M2C_UNK D_00494C98;

M2C_UNK *func_002AC950(M2C_UNK *arg0, M2C_UNK *arg1, M2C_UNK *arg2) {
    s32 temp_2;
    s32 temp_2_2;
    s32 temp_2_3;
    s32 temp_3_2;
    s32 temp_4_2;
    s32 var_2;
    s32 var_5;
    s32 var_7;
    s32 var_7_2;
    s32 var_7_3;
    s32 var_8;
    u32 temp_3;
    u32 temp_4;
    u32 var_10;
    u32 var_11;

    temp_4 = M2C_FIELD(arg0, u32 *, 0);
    if (temp_4 >= 2U) {
        temp_3 = M2C_FIELD(arg1, u32 *, 0);
        if (temp_3 < 2U) {
            /* Duplicate return node #5. Try simplifying control flow for better match */
            return arg1;
        }
        temp_2 = temp_3 ^ 4;
        if ((temp_4 ^ 4) == 0) {
            if ((temp_2 == 0) && (M2C_FIELD(arg0, s32 *, 4) != M2C_FIELD(arg1, s32 *, 4))) {
                return &D_00494C98;
            }
            /* Duplicate return node #3. Try simplifying control flow for better match */
            return arg0;
        }
        if (temp_2 != 0) {
            temp_2_2 = temp_4 ^ 2;
            if ((temp_3 ^ 2) == 0) {
                if (temp_2_2 == 0) {
                    M2C_ERROR(/* unknown instruction: ldl $v0, 0x7($a5) */);
                    M2C_ERROR(/* unknown instruction: ldr $v0, ($a5) */);
                    M2C_ERROR(/* unknown instruction: ldl $v1, 0xf($a5) */);
                    M2C_ERROR(/* unknown instruction: ldr $v1, 0x8($a5) */);
                    M2C_ERROR(/* unknown instruction: sdl $v0, 0x7($a2) */);
                    M2C_ERROR(/* unknown instruction: sdr $v0, ($a2) */);
                    M2C_ERROR(/* unknown instruction: sdl $v1, 0xf($a2) */);
                    M2C_ERROR(/* unknown instruction: sdr $v1, 0x8($a2) */);
                    M2C_FIELD(arg2, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) & M2C_FIELD(arg1, s32 *, 4));
                    return arg2;
                }
                /* Duplicate return node #3. Try simplifying control flow for better match */
                return arg0;
            }
            if (temp_2_2 != 0) {
                var_7 = M2C_FIELD(arg0, s32 *, 8);
                var_8 = M2C_FIELD(arg1, s32 *, 8);
                var_11 = M2C_FIELD(arg0, u32 *, 0xC);
                temp_3_2 = var_7 - var_8;
                var_10 = M2C_FIELD(arg1, u32 *, 0xC);
                if (((temp_3_2 <= -1) ? -temp_3_2 : temp_3_2) < 0x20) {
                    if (var_8 < var_7) {
                        do {
                            var_8 += 1;
                            var_10 = (var_10 & 1) | (var_10 >> 1);
                        } while (var_8 < var_7);
                    }
                    if (var_7 < var_8) {
                        var_7_2 = var_8 - var_7;
                        do {
                            var_11 = (var_11 & 1) | (var_11 >> 1);
                            var_7_2 -= 1;
                        } while (var_7_2 != 0);
                        var_7 = var_8;
                    }
                } else if (var_8 < var_7) {
                    var_10 = 0;
                } else {
                    var_7 = var_8;
                    var_11 = 0;
                }
                temp_2_3 = var_11 + var_10;
                if (M2C_FIELD(arg0, s32 *, 4) != M2C_FIELD(arg1, s32 *, 4)) {
                    var_2 = var_10 - var_11;
                    if (M2C_FIELD(arg0, s32 *, 4) == 0) {
                        var_2 = var_11 - var_10;
                    }
                    if (var_2 >= 0) {
                        M2C_FIELD(arg2, s32 *, 8) = var_7;
                        M2C_FIELD(arg2, s32 *, 0xC) = var_2;
                        M2C_FIELD(arg2, s32 *, 4) = 0;
                    } else {
                        M2C_FIELD(arg2, s32 *, 8) = var_7;
                        M2C_FIELD(arg2, s32 *, 0xC) = (s32) -var_2;
                        M2C_FIELD(arg2, s32 *, 4) = 1;
                    }
                    var_5 = M2C_FIELD(arg2, s32 *, 0xC);
                    var_7_3 = var_5;
                    if ((u32) (var_5 - 1) <= 0x3FFFFFFEU) {
                        do {
                            temp_4_2 = var_7_3 * 2;
                            M2C_FIELD(arg2, s32 *, 0xC) = temp_4_2;
                            M2C_FIELD(arg2, s32 *, 8) = (s32) (M2C_FIELD(arg2, s32 *, 8) - 1);
                            var_7_3 = temp_4_2;
                        } while ((u32) (temp_4_2 - 1) <= 0x3FFFFFFEU);
                        var_5 = temp_4_2;
                    }
                } else {
                    M2C_FIELD(arg2, s32 *, 4) = M2C_FIELD(arg0, s32 *, 4);
                    M2C_FIELD(arg2, s32 *, 8) = var_7;
                    var_5 = temp_2_3;
                    M2C_FIELD(arg2, s32 *, 0xC) = temp_2_3;
                }
                M2C_FIELD(arg2, s32 *, 0) = 3;
                if (var_5 < 0) {
                    M2C_FIELD(arg2, s32 *, 0xC) = (s32) ((var_5 & 1) | ((u32) var_5 >> 1));
                    M2C_FIELD(arg2, s32 *, 8) = (s32) (M2C_FIELD(arg2, s32 *, 8) + 1);
                }
                return arg2;
            }
            /* Duplicate return node #5. Try simplifying control flow for better match */
            return arg1;
        }
        return arg1;
    }
    return arg0;
}
