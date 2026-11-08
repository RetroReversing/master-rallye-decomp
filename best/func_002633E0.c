void func_002660C8(void *arg0) {
    /* best attempt order: 0, 0x1C, 0x28, 0x30, 0x24 gave score 20 */
    s32 *p = (s32 *)arg0;
    p[0] = 1;
    p[7] = 0;    /* 0x1C */
    p[10] = 0;   /* 0x28 */
    p[12] = 0;   /* 0x30 */
    p[9] = 0;    /* 0x24 */
}

void *func_002633E0(void *arg0) {
    volatile s32 sp[4];
    f32 f1;
    char *p = (char *)arg0;
    char *q = p + 4;
    void *v0 = arg0;

    sp[2] = 0; /* 8($sp) */
    *(s32 *)(p + 0x10) = 0;
    *(s32 *)(p + 0x14) = 0;
    f1 = *(f32 *)(p + 0x10);
    *(s32 *)(p + 0x18) = 0;
    *(s32 *)(p + 0x1C) = 0;
    sp[0] = 0;
    sp[1] = 0;
    *(f32 *)(p + 4) = f1;
    *(s32 *)(p + 0) = 0;
    *(f32 *)(q + 4) = f1;
    *(f32 *)(q + 8) = *(f32 *)(void *)&sp[2];
    return v0;
}

void func_002632B8(void *arg0, void *arg1) {
    void *child = *(void **)((char *)arg0 + 0x14);
    void *s0 = arg0;
    void *s1 = arg1;
    if (child != NULL) {
        void *vt = *(void **)((char *)child + 0xC);
        s16 adj = *(s16 *)((char *)vt + 8);
        void (*fn)(void *, s32, void *) = *(void (**)(void *, s32, void *))((char *)vt + 0xC);
        fn((char *)child + adj, 3, child);
    }
    *(void **)((char *)s0 + 0x14) = s1;
    *(void **)((char *)s1 + 8) = s0;
}
