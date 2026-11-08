extern u16 D_0042DA10;
extern u8 D_0042D690[];
extern s32 D_0042DA18;

void *func_00311098(void) {
    s16 v;
    v = (s16)D_0042DA10;
    return (void *)(D_0042D690 + v * 0xE0);
}

void func_003110C0(void) {
    s16 v = (s16)D_0042DA10 + 1;
    if (v >= 4) {
        v = 0;
    }
    D_0042DA10 = (u16)(s16)v;
}

s32 func_00311178(void) {
    return D_0042DA18;
}
