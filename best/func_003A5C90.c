extern s32 D_0043C3B0[];

void func_003F0B30(s32 arg0, s32 arg1, s32 arg2) {
    register s32 *p = D_0043C3B0;
    p[1] = arg1;
    p[2] = arg2;
    p[3] = arg0;
}

void func_003A4AB8(void *arg0, void *arg1);

void *func_003A5CC0(void *arg0, void *arg1) {
    func_003A4AB8(arg0, arg1);
    func_003A4AB8((char *)arg0 + 0xC, (char *)arg1 + 0xC);
    *(s32 *)((char *)arg0 + 0x18) = *(s32 *)((char *)arg1 + 0x18);
    return arg0;
}

void *func_003A5C90(void *arg0, f32 arg1) {
    *(f32 *)((char *)arg0 + 0x18) = arg1;
    return arg0;
}

void *func_003A5C60(void *arg0, f32 arg1) {
    *(f32 *)((char *)arg0 + 0x14) = arg1;
    return arg0;
}
