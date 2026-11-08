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

void *func_001EE0C0(void *);                        /* extern */
void *func_001EE0D0(void *);                        /* extern */
void *func_003A5190(s32);                           /* extern */
s32 func_003A5560(s32);                             /* extern */
s32 func_003A5598(s32);                             /* extern */
s32 func_003A8640(s32);                             /* extern */
s32 func_003A86B8(s32, s32);                        /* extern */
s32 func_003A8720(s32, s32);                        /* extern */
M2C_UNK func_003A8788(s32, void *);                 /* extern */

void func_003903D0(void *arg0, void *arg1, s32 arg2, s32 *arg3) {
    void *sp0;
    void *sp4;
    s32 sp8;
    s32 *spC;
    s32 sp10;
    s32 sp14;
    s32 sp18;
    s32 sp1C;
    s32 sp20;
    s32 sp24;
    s32 sp28;
    s32 sp2C;
    s32 sp30;
    s32 sp34;
    s32 sp38;
    s32 sp3C;
    void *sp40;
    void *sp44;
    void *sp48;
    s32 sp4C;
    void *sp50;
    s32 sp54;
    void *sp58;
    s32 sp5C;
    void *sp60;
    void *sp64;
    s32 temp_2;
    s32 temp_2_2;
    void *temp_2_3;
    void *temp_2_4;
    void *temp_2_5;
    void *temp_2_6;
    void *temp_3;

    sp0 = arg0;
    sp4 = arg1;
    sp8 = arg2;
    spC = arg3;
    temp_3 = M2C_FIELD(sp4, void **, 0x10);
    temp_2 = M2C_FIELD((temp_3 + 0x20), s32 (**)(void *), 4)(M2C_FIELD(temp_3, s16 *, 0x20) + sp4);
    sp10 = temp_2;
    if ((temp_2 != 0) && (sp0 != NULL)) {
        sp14 = M2C_FIELD(sp0, s32 *, 0x18);
        sp18 = sp10 + 0x74;
        sp1C = func_003A8640(sp18);
        sp20 = 0;
loop_3:
        if (sp20 < sp1C) {
            sp24 = func_003A86B8(sp18, sp20);
            sp28 = func_003A5560(sp24);
            sp2C = func_003A5598(sp24);
            sp30 = -1;
            sp34 = -1;
            sp38 = -1;
            sp3C = 0;
loop_6:
            if (sp3C < sp28) {
                temp_2_2 = sp34;
                sp30 = temp_2_2;
                sp34 = sp38;
                sp38 = sp2C + sp3C;
                if ((temp_2_2 >= 0) && (sp34 >= 0) && (sp38 >= 0)) {
                    sp4C = func_003A8720(sp14, sp30);
                    sp40 = func_003A5190(sp4C);
                    sp54 = func_003A8720(sp14, sp34);
                    temp_2_3 = func_003A5190(sp54);
                    sp50 = temp_2_3;
                    sp44 = temp_2_3;
                    sp5C = func_003A8720(sp14, sp38);
                    temp_2_4 = func_003A5190(sp5C);
                    sp58 = temp_2_4;
                    sp48 = temp_2_4;
                    func_003A8788(sp8, sp40);
                    func_003A8788(sp8, sp44);
                    func_003A8788(sp8, sp48);
                    *spC = *spC + 3;
                }
                sp3C += 1;
                goto loop_6;
            }
            sp20 += 1;
            goto loop_3;
        }
    }
    temp_2_5 = func_001EE0C0(sp4);
    sp60 = temp_2_5;
    sp44 = temp_2_5;
loop_15:
    if (sp44 != NULL) {
        func_003903D0(sp0, sp44, sp8, spC);
        temp_2_6 = func_001EE0D0(sp44);
        sp64 = temp_2_6;
        sp44 = temp_2_6;
        goto loop_15;
    }
}
