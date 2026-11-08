#include "context.h"

extern void *func_002AFEB8(s32, void *);
extern void func_003AD1B8(void *, void *, void *);

extern s32 D_0043C3B0[];

void func_003F0B30(s32 arg0, s32 arg1, s32 arg2) {
    register s32 *p = D_0043C3B0;
    p[1] = arg1;
    p[2] = arg2;
    p[3] = arg0;
}

u8 func_003A6338(s32 arg0) {
    volatile u8 sp0;
    (void)arg0;
    sp0 = 0;
    return sp0;
}

void *func_003A61F0(void *arg0, void *arg1) {
    void *ret;
    ret = func_002AFEB8(0x18, arg0);
    if (ret != 0) {
        ((u64 *)ret)[0] = ((u64 *)arg1)[0];
        ((u64 *)ret)[1] = ((u64 *)arg1)[1];
        ((u64 *)ret)[2] = ((u64 *)arg1)[2];
    }
    return ret;
}

void func_003A5F38(void *arg0, void *arg1, void *arg2) {
    func_003AD1B8(arg1, arg2, arg0);
}
