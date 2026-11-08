/* machine draft (m2c) for ee-gcc-2.95.2 -O2 -G0 -fno-schedule-insns, tried by autopilot */
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

f32 func_003A3120(f32);                             /* extern */
M2C_UNK func_003A4AB8(void *, f32 *);               /* extern */
f32 func_003A4B00(s32, f32 *);                      /* extern */
s32 func_003A5190(s32);                             /* extern */
s32 func_003A5560(s32);                             /* extern */
s32 func_003A5598(s32);                             /* extern */
M2C_UNK func_003A5BC8(f32 *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
s32 func_003A8640(void *);                          /* extern */
s32 func_003A86B8(void *, s32);                     /* extern */
s32 func_003A8720(s32, s32);                        /* extern */
M2C_UNK func_003A8788(f32 *, s32);                  /* extern */

void func_00393720(void *arg0, void *arg1) {
    void *sp0;
    f32 sp10;
    f32 sp14;
    f32 sp18;
    s32 sp20;
    f32 sp24;
    s32 sp28;
    void *sp2C;
    s32 sp30;
    s32 sp34;
    s32 sp38;
    s32 sp3C;
    s32 sp40;
    s32 sp44;
    s32 sp48;
    s32 sp4C;
    s32 sp50;
    s32 sp54;
    s32 sp58;
    s32 sp5C;
    f32 sp60;
    s32 sp64;
    s32 sp68;
    s32 sp6C;
    s32 sp70;
    s32 sp74;
    s32 sp78;
    s32 sp7C;
    s32 sp80;
    s32 sp84;
    s32 sp88;
    f32 temp_f0;
    s32 temp_2;
    s32 temp_2_2;
    s32 temp_2_3;
    s32 temp_2_4;
    s32 temp_2_5;
    s32 temp_2_6;
    s32 temp_2_7;

    sp0 = arg1;
    func_003A5BC8(&sp10, 0, 0, 0);
    sp20 = 0;
    sp24 = 0.0f;
    sp28 = M2C_FIELD(M2C_FIELD(arg0, void **, 4), s32 *, 0x18);
    sp2C = sp0 + 0x74;
    sp30 = func_003A8640(sp2C);
    sp34 = 0;
loop_1:
    if (sp34 < sp30) {
        sp38 = func_003A86B8(sp2C, sp34);
        sp3C = func_003A5560(sp38);
        sp40 = func_003A5598(sp38);
        sp44 = -1;
        sp48 = -1;
        sp4C = -1;
        sp50 = 0;
loop_4:
        if (sp50 < sp3C) {
            temp_2 = sp48;
            sp44 = temp_2;
            sp48 = sp4C;
            sp4C = sp40 + sp50;
            if ((temp_2 >= 0) && (sp48 >= 0) && (sp4C >= 0)) {
                sp64 = func_003A8720(sp28, sp44);
                sp54 = func_003A5190(sp64);
                sp6C = func_003A8720(sp28, sp48);
                temp_2_2 = func_003A5190(sp6C);
                sp68 = temp_2_2;
                sp58 = temp_2_2;
                sp74 = func_003A8720(sp28, sp4C);
                temp_2_3 = func_003A5190(sp74);
                sp70 = temp_2_3;
                sp5C = temp_2_3;
                func_003A8788(&sp10, sp54);
                func_003A8788(&sp10, sp58);
                func_003A8788(&sp10, sp5C);
                sp20 += 3;
            }
            sp50 += 1;
            goto loop_4;
        }
        sp34 += 1;
        goto loop_1;
    }
    sp10 /= (f32) sp20;
    sp14 /= (f32) sp20;
    sp18 /= (f32) sp20;
    sp34 = 0;
loop_13:
    if (sp34 < sp30) {
        temp_2_4 = func_003A86B8(sp2C, sp34);
        sp78 = temp_2_4;
        sp5C = temp_2_4;
        temp_2_5 = func_003A5560(sp5C);
        sp7C = temp_2_5;
        sp58 = temp_2_5;
        temp_2_6 = func_003A5598(sp5C);
        sp80 = temp_2_6;
        sp54 = temp_2_6;
        sp50 = 0;
loop_16:
        if (sp50 < sp58) {
            sp4C = sp54 + sp50;
            sp88 = func_003A8720(sp28, sp4C);
            temp_2_7 = func_003A5190(sp88);
            sp84 = temp_2_7;
            sp48 = temp_2_7;
            temp_f0 = func_003A4B00(sp48, &sp10);
            sp60 = temp_f0;
            if (sp24 < temp_f0) {
                sp24 = sp60;
            }
            sp50 += 1;
            goto loop_16;
        }
        sp34 += 1;
        goto loop_13;
    }
    func_003A4AB8(sp0 + 0x4C, &sp10);
    M2C_FIELD(sp0, f32 *, 0x58) = func_003A3120(sp24);
}
