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

void func_001C78D0(s32 arg0, s32 arg1) {
    s32 var_2;
    s32 var_5;

    var_5 = arg1;
    var_2 = arg0;
    if (var_5 != 0) {
        do {
            var_5 -= 1;
            if (var_2 != 0) {
                M2C_ERROR(/* unknown instruction: ldl $v1, 0x7($a2) */);
                M2C_ERROR(/* unknown instruction: ldr $v1, ($a2) */);
                M2C_ERROR(/* unknown instruction: ldl $a0, 0xf($a2) */);
                M2C_ERROR(/* unknown instruction: ldr $a0, 0x8($a2) */);
                M2C_ERROR(/* unknown instruction: ldl $a3, 0x17($a2) */);
                M2C_ERROR(/* unknown instruction: ldr $a3, 0x10($a2) */);
                M2C_ERROR(/* unknown instruction: ldl $a4, 0x1f($a2) */);
                M2C_ERROR(/* unknown instruction: ldr $a4, 0x18($a2) */);
                M2C_ERROR(/* unknown instruction: sdl $v1, 0x7($v0) */);
                M2C_ERROR(/* unknown instruction: sdr $v1, ($v0) */);
                M2C_ERROR(/* unknown instruction: sdl $a0, 0xf($v0) */);
                M2C_ERROR(/* unknown instruction: sdr $a0, 0x8($v0) */);
                M2C_ERROR(/* unknown instruction: sdl $a3, 0x17($v0) */);
                M2C_ERROR(/* unknown instruction: sdr $a3, 0x10($v0) */);
                M2C_ERROR(/* unknown instruction: sdl $a4, 0x1f($v0) */);
                M2C_ERROR(/* unknown instruction: sdr $a4, 0x18($v0) */);
                M2C_ERROR(/* unknown instruction: ldl $v1, 0x27($a2) */);
                M2C_ERROR(/* unknown instruction: ldr $v1, 0x20($a2) */);
                M2C_ERROR(/* unknown instruction: ldl $a0, 0x2f($a2) */);
                M2C_ERROR(/* unknown instruction: ldr $a0, 0x28($a2) */);
                M2C_ERROR(/* unknown instruction: sdl $v1, 0x27($v0) */);
                M2C_ERROR(/* unknown instruction: sdr $v1, 0x20($v0) */);
                M2C_ERROR(/* unknown instruction: sdl $a0, 0x2f($v0) */);
                M2C_ERROR(/* unknown instruction: sdr $a0, 0x28($v0) */);
            }
            var_2 += 0x30;
        } while (var_5 != 0);
    }
}
