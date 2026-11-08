extern s32 D_0043C3B0[];

void func_003F0B30(s32 arg0, s32 arg1, s32 arg2) {
    register s32 *p = D_0043C3B0;
    p[1] = arg1;
    p[2] = arg2;
    p[3] = arg0;
}

extern s32 func_00151930(void *);
extern s32 func_003A31D8(void *);

s32 func_003AB660(void *arg0) {
    s32 tmp;

    if (((s32 *)arg0)[3] != 0) {
        tmp = func_00151930(arg0);
        return tmp;
    }
    ((s32 *)arg0)[2]++;
    tmp = func_003A31D8(arg0);
    return tmp;
}

extern s32 func_003AAB90(void *);

s32 func_003AAC28(void *arg0, s32 arg1) {
    s32 base;
    s32 result;

    base = func_003AAB90(arg0);
    result = base + (arg1 * 0x1C);
    return result;
}

extern void func_003AD088(void *);
extern void func_003B0D10(void *, s32, void *);

void func_003AABC8(void *arg0, s32 arg1) {
    s32 sp[8];

    func_003AD088(sp);
    func_003B0D10(arg0, arg1, sp);
}
