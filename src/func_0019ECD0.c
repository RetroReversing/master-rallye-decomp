#include "context.h"

/* ---- func_0019ADE8 (best attempt kept) ---- */
void func_0019ADE8(void *arg0) {
    s32 *p = (s32 *)arg0;
    s32 m;
    s32 t;
    s32 v;

    p[0x1E4 / 4] = 0;
    t = p[0x230 / 4];
    if (t != 0) {
        p[0x230 / 4] = 0;
    } else {
        p[0x230 / 4] = 1;
    }

    m = p[0x1E8 / 4];
    switch (m) {
    case 0:
        t = p[0x230 / 4];
        if (t != 0) {
            v = 1;
            p[0x1E8 / 4] = v;
        } else {
            v = 2;
            p[0x1E8 / 4] = v;
        }
        return;
    case 1:
        t = p[0x230 / 4];
        if (t != 0) {
            v = 2;
            p[0x1E8 / 4] = v;
        } else {
            v = 3;
            p[0x1E8 / 4] = v;
        }
        return;
    case 2:
        t = p[0x230 / 4];
        if (t != 0) {
            v = 3;
            p[0x1E8 / 4] = v;
        } else {
            v = 0;
            p[0x1E8 / 4] = v;
        }
        return;
    case 3:
        t = p[0x230 / 4];
        if (t != 0) {
            v = 0;
            p[0x1E8 / 4] = v;
        } else {
            v = 1;
            p[0x1E8 / 4] = v;
        }
        return;
    default:
        return;
    }
}

/* ---- func_0019E840 ---- */
extern void func_001E2460(void *, s32);
extern void func_001E2470(void *, const char *, void *);
extern char D_00472140[];
extern char D_00472158[];
extern char D_00472170[];

void func_0019E840(s32 arg0, s32 arg1, s32 arg2) {
    s32 sp[4];
    func_001E2460(sp, arg2);
    func_001E2470(sp, D_00472140, (void *)(arg0 + 0xC));
    func_001E2470(sp, D_00472158, (void *)(arg0 + 0x14));
    func_001E2470(sp, D_00472170, (void *)(arg0 + 0x10));
}

/* ---- func_0019ECD0 ---- */
extern void func_001702A0(s32, f32);

void func_0019ECD0(void *arg0, void *arg1) {
    void *p = *(void **)((u8 *)arg1 + 0x90);
    func_001702A0(*(s32 *)((u8 *)p + 0x14), *(f32 *)arg1);
}

/* ---- func_0019EE88 ---- */
extern void D_002AD390(void *);
extern u32 D_0044DCD8[];
extern u32 D_00473E50[];

void func_0019EE88(void *arg0, s32 arg1) {
    void *obj;
    void *vt;
    s16 off;
    void (*fn)(void *, s32);

    *(u32 **)((u8 *)arg0 + 8) = D_00473E50;
    obj = *(void **)((u8 *)arg0 + 0xC);
    if (obj != 0) {
        vt = *(void **)((u8 *)obj + 0x18);
        off = *(s16 *)((u8 *)vt + 8);
        fn = *(void (**)(void *, s32))((u8 *)vt + 0xC);
        fn((u8 *)obj + off, 3);
    }
    *(u32 **)((u8 *)arg0 + 8) = D_0044DCD8;
    if (arg1 & 1) {
        D_002AD390(arg0);
    }
}
