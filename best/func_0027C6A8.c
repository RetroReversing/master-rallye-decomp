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

M2C_UNK func_00205628(void *, void *, M2C_UNK);     /* extern */
M2C_UNK func_0027C7A0(void *);                      /* extern */

void func_0027C6A8(void *arg0, void *arg1) {
    M2C_ERROR(/* unknown instruction: ldl $v0, 0x7($a1) */);
    M2C_ERROR(/* unknown instruction: ldr $v0, ($a1) */);
    M2C_ERROR(/* unknown instruction: ldl $v1, 0xf($a1) */);
    M2C_ERROR(/* unknown instruction: ldr $v1, 0x8($a1) */);
    M2C_ERROR(/* unknown instruction: ldl $a0, 0x17($a1) */);
    M2C_ERROR(/* unknown instruction: ldr $a0, 0x10($a1) */);
    M2C_ERROR(/* unknown instruction: ldl $a2, 0x1f($a1) */);
    M2C_ERROR(/* unknown instruction: ldr $a2, 0x18($a1) */);
    M2C_ERROR(/* unknown instruction: sdl $v0, 0xc3($s0) */);
    M2C_ERROR(/* unknown instruction: sdr $v0, 0xbc($s0) */);
    M2C_ERROR(/* unknown instruction: sdl $v1, 0xcb($s0) */);
    M2C_ERROR(/* unknown instruction: sdr $v1, 0xc4($s0) */);
    M2C_ERROR(/* unknown instruction: sdl $a0, 0xd3($s0) */);
    M2C_ERROR(/* unknown instruction: sdr $a0, 0xcc($s0) */);
    M2C_ERROR(/* unknown instruction: sdl $a2, 0xdb($s0) */);
    M2C_FIELD(arg0, s32 *, 0xDC) = (s32) M2C_FIELD(arg1, s32 *, 0x20);
    func_00205628(arg0 + 0xAC, arg0 + 0xBC, M2C_ERROR(/* unknown instruction: sdr $a2, 0xd4($s0) */));
    func_0027C7A0(arg0);
}
