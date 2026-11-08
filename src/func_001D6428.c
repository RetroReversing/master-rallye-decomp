extern s16 func_003FA9B8(void *);

typedef s32 (*Fn1)(void *);
typedef s32 (*Fn2)(void *, void *, s32);
typedef s32 (*Fn3)(void *, s32);

s32 func_001D63B8(void *arg0, s32 arg1, s32 arg2) {
    s16 sp[2];
    void *vt;
    s32 r;
    sp[0] = (s16)arg1;
    sp[1] = (s16)arg2;
    vt = *(void **)((char *)arg0 + 8);
    r = ((Fn2)*(s32 *)((char *)vt + 0x74))((char *)arg0 + *(s16 *)((char *)vt + 0x70), sp, 8);
    if (r != 0) {
        vt = *(void **)((char *)arg0 + 8);
        *(s32 *)arg0 = ((Fn1)*(s32 *)((char *)vt + 0x34))((char *)arg0 + *(s16 *)((char *)vt + 0x30));
        return 1;
    }
    return 0;
}

s32 func_001D6428(void *arg0) {
    s32 sp[2]; /* sp[0]=pad, sp[1]=value at offset 4 */
    void *vt;
    s32 t;

    vt = *(void **)((char *)arg0 + 8);
    t = ((Fn1)*(s32 *)((char *)vt + 0x34))((char *)arg0 + *(s16 *)((char *)vt + 0x30));
    sp[1] = t - *(s32 *)arg0;
    vt = *(void **)((char *)arg0 + 8);
    ((Fn3)*(s32 *)((char *)vt + 0x64))((char *)arg0 + *(s16 *)((char *)vt + 0x60), *(s32 *)arg0 - 4);
    vt = *(void **)((char *)arg0 + 8);
    if (((Fn2)*(s32 *)((char *)vt + 0x74))((char *)arg0 + *(s16 *)((char *)vt + 0x70), &sp[1], 4) != 0) {
        vt = *(void **)((char *)arg0 + 8);
        ((Fn3)*(s32 *)((char *)vt + 0x64))((char *)arg0 + *(s16 *)((char *)vt + 0x60), t);
        return 1;
    }
    return 0;
}

s32 func_001D64D0(void *arg0, void *arg1) {
    s16 sp0;
    s32 ok;
    void *vt;

    sp0 = func_003FA9B8(arg1);
    ok = 0;
    vt = *(void **)((char *)arg0 + 8);
    if (((Fn2)*(s32 *)((char *)vt + 0x74))((char *)arg0 + *(s16 *)((char *)vt + 0x70), &sp0, 2) != 0) {
        vt = *(void **)((char *)arg0 + 8);
        if (((Fn2)*(s32 *)((char *)vt + 0x74))((char *)arg0 + *(s16 *)((char *)vt + 0x70), arg1, (s32)sp0) != 0)
            ok = 1;
    }
    return ok;
}
