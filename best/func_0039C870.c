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

s32 *func_0039C298(s32);                            /* extern */
s32 *func_0039C2D0(s32);                            /* extern */
s32 func_0039C468(s8 *, s32);                       /* extern */
s32 func_0039C4A0(s32);                             /* extern */
s32 func_0039C7C0(void *, s32);                     /* extern */
s32 *func_0039C838(s32);                            /* extern */
M2C_UNK func_003A57D0(s32, s32);                    /* extern */
s32 *func_003A8F68(void *);                         /* extern */
s32 *func_003A8FA0(void *);                         /* extern */
s32 *func_003A8FD8(void *);                         /* extern */
s32 func_003A90D0(void *, s32, s32);                /* extern */
M2C_UNK func_003A9140(s32, s32);                    /* extern */

s32 func_0039C870(s32 arg0, void *arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 sp0;
    s32 sp4;
    s32 sp8;
    s32 spC;
    s32 sp10;
    s32 sp14;
    s8 sp18;
    void *sp1C;
    s32 sp20;
    s32 *sp24;
    s32 *sp28;
    s32 *sp2C;
    s32 *temp_2_3;
    s32 temp_2;
    s32 temp_2_2;

    sp0 = arg2;
    sp4 = arg3;
    sp8 = arg4;
    spC = sp0;
    sp10 = sp4;
    if ((sp4 != M2C_FIELD(arg1, s32 *, 0)) && (spC == 0) && (sp1C = arg1 + 8, sp18 = 0, sp20 = func_0039C468(&sp18, sp8), (func_003A90D0(sp1C, sp20, func_0039C4A0(sp10)) == 0))) {
        temp_2 = func_0039C7C0(arg1, sp8);
        sp14 = temp_2;
        *func_0039C298(sp10) = temp_2;
        if (sp10 == *func_003A8FD8(arg1)) {
            *func_003A8FD8(arg1) = sp14;
        }
    } else {
        temp_2_2 = func_0039C7C0(arg1, sp8);
        sp14 = temp_2_2;
        *func_0039C2D0(sp10) = temp_2_2;
        if (sp10 == M2C_FIELD(arg1, s32 *, 0)) {
            *func_003A8F68(arg1) = sp14;
            *func_003A8FD8(arg1) = sp14;
        } else if (sp10 == *func_003A8FA0(arg1)) {
            *func_003A8FA0(arg1) = sp14;
        }
    }
    sp24 = func_0039C838(sp14);
    *sp24 = sp10;
    temp_2_3 = func_0039C2D0(sp14);
    sp28 = temp_2_3;
    *temp_2_3 = 0;
    sp2C = func_0039C298(sp14);
    *sp2C = 0;
    func_003A57D0(sp14, M2C_FIELD(arg1, s32 *, 0) + 4);
    M2C_FIELD(arg1, s32 *, 4) = (s32) (M2C_FIELD(arg1, s32 *, 4) + 1);
    func_003A9140(arg0, sp14);
    return arg0;
}
