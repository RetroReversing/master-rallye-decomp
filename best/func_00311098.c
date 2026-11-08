extern s16 D_0042DA10;
extern s32 D_0042D690;
extern s32 D_0042DA18;

void *func_00311098(void) {
    return ((s16) D_0042DA10 * 0xE0) + (void *)&D_0042D690;
}

void func_003110C0(void) {
    s32 temp;
    temp = (s16) D_0042DA10 + 1;
    if (temp >= 4) {
        D_0042DA10 = 0;
    } else {
        D_0042DA10 = (s16) temp;
    }
}

void *func_003110E8(s32 arg0) {
    return (arg0 * 0xE0) + (void *)&D_0042D690;
}

s32 func_00311178(void) {
    return D_0042DA18;
}
