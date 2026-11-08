#include "context.h"

extern char D_004784F0[];
extern void func_00207230(void *);

void *func_002079C8(void *arg0) {
    s32 *p = (s32 *)arg0;
    s32 sp[32]; /* force 0xa0-ish frame? 0x20 save + locals; try to influence */
    s32 *a, *b, *c, *d, *e, *f, *g, *h;
    (void)sp;

    func_00207230(arg0);
    p[10] = 0;
    p[9] = (s32)D_004784F0;
    a = p + 10;
    b = p + 13;
    a[1] = 0;
    c = p + 16;
    a[2] = 0;
    d = p + 19;
    p[13] = 0;
    e = p + 22;
    b[1] = 0;
    f = p + 25;
    b[2] = 0;
    g = p + 28;
    p[16] = 0;
    h = p + 31;
    c[1] = 0;
    c[2] = 0;
    p[19] = 0;
    d[1] = 0;
    d[2] = 0;
    p[22] = 0;
    e[1] = 0;
    e[2] = 0;
    p[25] = 0;
    f[1] = 0;
    f[2] = 0;
    p[28] = 0;
    g[1] = 0;
    g[2] = 0;
    p[31] = 0;
    h[1] = 0;
    h[2] = 0;
    return arg0;
}
