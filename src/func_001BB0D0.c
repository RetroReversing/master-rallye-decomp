#include "context.h"

extern void func_001D4040(void *, const char *);
extern void func_001B6E48(void *);
extern char D_00472D18[], D_00472D30[], D_00473770[];
extern char D_00472F70[];

s32 func_001B6AA0(void *arg0) {
    s32 var_3;
    s32 var_2;
    u8 *p = (u8 *)arg0;

    var_3 = 1;
    if (!(*(f32 *)(p + 0xD8) < *(f32 *)(p + 0xBC))) var_3 = 0;
    var_2 = var_3;
    if (*(s32 *)(p + 0x3C) != 0) return var_2;
    var_2 = 0;
    if (var_3 == 0) return var_2;
    var_2 = 0;
    if (*(s32 *)(p + 0x50) != 0) return var_2;
    var_2 = 1;
    if (*(s32 *)(p + 0xC0) != 0) return var_2;
    func_001B6E48(arg0);
    var_2 = 1;
    if (*(f32 *)(p + 0xAC) > 0.0f) {
        var_2 = 1;
    } else {
        var_2 = 0;
    }
    *(s32 *)(p + 0xC0) = var_2;
    return var_2;
}

void *func_001BA8D0(s32 *p) {
    s32 *a, *b;
    p[1] = 0;
    p[0] = (s32)D_00472F70;
    a = p + 5;
    *(f32 *)(p + 3) = 0.01f;
    b = p + 8;
    p[2] = 0;
    p[4] = 0;
    p[5] = 0;
    a[2] = 0;
    a[1] = 0;
    p[8] = 0;
    b[2] = 0;
    b[1] = 0;
    p[11] = 0;
    return p;
}

void *func_001BB0D0(s32 *p) {
    u32 n[4];
    func_001D4040(n, D_00472D18);
    p[1] = n[0];
    p[3] = 0;
    p[4] = 0;
    p[0] = -1;
    p[2] = (s32)D_00473770;
    func_001D4040(p + 5, D_00472D30);
    return p;
}

void *func_001BB138(s32 *p, s32 arg1) {
    u32 n[4];
    func_001D4040(n, D_00472D18);
    p[4] = arg1;
    p[1] = n[0];
    p[3] = 0;
    p[0] = -1;
    p[2] = (s32)D_00473770;
    func_001D4040(p + 5, D_00472D30);
    return p;
}
