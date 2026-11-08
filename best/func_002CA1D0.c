extern s32 D_004823E0;
extern s32 D_00482408;

void func_002CA1D0(s32 arg0, s8 arg1, s16 arg2) {
    s32 temp_2;
    s8 temp_16;
    s8 temp_4;

    temp_4 = arg1 & 0x7F;
    temp_2 = arg0 + 0x84 + arg2;
    temp_16 = *(s8 *)temp_2;
    *(s8 *)temp_2 = temp_4;
    func_003F9698(&D_004823E0, temp_4, temp_4, arg2);
    if ((temp_16 != 0) && (arg1 != temp_16)) {
        func_003F9698(&D_00482408, temp_16, temp_16, arg2);
        func_002CA418(arg0, temp_16);
    }
}
