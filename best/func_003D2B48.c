s32 func_003D29A0(s32 *);
extern u32 D_00437E18[];

s32 func_003D2B48(s32 arg0) {
    s32 sp0;
    s32 *temp_7;
    s32 *var_5;
    s32 *var_6;
    s32 var_3;
    s32 *temp_6;
    u32 idx;
    
    sp0 = 0x14;
    temp_7 = (s32 *)func_003D29A0(&sp0);
    if (sp0 == 1) {
        return (s32)temp_7;
    }
    temp_6 = temp_7 + arg0;
    var_5 = temp_6;
    idx = ((u32)(arg0 + 7) >> 3) - 1;
    D_00437E18[idx] = (u32)temp_6;
    var_3 = 1;
    var_6 = var_5 + arg0;
    if ((sp0 - 1) == 1) {
        *var_5 = 0;
    } else {
        do {
            *var_5 = (s32)var_6;
            var_3++;
            var_5 = var_6;
            var_6 = var_5 + arg0;
        } while ((sp0 - 1) != var_3);
        *var_5 = 0;
    }
    return (s32)temp_7;
}
