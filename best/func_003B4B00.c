s32 *func_003B4B00(s32 *arg0, s32 arg1, s32 *arg2, s32 arg3, s32 arg4) {
    s32 sp0;
    s32 *var_6;
    s32 *var_9;

    var_6 = arg2;
    var_9 = arg0;
    sp0 = (s32) (arg1 - (s32) var_9) >> 2;
loop_1:
    if (sp0 > 0) {
        *var_6 = *var_9;
        var_9 += 4;
        var_6 += 4;
        sp0 -= 1;
        goto loop_1;
    }
    return var_6;
}
