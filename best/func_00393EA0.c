/* machine draft (m2c), tried by autopilot */
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
s32 func_002EDE98(s32);                             /* extern */
s32 func_003A8E78(s32, s32);                        /* extern */
M2C_UNK func_003AA0E8(s32, s32);                    /* extern */
s32 func_003AA158(s32, s32);                        /* extern */
M2C_UNK func_003AA330(s32, s32);                    /* extern */
s32 func_003AA390(s32, s32);                        /* extern */
s32 func_003AA3F8(s32, M2C_UNK);                    /* extern */

void func_00393EA0(void *arg0) {
    s32 sp0;
    s32 sp4;
    s32 sp8;
    s32 spC;
    s32 sp10;
    s32 sp14;
    s32 sp18;
    void *sp1C;
    void *sp20;
    void *sp24;
    void *sp28;
    void *sp2C;
    s32 sp30;
    s16 *sp34;
    s32 sp38;
    s16 *sp3C;
    void *sp40;
    void *sp44;
    void *sp48;
    void *sp4C;
    void *sp50;
    M2C_UNK (*temp_6)(void *, s32, M2C_UNK);
    M2C_UNK (*temp_6_2)(void *, s32, M2C_UNK);
    M2C_UNK (*temp_6_3)(void *, s32, M2C_UNK);
    M2C_UNK (*temp_6_4)(void *, s32, M2C_UNK);
    M2C_UNK (*temp_6_5)(void *, s32, M2C_UNK);
    M2C_UNK (*temp_6_6)(void *, s32 *, M2C_UNK);
    M2C_UNK (*temp_6_7)(void *, s32 *, M2C_UNK);
    s16 *temp_4_4;
    s16 *temp_4_5;
    s32 temp_2;
    s32 temp_2_2;
    void *temp_3;
    void *temp_3_2;
    void *temp_3_3;
    void *temp_3_4;
    void *temp_3_5;
    void *temp_3_6;
    void *temp_3_7;
    void *temp_4;
    void *temp_4_2;
    void *temp_4_3;
    void *temp_4_6;
    void *temp_4_7;
    void *temp_4_8;

    sp0 = func_002EDE98(D_002AD408(0x5C));
    M2C_FIELD(M2C_FIELD(arg0, void **, 4), s32 *, 0x28) = sp0;
    temp_3 = M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 8);
    temp_6 = M2C_FIELD((temp_3 + 0x80), M2C_UNK (**)(void *, s32, M2C_UNK), 4);
    temp_6(M2C_FIELD(temp_3, s16 *, 0x80) + M2C_FIELD(arg0, void **, 0), sp0 + 0xC, temp_6);
    sp4 = 0;
loop_1:
    if (sp4 < 3) {
        temp_3_2 = M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 8);
        temp_4 = M2C_FIELD(temp_3_2, s16 *, 0x80) + M2C_FIELD(arg0, void **, 0);
        sp1C = temp_4;
        M2C_FIELD((temp_3_2 + 0x80), M2C_UNK (**)(void *, s32), 4)(temp_4, func_003A8E78(sp0 + 0x10, sp4));
        sp4 += 1;
        goto loop_1;
    }
    sp4 = 0;
loop_5:
    if (sp4 < 3) {
        temp_3_3 = M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 8);
        temp_6_2 = M2C_FIELD((temp_3_3 + 0x90), M2C_UNK (**)(void *, s32, M2C_UNK), 4);
        temp_6_2(M2C_FIELD(temp_3_3, s16 *, 0x90) + M2C_FIELD(arg0, void **, 0), (sp4 * 4) + 0x1C + sp0, temp_6_2);
        sp4 += 1;
        goto loop_5;
    }
    sp4 = 0;
loop_9:
    if (sp4 < 3) {
        temp_3_4 = M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 8);
        temp_6_3 = M2C_FIELD((temp_3_4 + 0x90), M2C_UNK (**)(void *, s32, M2C_UNK), 4);
        temp_6_3(M2C_FIELD(temp_3_4, s16 *, 0x90) + M2C_FIELD(arg0, void **, 0), (sp4 * 4) + 0x28 + sp0, temp_6_3);
        sp4 += 1;
        goto loop_9;
    }
    sp4 = 0;
