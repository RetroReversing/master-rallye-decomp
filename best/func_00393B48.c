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

s32 D_002AD408(M2C_UNK);                            /* extern */
s32 func_003A5B58(s32);                             /* extern */
M2C_UNK func_003A7C90(void *, s32);                 /* extern */
M2C_UNK func_003A9A30(s32, s32);                    /* extern */
M2C_UNK func_003A9A88(M2C_UNK *);                   /* extern */
s32 func_003A9B18(s32, M2C_UNK *);                  /* extern */
M2C_UNK func_003A9B78(M2C_UNK *, M2C_UNK);          /* extern */
M2C_UNK func_003A9CE8(s32, s32);                    /* extern */
s32 *func_003A9D48(s32, s32);                       /* extern */
s32 func_003A9DB0(s32, s32);                        /* extern */

void func_00393B48(void *arg0) {
    s32 sp0;
    s32 sp4;
    s32 sp8;
    s32 spC;
    s32 sp10;
    M2C_UNK sp20;
    s32 sp30;
    s32 sp34;
    M2C_UNK (*temp_6)(void *, s32 *, M2C_UNK);
    M2C_UNK (*temp_6_2)(void *, s32 *, M2C_UNK);
    s32 temp_22_2;
    void *temp_22;
    void *temp_3;
    void *temp_3_2;

    temp_22 = M2C_FIELD(arg0, void **, 4);
    M2C_FIELD(temp_22, s32 *, 0x20) = func_003A5B58(D_002AD408(0xC));
    sp0 = M2C_FIELD(M2C_FIELD(arg0, void **, 4), s32 *, 0x20);
    temp_3 = M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 8);
    temp_6 = M2C_FIELD((temp_3 + 0x90), M2C_UNK (**)(void *, s32 *, M2C_UNK), 4);
    temp_6(M2C_FIELD(temp_3, s16 *, 0x90) + M2C_FIELD(arg0, void **, 0), &sp4, temp_6);
    func_003A9A30(sp0, sp4);
    sp8 = 0;
loop_1:
    if (sp8 < sp4) {
        temp_3_2 = M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 8);
        temp_6_2 = M2C_FIELD((temp_3_2 + 0x90), M2C_UNK (**)(void *, s32 *, M2C_UNK), 4);
        temp_6_2(M2C_FIELD(temp_3_2, s16 *, 0x90) + M2C_FIELD(arg0, void **, 0), &spC, temp_6_2);
        if (spC > 0) {
            temp_22_2 = D_002AD408(0xC);
            func_003A9A88(&sp20);
            sp10 = func_003A9B18(temp_22_2, &sp20);
            func_003A9B78(&sp20, 2);
            func_003A9CE8(sp10, spC);
            *func_003A9D48(sp0, sp8) = sp10;
            sp30 = 0;
loop_5:
            if (sp30 < spC) {
                sp34 = func_003A9DB0(sp10, sp30);
                func_003A7C90(M2C_FIELD(arg0, void **, 0), sp34);
                sp30 += 1;
                goto loop_5;
            }
        }
        sp8 += 1;
        goto loop_1;
    }
}
