extern s32 D_0043C3B0[];
extern volatile s32 D_0042DA18;

void func_003F0B30(s32 arg0, s32 arg1, s32 arg2) {
    register s32 *p = D_0043C3B0;
    p[3] = arg0;
    p[1] = arg1;
    p[2] = arg2;
}

void func_002EF738(void) {
    s32 i;
    s32 j;
    if ((D_0042DA18 ^ 1) & 1) {
        do {
            i = 0x64;
            goto check_outer;
inner:
            i = i - 1;
            j = 0x30;
inner_loop:
            j = j - 1;
            if (j >= 0) goto inner_loop;
check_outer:
            if (i >= 0) goto inner;
        } while ((D_0042DA18 ^ 1) & 1);
    }
}

void func_002EF6B8(void) {
    s32 i;
    s32 j;
    if (D_0042DA18 & 1) {
        do {
            i = 0x64;
            goto check_outer;
inner:
            i = i - 1;
            j = 0x30;
inner_loop:
            j = j - 1;
            if (j >= 0) goto inner_loop;
check_outer:
            if (i >= 0) goto inner;
        } while (D_0042DA18 & 1);
    }
}

void func_002EF630(s32 arg0) {
    s32 target;
    s32 i;
    s32 j;
    target = D_0042DA18 + arg0;
    if ((target - D_0042DA18) > 0) {
        do {
            i = 0x64;
            goto check_outer;
inner:
            i = i - 1;
            j = 0x30;
inner_loop:
            j = j - 1;
            if (j >= 0) goto inner_loop;
check_outer:
            if (i >= 0) goto inner;
        } while ((target - D_0042DA18) > 0);
    }
}
