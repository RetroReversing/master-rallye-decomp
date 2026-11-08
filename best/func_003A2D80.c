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

M2C_UNK func_001574E8(s32, s32, s32 *);             /* extern */
s32 *func_00395D88(s32 *, u32 *);                   /* extern */
M2C_UNK func_00396918(s32, s32, s32);               /* extern */
s32 func_003A2D00(s32, u32, s32 *);                 /* extern */
M2C_UNK func_003A36D0(void *, s32, s32);            /* extern */
M2C_UNK func_003A37C0(s32, s32);                    /* extern */
s32 func_003A3B08(void *);                          /* extern */
s32 func_003A40D0(void *, s32);                     /* extern */
s32 func_003A41B8(s32, s32, s32);                   /* extern */

void func_003A2D80(void *arg0, s32 arg1, u32 arg2, s32 *arg3) {
    s32 sp0;
    u32 sp4;
    s32 *sp8;
    s32 spC;
    s32 sp10;
    s32 sp14;
    s32 sp18;
    s32 temp_2;
    s32 temp_2_2;

    sp0 = arg1;
    sp4 = arg2;
    sp8 = arg3;
    if (sp4 != 0) {
        if ((u32) ((s32) (M2C_FIELD(arg0, s32 *, 8) - M2C_FIELD(arg0, s32 *, 4)) >> 2) >= sp4) {
            spC = *sp8;
            sp10 = (s32) (M2C_FIELD(arg0, s32 *, 4) - sp0) >> 2;
            sp14 = M2C_FIELD(arg0, s32 *, 4);
            if (sp4 < (u32) sp10) {
                func_003A41B8(M2C_FIELD(arg0, s32 *, 4) - (sp4 * 4), M2C_FIELD(arg0, s32 *, 4), M2C_FIELD(arg0, s32 *, 4));
                M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) + (sp4 * 4));
                func_00396918(sp0, sp14 - (sp4 * 4), sp14);
                func_001574E8(sp0, (sp4 * 4) + sp0, &spC);
            } else {
                func_003A2D00(M2C_FIELD(arg0, s32 *, 4), sp4 - sp10, &spC);
                M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) + ((sp4 - sp10) * 4));
                func_003A41B8(sp0, sp14, M2C_FIELD(arg0, s32 *, 4));
                M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) + (sp10 * 4));
                func_001574E8(sp0, sp14, &spC);
            }
            return;
        }
        sp14 = func_003A3B08(arg0);
        sp10 = sp14 + *func_00395D88(&sp14, &sp4);
        temp_2 = func_003A40D0(arg0, sp10);
        spC = temp_2;
        sp18 = temp_2;
        sp18 = func_003A41B8(M2C_FIELD(arg0, s32 *, 0), sp0, spC);
        sp18 = func_003A2D00(sp18, sp4, sp8);
        temp_2_2 = func_003A41B8(sp0, M2C_FIELD(arg0, s32 *, 4), sp18);
        sp18 = temp_2_2;
        func_003A37C0(M2C_FIELD(arg0, s32 *, 0), M2C_FIELD(arg0, s32 *, 4));
        func_003A36D0(arg0, M2C_FIELD(arg0, s32 *, 0), (s32) (M2C_FIELD(arg0, s32 *, 8) - M2C_FIELD(arg0, s32 *, 0)) >> 2);
        M2C_FIELD(arg0, s32 *, 0) = temp_2;
        M2C_FIELD(arg0, s32 *, 4) = temp_2_2;
        M2C_FIELD(arg0, s32 *, 8) = (s32) (spC + (sp10 * 4));
    }
}
