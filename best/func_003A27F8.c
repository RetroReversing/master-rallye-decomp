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
s32 func_003A0690(void *, s32);                     /* extern */
M2C_UNK func_003A06F0(M2C_UNK *, M2C_UNK *);        /* extern */
s32 func_003A23A8(s32, s32, s32);                   /* extern */
M2C_UNK func_003A2570(s32, s32, s32);               /* extern */
M2C_UNK func_003A25E0(s32, s32, M2C_UNK *);         /* extern */
s32 func_003A2778(s32, u32, M2C_UNK *);             /* extern */
M2C_UNK func_003AA758(s32, s32);                    /* extern */
M2C_UNK func_003AA7B8(void *, s32, s32);            /* extern */
s32 func_003AAB10(void *);                          /* extern */

void func_003A27F8(void *arg0, s32 arg1, u32 arg2, M2C_UNK *arg3) {
    s32 sp0;
    u32 sp4;
    M2C_UNK *sp8;
    M2C_UNK sp10;
    s32 sp30;
    s32 sp34;
    s32 sp38;
    s32 sp3C;
    s32 temp_2;
    s32 temp_2_2;

    sp0 = arg1;
    sp4 = arg2;
    sp8 = arg3;
    if (sp4 != 0) {
        if ((u32) ((s32) ((M2C_FIELD(arg0, s32 *, 8) - M2C_FIELD(arg0, s32 *, 4)) * 0xB6DB6DB7) >> 2) >= sp4) {
            func_003A06F0(&sp10, sp8);
            sp30 = (s32) ((M2C_FIELD(arg0, s32 *, 4) - sp0) * 0xB6DB6DB7) >> 2;
            sp34 = M2C_FIELD(arg0, s32 *, 4);
            if (sp4 < (u32) sp30) {
                func_003A23A8(M2C_FIELD(arg0, s32 *, 4) - (sp4 * 0x1C), M2C_FIELD(arg0, s32 *, 4), M2C_FIELD(arg0, s32 *, 4));
                M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) + (sp4 * 0x1C));
                func_003A2570(sp0, sp34 - (sp4 * 0x1C), sp34);
                func_003A25E0(sp0, (sp4 * 0x1C) + sp0, &sp10);
            } else {
                func_003A2778(M2C_FIELD(arg0, s32 *, 4), sp4 - sp30, &sp10);
                M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) + ((sp4 - sp30) * 0x1C));
                func_003A23A8(sp0, sp34, M2C_FIELD(arg0, s32 *, 4));
                M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) + (sp30 * 0x1C));
                func_003A25E0(sp0, sp34, &sp10);
            }
            return;
        }
        sp34 = func_003AAB10(arg0);
        sp30 = sp34 + *func_00395D88(&sp34, &sp4);
        temp_2 = func_003A0690(arg0, sp30);
        sp38 = temp_2;
        sp3C = temp_2;
        sp3C = func_003A23A8(M2C_FIELD(arg0, s32 *, 0), sp0, sp38);
        sp3C = func_003A2778(sp3C, sp4, sp8);
        temp_2_2 = func_003A23A8(sp0, M2C_FIELD(arg0, s32 *, 4), sp3C);
        sp3C = temp_2_2;
        func_003AA758(M2C_FIELD(arg0, s32 *, 0), M2C_FIELD(arg0, s32 *, 4));
        func_003AA7B8(arg0, M2C_FIELD(arg0, s32 *, 0), (s32) ((M2C_FIELD(arg0, s32 *, 8) - M2C_FIELD(arg0, s32 *, 0)) * 0xB6DB6DB7) >> 2);
        M2C_FIELD(arg0, s32 *, 0) = temp_2;
        M2C_FIELD(arg0, s32 *, 4) = temp_2_2;
        M2C_FIELD(arg0, s32 *, 8) = (s32) (sp38 + (sp30 * 0x1C));
    }
}
