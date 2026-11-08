typedef signed int s32;

s32 func_002D2E00(s32 arg0, s32 arg1, s32 arg2) {
    if (arg0 < arg1) {
        arg0 = arg1;
    }
    if (arg0 > arg2) {
        arg0 = arg2;
    }
    return arg0;
}

extern s32 func_002C1FD0(s32);
extern s32 func_002C2100(s32, s32);
extern void func_003F9698(const char *);
extern s32 D_00428F0C;
extern s32 D_00428F14;
extern s32 D_0049AAC0;
extern char D_004814B0[];
extern char D_004814C0[];

s32 func_002C2588(s32 arg0, s32 arg1) {
    volatile s32 ret = 0;
    if (func_002C1FD0(arg1) != 0) {
        D_00428F0C = 0;
        D_0049AAC0 = 0;
        func_003F9698(D_004814B0);
        while (func_002C2100(arg0, 1) != 0) {
        }
        ret = 1;
        func_003F9698(D_004814C0);
        D_00428F14 = 0;
    }
    return ret;
}
