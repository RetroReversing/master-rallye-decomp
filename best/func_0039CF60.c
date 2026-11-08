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

s32 func_0039C468(s8 *, s32);                       /* extern */
s32 func_0039C4A0(s32);                             /* extern */
s32 func_0039C628(s32);                             /* extern */
s32 func_0039C690(void **);                         /* extern */
M2C_UNK func_0039C870(s32 *, void **, s32, s32, s32); /* extern */
M2C_UNK func_0039CC48(s32 *);                       /* extern */
M2C_UNK func_0039CC98(s32 *, void **, s32);         /* extern */
s32 *func_0039CF28(s32);                            /* extern */
s32 *func_003A8FD8(void **);                        /* extern */
M2C_UNK func_003A9098(s32 *, s32 *);                /* extern */
s32 func_003A90D0(void **, s32, s32);               /* extern */

s32 *func_0039CF60(s32 *arg0, void **arg1, s32 *arg2, s32 arg3) {
    s32 sp0;
    s8 sp4;
    s32 sp10;
    s8 sp20;
    s8 sp21;
    s8 sp22;
    s32 sp30;
    s32 temp_20;
    s32 temp_20_2;
    s32 temp_21;
    s32 temp_21_2;
    s32 var_19;

    sp0 = arg3;
    if (*arg2 == M2C_FIELD(*arg1, s32 *, 8)) {
        if ((func_0039C690(arg1) != 0) && (sp4 = 0, temp_20 = func_0039C468(&sp4, sp0), (func_003A90D0(arg1 + 8, temp_20, func_0039C628(*arg2)) != 0))) {
            func_0039C870(arg0, arg1, *arg2, *arg2, sp0);
        } else {
            func_0039CC98(&sp10, arg1, sp0);
            func_003A9098(arg0, &sp10);
        }
    } else if (*arg2 == *arg1) {
        temp_20_2 = func_0039C4A0(*func_003A8FD8(arg1));
        sp20 = 0;
        if (func_003A90D0(arg1 + 8, temp_20_2, func_0039C468(&sp20, sp0)) != 0) {
            func_0039C870(arg0, arg1, 0, *func_003A8FD8(arg1), sp0);
        } else {
            func_0039CC98(&sp10, arg1, sp0);
            func_003A9098(arg0, &sp10);
        }
    } else {
        func_003A9098(&sp10, arg2);
        func_0039CC48(&sp10);
        var_19 = 0;
        temp_21 = func_0039C628(sp10);
        sp21 = 0;
        if (func_003A90D0(arg1 + 8, temp_21, func_0039C468(&sp21, sp0)) != 0) {
            sp22 = 0;
            temp_21_2 = func_0039C468(&sp22, sp0);
            if (func_003A90D0(arg1 + 8, temp_21_2, func_0039C628(*arg2)) != 0) {
                var_19 = 1;
            }
        }
        if (var_19 != 0) {
            if (*func_0039CF28(sp10) == 0) {
                func_0039C870(arg0, arg1, 0, sp10, sp0);
            } else {
                func_0039C870(arg0, arg1, *arg2, *arg2, sp0);
            }
        } else {
            func_0039CC98(&sp30, arg1, sp0);
            func_003A9098(arg0, &sp30);
        }
    }
    return arg0;
}
