extern s16 func_003FA9B8(void *);

typedef s32 (*Fn1)(void *);
typedef s32 (*Fn2)(void *, void *, s32);

s32 func_001D63B8(void *arg0, s32 arg1, s32 arg2) {
    s16 sp[2];
    void *vt;
    s32 r;
    void *self;
    self = arg0;
    sp[0] = (s16)arg1;
    sp[1] = (s16)arg2;
    vt = *(void **)((char *)self + 8);
    r = ((Fn2)*(s32 *)((char *)vt + 0x74))((char *)self + *(s16 *)((char *)vt + 0x70), sp, 8);
    if (r != 0) {
        void *vt2 = *(void **)((char *)self + 8);
        *(s32 *)self = ((Fn1)*(s32 *)((char *)vt2 + 0x34))((char *)self + *(s16 *)((char *)vt2 + 0x30));
        return 1;
    }
    return 0;
}

s32 func_001D64D0(void *arg0, void *arg1) {
    s16 sp0;
    s32 ok;
    void *vt;
    s16 len;

    len = func_003FA9B8(arg1);
    ok = 0;
    vt = *(void **)((char *)arg0 + 8);
    sp0 = len;
    if (((Fn2)*(s32 *)((char *)vt + 0x74))((char *)arg0 + *(s16 *)((char *)vt + 0x70), &sp0, 2) != 0) {
        vt = *(void **)((char *)arg0 + 8);
        if (((Fn2)*(s32 *)((char *)vt + 0x74))((char *)arg0 + *(s16 *)((char *)vt + 0x70), arg1, (s32)sp0) != 0)
            ok = 1;
        else
            ok = 0;
    }
    return ok;
}
