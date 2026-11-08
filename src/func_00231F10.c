extern f32 D_00426508[];

void *func_00231F10(void *arg0) {
    f32 *p = (f32 *)arg0;
    f32 *d = D_00426508;
    p[0] = d[0];
    p[1] = d[1];
    p[2] = d[2];
    *(s32 *)((u8 *)arg0 + 0x10) = -1;
    *(s32 *)((u8 *)arg0 + 0xC) = 0;
    return arg0;
}
