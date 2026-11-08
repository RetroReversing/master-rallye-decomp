#include "context.h"

void *func_002D04D0(void);
s32 func_0030C930(s32, s32, s32);
extern f32 D_00429868;

void func_002CE4F0(s32 arg0, f32 f21, f32 f20) {
    if ((u32)(arg0 - 2) < 0x2E) {
        void *v0 = func_002D04D0();
        f32 f3 = *(f32*)((u8*)v0 + 0x14);
        f32 f1 = f21 * 12287.0f;
        f32 f4 = f20 * 12287.0f;
        f1 = f1 * 0.9f;
        f4 = f4 * 0.9f;
        f1 = f1 * f3;
        f4 = f4 * f3;
        s32 a1 = (s32)f1;
        s32 a2 = (s32)f4;
        if (a1 < 0) {
            a1 = 0;
        } else if (a1 >= 0x3000) {
            a1 = 0x2FFF;
        }
        if (a2 < 0) {
            a2 = 0;
        } else if (a2 >= 0x3000) {
            a2 = 0x2FFF;
        }
        func_0030C930(arg0, a1, a2);
        f32 *base = (f32*)((u8*)&D_00429868 + arg0 * 0x10);
        base[1] = f21;
        base[2] = f20;
    }
}
