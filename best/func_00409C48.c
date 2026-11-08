extern s32 D_004411BC;
extern u8 D_004A1300[];
extern s32 func_00405CC0(void *, s32, s32);

s32 func_00409C48(void) {
    void *p = D_004A1300;
    s32 res;

    goto check;
loop:
    {
        volatile s32 i = 0x100000;
        do {
            i--;
        } while (i != -1);
    }
check:
    res = func_00405CC0(p, 0x80000003, 0);
    if (res < 0) {
        return -1;
    }
    if (*(s32 *)((u8 *)p + 0x24) == 0) {
        goto loop;
    }
    D_004411BC = 0;
    return 0;
}
