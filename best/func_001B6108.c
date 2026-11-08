#include "context.h"

extern char D_00473088[];
extern void func_001B6168(s32);

void *func_001B6108(void *arg0, s32 *arg1, s32 *arg2) {
    char *base = (char *)arg0;
    char *p8;
    s32 v0;
    s32 v2;
    s64 pad[2]; /* try to encourage larger frame/saves */

    *(char **)base = D_00473088;
    pad[0] = 0;
    p8 = base + 8;
    v0 = *arg1;
    *(s32 *)(base + 8) = 0;
    *(s32 *)(base + 4) = v0;
    *(s32 *)(p8 + 8) = 0;
    *(s32 *)(p8 + 4) = 0;
    v2 = *arg2;
    *(s32 *)(base + 0x18) = 1;
    *(s32 *)(base + 0x14) = v2;
    func_001B6168(1);
    return base;
}

void func_001B6A10(void *arg0, f32 fparg0) {
    f32 f2;
    f32 f3;
    f32 *v0;
    f32 z = 0.0f;
    f32 sp[4];

    f2 = 50.0f - fparg0;
    f3 = f2 / 5.0f;
    if (10.0f < f3) f3 = 10.0f;
    if (f3 < 0.0f) f3 = 0.0f;

    v0 = (f32 *)((u8 *)arg0 + 0x7C);
    sp[2] = z;
    sp[0] = z;
    sp[1] = f3;
    v0[0] = v0[0] + z;
    v0[1] = v0[1] + f3;
    v0[2] = v0[2] + sp[2];
}
