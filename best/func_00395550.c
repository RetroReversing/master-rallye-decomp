/* machine draft (m2c) for ee-gcc-2.95.2 -O2 -G0 -fno-schedule-insns, tried by autopilot */
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

s32 *func_00395138(s32);                            /* extern */
M2C_UNK func_003951C0(s32 *, s32, s32, s32);        /* extern */
s32 func_00395380(s32, s32);                        /* extern */
M2C_UNK func_00395460(s32, s32 *);                  /* extern */
M2C_UNK func_003954C8(s32 *, s32, s32, s32);        /* extern */
s32 *func_003A3268(s32);                            /* extern */
s32 func_003A3CC8(s32);                             /* extern */
s32 func_003A4508(s32);                             /* extern */

s32 func_00395550(s32 arg0, s32 arg1, u32 arg2, s32 arg3, s32 arg4) {
    s32 sp0;
    u32 sp4;
    s32 sp8;
    s32 spC;
    s32 sp10;
    s32 sp14;
    s32 *sp18;
    s32 *temp_19;

    sp0 = arg1;
    sp4 = arg2;
    sp8 = arg3;
    spC = arg4;
    sp10 = func_003A3CC8(arg0);
    if ((u32) (sp10 - sp0) < sp4) {
        sp4 = sp10 - sp0;
    }
    sp14 = (sp10 - sp4) + spC;
    if (func_00395380(arg0, sp14) != 0) {
        sp18 = func_00395138(sp14);
        func_003951C0(sp18, 0, func_003A4508(arg0), sp0);
        func_003951C0(sp18, sp0 + spC, func_003A4508(arg0) + sp0 + sp4, sp10 - (sp0 + sp4));
        func_003951C0(sp18, sp0, sp8, spC);
        func_00395460(arg0, sp18);
    } else {
        temp_19 = func_003A3268(arg0);
        func_003954C8(temp_19, sp0 + spC, func_003A4508(arg0) + sp0 + sp4, sp10 - (sp0 + sp4));
        func_003951C0(func_003A3268(arg0), sp0, sp8, spC);
    }
    *func_003A3268(arg0) = sp14;
    return arg0;
}
