extern s32 D_0043C3B0[];
extern volatile s32 D_0042DA18;

void func_003F0B30(s32 arg0, s32 arg1, s32 arg2) {
    register s32 *p = D_0043C3B0;
    p[3] = arg0;
    p[1] = arg1;
    p[2] = arg2;
}

void func_002EF738(void) {
    s32 i, j;
    if (!((D_0042DA18 ^ 1) & 1)) return;
    do {
        i = 0x64;
        do {
            if (i < 0) break;
            i--;
            j = 0x30;
            do {
                j--;
            } while (j >= 0);
        } while (i >= 0);
    } while ((D_0042DA18 ^ 1) & 1);
}

void func_002EF6B8(void) {
    s32 i, j;
    if (!(D_0042DA18 & 1)) return;
    do {
        i = 0x64;
        do {
            if (i < 0) break;
            i--;
            j = 0x30;
            do {
                j--;
            } while (j >= 0);
        } while (i >= 0);
    } while (D_0042DA18 & 1);
}

void func_002EF630(s32 arg0) {
    s32 target, i, j;
    target = D_0042DA18 + arg0;
    if ((target - D_0042DA18) <= 0) return;
    do {
        i = 0x64;
        do {
            if (i < 0) break;
            i--;
            j = 0x30;
            do {
                j--;
            } while (j >= 0);
        } while (i >= 0);
    } while ((target - D_0042DA18) > 0);
}
