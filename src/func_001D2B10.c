extern int func_001CE2F8(void *);
extern int func_001D2658(s32 *, s32, s32, s32);
extern void func_001D2A40(s32 *, s32, s32);
extern char D_00475CD8[];
extern char D_00475CE0[];

void func_001D2B10(s32 *arg0) {
    s32 v;
    s32 d;
    s32 e;
    if (*arg0 != 0) {
        d = (s32)&D_00475CD8;
        v = func_001D2658(arg0, 0, func_001CE2F8(arg0), d);
        if (v >= 0) {
            func_001D2A40(arg0, 0, v + 1);
        } else {
            e = (s32)&D_00475CE0;
            v = func_001D2658(arg0, 0, func_001CE2F8(arg0), e);
            func_001D2A40(arg0, 0, v + 1);
        }
    }
}

s32 func_001D3920(void *arg0) {
    s32 *v = *(s32**)((char*)arg0 + 4);
    return (v != arg0) ? *v : 0;
}
