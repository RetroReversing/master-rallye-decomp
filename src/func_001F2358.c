extern void func_001F7398(void *);

void *func_001F2108(void *arg0)
{
    s32 i;
    u8 *p;
    s32 *q;

    p = (u8 *)arg0;
    i = 2;
    do {
        func_001F7398(p);
        i--;
        p += 0x14;
    } while (i != -1);

    *(s32 *)((u8 *)arg0 + 0x48) = 0;
    *(s32 *)((u8 *)arg0 + 0x54) = 0;
    i = 2;
    q = (s32 *)((u8 *)arg0 + 0x44);
    do {
        *q = 0;
        i--;
        q--;
    } while (i >= 0);
    return arg0;
}

s32 func_001F2358(void *arg0)
{
    s32 i = 0;
    s32 *p = (s32 *)arg0;
    s32 *q = (s32 *)((u8 *)arg0 + 0x3C);

    while (i < 3) {
        i++;
        if (*q != 0) {
            if (*p != 0) {
                p += 5; /* 0x14 bytes = 5 s32 words */
                return 1;
            }
        }
        p += 5;
        q++;
    }
    return 0;
}
