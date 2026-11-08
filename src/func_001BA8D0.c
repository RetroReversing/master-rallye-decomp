#include "context.h"

extern char D_00472F70[];

void *func_001BA8D0(s32 *p) {
    s32 tmp[8];
    s32 *a, *b;
    p[1] = 0;
    p[0] = (s32)D_00472F70;
    a = p + 5;
    *(f32 *)(p + 3) = 0.01f;
    b = p + 8;
    p[2] = 0;
    p[4] = 0;
    p[5] = 0;
    a[1] = 0;
    a[2] = 0;
    p[8] = 0;
    b[1] = 0;
    b[2] = 0;
    p[11] = 0;
    return p;
}
