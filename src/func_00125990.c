#include "context.h"

extern void func_003F9698(const char *, ...);
extern char D_00448828[];

s32 func_00126828(void *arg0, s32 arg1) {
    s32 ret;
    func_003F9698(D_00448828, arg1);
    ret = 3;
    if (arg1 >= -9) {
        ret = 0;
        if (arg1 < 0) {
            if (arg1 == -3) {
                ret = 4;
            } else if (arg1 == -2) {
                ret = 5;
            } else {
                ret = 2;
            }
        }
    }
    return ret;
}

extern void func_001D4040(void *, const char *);
extern char D_00448648[];
extern s32 D_0044D2E8;

void *func_00125990(void *arg0) {
    s32 k;
    func_001D4040(&k, D_00448648);
    ((s32 *)arg0)[1] = k;
    ((s32 *)arg0)[2] = (s32)&D_0044D2E8;
    ((s32 *)arg0)[0] = -1;
    ((s32 *)arg0)[6] = -1;
    ((s32 *)arg0)[3] = 0;
    return arg0;
}
