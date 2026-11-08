#include "context.h"

extern u16 D_0042DA10;
extern u16 D_0042DA12;

void func_00310E68(void) {
    s32 v2 = (s16)D_0042DA12;
    s32 v1 = (s16)D_0042DA10;
    v2 = v2 + 1;
    if (v2 >= 4) {
        v2 = 0;
    }
    if (v2 == v1) {
        return;
    }
    D_0042DA12 = (u16)v2;
}
