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

M2C_UNK func_002C51B8(void *, s32, void *, void *); /* extern */
M2C_UNK func_002C54D8(void *, s32, u32, s32, M2C_UNK); /* extern */
M2C_UNK func_002C5A40(void *, s32, s32, s32, M2C_UNK, void *); /* extern */

void func_0032F498(void *arg0, void *arg1) {
    s32 temp_2;
    s32 temp_2_2;
    s32 temp_5;
    s32 temp_5_3;
    s32 temp_6;
    u32 temp_3;
    u32 temp_4_3;
    u32 temp_5_2;
    u32 var_4;
    u32 var_4_2;
    void *temp_16;
    void *temp_16_2;
    void *temp_4;
    void *temp_4_2;
    void *temp_4_4;
    void *temp_4_5;
    void *temp_4_6;
    void *temp_9;
    void *var_7;
    void *var_7_2;

    if ((u32) ((s32) (M2C_FIELD(arg1, s32 *, 4) - M2C_FIELD(arg1, s32 *, 0)) >> 3) < 0x41U) {
        temp_16 = M2C_FIELD(arg0, void **, 0x468);
        temp_2 = (s32) (M2C_FIELD(temp_16, s32 *, 0x24) - M2C_FIELD(temp_16, u32 *, 0x20)) >> 3;
        var_7 = temp_16 + 0x20;
        if (temp_2 >= M2C_FIELD(temp_16, s32 *, 0x40)) {
            M2C_FIELD(temp_16, s32 *, 0x3C) = temp_2;
            temp_4 = temp_16 + 8;
            temp_5 = M2C_FIELD(temp_4, s32 *, 4);
            if (temp_5 != M2C_FIELD(temp_4, s32 *, 8)) {
                if (temp_5 != 0) {
                    M2C_ERROR(/* unknown instruction: ldl $v0, 0x33($s0) */);
                    M2C_ERROR(/* unknown instruction: ldr $v0, 0x2c($s0) */);
                    M2C_ERROR(/* unknown instruction: ldl $v1, 0x3b($s0) */);
                    M2C_ERROR(/* unknown instruction: ldr $v1, 0x34($s0) */);
                    M2C_ERROR(/* unknown instruction: ldl $a2, 0x43($s0) */);
                    M2C_ERROR(/* unknown instruction: ldr $a2, 0x3c($s0) */);
                    M2C_ERROR(/* unknown instruction: sdl $v0, 0x7($a1) */);
                    M2C_ERROR(/* unknown instruction: sdr $v0, ($a1) */);
                    M2C_ERROR(/* unknown instruction: sdl $v1, 0xf($a1) */);
                    M2C_ERROR(/* unknown instruction: sdr $v1, 0x8($a1) */);
                    M2C_ERROR(/* unknown instruction: sdl $a2, 0x17($a1) */);
                    M2C_ERROR(/* unknown instruction: sdr $a2, 0x10($a1) */);
                }
                M2C_FIELD(temp_4, s32 *, 4) = (s32) (M2C_FIELD(temp_4, s32 *, 4) + 0x18);
            } else {
                func_002C51B8(temp_4, temp_5, temp_16 + 0x2C, var_7);
            }
            temp_4_2 = temp_16 + 0x14;
            func_002C54D8(temp_4_2, M2C_FIELD(temp_4_2, s32 *, 4), M2C_FIELD(temp_16, u32 *, 0x20), M2C_FIELD(temp_16, s32 *, 0x24), 0);
            var_7 = temp_16 + 0x20;
        }
        temp_5_2 = M2C_FIELD(var_7, u32 *, 4);
        temp_4_3 = M2C_FIELD(temp_16, u32 *, 0x20);
        temp_9 = temp_16 + 0x14;
        if (temp_4_3 < temp_5_2) {
            var_4 = temp_4_3 + 8;
            do {
                var_4 += 8;
            } while (var_4 < temp_5_2);
        }
        M2C_FIELD(var_7, u32 *, 4) = (u32) (temp_5_2 - (temp_5_2 - temp_4_3));
        M2C_FIELD(temp_16, s32 *, 0x34) = 4;
        M2C_FIELD(temp_16, s32 *, 0x40) = 2;
        M2C_FIELD(temp_16, s32 *, 0x38) = (s32) ((s32) (M2C_FIELD(temp_9, s32 *, 4) - M2C_FIELD(temp_16, s32 *, 0x14)) >> 3);
        M2C_FIELD(temp_16, s32 *, 0x30) = (s32) M2C_FIELD(temp_16, s32 *, 0);
        M2C_FIELD(temp_16, f32 *, 0x2C) = (f32) M2C_FIELD(temp_16, f32 *, 4);
        temp_4_4 = M2C_FIELD(arg0, void **, 0x468) + 0x20;
        func_002C5A40(temp_4_4, M2C_FIELD(temp_4_4, s32 *, 4), M2C_FIELD(arg1, s32 *, 0), M2C_FIELD(arg1, s32 *, 4), 0, temp_9);
        temp_16_2 = M2C_FIELD(arg0, void **, 0x468);
        temp_2_2 = (s32) (M2C_FIELD(temp_16_2, s32 *, 0x24) - M2C_FIELD(temp_16_2, u32 *, 0x20)) >> 3;
        var_7_2 = temp_16_2 + 0x20;
        if (temp_2_2 >= M2C_FIELD(temp_16_2, s32 *, 0x40)) {
            M2C_FIELD(temp_16_2, s32 *, 0x3C) = temp_2_2;
            temp_4_5 = temp_16_2 + 8;
            temp_5_3 = M2C_FIELD(temp_4_5, s32 *, 4);
            if (temp_5_3 != M2C_FIELD(temp_4_5, s32 *, 8)) {
                if (temp_5_3 != 0) {
                    M2C_ERROR(/* unknown instruction: ldl $v0, 0x33($s0) */);
                    M2C_ERROR(/* unknown instruction: ldr $v0, 0x2c($s0) */);
                    M2C_ERROR(/* unknown instruction: ldl $v1, 0x3b($s0) */);
                    M2C_ERROR(/* unknown instruction: ldr $v1, 0x34($s0) */);
                    M2C_ERROR(/* unknown instruction: ldl $a2, 0x43($s0) */);
                    M2C_ERROR(/* unknown instruction: ldr $a2, 0x3c($s0) */);
                    M2C_ERROR(/* unknown instruction: sdl $v0, 0x7($a1) */);
                    M2C_ERROR(/* unknown instruction: sdr $v0, ($a1) */);
                    M2C_ERROR(/* unknown instruction: sdl $v1, 0xf($a1) */);
                    M2C_ERROR(/* unknown instruction: sdr $v1, 0x8($a1) */);
                    M2C_ERROR(/* unknown instruction: sdl $a2, 0x17($a1) */);
                    M2C_ERROR(/* unknown instruction: sdr $a2, 0x10($a1) */);
                }
                M2C_FIELD(temp_4_5, s32 *, 4) = (s32) (M2C_FIELD(temp_4_5, s32 *, 4) + 0x18);
            } else {
                func_002C51B8(temp_4_5, temp_5_3, temp_16_2 + 0x2C, var_7_2);
            }
            temp_4_6 = temp_16_2 + 0x14;
            func_002C54D8(temp_4_6, M2C_FIELD(temp_4_6, s32 *, 4), M2C_FIELD(temp_16_2, u32 *, 0x20), M2C_FIELD(temp_16_2, s32 *, 0x24), 0);
            var_7_2 = temp_16_2 + 0x20;
        }
        temp_3 = M2C_FIELD(var_7_2, u32 *, 4);
        var_4_2 = M2C_FIELD(temp_16_2, u32 *, 0x20);
        temp_6 = temp_3 - var_4_2;
        if (var_4_2 < temp_3) {
            do {
                var_4_2 += 8;
            } while (var_4_2 < temp_3);
        }
        M2C_FIELD(var_7_2, u32 *, 4) = (u32) (temp_3 - temp_6);
    }
}
