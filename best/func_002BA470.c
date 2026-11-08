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

M2C_UNK func_002ABA80(M2C_UNK);                     /* extern */
M2C_UNK func_003F9698(M2C_UNK *, s32);              /* extern */
extern M2C_UNK D_004288B8;
extern M2C_UNK D_004288BA;
extern M2C_UNK D_004288C8;
extern M2C_UNK D_0047FE30;

void func_002BA470(s32 arg0, u8 *arg1, s8 *arg2) {
    u8 *sp0;
    s8 *sp4;
    s32 sp8;
    s32 spC;
    s32 sp10;
    u8 sp14;
    u8 sp15;
    s32 sp18;
    s8 *sp1C;
    s8 *temp_3;
    s8 *temp_3_2;
    s8 *temp_3_3;
    s8 *temp_3_4;

    sp0 = arg1;
    sp4 = arg2;
    sp14 = 0x30;
    sp15 = 0x30;
    sp18 = 0;
    sp1C = sp4;
    sp8 = 0;
loop_1:
    if (sp8 < 0x20) {
        temp_3 = sp1C;
        *temp_3 = 0;
        sp1C = temp_3 + 1;
        temp_3_2 = sp1C;
        *temp_3_2 = 0;
        sp1C = temp_3_2 + 1;
        sp8 += 1;
        goto loop_1;
    }
loop_5:
    if (*sp0 != 0) {
        sp15 = 0;
        sp10 = (s32) *sp0;
        sp0 += 1;
        if ((sp10 >= 0x20) && (sp10 < 0x30)) {
            sp15 = 1;
        } else if ((sp10 >= 0x30) && (sp10 < 0x3A)) {
            sp14 = 0;
        } else if ((sp10 >= 0x3A) && (sp10 < 0x41)) {
            sp15 = 0xB;
        } else if ((sp10 >= 0x41) && (sp10 < 0x5B)) {
            sp14 = 1;
        } else if ((sp10 >= 0x5B) && (sp10 < 0x61)) {
            sp15 = 0x25;
        } else if ((sp10 >= 0x61) && (sp10 < 0x7B)) {
            sp14 = 2;
        } else if ((sp10 >= 0x7B) && (sp10 < 0x7F)) {
            sp15 = 0x3F;
        } else {
            func_003F9698(&D_0047FE30, sp10);
            func_002ABA80(1);
        }
        if (sp15 != 0) {
            spC = (s32) *(&D_004288C8 + ((sp10 - (sp15 + 0x1F)) * 2));
        } else {
            spC = (*(&D_004288B8 + (sp14 * 4)) + sp10) - *(&D_004288BA + (sp14 * 4));
        }
        sp18 += 1;
        temp_3_3 = sp4;
        *temp_3_3 = (s8) ((s32) (spC & 0xFF00) >> 8);
        sp4 = temp_3_3 + 1;
        temp_3_4 = sp4;
        *temp_3_4 = (u8) spC & ~0;
        sp4 = temp_3_4 + 1;
        goto loop_5;
    }
}
