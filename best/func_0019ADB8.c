#include "context.h"

void func_0019ADB8(void *arg0) {
    s32 v;
    s32 *p = (s32 *)arg0;

    v = p[0x79] + 1;
    p[0x79] = v;
    if (v >= 4) {
        s32 *q = (s32 *)((u8 *)arg0 + 0x170);
        q[8] = 0;
        q[9] = 0;
        p[0x79] = 0;
    }
}