loop_13:
    if (sp4 < 3) {
        temp_3_5 = M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 8);
        temp_4_2 = M2C_FIELD(temp_3_5, s16 *, 0x80) + M2C_FIELD(arg0, void **, 0);
        sp20 = temp_4_2;
        M2C_FIELD((temp_3_5 + 0x80), M2C_UNK (**)(void *, s32), 4)(temp_4_2, func_003A8E78(sp0 + 0x34, sp4));
        sp4 += 1;
        goto loop_13;
    }
    sp4 = 0;
loop_17:
    if (sp4 < 3) {
        temp_3_6 = M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 8);
        temp_4_3 = M2C_FIELD(temp_3_6, s16 *, 0x80) + M2C_FIELD(arg0, void **, 0);
        sp24 = temp_4_3;
        M2C_FIELD((temp_3_6 + 0x80), M2C_UNK (**)(void *, s32), 4)(temp_4_3, func_003A8E78(sp0 + 0x40, sp4));
        sp4 += 1;
        goto loop_17;
    }
    sp4 = 0;
loop_21:
    if (sp4 < 3) {
        temp_3_7 = M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 8);
        temp_6_4 = M2C_FIELD((temp_3_7 + 0x90), M2C_UNK (**)(void *, s32, M2C_UNK), 4);
        temp_6_4(M2C_FIELD(temp_3_7, s16 *, 0x90) + M2C_FIELD(arg0, void **, 0), (sp4 * 4) + 0x4C + sp0, temp_6_4);
        sp4 += 1;
        goto loop_21;
    }
    sp28 = M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 8) + 0x90;
    temp_6_5 = M2C_FIELD(sp28, M2C_UNK (**)(void *, s32, M2C_UNK), 4);
    temp_6_5(M2C_FIELD(sp28, s16 *, 0) + M2C_FIELD(arg0, void **, 0), sp0 + 0x58, temp_6_5);
    sp2C = M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 8) + 0x90;
    temp_6_6 = M2C_FIELD(sp2C, M2C_UNK (**)(void *, s32 *, M2C_UNK), 4);
    temp_6_6(M2C_FIELD(sp2C, s16 *, 0) + M2C_FIELD(arg0, void **, 0), &sp8, temp_6_6);
    func_003AA0E8(sp0, sp8);
    sp4 = 0;
loop_25:
    if (sp4 < sp8) {
        temp_2 = func_003AA158(sp0, sp4);
        sp30 = temp_2;
        spC = temp_2;
        temp_4_4 = M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 8) + 0x90;
        sp34 = temp_4_4;
        temp_6_7 = M2C_FIELD(temp_4_4, M2C_UNK (**)(void *, s32 *, M2C_UNK), 4);
        temp_6_7(*sp34 + M2C_FIELD(arg0, void **, 0), &sp10, temp_6_7);
        func_003AA330(spC, sp10);
        sp14 = 0;
loop_28:
        if (sp14 < sp10) {
            temp_2_2 = func_003AA390(spC, sp14);
            sp38 = temp_2_2;
            sp18 = temp_2_2;
            temp_4_5 = M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 8) + 0x90;
            sp3C = temp_4_5;
            temp_4_6 = *sp3C + M2C_FIELD(arg0, void **, 0);
            sp40 = temp_4_6;
            M2C_FIELD(temp_4_5, M2C_UNK (**)(void *, s32), 4)(temp_4_6, func_003AA3F8(sp18, 0));
            sp44 = M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 8) + 0x90;
            temp_4_7 = M2C_FIELD(sp44, s16 *, 0) + M2C_FIELD(arg0, void **, 0);
            sp48 = temp_4_7;
            M2C_FIELD(sp44, M2C_UNK (**)(void *, s32), 4)(temp_4_7, func_003AA3F8(sp18, 1));
            sp4C = M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 8) + 0x90;
            temp_4_8 = M2C_FIELD(sp4C, s16 *, 0) + M2C_FIELD(arg0, void **, 0);
            sp50 = temp_4_8;
            M2C_FIELD(sp4C, M2C_UNK (**)(void *, s32), 4)(temp_4_8, func_003AA3F8(sp18, 2));
            sp14 += 1;
            goto loop_28;
        }
        sp4 += 1;
        goto loop_25;
    }
}
