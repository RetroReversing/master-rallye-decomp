#include "context.h"

extern s32 D_0040E4F4;
extern void func_0012E7E8(s32, s32 *);
extern void func_0012E858(void);
extern void func_0012FBE8(void *);

void func_0012FB78(void *arg0, s32 arg1) {
    if (arg1 == 0) {
        if (*(s32 *)((u8 *)arg0 + 0x14) == 0) {
            *(s32 *)((u8 *)arg0 + 0x14) = 1;
            D_0040E4F4 = 0x18;
            func_0012E7E8(*(s32 *)((u8 *)arg0 + 0xC), &D_0040E4F4);
        }
    } else {
        if (*(s32 *)((u8 *)arg0 + 0x14) != 0) {
            *(s32 *)((u8 *)arg0 + 0x14) = 0;
            D_0040E4F4 = 0;
            func_0012E858();
        }
    }
    func_0012FBE8(arg0);
}

void func_0012FB30(void *arg0, s32 arg1) {
    if (arg1 != 0) {
        s32 v = *(s32 *)((u8 *)arg0 + 0x10);
        if (v > 0) {
            *(s32 *)((u8 *)arg0 + 0x10) = v - 1;
        }
    } else {
        s32 v = *(s32 *)((u8 *)arg0 + 0x10);
        if (v < 4) {
            *(s32 *)((u8 *)arg0 + 0x10) = v + 1;
        }
    }
    func_0012FBE8(arg0);
}
