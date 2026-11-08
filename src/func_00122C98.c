#include "context.h"

extern void *D_00473018;

void func_0016D178(void *arg0, f32 *arg1) {
    *arg1 = *(f32 *)((u8 *)arg0 + 0x30) * 2.5f;
}

void func_001B7078(void *arg0) {
    *(s32 *)((u8 *)arg0 + 0xA4) = 0;
    *(s32 *)((u8 *)arg0 + 0xC8) = 0;
    *(s32 *)((u8 *)arg0 + 0xB0) = 0;
    *(s32 *)((u8 *)arg0 + 0xB8) = 0;
}

extern void func_00122C58(void *arg0);
extern void func_00122DD8(void *arg0);

void func_00122C98(void *arg0, s32 arg1) {
    if (arg1 != 0) {
        s32 v = *(s32 *)((u8 *)arg0 + 0x14);
        if (v > 0) {
            *(s32 *)((u8 *)arg0 + 0x14) = v - 1;
            func_00122DD8(arg0);
            func_00122C58(arg0);
        }
    } else {
        s32 v = *(s32 *)((u8 *)arg0 + 0x14);
        if (v < 2 && v < *(s32 *)((u8 *)arg0 + 0x38) - 1) {
            *(s32 *)((u8 *)arg0 + 0x14) = v + 1;
            func_00122DD8(arg0);
            func_00122C58(arg0);
        }
    }
}

void *func_001B7FB0(void *arg0, s32 *arg1) {
    *(s32 *)((u8 *)arg0 + 0x4) = 0;
    *(void **)((u8 *)arg0 + 0x0) = &D_00473018;
    *(s32 *)((u8 *)arg0 + 0x8) = 0;
    *(f32 *)((u8 *)arg0 + 0x10) = -10.0f;
    *(f32 *)((u8 *)arg0 + 0xC) = 3.0f;
    *(s32 *)((u8 *)arg0 + 0x14) = 0;
    *(f32 *)((u8 *)arg0 + 0x1C) = 5.0f;
    *(s32 *)((u8 *)arg0 + 0x18) = 0;
    *(s32 *)((u8 *)arg0 + 0x28) = 1;
    *(s32 *)((u8 *)arg0 + 0x20) = 1;
    *(s32 *)((u8 *)arg0 + 0x24) = 0;
    *(s32 *)((u8 *)arg0 + 0x4) = *arg1;
    return arg0;
}
