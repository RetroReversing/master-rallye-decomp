#include "context.h"

void func_0016D178(void *arg0, f32 *arg1) {
    *arg1 = *(f32 *)((u8 *)arg0 + 0x30) * 2.5f;
}

extern void func_003F9698(const char *, ...);
extern char D_00448828[];

s32 func_00126828(void *arg0, s32 arg1) {
    s32 var;
    func_003F9698(D_00448828, arg1);
    var = 3;
    if (arg1 >= -9) {
        var = 0;
        if (arg1 < 0) {
            if (arg1 == -3) return 4;
            if (arg1 == -2) return 5;
            return 2;
        }
    }
    return var;
}

extern void func_001D4040(void *, const char *);
extern char D_00448648[];
extern s32 D_0044D2E8;

void *func_00125990(void *arg0) {
    s32 k;
    func_001D4040(&k, D_00448648);
    ((s32 *)arg0)[1] = k;
    ((s32 *)arg0)[2] = (s32)&D_0044D2E8;
    ((s32 *)arg0)[6] = -1;
    ((s32 *)arg0)[0] = -1;
    ((s32 *)arg0)[3] = 0;
    return arg0;
}

extern void *func_00194C40(void);
extern void func_00193D98(void *, s32);

void func_00125958(void *arg0) {
    func_00193D98(func_00194C40(), 1);
    ((s32 *)arg0)[5] = 1;
}
