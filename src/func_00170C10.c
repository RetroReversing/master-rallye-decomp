#include "context.h"

extern void func_00171430(void *, s32, s32);

void func_0016D178(void *arg0, f32 *arg1) {
    *arg1 = *(f32 *)((u8 *)arg0 + 0x30) * 2.5f;
}

f32 func_00170C10(void *arg0) {
    f32 sum = 0.0f;
    sum = sum + *(f32 *)((u8 *)*(u32 *)((u8 *)*(u32 *)((u8 *)arg0 + 4) + 0xC) + 0x100);
    sum = sum + *(f32 *)((u8 *)*(u32 *)((u8 *)*(u32 *)((u8 *)arg0 + 8) + 0xC) + 0x100);
    sum = sum + *(f32 *)((u8 *)*(u32 *)((u8 *)*(u32 *)((u8 *)arg0 + 0xC) + 0xC) + 0x100);
    sum = sum + *(f32 *)((u8 *)*(u32 *)((u8 *)*(u32 *)((u8 *)arg0 + 0x10) + 0xC) + 0x100);
    return sum;
}

void *func_00171318(void *arg0, s32 arg1, s32 arg2) {
    *(s32 *)arg0 = 0;
    func_00171430(arg0, arg1, arg2);
    *(s32 *)((u8 *)arg0 + 4) = 0;
    return arg0;
}

void *func_00171348(void *arg0, void *arg1) {
    func_00171430(arg0, (s32)(u32)arg1, *(s32 *)arg1);
    return arg0;
}
