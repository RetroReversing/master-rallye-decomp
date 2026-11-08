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

s32 func_0039A210(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 sp0;
    s32 var_6;

    var_6 = arg2;
    sp0 = (s32) (arg1 - arg0) >> 3;
loop_1:
    if (sp0 > 0) {
        var_6 -= 8;
        M2C_ERROR(/* unknown instruction: ldl $a6, 0x7($a4) */);
        M2C_ERROR(/* unknown instruction: ldr $a6, ($a4) */);
        M2C_ERROR(/* unknown instruction: sdl $a6, 0x7($v0) */);
        M2C_ERROR(/* unknown instruction: sdr $a6, ($v0) */);
        sp0 -= 1;
        goto loop_1;
    }
    return var_6;
}
