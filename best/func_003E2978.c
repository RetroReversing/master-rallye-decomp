#include "context.h"

extern s32 D_0043AF00[];
extern s32 D_0043AF20[];

typedef struct {
    s32 unk_00;
    unsigned char unk_04[0xC];
    s32 unk_10;
} S_e2978_a1;

typedef struct {
    unsigned char pad00[0x120];
    s32 unk120;
    unsigned char pad124[0x2C];
    s32 unk150;
    unsigned char pad154[0x20];
    s32 unk174;
    s32 unk178;
    unsigned char pad17C[0x3C];
    S_e2978_a1 *unk1B8;
    S_e2978_a1 *unk1BC;
    unsigned char pad1C0[8];
    s32 unk1C8;
    s32 unk1CC;
    unsigned char pad1D0[8];
    s32 unk1D8;
    S_e2978_a1 *unk1DC;
    unsigned char pad1E0[0x3B0];
    s32 unk590;
    unsigned char pad594[0x27C];
    s32 unk810;
    unsigned char pad814[8];
    s32 unk81C;
} S_e2978_a0;

void func_003E2978(S_e2978_a0 *arg0, S_e2978_a1 *arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, s32 arg_sp0, s32 arg_sp8, s32 arg_sp10, s32 arg_sp18) {
    s32 sp0;
    s32 sp4;
    s32 sp8;
    s32 spC;
    s32 sp10;
    s32 sp14;
    s32 sp18;
    s32 temp2;
    s32 temp10;
    s32 temp23;
    void *temp2_2;
    s32 temp4;
    void *temp15;
    void *temp12;
    s32 var2;
    s32 var3;
    s32 temp2_3;
    s32 temp20;
    s32 temp21;
    s32 temp6;
    s32 temp25;
    s32 temp2_4;
    s32 temp2_5;
    s32 temp9;
    s32 temp3;
    s32 temp5;
    s32 temp18;
    s32 temp3_2;
    s32 temp7;
    s32 temp2_6;
    s32 temp9_2;
    s32 var6;
    s32 temp6_2;
    s32 temp25_2;
    s32 temp2_7;
    s32 temp2_8;
    s32 temp8;
    s32 temp7_2;
    s32 temp4_2;
    s32 temp6_3;
    s32 *temp8_2;
    s32 temp9_3;

    sp0 = arg3;
    sp4 = arg6;
    sp8 = arg0->unk81C;
    sp14 = (s32)arg0 + 0x6BC;
    temp2 = arg0->unk810 * 0x140;
    temp10 = arg_sp0 >> 1;
    temp23 = *(s32 *)(sp14 + temp2);
    temp2_2 = (void *)((unsigned char *)arg0 + (temp2 + 0x590));
    temp4 = temp23 * 0x1C;
    temp15 = (unsigned char *)temp2_2 + (temp4 + 0xB8);
    temp12 = (unsigned char *)temp2_2 + (temp4 + 0x48);
    if (arg_sp10 != 0) {
        var3 = arg4 + arg2;
        var2 = (arg_sp8 >> 1) * 2;
    } else {
        var2 = arg_sp8 >> 1;
        var3 = arg4 + arg2;
    }
    temp2_3 = var2 + arg7;
    temp20 = (s32)(temp10 + sp4) >> 4;
    temp21 = (s32)(temp2_3 + var3) >> 4;
    *(s32 *)((unsigned char *)temp12 + 4) = (s32)((temp10 + sp4) % 16);
    sp10 = temp20 * arg1->unk_10 + temp21;
    temp6 = (temp2_3 + var3) % 16;
    *(s32 *)temp12 = sp8 + ((sp0 + arg4) << 5);
    temp25 = arg_sp8 & 1;
    if (temp25 != 0) {
        if ((temp6 + (arg5 << arg_sp10)) < 0x10) {
            *(s32 *)((unsigned char *)temp12 + 8) = arg5;
            *(s32 *)((unsigned char *)temp12 + 0xC) = 0;
        } else {
            temp2_4 = ((0x10 >> arg_sp10) - (temp6 >> arg_sp10)) - 1;
            *(s32 *)((unsigned char *)temp12 + 8) = temp2_4;
            *(s32 *)((unsigned char *)temp12 + 0xC) = arg5 - temp2_4;
        }
    } else {
        if ((temp6 + (arg5 << arg_sp10)) < 0x11) {
            *(s32 *)((unsigned char *)temp12 + 8) = arg5;
            *(s32 *)((unsigned char *)temp12 + 0xC) = 0;
        } else {
            temp2_5 = (0x10 >> arg_sp10) - (temp6 >> arg_sp10);
            *(s32 *)((unsigned char *)temp12 + 8) = temp2_5;
            *(s32 *)((unsigned char *)temp12 + 0xC) = arg5 - temp2_5;
        }
    }
    temp9 = temp6 * 0x10;
    sp18 = arg_sp18 * 4;
    temp3 = arg_sp0 + ((unsigned int)arg_sp0 >> 0x1F);
    temp5 = arg_sp8 + ((unsigned int)arg_sp8 >> 0x1F);
    temp18 = *(s32 *)((unsigned char *)arg0 + 0x590 + (arg0->unk810 * 0x140)) + (temp23 * 0x600);
    temp3_2 = temp3 >> 2;
    temp7 = arg4 >> 1;
    spC = sp18 | ((arg_sp0 & 1) << 1) | temp25;
    *(s32 *)((unsigned char *)temp12 + 0x14) = temp18 + temp9;
    temp2_6 = sp4 >> 1;
    *(s32 *)((unsigned char *)temp12 + 0x10) = 0x10 << arg_sp10;
    *(s32 *)((unsigned char *)temp12 + 0x18) = temp18 + (temp9 + 0x300);
    temp9_2 = arg5 >> 1;
    if (arg_sp10 != 0) {
        var6 = ((temp5 >> 2) * 2) + (arg7 >> 1) + (temp7 + arg2);
    } else {
        var6 = (temp5 >> 2) + (arg7 >> 1) + (temp7 + arg2);
    }
    temp6_2 = var6 % 8;
    temp25_2 = (temp5 >> 1) & 1;
    *(s32 *)((unsigned char *)temp15 + 4) = (temp3_2 + temp2_6) % 8;
    *(s32 *)temp15 = sp8 + (((sp0 + temp7) * 0x10) + 0x200);
    if (temp25_2 != 0) {
        if ((temp6_2 + (temp9_2 << arg_sp10)) < 8) {
            *(s32 *)((unsigned char *)temp15 + 8) = temp9_2;
            *(s32 *)((unsigned char *)temp15 + 0xC) = 0;
        } else {
            temp2_7 = ((8 >> arg_sp10) - (temp6_2 >> arg_sp10)) - 1;
            *(s32 *)((unsigned char *)temp15 + 8) = temp2_7;
            *(s32 *)((unsigned char *)temp15 + 0xC) = temp9_2 - temp2_7;
        }
    } else {
        if ((temp6_2 + (temp9_2 << arg_sp10)) < 9) {
            *(s32 *)((unsigned char *)temp15 + 8) = temp9_2;
            *(s32 *)((unsigned char *)temp15 + 0xC) = 0;
        } else {
            temp2_8 = (8 >> arg_sp10) - (temp6_2 >> arg_sp10);
            *(s32 *)((unsigned char *)temp15 + 8) = temp2_8;
            *(s32 *)((unsigned char *)temp15 + 0xC) = temp9_2 - temp2_8;
        }
    }
    *(s32 *)((unsigned char *)temp15 + 0x10) = 8 << arg_sp10;
    temp8 = arg0->unk810 * 0x140;
    temp7_2 = (temp23 * 4) + temp8;
    temp4_2 = ((((((temp3_2 + temp2_6) >> 3) - temp20) * 2) + ((var6 >> 3) - temp21)) * 0x180) + temp18;
    temp6_3 = temp6_2 * 8;
    *(s32 *)((unsigned char *)arg0 + temp7_2 + 0x5B8) = D_0043AF00[spC];
    temp8_2 = (s32 *)(sp14 + temp8);
    temp9_3 = arg1->unk_00;
    *(s32 *)((unsigned char *)temp15 + 0x14) = temp4_2 + (temp6_3 + 0x100);
    *(s32 *)((unsigned char *)temp15 + 0x18) = temp4_2 + (temp6_3 + 0x400);
    *(s32 *)((unsigned char *)arg0 + temp7_2 + 0x598) = temp9_3 + (sp10 * 0x180);
    *(s32 *)((unsigned char *)arg0 + temp7_2 + 0x5C8) = D_0043AF20[(sp18 | (((temp3 >> 1) & 1) << 1) | temp25_2)];
    *(s32 *)((unsigned char *)arg0 + temp7_2 + 0x5A8) = (sp10 + arg1->unk_10) * 0x180 + temp9_3;
    *temp8_2 += 1;
}
