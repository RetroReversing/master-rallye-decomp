/* identical to func_0017BF20 (matched), with its names changed by decompdecomp */
#include "context.h"

extern s32 func_001CFDD0(void *arg0, s32 arg1);
extern void func_0017C590(void *arg0, void *arg1, f32 arg2, f32 arg3);

void func_0017C4E8(void *arg0, f32 arg1, f32 arg2) {
    s32 off;
    s32 i;
    u8 *p;

    off = 0;
    i = 0;
    p = *(u8 **)((u8 *)arg0 + 0x10);
    do {
        s32 idx;
        s32 tmp;

        tmp = i;
        i++;
        p = *(u8 **)((u8 *)arg0 + 0x10) + off;
        idx = func_001CFDD0(arg0, tmp);
        off += 0x190;
        func_0017C590(p, *(u8 **)((u8 *)arg0 + 0x10) + idx * 0x190, arg1, arg2);
    } while (i < 4);
}

void func_0017C3E8(void *arg0, f32 arg1, f32 arg2) {
    f32 f5;
    f32 f0;
    f32 f3;
    f32 f4;
    f32 f13;
    f32 f2;

    (void)arg1;
    (void)arg2;
    *(f32 *)((u8 *)arg0 + 0x138) = 0.0f;
    f5 = *(f32 *)((u8 *)arg0 + 0x138);
    if (*(s32 *)((u8 *)arg0 + 0x1C) != 0) {
        f0 = *(f32 *)((u8 *)arg0 + 0x58);
        f3 = *(f32 *)((u8 *)arg0 + 0xEC);
        f0 = -f0;
        f4 = *(f32 *)((u8 *)arg0 + 0x144);
        f13 = *(f32 *)((u8 *)arg0 + 0x13C);
        f2 = f0;
        if (f0 < f3) {
            f2 = f3;
        }
        f5 = f5 + (f4 + f13 + (f2 * *(f32 *)((u8 *)arg0 + 0x140)));
    }
    *(f32 *)((u8 *)arg0 + 0x148) = f5;
}

void func_0017C4B0(void *arg0, f32 arg1, f32 arg2) {
    f32 f0;
    f32 f2;
    f32 f3;
    f32 f1;

    (void)arg1;
    (void)arg2;
    f0 = *(f32 *)((u8 *)arg0 + 0x58);
    f2 = *(f32 *)((u8 *)arg0 + 0xEC);
    f0 = -f0;
    f3 = *(f32 *)((u8 *)arg0 + 0x15C);
    f1 = f0;
    if (f0 < f2) {
        f1 = f2;
    }
    *(f32 *)((u8 *)arg0 + 0x158) = f3 + (f1 * *(f32 *)((u8 *)arg0 + 0x160));
}
