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

void *func_001EE0C0(void *);                        /* extern */
void *func_001EE0D0(void *);                        /* extern */
f32 func_003A4B00(void *, s32);                     /* extern */
void *func_003A5190(s32);                           /* extern */
s32 func_003A5560(s32);                             /* extern */
s32 func_003A5598(s32);                             /* extern */
s32 func_003A8640(s32);                             /* extern */
s32 func_003A86B8(s32, s32);                        /* extern */
s32 func_003A8720(s32, s32);                        /* extern */

void func_003906F0(void *arg0, void *arg1, s32 arg2, f32 *arg3) {
    void *sp0;
    void *sp4;
    s32 sp8;
    f32 *spC;
    s32 sp10;
    s32 sp14;
    s32 sp18;
    s32 sp1C;
    s32 sp20;
    s32 sp24;
    s32 sp28;
    s32 sp2C;
    s32 sp30;
    void *sp34;
    f32 sp38;
    s32 sp3C;
    void *sp40;
    void *sp44;
    s32 temp_2;
    void *temp_2_2;
    void *temp_2_3;
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
            sp30 = 0;
loop_6:
            if (sp30 < sp28) {
                sp3C = func_003A8720(sp14, sp2C + sp30);
                sp34 = func_003A5190(sp3C);
                sp38 = func_003A4B00(sp34, sp8);
                if (*spC < sp38) {
                    *spC = sp38;
                }
                sp30 += 1;
                goto loop_6;
            }
            sp20 += 1;
            goto loop_3;
        }
    }
    temp_2_2 = func_001EE0C0(sp4);
    sp40 = temp_2_2;
    sp34 = temp_2_2;
loop_13:
    if (sp34 != NULL) {
        func_003906F0(sp0, sp34, sp8, spC);
        temp_2_3 = func_001EE0D0(sp34);
        sp44 = temp_2_3;
        sp34 = temp_2_3;
        goto loop_13;
    }
}
