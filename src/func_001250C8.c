#include "context.h"

extern void func_001D4040(void *, const char *);
extern char D_00448410[];
extern char D_0044D368[];
extern char D_004482E8[];
extern char D_0044D3A8[];

void *func_001250C8(void *arg0) {
    s32 k;
    func_001D4040(&k, D_00448410);
    ((s32 *)arg0)[1] = k;
    ((s32 *)arg0)[2] = (s32)D_0044D368;
    ((s32 *)arg0)[0] = -1;
    ((s32 *)arg0)[5] = -1;
    ((s32 *)arg0)[4] = 0;
    ((s32 *)arg0)[3] = 0;
    return arg0;
}

void *func_00124730(void *arg0) {
    s32 k;
    func_001D4040(&k, D_004482E8);
    ((s32 *)arg0)[2] = (s32)D_0044D3A8;
    ((s32 *)arg0)[1] = k;
    ((s32 *)arg0)[3] = 1;
    ((s32 *)arg0)[0] = -1;
    ((s32 *)arg0)[5] = -1;
    ((s32 *)arg0)[4] = 0;
    return arg0;
}
