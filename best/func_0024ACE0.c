void func_002390A0(void *, void *);

void func_002498E0(void *arg0, void *arg1) {
    u32 *begin;
    u32 *end;
    s32 n;
    s32 i;

    begin = *(u32 **)((char *)arg1 + 0);
    end = *(u32 **)((char *)arg1 + 4);
    n = ((s32)end - (s32)begin) >> 2;
    if (n <= 0) {
        return;
    }
    for (i = 0; i < n; i++) {
        void *v = (void *)begin[i];
        if (v != 0) {
            func_002390A0(v, (char *)arg0 + 0x74);
        }
    }
}

s32 func_0024AD98(void *, void *, s32, s32);
s32 func_00260080(void *);
s32 func_002600B0(void *, s32, s32);
void func_00260088(void *, s32);

s32 func_0024ACE0(void *arg0, void *arg1, s32 arg2, s32 arg3) {
    s32 sp[0x18];
    s32 ret;

    func_00260080(sp);
    if (func_002600B0(sp, *(s32 *)((char *)arg1 + 8), arg2) != 0) {
        if (func_0024AD98(arg0, *(void **)((char *)arg1 + 4), arg2, 0) != 0) {
            ret = func_0024AD98(arg0, *(void **)((char *)arg1 + 0), arg2, arg3);
            func_00260088(sp, 2);
            return ret;
        }
    }
    func_00260088(sp, 2);
    return 0;
}

void *func_0024C1A8(void *arg0, void *arg1) {
    void *p8;
    void *q8;
    void *p34;

    p8 = (char *)arg0 + 8;
    q8 = (char *)arg1 + 8;
    p34 = (char *)arg0 + 0x34;

    *(s32 *)((char *)arg0 + 0) = *(s32 *)((char *)arg1 + 0);
    *(s32 *)((char *)arg0 + 4) = *(s32 *)((char *)arg1 + 4);
    *(f32 *)((char *)arg0 + 8) = *(f32 *)((char *)arg1 + 8);
    *(f32 *)((char *)p8 + 4) = *(f32 *)((char *)q8 + 4);
    *(f32 *)((char *)p8 + 8) = *(f32 *)((char *)q8 + 8);
    *(f32 *)((char *)arg0 + 0x14) = *(f32 *)((char *)arg1 + 0x14);
    *(s32 *)((char *)arg0 + 0x18) = *(s32 *)((char *)arg1 + 0x18);
    *(s32 *)((char *)arg0 + 0x20) = 0;
    *(s32 *)((char *)arg0 + 0x1C) = *(s32 *)((char *)arg1 + 0x1C);
    *(s32 *)((char *)arg0 + 0x24) = 0;
    *(s32 *)((char *)arg0 + 0x28) = 0;
    *(s32 *)((char *)arg0 + 0x34) = 0;
    *(s32 *)((char *)p34 + 0xC) = 0;
    *(s32 *)((char *)p34 + 4) = 0;
    *(s32 *)((char *)p34 + 8) = 0;
    *(s32 *)((char *)arg0 + 0x44) = *(s32 *)((char *)arg1 + 0x44);

    return arg0;
}

s32 func_0024C4B8(void *arg0, s32 arg1, s32 arg2) {
    s32 a;
    s32 b;

    a = *(s32 *)((char *)arg0 + 0);
    b = *(s32 *)((char *)arg0 + 4);
    if (a == arg1 && b == arg2) {
        return 1;
    }
    if (a == arg2 && b == arg1) {
        return 1;
    }
    return 0;
}
