s32 func_003FA760(s32, s32);

s32 func_003AC8A0(s32 *arg0, s32 arg1) {
    volatile s32 *vs0 = arg0;
    volatile s32 vs1 = arg1;
    volatile s32 vs2 = 0;
    s32 tmp = *vs0;
    if (tmp != 0) {
        if (vs1 != 0) {
            if (func_003FA760(vs1, tmp) == 0) {
                vs2 = 1;
            }
        }
    }
    return vs2;
}
