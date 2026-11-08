extern s32 D_0043C3B0[];

void func_003F0B30(s32 arg0, s32 arg1, s32 arg2) {
    register s32 *p = D_0043C3B0;
    p[1] = arg1;
    p[2] = arg2;
    p[3] = arg0;
}

extern void *func_003A3268(void *);
extern s32 func_003A3CC8(void *);
extern void *func_00154E78(void *, s32, s32, s32, s32);
extern void *func_0039C160(void *, s32, s32);
extern void *func_003AA508(void *, u32, s32);

void *func_0039C468(void *arg0, void *arg1) {
    return arg1;
}

void *func_0039C430(void *arg0) {
    return (void *)((char *)arg0 + 0x10);
}

void func_0039C1F0(void *arg0, u32 arg1, s32 arg2) {
    if ((u32)func_003A3CC8(arg0) < arg1) {
        func_0039C160(arg0, (s32)(arg1 - (u32)func_003A3CC8(arg0)), (s8)arg2);
    } else {
        func_003AA508(arg0, arg1, -1);
    }
}
