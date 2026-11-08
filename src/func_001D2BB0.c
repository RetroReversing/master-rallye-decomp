extern int func_001CE2F8(void *);
extern int func_001D2658(s32 *, s32, s32, s32);
extern void func_001D2A40(s32 *, s32, s32);
extern s32 func_003FA9B8(s32);
extern void D_002AD390(void *);
extern char D_00475CD8[];
extern char D_00475CE0[];
extern char D_00475CE8[];

void func_001D2BB0(s32 *arg0) {
    s32 v;
    s32 d;
    s32 len;
    s32 n;
    if (*arg0 != 0) {
        d = (s32)&D_00475CD8;
        v = func_001D2658(arg0, 0, func_001CE2F8(arg0), d);
        if (v >= 0) {
            n = v + 1;
            if (*arg0 != 0)
                len = func_003FA9B8(*arg0);
            else
                len = 0;
            func_001D2A40(arg0, n, len);
        } else {
            D_002AD390((void *)*arg0);
            *arg0 = 0;
        }
    }
}

void func_001D2B10(s32 *arg0) {
    s32 v;
    s32 d;
    if (*arg0 != 0) {
        d = (s32)&D_00475CD8;
        v = func_001D2658(arg0, 0, func_001CE2F8(arg0), d);
        if (v >= 0) {
            func_001D2A40(arg0, 0, v + 1);
        } else {
            d = (s32)&D_00475CE0;
            v = func_001D2658(arg0, 0, func_001CE2F8(arg0), d);
            func_001D2A40(arg0, 0, v + 1);
        }
    }
}

s32 func_001D3920(void *arg0) {
    s32 *v = *(s32**)((char*)arg0 + 4);
    return (v != arg0) ? *v : 0;
}
