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

s32 *func_0039C298(s32);                            /* extern */
s32 *func_0039C2D0(s32);                            /* extern */
s32 func_0039C4A0(s32);                             /* extern */
s32 *func_003A8F68(s32 *);                          /* extern */
s32 func_003A90D0(s32 *, s32, s32);                 /* extern */
M2C_UNK func_003A9140(s32, s32);                    /* extern */

s32 func_0039C508(s32 arg0, s32 *arg1, s32 arg2) {
    s32 sp0;
    s32 sp4;
    s32 sp8;

    sp0 = arg2;
    sp4 = *arg1;
    sp8 = *func_003A8F68(arg1);
loop_1:
    if (sp8 != 0) {
        if (func_003A90D0(arg1 + 8, func_0039C4A0(sp8), sp0) == 0) {
            sp4 = sp8;
            sp8 = *func_0039C2D0(sp8);
        } else {
            sp8 = *func_0039C298(sp8);
        }
        goto loop_1;
    }
    func_003A9140(arg0, sp4);
    return arg0;
}
