extern u8 D_0048BD29[];

s32 func_003FB5A0(s32 arg0) {
    return (D_0048BD29[arg0] & 2) ? (arg0 - 0x20) : arg0;
}

extern u8 D_0048BD29[];

s8 *func_003FB548(s8 *arg0) {
    s8 *p = arg0;
    u8 c = (u8)*arg0;
    if (*arg0 == 0) return arg0;
    do {
        if (D_0048BD29[(s8)c] & 2) {
            *p = (s8)c - 0x20;
        }
        p++;
        c = (u8)*p;
    } while (c != 0);
    return arg0;
}
