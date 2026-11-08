#include "context.h"

extern void *func_001B0950(void *);
extern void func_001B0410(void *, s32, s32);
extern void func_0021E620(s32, s32, void *);
extern void func_001577C8(void *, void *, void *);
extern void func_001B0238(void *, void *, f32);
extern void *D_002AD408(s32);

void func_0016D178(void *arg0, f32 *arg1) {
    *arg1 = *(f32 *)((u8 *)arg0 + 0x30) * 2.5f;
}

void func_0012AC20(void *arg0) {
    f32 f0;
    f32 f1;

    f0 = *(f32 *)((u8 *)arg0 + 4);
    if (*(s32 *)((u8 *)arg0 + 8) != 0) {
        f1 = 0.2f;
        f0 = f0 + f1;
        *(f32 *)((u8 *)arg0 + 4) = f0;
        if (f0 > 1.0f) {
            *(f32 *)((u8 *)arg0 + 4) = 1.0f;
            *(s32 *)((u8 *)arg0 + 8) = 0;
        }
    } else {
        f1 = 0.2f;
        f0 = f0 - f1;
        *(f32 *)((u8 *)arg0 + 4) = f0;
        if (f0 < 0.0f) {
            *(f32 *)((u8 *)arg0 + 4) = 0.0f;
            *(s32 *)((u8 *)arg0 + 8) = 1;
        }
    }
}

void func_001B0138(void *arg0, s32 arg1, void *arg2) {
    s32 sp0;
    void *temp;
    void *vec;
    void *end;

    sp0 = arg1;
    temp = func_001B0950(D_002AD408(0x30));
    *(f32 *)((u8 *)temp + 0xC) = *(f32 *)arg2;
    *(f32 *)((u8 *)temp + 0x10) = *(f32 *)((u8 *)arg2 + 4);
    *(f32 *)((u8 *)temp + 0x14) = *(f32 *)((u8 *)arg2 + 8);
    func_001B0410(arg0, sp0, 0);
    func_0021E620(sp0, 0, temp);
    vec = (u8 *)arg0 + 0x50;
    if (*(void **)((u8 *)vec + 4) != *(void **)((u8 *)vec + 8)) {
        end = *(void **)((u8 *)vec + 4);
        if (end != NULL) {
            *(s32 *)end = sp0;
        }
        *(u32 *)((u8 *)vec + 4) = *(u32 *)((u8 *)vec + 4) + 4;
        return;
    }
    func_001577C8(vec, *(void **)((u8 *)vec + 4), &sp0);
}

void func_001B01F8(void *arg0) {
    func_001B0238(arg0, (u8 *)arg0 + 0x50, *(f32 *)((u8 *)arg0 + 0x18));
}
