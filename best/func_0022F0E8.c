extern s32 func_00230098(void *, s32);

s32 func_00230078(void *arg0, void *arg1) {
    return func_00230098(arg0, *(s32 *)((u8 *)arg1 + 4));
}

extern s32 func_002317D8(void *, void *);

s32 func_0022F350(void *arg0, s32 arg1) {
    u8 *begin = *(u8 **)((u8 *)arg0 + 0x1C);
    u8 *end = *(u8 **)((u8 *)arg0 + 0x20);
    s32 n = (end - begin) / 60;
    s32 i = 0;
    s32 off = 0;
    s32 ret;

    if (n > 0) {
        do {
            ret = func_002317D8(begin + off, arg1);
            if (ret != 0)
                return ret;
            i++;
        } while (i < n);
        off += 0x3C;
    }
    return 1;
}

extern s32 func_00231FE0(void *, void *);

s32 func_0022F048(void *arg0, s32 arg1) {
    u8 *begin = *(u8 **)((u8 *)arg0 + 0x10);
    u8 *end = *(u8 **)((u8 *)arg0 + 0x14);
    s32 n = (end - begin) / 28;
    s32 i = 0;
    s32 off = 0;
    s32 ret;

    if (n > 0) {
        do {
            ret = func_00231FE0(arg1, begin + off);
            if (ret != 0)
                return ret;
            i++;
        } while (i < n);
        off += 0x1C;
    }
    return 1;
}

extern s32 func_00232380(void *, void *);

s32 func_0022F0E8(s32 unused, s32 arg1, s32 n, s32 off) {
    s32 i = 0;
    s32 ret;

    if (n > 0) {
        do {
            ret = func_00232380(arg1, off);
            if (ret > 0)
                return ret;
            i++;
        } while (i < n);
        off += 0xC;
    }
    return 1;
}
