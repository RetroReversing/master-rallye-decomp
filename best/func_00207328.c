#include "context.h"

extern f32 func_00207170(void *, s32);
extern void func_001C64B0(void *, void *, void *);

void func_00207328(void *arg0, void *arg1) {
    f32 sp;
    s32 i;
    s32 count = *(s32 *)arg0;
    u8 *arr = (u8 *)arg0 + 0x18;

    if (count <= 0) return;
    for (i = 0; i < count; i++) {
        f32 v = 1.0f / func_00207170(arg1, i);
        f32 *cur = *(f32 **)(arr + 4);
        f32 *cap = *(f32 **)(arr + 8);
        sp = v;
        if (cur != cap) {
            if (cur != 0) {
                *cur = v;
            }
            *(f32 **)(arr + 4) = cur + 1;
        } else {
            func_001C64B0(arr, cur, &sp);
        }
    }
}
