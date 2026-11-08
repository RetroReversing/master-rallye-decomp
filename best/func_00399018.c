/* machine draft (m2c) for ee-gcc-2.95.3 -O1 -G0, tried by autopilot */
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

M2C_UNK func_00398F98(s32, s32);                    /* extern */

s32 func_00399018(s32 arg0, s32 arg1, s32 arg2, s8 arg3) {
    s32 sp0;
    s32 sp4;
    s32 sp8;
    s8 spC;
    s32 sp10;

    sp0 = arg0;
    sp4 = arg1;
    sp8 = arg2;
    spC = arg3;
    sp10 = sp8;
loop_1:
    if (sp0 != sp4) {
        func_00398F98(sp10, sp0);
        sp0 += 8;
        sp10 += 8;
        goto loop_1;
    }
    return sp10;
}
