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

M2C_UNK func_002C5DC8(s32, s32, M2C_UNK *);         /* extern */
M2C_UNK func_002C67F8(M2C_UNK *, M2C_UNK);          /* extern */
s32 *func_00395D88(s32 *, u32 *);                   /* extern */
M2C_UNK func_00398F20(M2C_UNK *, M2C_UNK *);        /* extern */
s32 func_00399138(s32, s32, s32);                   /* extern */
M2C_UNK func_003992F8(s32, s32, s32);               /* extern */
s32 func_00399500(s32, u32, M2C_UNK *);             /* extern */
s32 func_003995E8(void *, s32);                     /* extern */
M2C_UNK func_003A6648(void *, s32, s32);            /* extern */
M2C_UNK func_003A66D8(s32, s32);                    /* extern */
s32 func_003A6980(void *);                          /* extern */

void func_00399648(void *arg0, s32 arg1, u32 arg2, M2C_UNK *arg3) {
    s32 sp0;
    u32 sp4;
    M2C_UNK *sp8;
    M2C_UNK sp10;
    s32 sp20;
    s32 sp24;
    s32 sp28;
    s32 sp2C;
    s32 temp_2;
    s32 temp_2_2;

    sp0 = arg1;
    sp4 = arg2;
    sp8 = arg3;
    if (sp4 != 0) {
        if ((u32) ((s32) (M2C_FIELD(arg0, s32 *, 8) - M2C_FIELD(arg0, s32 *, 4)) >> 3) >= sp4) {
            func_00398F20(&sp10, sp8);
            sp20 = (s32) (M2C_FIELD(arg0, s32 *, 4) - sp0) >> 3;
            sp24 = M2C_FIELD(arg0, s32 *, 4);
            if (sp4 < (u32) sp20) {
                func_00399138(M2C_FIELD(arg0, s32 *, 4) - (sp4 * 8), M2C_FIELD(arg0, s32 *, 4), M2C_FIELD(arg0, s32 *, 4));
                M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) + (sp4 * 8));
                func_003992F8(sp0, sp24 - (sp4 * 8), sp24);
                func_002C5DC8(sp0, (sp4 * 8) + sp0, &sp10);
            } else {
                func_00399500(M2C_FIELD(arg0, s32 *, 4), sp4 - sp20, &sp10);
                M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) + ((sp4 - sp20) * 8));
                func_00399138(sp0, sp24, M2C_FIELD(arg0, s32 *, 4));
                M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) + (sp20 * 8));
                func_002C5DC8(sp0, sp24, &sp10);
            }
            func_002C67F8(&sp10, 2);
            return;
        }
        sp24 = func_003A6980(arg0);
        sp20 = sp24 + *func_00395D88(&sp24, &sp4);
        temp_2 = func_003995E8(arg0, sp20);
        sp28 = temp_2;
        sp2C = temp_2;
        sp2C = func_00399138(M2C_FIELD(arg0, s32 *, 0), sp0, sp28);
        sp2C = func_00399500(sp2C, sp4, sp8);
        temp_2_2 = func_00399138(sp0, M2C_FIELD(arg0, s32 *, 4), sp2C);
        sp2C = temp_2_2;
        func_003A66D8(M2C_FIELD(arg0, s32 *, 0), M2C_FIELD(arg0, s32 *, 4));
        func_003A6648(arg0, M2C_FIELD(arg0, s32 *, 0), (s32) (M2C_FIELD(arg0, s32 *, 8) - M2C_FIELD(arg0, s32 *, 0)) >> 3);
        M2C_FIELD(arg0, s32 *, 0) = temp_2;
        M2C_FIELD(arg0, s32 *, 4) = temp_2_2;
        M2C_FIELD(arg0, s32 *, 8) = (s32) (sp28 + (sp20 * 8));
    }
}
