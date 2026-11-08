s32 func_002B5220(void **arg0, char *arg1, u32 arg2, u32 arg3) {
    char *p = (char *)*arg0;
    s32 len = *(s32 *)(p - 0x10);
    s32 i;
    volatile char sp0;

    if (len != 0) {
        s32 start = len - 1;
        if (arg2 < (u32)start) {
            start = (s32)arg2;
        }
        i = start + 1;
        if (i != 0) {
            i--;
            do {
                s32 j;
                s32 found = -1;
                s32 c = (u8)p[i];
                sp0 = (char)c;
                if (arg3 != 0) {
                    s32 ch = (s8)c;
                    j = 0;
                    while (1) {
                        s32 v = (s8)arg1[j];
                        if (v == ch) {
                            found = j;
                            break;
                        }
                        j++;
                        if ((u32)j >= arg3) break;
                    }
                }
                if (found != -1) {
                    return i;
                }
                i--;
            } while (i >= 0);
        }
    }
    return -1;
}
