typedef s32 (*FnA)(void *, s32, s32, void *);
typedef s32 (*FnB)(void *);
typedef s32 (*FnC)(void *, s32);

extern void *func_001F1948(void *);

s32 func_001F08F8(void *arg0) {
    void *base;
    void *vt;
    s32 r;
    void *obj;

    base = *(void **)arg0;
    vt = *(void **)((char *)base + 8);
    r = ((FnA)*(void **)((char *)vt + 0x4C))(
        (char *)base + *(s16 *)((char *)vt + 0x48), 0, 1, base);
    if (r == 0) {
        return 0;
    }

    obj = func_001F1948(arg0);
    if (obj == 0) {
        return 0;
    }

    vt = *(void **)((char *)obj + 0x10);
    r = ((FnB)*(void **)((char *)vt + 0x24))(
        (char *)obj + *(s16 *)((char *)vt + 0x20));
    if (r != 0) {
        return r;
    }

    vt = *(void **)((char *)obj + 0x10);
    ((FnC)*(void **)((char *)vt + 0xC))(
        (char *)obj + *(s16 *)((char *)vt + 8), 3);
    return 0;
}
