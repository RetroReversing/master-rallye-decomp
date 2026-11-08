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

extern M2C_UNK D_00436128;

void *func_003C95F0(void *arg0) {
    M2C_ERROR(/* unknown instruction: ldl $a1, 0x7($a4) */);
    M2C_ERROR(/* unknown instruction: ldr $a1, ($a4) */);
    M2C_ERROR(/* unknown instruction: ldl $a2, 0xf($a4) */);
    M2C_ERROR(/* unknown instruction: ldr $a2, 0x8($a4) */);
    M2C_ERROR(/* unknown instruction: sdl $a1, 0x7($a0) */);
    M2C_ERROR(/* unknown instruction: sdr $a1, ($a0) */);
    M2C_ERROR(/* unknown instruction: sdl $a2, 0xf($a0) */);
    M2C_ERROR(/* unknown instruction: sdr $a2, 0x8($a0) */);
    M2C_FIELD(arg0, s32 *, 0x10) = (s32) M2C_FIELD(&D_00436128, s32 *, 0x10);
    return arg0;
}
