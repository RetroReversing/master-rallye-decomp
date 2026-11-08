s32 func_002B7E18(void *arg0, void *arg1, s32 arg2) {
    s32 ret = 0;
    if (arg1 != 0) {
        s32 val = *(s32 *)((u8 *)arg1 + 4);
        if (arg2 < val) {
            *(s32 *)((u8 *)arg1 + 8) = arg2;
            ret = 1;
        } else {
            *(s32 *)((u8 *)arg1 + 8) = val;
        }
    }
    return ret;
}
