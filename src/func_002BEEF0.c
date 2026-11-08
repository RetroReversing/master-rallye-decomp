#include "context.h"

extern void func_003F94D0(void *, s32);
extern void func_002BEFD8(void *, s32);
extern s32 CreateSema_2(void *);

void func_003D1290(void *arg0, char *arg1) {
    func_003F94D0(arg0, (s32)*arg1);
}

s32 func_002BEEF0(void *arg0, s32 arg1, s32 arg2) {
    s32 ret;
    struct {
        s32 a;
        s32 maxCount;
        s32 attr;
        s32 pad;
        s32 pad2;
        s32 opt;
    } sp;

    ret = 0;
    if (*(s32 *)arg0 == -1) {
        sp.maxCount = 0x7FFFFFFF;
        sp.attr = arg2;
        ret = 1;
        sp.opt = (s32)arg0;
        *(s32 *)arg0 = CreateSema_2(&sp);
        func_002BEFD8(arg0, arg1);
    } else {
        func_002BEFD8(arg0, arg1);
    }
    return ret;
}
