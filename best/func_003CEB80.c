#include "context.h"

void func_003D7B00(void *arg0, s32 arg1) {
    if (*(s32 *)arg0 == 0) {
        arg1 |= 4;
    }
    *(u8 *)((u8 *)arg0 + 0x1A) = arg1;
}

s32 func_003E7478(s32, s32);
void func_003E7530(s32, s32);

s32 func_003E03A0(s32 arg0) {
    func_003E7530(arg0, 0x38);
    func_003E7530(arg0, 0x28);
    while (func_003E7478(arg0, 1) == 1) {
        func_003E7530(arg0, 0x18);
    }
    return 1;
}

void func_0040AF58(void);
void func_0040AFA0(u32, u32, u32, u32, u32, u32);
void func_003F2998(void);

void func_003E09C0(void) {
    func_0040AF58();
    *(vu32 *)0x1000F590 = *(vu32 *)0x1000F520 | 0x10000;
    *(vu32 *)0x1000B000 &= 0xFFFFFEFF;
    *(vu32 *)0x1000B400 &= 0xFFFFFEFF;
    *(vu32 *)0x1000F590 = *(vu32 *)0x1000F520 & 0xFFFEFFFF;
    func_0040AFA0(0x1000B400, 0x1000B000, 0xFFFEFFFF, 0xFFFFFEFF, 0x1000F520, 0x1000F590);
    *(vu32 *)0x1000B020 = 0;
    *(vu32 *)0x1000B420 = 0;
    func_003F2998();
}

s32 func_003CE988(s32, u32);

u32 func_003CEB80(void) {
    u32 v = func_003CE988(0, 0xFFFFFFFF);
    v = ~v;
    if (v >> 31) {
        return 1;
    }
    return 0;
}
