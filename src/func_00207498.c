#include "context.h"

void func_00207498(void *arg0, void *arg1, f32 arg2) {
    u8 *a = (u8 *)arg0;
    u8 *b = (u8 *)arg1;
    s32 n = (*(s32 *)(a + 4) - *(s32 *)a) >> 2;
    s32 i = 0;

    if (n > 0) {
        do {
            s32 off = i << 2;
            f32 *pa = (f32 *)(*(s32 *)a + off);
            f32 *pb = (f32 *)(*(s32 *)b + off);
            i++;
            *pb = *pa * arg2;
        } while (i < n);
    }
}
