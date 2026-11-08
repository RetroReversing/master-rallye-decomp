void func_002660C8(void *arg0) {
    s32 *p = (s32 *)arg0;
    s32 one = 1;
    p[7] = 0;       /* 0x1C */
    p[0] = one;     /* 0x00 */
    p[9] = 0;       /* 0x24 */
    p[10] = 0;      /* 0x28 */
    p[12] = 0;      /* 0x30 */
}

void *func_002633E0(void *arg0) {
    s32 sp0;
    s32 sp4;
    s32 sp8;
    f32 f1;
    char *p = (char *)arg0;
    char *q = p + 4;

    sp8 = 0;
    *(s32 *)(p + 0x10) = 0;
    *(s32 *)(p + 0x14) = 0;
    f1 = *(f32 *)(p + 0x10);
    *(s32 *)(p + 0x18) = 0;
    *(s32 *)(p + 0x1C) = 0;
    sp0 = 0;
    sp4 = 0;
    *(f32 *)(p + 4) = f1;
    *(s32 *)(p + 0) = 0;
    *(f32 *)(q + 4) = f1;
    *(f32 *)(q + 8) = *(f32 *)&sp8;
    return arg0;
}

extern void func_00278338(void *, void *, void *);

void func_002633B8(void *arg0, void *arg1, void *arg2, void *arg3) {
    func_00278338(arg2, (char *)*(void **)((char *)arg1 + 0x50) + 0x20, arg3);
}

void func_002632B8(void *arg0, void *arg1) {
    void *old = *(void **)((char *)arg0 + 0x14);
    if (old != NULL) {
        void *vt = *(void **)((char *)old + 0xC);
        void (*fn)(void *, s32, void *) = *(void (**)(void *, s32, void *))((char *)vt + 0xC);
        s16 adj = *(s16 *)((char *)vt + 8);
        fn((char *)old + adj, 3, old);
    }
    *(void **)((char *)arg0 + 0x14) = arg1;
    *(void **)((char *)arg1 + 8) = arg0;
}
