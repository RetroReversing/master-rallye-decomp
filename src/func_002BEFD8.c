#include "context.h"

extern void func_002B2028(u32);
extern s32 func_003D7CB0(s32);

void func_002BEFD8(void *arg0, s32 arg1) {
    s32 p;

    p = *(s32 *)((u8 *)arg0 + 4);
    if (p != 0) {
        func_002B2028((u32)p);
    }
    if (arg1 != 0) {
        *(s32 *)((u8 *)arg0 + 4) = func_003D7CB0(arg1);
        return;
    }
    *(s32 *)((u8 *)arg0 + 4) = 0;
}
