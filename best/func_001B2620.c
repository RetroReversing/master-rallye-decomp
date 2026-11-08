typedef struct S_func_001B2620_arg0 {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} S_func_001B2620_arg0;

typedef struct S_func_001B2408_arg0 {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    s32 unk_0C;
    f32 unk_10;
    f32 unk_14;
    f32 unk_18;
    s32 unk_1C;
    f32 unk_20;
    s32 unk_24;
    f32 unk_28;
    s32 unk_2C;
    f32 unk_30;
    s32 unk_34;
    f32 unk_38;
    f32 unk_3C;
    f32 unk_40;
    u8 pad44[4];
    f32 unk_48;
    f32 unk_4C;
    f32 unk_50;
    f32 unk_54;
    f32 unk_58;
    f32 unk_5C;
    f32 unk_60;
    f32 unk_64;
    u8 pad68[4];
    f32 unk_6C;
    f32 unk_70;
    f32 unk_74;
    f32 unk_78;
    f32 unk_7C;
    u8 pad80[4];
    f32 unk_84;
    f32 unk_88;
    f32 unk_8C;
    u8 pad90[4];
    f32 unk_94;
    f32 unk_98;
    u8 pad9C[4];
    f32 unk_A0;
    f32 unk_A4;
    f32 unk_A8;
    f32 unk_AC;
    f32 unk_B0;
    f32 unk_B4;
    f32 unk_B8;
    f32 unk_BC;
    f32 unk_C0;
    f32 unk_C4;
    void *unk_C8;
    s32 unk_CC;
    u8 padD0[4];
    s32 unk_D4;
    u8 unk_D8[8];
    s32 unk_E0;
    s32 unk_E4;
    u8 padE8[4];
    void *unk_EC;
    s32 unk_F0;
    u8 padF4[4];
    void *unk_F8;
    s32 unk_FC;
    u8 pad100[4];
    f32 unk_104;
    void *unk_108;
    u8 pad10C[8];
    f32 unk_114;
    f32 unk_118;
    f32 unk_11C;
    f32 unk_120;
    f32 unk_124;
    f32 unk_128;
    f32 unk_12C;
    f32 unk_130;
    void *unk_134;
    s32 unk_138;
    u8 pad13C[4];
    f32 unk_140;
    s32 unk_144;
    f32 unk_148;
} S_func_001B2408_arg0;

extern void func_001B1FB0(void *, void *, void *, f32, f32, f32);
extern f32 func_001D5E70(void *, f32, f32);

S_func_001B2620_arg0 *func_001B2620(S_func_001B2620_arg0 *arg0, S_func_001B2408_arg0 *arg1) {
    f32 sp0[0x50];
    f32 *pA4 = (f32 *)(arg1 + 0xA4);
    f32 *pB0 = (f32 *)(arg1 + 0xB0);
    void *pD8 = arg1->unk_D8;
    
    sp0[0x00/4] = pA4[0];
    sp0[0x10/4] = arg1->unk_00 - pA4[0];
    sp0[0x04/4] = pA4[1];
    sp0[0x14/4] = arg1->unk_04 - pA4[1];
    sp0[0x08/4] = pA4[2];
    sp0[0x18/4] = arg1->unk_08 - pA4[2];
    
    func_001B1FB0((void *)pA4, &sp0[0x20/4], &sp0[0x30/4], pA4[0], pA4[1], pA4[2]);
    
    sp0[0x40/4] = sp0[0x10/4] * sp0[0x20/4] + sp0[0x14/4] * sp0[0x24/4] + sp0[0x18/4] * sp0[0x28/4];
    sp0[0x44/4] = sp0[0x10/4] * sp0[0x30/4] + sp0[0x14/4] * sp0[0x34/4] + sp0[0x18/4] * sp0[0x38/4];
    sp0[0x48/4] = sp0[0x10/4] * pB0[0] + sp0[0x14/4] * pB0[1] + sp0[0x18/4] * pB0[2];
    
    sp0[0x50/4] = func_001D5E70(pD8, -1.0f, 1.0f) * arg1->unk_54;
    sp0[0x54/4] = func_001D5E70(pD8, -1.0f, 1.0f) * arg1->unk_58;
    sp0[0x58/4] = func_001D5E70(pD8, -1.0f, 1.0f) * arg1->unk_5C;
    
    sp0[0x60/4] = (sp0[0x40/4] + sp0[0x50/4]) / (arg1->unk_48 + 1.0f);
    sp0[0x64/4] = (sp0[0x44/4] + sp0[0x54/4]) / (arg1->unk_4C + 1.0f);
    sp0[0x68/4] = (sp0[0x48/4] + sp0[0x58/4]) / (arg1->unk_50 + 1.0f);
    
    sp0[0xA0/4] = sp0[0x20/4] * sp0[0x60/4];
    sp0[0xA4/4] = sp0[0x24/4] * sp0[0x60/4];
    sp0[0xA8/4] = sp0[0x28/4] * sp0[0x60/4];
    sp0[0xB0/4] = sp0[0x30/4] * sp0[0x64/4];
    sp0[0xB4/4] = sp0[0x34/4] * sp0[0x64/4];
    sp0[0xB8/4] = sp0[0x38/4] * sp0[0x64/4];
    
    sp0[0x90/4] = arg1->unk_00 - sp0[0xA0/4];
    sp0[0x94/4] = arg1->unk_04 - sp0[0xA4/4];
    sp0[0x98/4] = arg1->unk_08 - sp0[0xA8/4];
    sp0[0x80/4] = sp0[0x90/4] - sp0[0xB0/4];
    sp0[0x84/4] = sp0[0x94/4] - sp0[0xB4/4];
    sp0[0x88/4] = sp0[0x98/4] - sp0[0xB8/4];
    sp0[0x80/4] = sp0[0x80/4] - pB0[2] * sp0[0x68/4];
    sp0[0x84/4] = sp0[0x84/4] - pB0[1] * sp0[0x68/4];
    sp0[0x88/4] = sp0[0x88/4] - pB0[0] * sp0[0x68/4];
    
    sp0[0xC0/4] = pB0[0] * sp0[0x68/4];
    sp0[0xC4/4] = pB0[1] * sp0[0x68/4];
    sp0[0xC8/4] = pB0[2] * sp0[0x68/4];
    
    arg0->unk_00 = sp0[0x80/4];
    arg0->unk_04 = sp0[0x84/4];
    arg0->unk_08 = sp0[0x88/4];
    
    sp0[0x70/4] = sp0[0x80/4];
    sp0[0x74/4] = sp0[0x84/4];
    sp0[0x78/4] = sp0[0x88/4];
    
    return arg0;
}
