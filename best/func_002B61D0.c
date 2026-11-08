extern s32 func_003FA580(s32 *, s32);

s32 func_002B61D0(s32 *arg0, s32 *arg1, s32 arg2) {
    s32 i = 0;
    s32 result = 0;
    s32 *p;
    
    while (i < 10) {
        p = arg0 + 0xB + i;
        if (*p == 0) {
            i++;
            continue;
        }
        if (func_003FA580(arg1, *p) != 0) {
            i++;
            continue;
        }
        if (arg2 != 0) {
            i = *(arg0 + 1 + i);
        }
        p = arg0 + 0xB;
        result = p[i];
        break;
    }
    return result;
}
