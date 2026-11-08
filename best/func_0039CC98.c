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
s32 func_0039C468(s8 *, s32);                       /* extern */
s32 func_0039C4A0(s32);                             /* extern */
s32 func_0039C628(s32);                             /* extern */
M2C_UNK func_0039C870(s32 *, s32 *, s32, s32, s32); /* extern */
M2C_UNK func_0039CB08(s32 *, s32 *);                /* extern */
M2C_UNK func_0039CB70(s32, s32 *, s32 *);           /* extern */
M2C_UNK func_0039CC48(s32 *);                       /* extern */
s32 func_003A5788(s32 *, s32 *);                    /* extern */
s32 *func_003A8F68(s32 *);                          /* extern */
s32 func_003A90D0(s32 *, s32, s32);                 /* extern */
M2C_UNK func_003A9140(s32 *, s32);                  /* extern */

s32 func_0039CC98(s32 arg0, s32 *arg1, s32 arg2) {
    s32 sp0;
    s32 sp4;
    s32 sp8;
    s32 spC;
    s8 sp10;
    s32 sp20;
    s32 sp30;
    s32 sp40;
    s32 sp50;
    s8 sp54;
    s32 sp58;
    s32 sp5C;
    s32 temp_19;
    s32 temp_19_2;
    s32 temp_2;
    s32 var_18;

    sp0 = arg2;
    sp4 = *arg1;
    sp8 = *func_003A8F68(arg1);
    spC = 1;
loop_1:
    if (sp8 != 0) {
        sp4 = sp8;
        sp10 = 0;
        temp_19 = func_0039C468(&sp10, sp0);
        temp_2 = func_003A90D0(arg1 + 8, temp_19, func_0039C4A0(sp8));
        spC = temp_2;
        if (temp_2 != 0) {
            var_18 = *func_0039C2D0(sp8);
        } else {
            var_18 = *func_0039C298(sp8);
        }
        sp8 = var_18;
        goto loop_1;
    }
    func_003A9140(&sp20, sp4);
    if (spC != 0) {
        func_0039CB08(&sp30, arg1);
        if (func_003A5788(&sp20, &sp30) != 0) {
            func_0039C870(&sp40, arg1, sp8, sp4, sp0);
            sp50 = 1;
            func_0039CB70(arg0, &sp40, &sp50);
        } else {
            func_0039CC48(&sp20);
            goto block_12;
        }
    } else {
block_12:
        temp_19_2 = func_0039C628(sp20);
        sp54 = 0;
        if (func_003A90D0(arg1 + 8, temp_19_2, func_0039C468(&sp54, sp0)) != 0) {
            func_0039C870(&sp30, arg1, sp8, sp4, sp0);
            sp58 = 1;
            func_0039CB70(arg0, &sp30, &sp58);
        } else {
            sp5C = 0;
            func_0039CB70(arg0, &sp20, &sp5C);
        }
    }
    return arg0;
}
