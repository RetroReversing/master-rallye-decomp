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

s32 *func_00395D88(s32 *, u32 *);                   /* extern */
M2C_UNK func_00397CE0(s32, s32, u32 *);             /* extern */
s32 func_00397E70(s32, s32, s32);                   /* extern */
M2C_UNK func_00398030(s32, s32, s32);               /* extern */
M2C_UNK func_003980E0(s32 *, s32);                  /* extern */
s32 func_003981A8(void *, s32);                     /* extern */
M2C_UNK func_003A6088(void *, s32, s32);            /* extern */
M2C_UNK func_003A6118(s32, s32);                    /* extern */
s32 func_003A6178(void *);                          /* extern */
M2C_UNK func_003A63B0(s32, s32, s32);               /* extern */

void func_00398208(void *arg0, s32 arg1, s32 arg2, s32 arg3, s8 arg4) {
    s32 sp0;
    s32 sp4;
    s32 sp8;
    s8 spC;
    u32 sp10;
    s32 sp14;
    s32 sp18;
    s32 sp1C;
    s32 sp20;
    s32 temp_2;
    s32 temp_2_2;

    sp0 = arg1;
    sp4 = arg2;
    sp8 = arg3;
    spC = arg4;
    if (sp4 != sp8) {
        sp10 = 0;
        func_00397CE0(sp4, sp8, &sp10);
        if ((u32) ((s32) (M2C_FIELD(arg0, s32 *, 8) - M2C_FIELD(arg0, s32 *, 4)) >> 3) >= sp10) {
            sp14 = (s32) (M2C_FIELD(arg0, s32 *, 4) - sp0) >> 3;
            sp18 = M2C_FIELD(arg0, s32 *, 4);
            if (sp10 < (u32) sp14) {
                func_00397E70(M2C_FIELD(arg0, s32 *, 4) - (sp10 * 8), M2C_FIELD(arg0, s32 *, 4), M2C_FIELD(arg0, s32 *, 4));
                M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) + (sp10 * 8));
                func_00398030(sp0, sp18 - (sp10 * 8), sp18);
                func_003A63B0(sp4, sp8, sp0);
            } else {
                sp1C = sp4;
                func_003980E0(&sp1C, sp14);
                func_00397E70(sp1C, sp8, M2C_FIELD(arg0, s32 *, 4));
                M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) + ((sp10 - sp14) * 8));
                func_00397E70(sp0, sp18, M2C_FIELD(arg0, s32 *, 4));
                M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) + (sp14 * 8));
                func_003A63B0(sp4, sp1C, sp0);
            }
            return;
        }
        sp1C = func_003A6178(arg0);
        sp18 = sp1C + *func_00395D88(&sp1C, &sp10);
        temp_2 = func_003981A8(arg0, sp18);
        sp14 = temp_2;
        sp20 = temp_2;
        sp20 = func_00397E70(M2C_FIELD(arg0, s32 *, 0), sp0, sp14);
        sp20 = func_00397E70(sp4, sp8, sp20);
        temp_2_2 = func_00397E70(sp0, M2C_FIELD(arg0, s32 *, 4), sp20);
        sp20 = temp_2_2;
        func_003A6118(M2C_FIELD(arg0, s32 *, 0), M2C_FIELD(arg0, s32 *, 4));
        func_003A6088(arg0, M2C_FIELD(arg0, s32 *, 0), (s32) (M2C_FIELD(arg0, s32 *, 8) - M2C_FIELD(arg0, s32 *, 0)) >> 3);
        M2C_FIELD(arg0, s32 *, 0) = temp_2;
        M2C_FIELD(arg0, s32 *, 4) = temp_2_2;
        M2C_FIELD(arg0, s32 *, 8) = (s32) (sp14 + (sp18 * 8));
    }
}
