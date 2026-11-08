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

void *func_0026BAD8(void *arg0, void *arg1) {
    M2C_ERROR(/* unknown instruction: ldl $v1, 0xb3($a1) */);
    M2C_ERROR(/* unknown instruction: ldr $v1, 0xac($a1) */);
    M2C_ERROR(/* unknown instruction: ldl $a2, 0xbb($a1) */);
    M2C_ERROR(/* unknown instruction: ldr $a2, 0xb4($a1) */);
    M2C_ERROR(/* unknown instruction: ldl $a3, 0xc3($a1) */);
    M2C_ERROR(/* unknown instruction: ldr $a3, 0xbc($a1) */);
    M2C_ERROR(/* unknown instruction: ldl $a4, 0xcb($a1) */);
    M2C_ERROR(/* unknown instruction: ldr $a4, 0xc4($a1) */);
    M2C_ERROR(/* unknown instruction: sdl $v1, 0x7($a0) */);
    M2C_ERROR(/* unknown instruction: sdr $v1, ($a0) */);
    M2C_ERROR(/* unknown instruction: sdl $a2, 0xf($a0) */);
    M2C_ERROR(/* unknown instruction: sdr $a2, 0x8($a0) */);
    M2C_ERROR(/* unknown instruction: sdl $a3, 0x17($a0) */);
    M2C_ERROR(/* unknown instruction: sdr $a3, 0x10($a0) */);
    M2C_ERROR(/* unknown instruction: sdl $a4, 0x1f($a0) */);
    M2C_ERROR(/* unknown instruction: sdr $a4, 0x18($a0) */);
    M2C_ERROR(/* unknown instruction: ldl $v1, 0xd3($a1) */);
    M2C_ERROR(/* unknown instruction: ldr $v1, 0xcc($a1) */);
    M2C_ERROR(/* unknown instruction: ldl $a2, 0xdb($a1) */);
    M2C_ERROR(/* unknown instruction: ldr $a2, 0xd4($a1) */);
    M2C_ERROR(/* unknown instruction: sdl $v1, 0x27($a0) */);
    M2C_ERROR(/* unknown instruction: sdr $v1, 0x20($a0) */);
    M2C_ERROR(/* unknown instruction: sdl $a2, 0x2f($a0) */);
    M2C_ERROR(/* unknown instruction: sdr $a2, 0x28($a0) */);
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) M2C_FIELD(arg1, s32 *, 0xDC);
    return arg0;
}
