extern s32 D_0043C3B0[];

void func_003F0B30(s32 arg0, s32 arg1, s32 arg2) {
    register s32 *p = D_0043C3B0;
    p[1] = arg1;
    p[2] = arg2;
    p[3] = arg0;
}

s32 func_003A5298(void *arg0) {
    volatile s32 fp;
    (void)fp;
    return *(s32 *)((char *)arg0 + 0xC) & 1;
}

extern void func_003ACB80(void *a, void *b);

void *func_003A5228(void *arg0, void *arg1) {
    void *s0 = arg0;
    void *s1 = arg1;
    func_003ACB80(s0, s1);
    return s0;
}

char *func_003A5190(char *arg0) {
    volatile s32 fp;
    (void)fp;
    return arg0 + 0x20;
}
