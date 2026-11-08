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

void func_0027C728(void *arg0) {
    void *temp_2;
    void *temp_3;

    temp_2 = arg0 + 0xAC;
    temp_3 = arg0 + 0x134;
    M2C_FIELD(arg0, f32 *, 0x134) = (f32) M2C_FIELD(arg0, f32 *, 0xAC);
    M2C_FIELD(temp_3, f32 *, 4) = (f32) M2C_FIELD(temp_2, f32 *, 4);
    M2C_FIELD(temp_3, f32 *, 8) = (f32) M2C_FIELD(temp_2, f32 *, 8);
    M2C_FIELD(temp_3, f32 *, 0xC) = (f32) M2C_FIELD(temp_2, f32 *, 0xC);
    M2C_ERROR(/* unknown instruction: ldl $v0, 0xc3($a0) */);
    M2C_ERROR(/* unknown instruction: ldr $v0, 0xbc($a0) */);
    M2C_ERROR(/* unknown instruction: ldl $v1, 0xcb($a0) */);
    M2C_ERROR(/* unknown instruction: ldr $v1, 0xc4($a0) */);
    M2C_ERROR(/* unknown instruction: ldl $a1, 0xd3($a0) */);
    M2C_ERROR(/* unknown instruction: ldr $a1, 0xcc($a0) */);
    M2C_ERROR(/* unknown instruction: ldl $a2, 0xdb($a0) */);
    M2C_ERROR(/* unknown instruction: ldr $a2, 0xd4($a0) */);
    M2C_ERROR(/* unknown instruction: sdl $v0, 0x157($a0) */);
    M2C_ERROR(/* unknown instruction: sdr $v0, 0x150($a0) */);
    M2C_ERROR(/* unknown instruction: sdl $v1, 0x15f($a0) */);
    M2C_ERROR(/* unknown instruction: sdr $v1, 0x158($a0) */);
    M2C_ERROR(/* unknown instruction: sdl $a1, 0x167($a0) */);
    M2C_ERROR(/* unknown instruction: sdr $a1, 0x160($a0) */);
    M2C_ERROR(/* unknown instruction: sdl $a2, 0x16f($a0) */);
    M2C_ERROR(/* unknown instruction: sdr $a2, 0x168($a0) */);
    M2C_FIELD(arg0, s32 *, 0x170) = (s32) M2C_FIELD(arg0, s32 *, 0xDC);
}
