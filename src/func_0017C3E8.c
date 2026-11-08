#include "context.h"

void func_0017C3E8(void *arg0, f32 arg1, f32 arg2) {
    f32 f5;
    f32 f0;
    f32 f3;
    f32 f4;
    f32 f1;
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
        f1 = *(f32 *)((u8 *)arg0 + 0x13C);
        if (f0 < f3) {
            f2 = f3;
        } else {
            f2 = f0;
        }
        f5 = (f4 + f1) + (f2 * *(f32 *)((u8 *)arg0 + 0x140)) + f5;
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
    if (f0 < f2) {
        f1 = f2;
    } else {
        f1 = f0;
    }
    *(f32 *)((u8 *)arg0 + 0x158) = f3 + (f1 * *(f32 *)((u8 *)arg0 + 0x160));
}
