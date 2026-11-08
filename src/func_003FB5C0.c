void func_003E0FA0(void *arg0, s64 arg1) {
    void *t = *(void **)((char *)arg0 + 0x40);
    *(s32 *)((char *)t + 0xF8) = 1;
    *(s64 *)((char *)t + 0xF0) = arg1;
}

extern u8 D_0048BD29;

s8 *func_003FB548(s8 *arg0) {
    s8 *var_6;
    u8 temp_2;
    u8 var_3;

    var_6 = arg0;
    var_3 = (u8) *arg0;
    if (*arg0 != 0) {
        do {
            if (*((s8) var_3 + (s8 *)&D_0048BD29) & 2) {
                *var_6 = (s8) var_3 - 0x20;
            }
            var_6 += 1;
            temp_2 = *var_6;
            var_3 = temp_2;
        } while (temp_2 != 0);
    }
    return arg0;
}

extern u8 D_0048BD29;

s32 func_003FB5A0(s32 arg0) {
    return !(*((s8) arg0 + (s8 *)&D_0048BD29) & 2) ? arg0 : (arg0 - 0x20);
}

extern s32 func_003FF150(s32, void *);

s32 func_003FB5C0(s32 arg0, void *arg1) {
    s32 r;
    if (*(s32 *)((char *)arg1 + 8) == 0) {
        *(s32 *)((char *)arg1 + 4) = 0;
        return 0;
    }
    r = func_003FF150(arg0, arg1);
    *(s32 *)((char *)arg1 + 8) = 0;
    *(s32 *)((char *)arg1 + 4) = 0;
    return r;
}
