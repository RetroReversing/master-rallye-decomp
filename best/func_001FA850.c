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

M2C_UNK *func_002B1FC0(M2C_UNK, M2C_UNK *, s32, s32); /* extern */
M2C_UNK *func_003D2910(M2C_UNK);                    /* extern */

void func_001FA850(f32 *arg0, M2C_UNK **arg1, void *arg2) {
    M2C_UNK *sp20;
    M2C_UNK *temp_5_2;
    M2C_UNK *var_2_3;
    M2C_UNK *var_4;
    f32 temp_f1;
    f32 temp_f2;
    f32 temp_f3;
    f32 temp_f5;
    s32 temp_3;
    s32 var_2;
    s32 var_2_2;
    u32 temp_17;
    u32 temp_20;
    u32 var_16;
    u32 var_18;
    void *temp_3_2;
    void *temp_5;

    temp_17 = ((s32) (M2C_FIELD(arg2, s32 *, 4) - M2C_FIELD(arg2, s32 *, 0)) >> 4) - 1;
    var_18 = 0;
    if (temp_17 != 0) {
        var_16 = 1;
        do {
            temp_20 = var_16;
            if (temp_17 >= var_16) {
                do {
                    temp_3 = M2C_FIELD(arg2, s32 *, 0);
                    temp_f5 = *arg0;
                    temp_5 = temp_3 + (var_16 * 0x10);
                    temp_3_2 = temp_3 + (var_18 * 0x10);
                    temp_f3 = M2C_FIELD(temp_3_2, f32 *, 0) - M2C_FIELD(temp_5, f32 *, 0);
                    var_2 = 1;
                    if (!(fabsf(temp_f3) < temp_f5)) {
                        var_2 = 0;
                    }
                    if (var_2 == 0) {
                        var_16 = temp_17 + 1;
                    } else {
                        temp_f2 = M2C_FIELD(temp_3_2, f32 *, 4) - M2C_FIELD(temp_5, f32 *, 4);
                        temp_f1 = M2C_FIELD(temp_3_2, f32 *, 8) - M2C_FIELD(temp_5, f32 *, 8);
                        var_2_2 = 1;
                        if (!(((temp_f3 * temp_f3) + (temp_f2 * temp_f2) + (temp_f1 * temp_f1)) < (temp_f5 * temp_f5))) {
                            var_2_2 = 0;
                        }
                        if (var_2_2 != 0) {
                            temp_5_2 = *arg1;
                            sp20 = temp_5_2;
                            var_4 = func_002B1FC0(0x10, temp_5_2, M2C_FIELD(temp_5, s32 *, 0xC), M2C_FIELD(temp_3_2, s32 *, 0xC));
                            var_2_3 = var_4 + 8;
                            if (var_4 == NULL) {
                                var_4 = func_003D2910(0x10);
                                var_2_3 = var_4 + 8;
                            }
                            if (var_2_3 != NULL) {
                                M2C_ERROR(/* unknown instruction: ldl $v0, 0x7($sp) */);
                                M2C_ERROR(/* unknown instruction: ldr $v0, ($sp) */);
                                M2C_ERROR(/* unknown instruction: sdl $v0, 0xf($a0) */);
                                M2C_ERROR(/* unknown instruction: sdr $v0, 0x8($a0) */);
                            }
                            M2C_FIELD(var_4, M2C_UNK **, 0) = sp20;
                            M2C_FIELD(var_4, M2C_UNK **, 4) = (M2C_UNK *) M2C_FIELD(sp20, M2C_UNK **, 4);
                            *M2C_FIELD(sp20, M2C_UNK **, 4) = var_4;
                            M2C_FIELD(sp20, M2C_UNK **, 4) = var_4;
                        }
                    }
                    var_16 += 1;
                } while (temp_17 >= var_16);
            }
            var_18 = temp_20;
            var_16 = var_18 + 1;
        } while (var_18 < temp_17);
    }
}
