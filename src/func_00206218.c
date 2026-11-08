#include "context.h"

extern void *func_001D6BB0(void);
extern void *func_002063F0(void *, s32, void *);

void func_00200250(void *arg0) {
    *(s32 *)((u8 *)arg0 + 0x20) = 0;
    *(f32 *)((u8 *)arg0 + 0x1C) = 1.0f;
    *(s32 *)((u8 *)arg0 + 8) = 1;
}

void func_00206218(void *arg0, void *arg1) {
    void *obj;
    void *vt;
    s16 off;
    void (*fn)(void *, s32);

    obj = *(void **)((u8 *)arg0 + 0x80);
    if (obj != 0) {
        vt = *(void **)((u8 *)obj);
        off = *(s16 *)((u8 *)vt + 8);
        fn = *(void (**)(void *, s32))((u8 *)vt + 0xC);
        fn((u8 *)obj + off, 3);
    }
    *(void **)((u8 *)arg0 + 0x80) = arg1;
}

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

void func_002062A8(void *arg0, s32 *arg1) {
    s32 sp[4];
    void *r;

    r = func_002063F0(arg0, 1, sp);
    *(s32 *)((u8 *)r + 0xC) = *arg1;
    if (sp[0] != 0) {
        *(s32 *)((u8 *)r + 0x30) = 1;
    }
}
