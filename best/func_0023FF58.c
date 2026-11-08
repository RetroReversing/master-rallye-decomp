extern f32 func_001CF4C0(f32 *);
extern f32 D_004264A0;
extern f32 D_00478468;

void func_0023FF58(void *arg0, void *arg1) {
    f32 sp0, sp4, sp8, sp10, sp14, sp18;
    f32 sp20, sp24, sp28;
    f32 sp2C;
    s32 sp30;
    f32 sp40, sp44, sp48;
    f32 sp50, sp54, sp58;
    f32 sp60, sp64, sp68;
    f32 sp70, sp74, sp78;
    f32 sp80, sp84, sp88;
    f32 f0, f1, f2, f3, f4, f5, f6, f7, f8;
    s32 var4 = 0;
    s32 var3 = 0;
    s32 var20 = 0;
    s32 temp22;
    void *temp_3;
    void *temp_17;
    void *temp_6;
    
    temp_6 = (char*)arg1 + 0xC;
    var20 = 0;
    sp4 = *(f32*)((char*)arg1 + 0x4);
    sp0 = *(f32*)arg1;
    sp8 = *(f32*)((char*)arg1 + 0x8);
    sp10 = *(f32*)temp_6;
    sp14 = *(f32*)((char*)temp_6 + 0x4);
    sp18 = *(f32*)((char*)temp_6 + 0x8);
    
    temp22 = (*(s32*)((char*)arg0 + 0x1C) - *(s32*)((char*)arg0 + 0x18)) >> 2;
    sp20 = *(f32*)0x00426508;
    sp24 = *(f32*)(0x00426508 + 4);
    sp28 = *(f32*)(0x00426508 + 8);
    sp30 = -1;
    sp2C = 0.0f;
    
    if (temp22 <= 0) {
        goto block_27;
    }
    
loop_2:
    var4 = 0;
    temp_3 = *(void**)((char*)arg0 + 0x18 + var20 * 4);
    temp_17 = (char*)temp_3 + 8;
    f1 = (*(f32*)((char*)temp_3 + 8) * sp0) + (*(f32*)((char*)temp_17 + 4) * sp4) + (*(f32*)((char*)temp_17 + 8) * sp8) + *(f32*)((char*)temp_17 + 0xC);
    if (D_004264A0 <= f1) {
        var4 = 1;
    } else if (f1 <= -D_004264A0) {
        var4 = -1;
    }
    f1 = (*(f32*)((char*)temp_3 + 8) * sp10) + (*(f32*)((char*)temp_17 + 4) * sp14) + (*(f32*)((char*)temp_17 + 8) * sp18) + *(f32*)((char*)temp_17 + 0xC);
    var3 = 0;
    if (D_004264A0 <= f1) {
        var3 = 1;
    } else if (f1 <= -D_004264A0) {
        var3 = -1;
    }
    if (var4 == 1 && var3 == var4) {
        *(s32*)((char*)arg1 + 0x34) = 0;
        return;
    }
    if ((var4 != 0) && (var3 != 0) && (var4 != var3)) {
        if (var4 == 1) {
            sp50 = sp10 - sp0;
            sp54 = sp14 - sp4;
            sp58 = sp18 - sp8;
            f0 = func_001CF4C0(&sp50);
            if (f0 < D_00478468) {
                sp50 = 0.0f;
                sp54 = 0.0f;
                sp58 = 0.0f;
            } else {
                sp50 = sp50 / f0;
                *(f32*)((char*)&sp50 + 4) = *(f32*)((char*)&sp50 + 4) / f0;
                *(f32*)((char*)&sp50 + 8) = *(f32*)((char*)&sp50 + 8) / f0;
            }
            f2 = *(f32*)((char*)temp_3 + 8);
            f6 = *(f32*)((char*)temp_17 + 4);
            f4 = *(f32*)((char*)temp_17 + 8);
            f7 = *(f32*)((char*)&sp50 + 4);
            f5 = *(f32*)((char*)&sp50 + 8);
            f0 = -( *(f32*)((char*)temp_17 + 0xC) + (f2 * sp0) + (f6 * sp4) + (f4 * sp8) ) / (f2 * sp50 + f6 * f7 + f4 * f5);
            f5 = f5 * f0;
            f8 = sp50 * f0;
            f7 = f7 * f0;
            sp68 = f5;
            sp60 = f8;
            sp64 = f7;
            sp8 = sp8 + f5;
            sp0 = sp0 + f8;
            sp4 = sp4 + f7;
            sp40 = sp0;
            sp44 = sp4;
            sp48 = sp8;
            sp20 = *(f32*)((char*)temp_3 + 8);
            sp24 = *(f32*)((char*)temp_17 + 4);
            sp28 = *(f32*)((char*)temp_17 + 8);
            sp2C = *(f32*)((char*)temp_17 + 0xC);
            sp30 = *(s32*)((char*)temp_17 + 0x10);
        } else if (var3 == 1) {
            sp70 = sp10 - sp0;
            sp74 = sp14 - sp4;
            sp78 = sp18 - sp8;
            f0 = func_001CF4C0(&sp70);
            if (f0 < D_00478468) {
                sp70 = 0.0f;
                sp74 = 0.0f;
                sp78 = 0.0f;
            } else {
                sp70 = sp70 / f0;
                *(f32*)((char*)&sp70 + 4) = *(f32*)((char*)&sp70 + 4) / f0;
                *(f32*)((char*)&sp70 + 8) = *(f32*)((char*)&sp70 + 8) / f0;
            }
            f2 = *(f32*)((char*)temp_3 + 8);
            f6 = *(f32*)((char*)temp_17 + 4);
            f5 = *(f32*)((char*)temp_17 + 8);
            f7 = *(f32*)((char*)&sp70 + 4);
            f3 = *(f32*)((char*)&sp70 + 8);
            f0 = -( *(f32*)((char*)temp_17 + 0xC) + (f2 * sp0) + (f6 * sp4) + (f5 * sp8) ) / (f2 * sp70 + f6 * f7 + f5 * f3);
            f3 = f3 * f0;
            f8 = sp70 * f0;
            f7 = f7 * f0;
            sp88 = f3;
            sp80 = f8;
            sp84 = f7;
            sp18 = sp8 + f3;
            sp10 = sp0 + f8;
            sp14 = sp4 + f7;
            sp40 = sp10;
            sp44 = sp14;
            sp48 = sp18;
        }
    }
    var20++;
    if (var20 < temp22) {
        goto loop_2;
    }
    
block_27:
    *(s32*)((char*)arg1 + 0x34) = 1;
    *(f32*)((char*)arg1 + 0x24) = sp20;
    *(f32*)((char*)arg1 + 0x28) = sp28;
    *(f32*)((char*)arg1 + 0x24 + 4) = sp24;
    *(s32*)((char*)arg1 + 0x30) = sp30;
    *(f32*)((char*)arg1 + 0x18) = sp0;
    *(f32*)((char*)arg1 + 0x1C) = sp4;
    *(f32*)((char*)arg1 + 0x20) = sp8;
}
