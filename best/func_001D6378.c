s32 func_001D3920(void *arg0) {
    s32 *v = *(s32 **)((char *)arg0 + 4);
    s32 ret = 0;
    if (v != (s32 *)arg0) {
        if (v != (s32 *)arg0) {
            ret = *v;
        }
    }
    return ret;
}

s32 func_001D6278(void *arg0, void *arg1, s32 arg2) {
    s16 sp;
    void *v;
    s32 (*fn)(char *, void *, s32);
    s16 off;

    v = *(void **)((char *)arg0 + 8);
    off = *(s16 *)((char *)v + 0x50);
    fn = (s32 (*)(char *, void *, s32))*(s32 *)((char *)v + 0x54);
    if (fn((char *)arg0 + off, &sp, 2) != 0) {
        if (sp < arg2) {
            v = *(void **)((char *)arg0 + 8);
            off = *(s16 *)((char *)v + 0x50);
            fn = (s32 (*)(char *, void *, s32))*(s32 *)((char *)v + 0x54);
            if (fn((char *)arg0 + off, arg1, (s32)sp) != 0) {
                *((char *)arg1 + sp) = 0;
                return 1;
            }
        }
    }
    return 0;
}

void func_001D6310(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    void *v;
    s16 off;
    void (*fn)(char *);

    v = *(void **)((char *)arg0 + 8);
    off = *(s16 *)((char *)v + 0x60);
    fn = (void (*)(char *))*(s32 *)((char *)v + 0x64);
    fn((char *)arg0 + off);
    {
        void (*fn2)(char *, s32, s32);
        v = *(void **)((char *)arg0 + 8);
        off = *(s16 *)((char *)v + 0x70);
        fn2 = (void (*)(char *, s32, s32))*(s32 *)((char *)v + 0x74);
        fn2((char *)arg0 + off, arg2, arg3);
    }
}

void func_001D6378(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    struct { s16 a; s16 b; s32 c; } sp;
    void *v;
    s16 off;
    void (*fn)(char *, void *, s32);

    sp.a = (s16)arg1;
    sp.b = (s16)arg2;
    sp.c = arg3;
    v = *(void **)((char *)arg0 + 8);
    off = *(s16 *)((char *)v + 0x70);
    fn = (void (*)(char *, void *, s32))*(s32 *)((char *)v + 0x74);
    fn((char *)arg0 + off, &sp, 8);
}
