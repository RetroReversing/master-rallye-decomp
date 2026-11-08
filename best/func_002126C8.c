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

s32 *func_002B1FC0(M2C_UNK);                        /* extern */
s32 *func_003D2910(M2C_UNK);                        /* extern */

s32 **func_002126C8(s32 **arg0, void *arg1, s32 arg2, void *arg3, u32 *arg4) {
    s32 *temp_2;
    s32 *temp_2_2;
    s32 *temp_2_3;
    s32 *temp_2_4;
    s32 *temp_2_5;
    s32 *temp_3_4;
    s32 *temp_3_5;
    s32 *temp_3_6;
    s32 *temp_3_8;
    s32 *temp_4;
    s32 *temp_4_2;
    s32 *temp_4_3;
    s32 *var_2;
    s32 *var_2_2;
    s32 *var_3;
    s32 *var_3_2;
    s32 *var_4;
    s32 *var_6;
    s32 *var_7;
    s32 *var_8;
    void *temp_3;
    void *temp_3_2;
    void *temp_3_3;
    void *temp_3_7;
    void *temp_3_9;

    if ((arg3 == M2C_FIELD(arg1, void **, 0)) || (arg2 != 0) || ((u32) *arg4 < (u32) M2C_FIELD(arg3, u32 *, 0x10))) {
        var_3 = func_002B1FC0(0x18);
        var_2 = var_3 + 0x10;
        if (var_3 == NULL) {
            var_3 = func_003D2910(0x18);
            var_2 = var_3 + 0x10;
        }
        var_7 = var_3;
        if (var_2 != NULL) {
            M2C_ERROR(/* unknown instruction: ldl $v0, 0x7($s1) */);
            M2C_ERROR(/* unknown instruction: ldr $v0, ($s1) */);
            M2C_ERROR(/* unknown instruction: sdl $v0, 0x17($v1) */);
            M2C_ERROR(/* unknown instruction: sdr $v0, 0x10($v1) */);
        }
        M2C_FIELD(arg3, s32 **, 8) = var_7;
        temp_3 = M2C_FIELD(arg1, void **, 0);
        if (arg3 != temp_3) {
            if (arg3 == M2C_FIELD(temp_3, s32 **, 8)) {
                M2C_FIELD(temp_3, s32 **, 8) = var_7;
            }
        } else {
            M2C_FIELD(arg3, s32 **, 4) = var_7;
            M2C_FIELD(M2C_FIELD(arg1, void **, 0), s32 **, 0xC) = var_7;
        }
    } else {
        var_3_2 = func_002B1FC0(0x18);
        var_2_2 = var_3_2 + 0x10;
        if (var_3_2 == NULL) {
            var_3_2 = func_003D2910(0x18);
            var_2_2 = var_3_2 + 0x10;
        }
        var_7 = var_3_2;
        if (var_2_2 != NULL) {
            M2C_ERROR(/* unknown instruction: ldl $v0, 0x7($s1) */);
            M2C_ERROR(/* unknown instruction: ldr $v0, ($s1) */);
            M2C_ERROR(/* unknown instruction: sdl $v0, 0x17($v1) */);
            M2C_ERROR(/* unknown instruction: sdr $v0, 0x10($v1) */);
        }
        M2C_FIELD(arg3, s32 **, 0xC) = var_7;
        temp_3_2 = M2C_FIELD(arg1, void **, 0);
        if (arg3 == M2C_FIELD(temp_3_2, s32 **, 0xC)) {
            M2C_FIELD(temp_3_2, s32 **, 0xC) = var_7;
        }
    }
    M2C_FIELD(var_7, void **, 4) = arg3;
    var_8 = var_7;
    M2C_FIELD(var_7, s32 *, 8) = 0;
    M2C_FIELD(var_7, s32 *, 0xC) = 0;
    temp_3_3 = M2C_FIELD(arg1, void **, 0);
    M2C_FIELD(var_7, s32 *, 0) = 0;
    if ((var_7 != M2C_FIELD(temp_3_3, s32 **, 4)) && (M2C_FIELD(arg3, s32 *, 0) == 0)) {
loop_24:
        temp_3_4 = M2C_FIELD(var_8, s32 **, 4);
        temp_2 = M2C_FIELD(temp_3_4, s32 **, 4);
        temp_4 = M2C_FIELD(temp_2, s32 **, 8);
        if (temp_3_4 == temp_4) {
            temp_3_5 = M2C_FIELD(temp_2, s32 **, 0xC);
            if (temp_3_5 == NULL) {
                goto block_32;
            }
            if (*temp_3_5 != 0) {
block_32:
                temp_4_2 = M2C_FIELD(M2C_FIELD(var_8, s32 **, 4), s32 **, 0xC);
                if (var_8 == temp_4_2) {
                    var_8 = M2C_FIELD(var_8, s32 **, 4);
                    M2C_FIELD(var_8, s32 **, 0xC) = (s32 *) M2C_FIELD(temp_4_2, s32 **, 8);
                    temp_2_2 = M2C_FIELD(temp_4_2, s32 **, 8);
                    if (temp_2_2 != NULL) {
                        M2C_FIELD(temp_2_2, s32 **, 4) = var_8;
                    }
                    M2C_FIELD(temp_4_2, s32 **, 4) = (s32 *) M2C_FIELD(var_8, s32 **, 4);
                    if (var_8 != M2C_FIELD(temp_3_3, s32 **, 4)) {
                        temp_3_6 = M2C_FIELD(var_8, s32 **, 4);
                        if (var_8 != M2C_FIELD(temp_3_6, s32 **, 8)) {
                            M2C_FIELD(temp_3_6, s32 **, 0xC) = temp_4_2;
                        } else {
                            M2C_FIELD(temp_3_6, s32 **, 8) = temp_4_2;
                        }
                    } else {
                        M2C_FIELD(temp_3_3, s32 **, 4) = temp_4_2;
                    }
                    M2C_FIELD(temp_4_2, s32 **, 8) = M2C_FIELD(var_8, s32 **, 4);
                    M2C_FIELD(M2C_FIELD(var_8, s32 **, 4), s32 **, 4) = temp_4_2;
                }
                M2C_FIELD(M2C_FIELD(var_8, void **, 4), s32 *, 0) = 1;
                *M2C_FIELD(M2C_FIELD(var_8, void **, 4), s32 **, 4) = 0;
                var_4 = M2C_FIELD(M2C_FIELD(var_8, void **, 4), s32 **, 4);
                var_6 = M2C_FIELD(var_4, s32 **, 8);
                M2C_FIELD(var_4, s32 **, 8) = (s32 *) M2C_FIELD(var_6, s32 **, 0xC);
                temp_2_3 = M2C_FIELD(var_6, s32 **, 0xC);
                if (temp_2_3 != NULL) {
                    M2C_FIELD(temp_2_3, s32 **, 4) = var_4;
                }
                M2C_FIELD(var_6, void **, 4) = (void *) M2C_FIELD(var_4, void **, 4);
                if (var_4 != M2C_FIELD(temp_3_3, s32 **, 4)) {
                    temp_3_7 = M2C_FIELD(var_4, void **, 4);
                    if (var_4 != M2C_FIELD(temp_3_7, s32 **, 0xC)) {
                        M2C_FIELD(temp_3_7, s32 **, 8) = var_6;
                    } else {
                        M2C_FIELD(temp_3_7, s32 **, 0xC) = var_6;
                    }
                } else {
                    M2C_FIELD(temp_3_3, s32 **, 4) = var_6;
                }
                M2C_FIELD(var_6, s32 **, 0xC) = var_4;
                goto block_86;
            }
            *temp_4 = 1;
            *temp_3_5 = 1;
            goto block_62;
        }
        if (temp_4 == NULL) {
            goto block_63;
        }
        if (*temp_4 != 0) {
block_63:
            temp_4_3 = M2C_FIELD(M2C_FIELD(var_8, s32 **, 4), s32 **, 8);
            if (var_8 == temp_4_3) {
                var_8 = M2C_FIELD(var_8, s32 **, 4);
                M2C_FIELD(var_8, s32 **, 8) = (s32 *) M2C_FIELD(temp_4_3, s32 **, 0xC);
                temp_2_4 = M2C_FIELD(temp_4_3, s32 **, 0xC);
                if (temp_2_4 != NULL) {
                    M2C_FIELD(temp_2_4, s32 **, 4) = var_8;
                }
                M2C_FIELD(temp_4_3, s32 **, 4) = (s32 *) M2C_FIELD(var_8, s32 **, 4);
                if (var_8 != M2C_FIELD(temp_3_3, s32 **, 4)) {
                    temp_3_8 = M2C_FIELD(var_8, s32 **, 4);
                    if (var_8 != M2C_FIELD(temp_3_8, s32 **, 0xC)) {
                        M2C_FIELD(temp_3_8, s32 **, 8) = temp_4_3;
                    } else {
                        M2C_FIELD(temp_3_8, s32 **, 0xC) = temp_4_3;
                    }
                } else {
                    M2C_FIELD(temp_3_3, s32 **, 4) = temp_4_3;
                }
                M2C_FIELD(temp_4_3, s32 **, 0xC) = M2C_FIELD(var_8, s32 **, 4);
                M2C_FIELD(M2C_FIELD(var_8, s32 **, 4), s32 **, 4) = temp_4_3;
            }
            M2C_FIELD(M2C_FIELD(var_8, void **, 4), s32 *, 0) = 1;
            *M2C_FIELD(M2C_FIELD(var_8, void **, 4), s32 **, 4) = 0;
            var_4 = M2C_FIELD(M2C_FIELD(var_8, void **, 4), s32 **, 4);
            var_6 = M2C_FIELD(var_4, s32 **, 0xC);
            M2C_FIELD(var_4, s32 **, 0xC) = (s32 *) M2C_FIELD(var_6, s32 **, 8);
            temp_2_5 = M2C_FIELD(var_6, s32 **, 8);
            if (temp_2_5 != NULL) {
                M2C_FIELD(temp_2_5, s32 **, 4) = var_4;
            }
            M2C_FIELD(var_6, void **, 4) = (void *) M2C_FIELD(var_4, void **, 4);
            if (var_4 != M2C_FIELD(temp_3_3, s32 **, 4)) {
                temp_3_9 = M2C_FIELD(var_4, void **, 4);
                if (var_4 != M2C_FIELD(temp_3_9, s32 **, 8)) {
                    M2C_FIELD(temp_3_9, s32 **, 0xC) = var_6;
                } else {
                    M2C_FIELD(temp_3_9, s32 **, 8) = var_6;
                }
            } else {
                M2C_FIELD(temp_3_3, s32 **, 4) = var_6;
            }
            M2C_FIELD(var_6, s32 **, 8) = var_4;
block_86:
            M2C_FIELD(var_4, s32 **, 4) = var_6;
        } else {
            M2C_FIELD(temp_3_4, s32 *, 0) = 1;
            *temp_4 = 1;
block_62:
            *M2C_FIELD(M2C_FIELD(var_8, s32 **, 4), s32 **, 4) = 0;
            var_8 = M2C_FIELD(M2C_FIELD(var_8, s32 **, 4), s32 **, 4);
        }
        if ((var_8 != M2C_FIELD(temp_3_3, s32 **, 4)) && (*M2C_FIELD(var_8, s32 **, 4) == 0)) {
            goto loop_24;
        }
    }
    *M2C_FIELD(temp_3_3, s32 **, 4) = 1;
    M2C_FIELD(arg1, s32 *, 4) = (s32) (M2C_FIELD(arg1, s32 *, 4) + 1);
    *arg0 = var_7;
    return arg0;
}
