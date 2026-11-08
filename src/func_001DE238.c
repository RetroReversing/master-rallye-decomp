#include "context.h"

void func_0016D178(void *arg0, f32 *arg1) {
    *arg1 = *(f32 *)((u8 *)arg0 + 0x30) * 2.5f;
}

s32 func_001DE220(void *arg0) {
    s32 a = *(s32 *)((u8 *)arg0 + 0x18);
    s32 b = *(s32 *)((u8 *)arg0 + 0x20);
    return (b < a) ? b : a;
}

s32 func_001DE238(void *arg0) {
    s32 a = *(s32 *)((u8 *)arg0 + 0x1C);
    s32 b = *(s32 *)((u8 *)arg0 + 0x24);
    return (b < a) ? b : a;
}

s32 func_001DE250(void *arg0) {
    s32 a = *(s32 *)((u8 *)arg0 + 0x18);
    s32 b = *(s32 *)((u8 *)arg0 + 0x20);
    return (a < b) ? b : a;
}
