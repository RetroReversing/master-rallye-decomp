extern void func_001F7398(void *);

void *func_001F2108(void *arg0)
{
    s32 i;
    u8 *p = (u8 *)arg0;

    for (i = 2; i != -1; i--) {
        func_001F7398(p);
        p += 0x14;
    }
    *(s32 *)((u8 *)arg0 + 0x48) = 0;
    *(s32 *)((u8 *)arg0 + 0x54) = 0;
    {
        s32 j = 2;
        s32 *q = (s32 *)((u8 *)arg0 + 0x44);
        do {
            *q = 0;
            j--;
            q--;
        } while (j >= 0);
    }
    return arg0;
}
