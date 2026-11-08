#include "context.h"

extern void *func_001D6BB0(void);
extern void *func_002063F0(void *, s32, void *);

void func_00206268(void *arg0) {
    void **p;
    void *obj;
    void *vt;
    s16 off;
    void (*fn)(void *, void *);

    p = (void **)func_001D6BB0();
    obj = *p;
    vt = *(void **)((u8 *)obj);
    off = *(s16 *)((u8 *)vt + 0x58);
    fn = *(void (**)(void *, void *))((u8 *)vt + 0x5C);
    fn((u8 *)obj + off, arg0);
}

void func_00206338(void *arg0, f32 *arg1) {
    s32 sp[4];
    void *r;
    f32 *dst;

    r = func_002063F0(arg0, 1, sp);
    dst = (f32 *)((u8 *)r + 0x1C);
    dst[0] = arg1[0];
    dst[1] = arg1[1];
    dst[2] = arg1[2];
    dst[3] = arg1[3];
    if (sp[0] != 0) {
        *(s32 *)((u8 *)r + 0x30) = 1;
    }
}

void func_002063A0(void *arg0, f32 *arg1) {
    s32 sp[4];
    void *r;
    f32 *dst;

    r = func_002063F0(arg0, 1, sp);
    dst = (f32 *)((u8 *)r + 0x10);
    dst[0] = arg1[0];
    dst[1] = arg1[1];
    dst[2] = arg1[2];
    *(s32 *)((u8 *)r + 0x30) = 0;
}

void *func_002069F0(s32 *p) {
    f32 sp[4];
    s32 *a, *b;
    f32 *f;

    p[3] = 0;
    a = p + 7;
    p[1] = 0;
    b = p + 4;
    p[2] = 0;
    p[0] = 0;
    a[2] = 0x3F800000;
    a[1] = 0x3F800000;
    p[7] = 0x3F800000;
    a[3] = 0x3F800000;
    p[4] = 0;
    b[2] = 0;
    b[1] = 0;
    sp[0] = 1.0f;
    sp[3] = 1.0f;
    sp[1] = 1.0f;
    sp[2] = 1.0f;
    p[3] = 0;
    p[7] = *(s32 *)&sp[0];
    a[1] = *(s32 *)&sp[1];
    a[2] = *(s32 *)&sp[2];
    a[3] = *(s32 *)&sp[3];
    *(s16 *)(p + 11) = 0; /* 0x2C */
    p[12] = 0;
    return p;
}
