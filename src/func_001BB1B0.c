#include "context.h"

extern char D_00472F70[], D_00473770[], D_0044DCD8[], D_00472EE0[];
extern void D_002AD390(void *);

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

void func_001BB1B0(void *arg0, s32 arg1) {
    void *obj;
    void *vt;
    s16 off;
    void (*fn)(void *, s32);

    *(u32 **)((u8 *)arg0 + 8) = (u32 *)D_00473770;
    obj = *(void **)((u8 *)arg0 + 0xC);
    if (obj != 0) {
        vt = *(void **)((u8 *)obj);
        off = *(s16 *)((u8 *)vt + 8);
        fn = *(void (**)(void *, s32))((u8 *)vt + 0xC);
        fn((u8 *)obj + off, 3);
    }
    *(u32 **)((u8 *)arg0 + 8) = (u32 *)D_0044DCD8;
    if (arg1 & 1) {
        D_002AD390(arg0);
    }
}

void func_001BB488(void *arg0, s32 arg1) {
    void *obj;
    void *vt;
    s16 off;
    void (*fn)(void *, s32);

    if (func_001E3650(func_001E4280(), (s32)((u8 *)arg0 + 0x14)) <= 0) {
        obj = *(void **)((u8 *)arg0 + 0xC);
        vt = *(void **)((u8 *)obj);
        off = *(s16 *)((u8 *)vt + 0x10);
        fn = *(void (**)(void *, s32))((u8 *)vt + 0x14);
        fn((u8 *)obj + off, arg1);
    }
}

void *func_001BB4E8(s32 *p) {
    s32 *a, *b, *c;
    s32 i;
    s32 *d;

    p[1] = 0;
    p[0] = (s32)D_00472EE0;
    a = p + 1;
    a[2] = 0;
    b = p + 4;
    a[1] = 0;
    c = p + 7;
    p[4] = 0;
    b[2] = 0;
    b[1] = 0;
    p[7] = 0;
    c[2] = 0;
    c[1] = 0;
    p[0x17] = -1;
    p[0x18] = 1;
    p[0x1D] = -2;
    p[10] = 1;
    p[11] = 0;
    p[12] = 0;
    p[13] = 0;
    p[14] = 0;
    p[25] = 0;
    p[26] = -2;
    p[27] = -2;
    p[28] = -2;
    p[30] = 0;
    d = p + 0x13;
    i = 1;
    do {
        d[-4] = -1;
        i--;
        d[2] = 0;
        d[-2] = 0;
        d[0] = 0;
        d++;
    } while (i >= 0);
    return p;
}
