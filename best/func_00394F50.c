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

s32 func_00394F50(s8 *arg0, s32 arg1, s8 *arg2, s32 arg3) {
    s8 *sp0;
    s32 sp4;
    s8 *sp8;
    s32 spC;

    sp0 = arg0;
    sp4 = arg1;
    sp8 = arg2;
    spC = arg3;
loop_1:
    if (sp0 != sp4) {
        if (sp8 == spC) {
            goto block_4;
        }
        if (*sp0 < *sp8) {
            return -1;
        }
        if (*sp8 < *sp0) {
            return 1;
        }
        sp0 += 1;
        sp8 += 1;
        goto loop_1;
    }
block_4:
    if (sp8 == spC) {
        return (s32) sp0 != sp4;
    }
    return -1;
}
