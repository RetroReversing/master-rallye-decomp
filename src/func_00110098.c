extern void *D_00428F24;
extern void *func_002C2EE0(void);
extern void func_002C39D8(void *);

void func_00110098(void) {
    if (D_00428F24 == 0)
        func_002C39D8(func_002C2EE0());
    {
        void *p = D_00428F24;
        void **vt = *(void ***)p;
        int (*fn)(void *, int) = (int (*)(void *, int))vt[15];
        short off = *(short *)((char *)vt + 0x38);
        fn((char *)p + off, 1);
    }
}
