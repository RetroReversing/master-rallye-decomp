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
s32 func_00374470(void *);                          /* extern */
s32 func_003A5E40(s32);                             /* extern */
s32 func_003A5EB0(s32);                             /* extern */
M2C_UNK func_003A7C90(void *, s32);                 /* extern */
M2C_UNK func_003AA9C8(s32, s32);                    /* extern */
s32 func_003AAA38(s32, s32);                        /* extern */
M2C_UNK func_003AABC8(s32, s32);                    /* extern */
s32 func_003AAC28(s32, s32);                        /* extern */
M2C_UNK func_003AAC90(s32, s32);                    /* extern */
s32 func_003AACE8(s32, s32);                        /* extern */

void func_00394B48(void *arg0) {
    s32 sp0;
    s32 sp4;
    s32 sp8;
    s32 spC;
    s32 sp10;
    s32 sp14;
    s32 sp18;
    s32 sp1C;
    void *sp20;
    s16 *sp24;
    void *sp28;
    M2C_UNK (*temp_6)(void *, s32 *, M2C_UNK);
    M2C_UNK (*temp_6_2)(void *, s32 *, M2C_UNK);
    M2C_UNK (*temp_6_3)(void *, s32, M2C_UNK);
    M2C_UNK (*temp_6_4)(void *, s32 *, M2C_UNK);
    s16 *temp_4;
    void *temp_3;
    void *temp_3_2;
    void *temp_3_3;
    void *temp_3_4;
    void *temp_4_2;

    sp20 = M2C_FIELD(arg0, void **, 4);
    M2C_FIELD(sp20, s32 *, 0x3C) = func_003A5E40(D_002AD408(0xC));
    sp0 = func_003A5EB0(func_00374470(M2C_FIELD(arg0, void **, 4)));
    temp_3 = M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 8);
    temp_6 = M2C_FIELD((temp_3 + 0x90), M2C_UNK (**)(void *, s32 *, M2C_UNK), 4);
    temp_6(M2C_FIELD(temp_3, s16 *, 0x90) + M2C_FIELD(arg0, void **, 0), &sp4, temp_6);
    func_003AA9C8(sp0, sp4);
    sp8 = 0;
loop_1:
    if (sp8 < sp4) {
        spC = func_003AAA38(sp0, sp8);
        temp_3_2 = M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 8);
        temp_6_2 = M2C_FIELD((temp_3_2 + 0x90), M2C_UNK (**)(void *, s32 *, M2C_UNK), 4);
        temp_6_2(M2C_FIELD(temp_3_2, s16 *, 0x90) + M2C_FIELD(arg0, void **, 0), &sp10, temp_6_2);
        func_003AABC8(spC, sp10);
        sp14 = 0;
loop_4:
        if (sp14 < sp10) {
            sp18 = func_003AAC28(spC, sp14);
            func_003A7C90(M2C_FIELD(arg0, void **, 0), sp18);
            func_003A7C90(M2C_FIELD(arg0, void **, 0), sp18 + 0xC);
            temp_3_3 = M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 8);
            temp_6_3 = M2C_FIELD((temp_3_3 + 0x90), M2C_UNK (**)(void *, s32, M2C_UNK), 4);
            temp_6_3(M2C_FIELD(temp_3_3, s16 *, 0x90) + M2C_FIELD(arg0, void **, 0), sp18 + 0x18, temp_6_3);
            sp14 += 1;
            goto loop_4;
        }
        temp_3_4 = M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 8);
        temp_6_4 = M2C_FIELD((temp_3_4 + 0x90), M2C_UNK (**)(void *, s32 *, M2C_UNK), 4);
        temp_6_4(M2C_FIELD(temp_3_4, s16 *, 0x90) + M2C_FIELD(arg0, void **, 0), &sp18, temp_6_4);
        func_003AAC90(spC + 0xC, sp18);
        sp1C = 0;
loop_8:
        if (sp1C < sp18) {
            temp_4 = M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 8) + 0x90;
            sp24 = temp_4;
            temp_4_2 = *sp24 + M2C_FIELD(arg0, void **, 0);
            sp28 = temp_4_2;
            M2C_FIELD(temp_4, M2C_UNK (**)(void *, s32), 4)(temp_4_2, func_003AACE8(spC + 0xC, sp1C));
            sp1C += 1;
            goto loop_8;
        }
        sp8 += 1;
        goto loop_1;
    }
}
