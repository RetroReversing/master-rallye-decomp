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

s32 func_00376DE8(void *, void *, s32, void *, M2C_UNK, void *); /* extern */

s32 func_003774D0(void *arg0, s32 arg1) {
    s32 temp_2;
    s32 temp_2_2;
    s32 temp_3;
    s32 var_3;
    s32 var_4;
    void ***var_2;
    void **temp_2_3;
    void **var_5;
    void *temp_7;
    void *temp_9;

    var_3 = 0;
    if (arg1 > 1) {
        var_3 = 1;
loop_2:
        if ((1 << var_3) < arg1) {
            var_3 += 1;
            goto loop_2;
        }
    }
    var_4 = var_3;
    var_5 = NULL;
    if (var_4 < 0xF) {
        temp_2_2 = arg0 + 8;
        var_2 = temp_2_2 + (var_4 * 0x10);
loop_9:
        temp_2_3 = *var_2;
        if (*temp_2_3 == NULL) {
            var_4 += 1;
            if (var_4 < 0xF) {
                var_2 = temp_2_2 + (var_4 * 0x10);
                goto loop_9;
            }
        } else {
            var_5 = temp_2_3;
        }
    }
    if (var_5 != NULL) {
        temp_9 = *var_5;
        temp_7 = M2C_FIELD(temp_9, void **, 0x14);
        M2C_FIELD(temp_9, void **, 0x14) = NULL;
        M2C_FIELD(M2C_FIELD(temp_7, void **, 8), void **, 4) = (void *) M2C_FIELD(temp_7, void **, 4);
        M2C_FIELD(M2C_FIELD(temp_7, void **, 4), void **, 8) = (void *) M2C_FIELD(temp_7, void **, 8);
        temp_3 = M2C_FIELD(arg0, s32 *, 0x1C20C) - 1;
        M2C_FIELD(arg0, s32 *, 0x1C20C) = temp_3;
        if (temp_7 != (arg0 + ((temp_3 * 0x10) + 0x1420C))) {
            M2C_ERROR(/* unknown instruction: ldl $v1, 0x7($v0) */);
            M2C_ERROR(/* unknown instruction: ldr $v1, ($v0) */);
            M2C_ERROR(/* unknown instruction: ldl $a0, 0xf($v0) */);
            M2C_ERROR(/* unknown instruction: ldr $a0, 0x8($v0) */);
            M2C_ERROR(/* unknown instruction: sdl $v1, 0x7($a3) */);
            M2C_ERROR(/* unknown instruction: sdr $v1, ($a3) */);
            M2C_ERROR(/* unknown instruction: sdl $a0, 0xf($a3) */);
            M2C_ERROR(/* unknown instruction: sdr $a0, 0x8($a3) */);
            M2C_FIELD(M2C_FIELD(temp_7, void **, 0), void **, 0x14) = temp_7;
            M2C_FIELD(M2C_FIELD(temp_7, void **, 8), void **, 4) = temp_7;
            M2C_FIELD(M2C_FIELD(temp_7, void **, 4), void **, 8) = temp_7;
        }
        M2C_FIELD(temp_9, s32 *, 0x10) = 0;
        temp_2 = func_00376DE8(arg0, temp_9, arg1, temp_7, 0x1420C, temp_9);
        M2C_FIELD(arg0, s32 *, 0x14208) = (s32) (M2C_FIELD(arg0, s32 *, 0x14208) + 1);
        return temp_2;
    }
    return 0;
}
