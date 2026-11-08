extern s32 func_003A31D8(void *);
extern void func_003D1290(void *, void *, s32);
void func_0039BE78(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s8 sp0;
    s8 t = (s8)arg2;
    sp0 = t;
    {
        char *p = (char *)arg0;
        s32 base = func_003A31D8(arg0);
        func_003D1290((void *)(base + arg1), &sp0, arg3);
        (void)p;
    }
}
