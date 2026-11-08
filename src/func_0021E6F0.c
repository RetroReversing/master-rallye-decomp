#include "context.h"

extern void func_00206218(void *, void *);
extern void func_002631A0(void *, void *);
extern void func_0021E6F0(void *, void *);
extern void *func_0021F4B0(void);
extern void func_0021F708(s32, void *);
extern void func_0021F7D8(s32, void *);

s32 func_001D3920(void *arg0) {
    s32 *v;
    s32 ret;

    v = *(s32 **)((u8 *)arg0 + 4);
    ret = 0;
    if (v != (s32 *)arg0) {
        ret = *v;
    }
    return ret;
}

void func_0021E6F0(void *arg0, void *arg1) {
    void *obj;
    void *vt;
    s16 off;
    void (*fn)(void *, s32);

    obj = *(void **)((u8 *)arg0 + 0x14);
    if (obj != 0) {
        vt = *(void **)((u8 *)obj);
        off = *(s16 *)((u8 *)vt + 8);
        fn = *(void (**)(void *, s32))((u8 *)vt + 0xC);
        fn((u8 *)obj + off, 3);
    }
    *(void **)((u8 *)arg0 + 0x14) = arg1;
}

void func_0021E748(void *arg0, s32 *arg1) {
    void *r;

    r = func_0021F4B0();
    func_0021F7D8(*(s32 *)((u8 *)r + 0x1C), arg0);
    *(s32 *)((u8 *)arg0 + 0x5C) = *arg1;
    r = func_0021F4B0();
    func_0021F708(*(s32 *)((u8 *)r + 0x1C), arg0);
}

void func_0021E7E8(void *arg0) {
    void *obj;

    func_0021E6F0(arg0, 0);
    obj = *(void **)((u8 *)arg0 + 0x4C);
    if (obj != 0) {
        func_00206218(obj, 0);
    }
    obj = *(void **)((u8 *)arg0 + 0x50);
    if (obj != 0) {
        func_002631A0(obj, 0);
    }
}
