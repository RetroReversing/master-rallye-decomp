/* identical to func_001AA438 (matched), with its names changed by decompdecomp */
#include "context.h"

extern s32 D_0040E4F4;
extern void func_0012E7E8(s32, s32 *);
extern void func_0012E858(void);
extern void func_0012FBE8(void *);

void func_001AE870(void *arg0, f32 arg1) {
    if (*(s32 *)((u8 *)arg0 + 0x60) == 0) {
        f32 v = *(f32 *)((u8 *)arg0 + 0x40);
        if (arg1 < v * v) {
            *(s32 *)((u8 *)arg0 + 0x60) = 1;
        }
    } else {
        f32 v = *(f32 *)((u8 *)arg0 + 0x44);
        if (v * v < arg1) {
            *(s32 *)((u8 *)arg0 + 0x60) = 0;
        }
    }
}

void func_0012FB78(void *arg0, s32 arg1) {
    s32 *p14 = (s32 *)((u8 *)arg0 + 0x14);
    if (arg1 == 0) {
        if (*p14 == 0) {
            s32 *g = &D_0040E4F4;
            *p14 = 1;
            *g = 0x18;
            func_0012E7E8(*(s32 *)((u8 *)arg0 + 0xC), g);
        }
    } else {
        if (*p14 != 0) {
            s32 *g = &D_0040E4F4;
            *p14 = 0;
            *g = 0;
            func_0012E858();
        }
    }
    func_0012FBE8(arg0);
}

void func_0012FB30(void *arg0, s32 arg1) {
    s32 temp_2;
    s32 temp_3;
    s32 var_2;

    if (arg1 != 0) {
        temp_2 = *(s32 *)((u8 *)arg0 + 0x10);
        var_2 = temp_2 - 1;
        if (temp_2 > 0) {
            goto block_4;
        }
    } else {
        temp_3 = *(s32 *)((u8 *)arg0 + 0x10);
        var_2 = temp_3 + 1;
        if (temp_3 < 4) {
block_4:
            *(s32 *)((u8 *)arg0 + 0x10) = var_2;
        }
    }
    func_0012FBE8(arg0);
}
