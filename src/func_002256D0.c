extern s32 func_001D4080(s32, void *);

s32 func_002256D0(void *arg0, void *arg1) {
    s32 *cur = *(s32 **)arg0;
    s32 *end = *(s32 **)((u8 *)arg0 + 4);
    if (cur != end) {
        do {
            s32 v = *cur;
            if (func_001D4080(v, arg1) != 0)
                return 1;
            cur++;
            end = *(s32 **)((u8 *)arg0 + 4);
        } while (cur != end);
    }
    return 0;
}
