#include "context.h"

extern char D_004784F0[];
extern void func_00207230(void *);
extern void func_003F93CC(s32, s32, s32);
extern void func_00152720(void *, s32 *, void *);
extern void func_001C64B0(void *, void *, void *);

void *func_002079C8(void *arg0) {
    s32 *p = (s32 *)arg0;
    s32 *a, *b, *c, *d, *e, *f, *g, *h;
    s32 sp[32];
    (void)sp;

    func_00207230(arg0);
    p[10] = 0;
    p[9] = (s32)D_004784F0;
    a = p + 10;
    b = p + 13;
    c = p + 16;
    d = p + 19;
    e = p + 22;
    f = p + 25;
    g = p + 28;
    h = p + 31;

    a[2] = 0;
    a[1] = 0;
    p[13] = 0;
    b[2] = 0;
    b[1] = 0;
    p[16] = 0;
    c[2] = 0;
    c[1] = 0;
    p[19] = 0;
    d[2] = 0;
    d[1] = 0;
    p[22] = 0;
    e[2] = 0;
    e[1] = 0;
    p[25] = 0;
    f[2] = 0;
    f[1] = 0;
    p[28] = 0;
    g[2] = 0;
    g[1] = 0;
    p[31] = 0;
    h[2] = 0;
    h[1] = 0;
    return arg0;
}

void *func_00208560(void *arg0) {
    s32 sp[8];
    s32 *p = (s32 *)arg0;
    s32 *q = p + 3;
    (void)sp;
    p[0] = 0;
    p[1] = 0;
    p[2] = 0;
    p[3] = 0;
    q[2] = 0;
    q[1] = 0;
    return arg0;
}

void func_00208760(void *arg0) {
    u8 *p = (u8 *)arg0;
    u8 *q = p + 0xC;
    s32 a0, a1, b0, b1;
    s32 d0, d1;

    a1 = *(s32 *)(p + 4);
    a0 = *(s32 *)(p + 0);
    d0 = a1 - a0;
    func_003F93CC(a0, a1, 0);
    *(s32 *)(p + 4) = *(s32 *)(p + 4) - d0;

    b1 = *(s32 *)(q + 4);
    b0 = *(s32 *)(q + 0);
    d1 = b1 - b0;
    func_003F93CC(b0, b1, 0);
    *(s32 *)(q + 4) = *(s32 *)(q + 4) - d1;
}

void func_002087F8(void *arg0, s32 arg1, f32 arg2) {
    f32 sp4;
    s32 sp0;
    u8 *p = (u8 *)arg0;
    u8 *q = p + 0xC;
    s32 *cur, *cap;
    f32 *fcur, *fcap;

    sp4 = arg2;
    sp0 = arg1;

    cur = *(s32 **)(q + 4);
    cap = *(s32 **)(q + 8);
    if (cur == cap) {
        func_00152720(q, cur, &sp0);
    } else {
        if (cur != 0) *cur = arg1;
        *(s32 **)(q + 4) = cur + 1;
    }

    fcur = *(f32 **)(p + 4);
    fcap = *(f32 **)(p + 8);
    if (fcur == fcap) {
        func_001C64B0(p, fcur, &sp4);
    } else {
        if (fcur != 0) *fcur = sp4;
        *(f32 **)(p + 4) = fcur + 1;
    }
}
