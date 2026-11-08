extern s32 func_001F0408(void *a0, void *a1);
extern s32 func_001F0468(void *a0, void *a1);

s32 func_001F06B8(void *arg0, void *arg1, s32 arg2) {
    s32 i;
    s32 ok;
    char *p;
    void *a1;

    ok = 1;
    i = 0;
    if (arg2 > 0) {
        p = (char *)arg1;
        a1 = p;
        goto loop;
        while (1) {
        loop:
            ok = ok & (func_001F0408(arg0, a1) != 0);
            i++;
            p += 0x10;
            if (i >= arg2) break;
            a1 = p;
            if (ok != 1) break;
        }
    }
    return ok;
}

s32 func_001F0748(void *arg0, void *arg1, s32 arg2) {
    s32 i;
    s32 ok;
    char *p;
    void *a1;

    ok = 1;
    i = 0;
    if (arg2 > 0) {
        p = (char *)arg1;
        a1 = p;
        goto loop;
        while (1) {
        loop:
            ok = ok & (func_001F0468(arg0, a1) != 0);
            i++;
            p += 0x34;
            if (i >= arg2) break;
            a1 = p;
            if (ok != 1) break;
        }
    }
    return ok;
}
