#include "context.h"

extern u16 D_0042DA10;
extern u16 D_0042DA12;

s32 func_00310F68(void) {
    s32 v2 = (s16)D_0042DA10 + 1;
    if (v2 >= 4) v2 = 0;
    s32 v5 = v2 + 1;
    if (v5 >= 4) v5 = 0;
    s32 v6 = 0;
    if (v2 == (s16)D_0042DA12 || v5 == (s16)D_0042DA12) {
        v6 = 1;
    }
    return v6 ^ 1;
}
