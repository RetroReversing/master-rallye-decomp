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

void func_003C47C8(s32 arg0, s32 arg1) {
    s32 var_4;

    var_4 = arg0;
    if (var_4 != arg1) {
        do {
            M2C_ERROR(/* unknown instruction: ldl $v0, 0x7($a2) */);
            M2C_ERROR(/* unknown instruction: ldr $v0, ($a2) */);
            M2C_ERROR(/* unknown instruction: sdl $v0, 0x7($a0) */);
            M2C_ERROR(/* unknown instruction: sdr $v0, ($a0) */);
            var_4 += 8;
        } while (var_4 != arg1);
    }
}
