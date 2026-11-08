extern char D_0049B9D0[];
s32 func_003CAD00(s32, u32);

s32 func_003CAE68(s32 arg0, s32 arg1) {
    char *p = D_0049B9D0;
    if (*(s32 *)(p + arg0 * 0x70 + arg1 * 0x1C + 0x10) == 0) {
        return 0;
    }
    return func_003CAD00(arg0, 0);
}

s32 func_003CAE10(s32 arg0, s32 arg1) {
    char *p = D_0049B9D0;
    if (*(s32 *)(p + arg0 * 0x70 + arg1 * 0x1C + 0x10) == 0) {
        return 0;
    }
    return func_003CAD00(arg0, 0xFFF);
}
