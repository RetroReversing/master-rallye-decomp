extern s16 func_003FA9B8(void *);
extern void func_001D6588(void *arg0, s32 arg1);

typedef s32 (*Fn2)(void *, void *, s32);

s32 func_001D3920(void *arg0) {
    s32 *v = *(s32 **)((char *)arg0 + 4);
    s32 ret = 0;
    if (v != (s32 *)arg0 && v != (s32 *)arg0)
        ret = *v;
    return ret;
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
    if (((Fn2)*(s32 *)((char *)vt + 0x74))((char *)arg0 + *(s16 *)((char *)vt + 0x70), &sp0, 2) == 0)
        return 0;
    vt = *(void **)((char *)arg0 + 8);
    if (((Fn2)*(s32 *)((char *)vt + 0x74))((char *)arg0 + *(s16 *)((char *)vt + 0x70), arg1, (s32)sp0) != 0)
        ok = 1;
    return ok;
}

void *func_001D6558(void *arg0) {
    *(s32 *)arg0 = 0;
    func_001D6588(arg0, 0);
    return arg0;
}

s32 func_001D65A0(void *arg0) {
    s32 ret = *(s32 *)((char *)arg0 + 4);
    func_001D6588(arg0, 0);
    return ret;
}
