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

void func_0039A398(s32 arg0, s32 arg1, s32 arg2) {
    s32 sp0;
    s32 sp4;
    s32 sp8;

    sp0 = arg0;
    sp4 = arg1;
    sp8 = arg2;
loop_1:
    if (sp0 != sp4) {
        M2C_ERROR(/* unknown instruction: ldl $a0, 0x7($v1) */);
        M2C_ERROR(/* unknown instruction: ldr $a0, ($v1) */);
        M2C_ERROR(/* unknown instruction: sdl $a0, 0x7($v0) */);
        M2C_ERROR(/* unknown instruction: sdr $a0, ($v0) */);
        sp0 += 8;
        goto loop_1;
    }
}
