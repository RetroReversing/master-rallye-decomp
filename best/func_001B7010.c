#include "context.h"

f32 func_001B7010(void *arg0) {
    u8 *p = (u8 *)arg0;
    f32 f0;

    if (*(s32 *)(p + 0xC8) == 0) {
        f0 = 0.0f;
        return f0;
    }
    if (*(s32 *)(p + 0xD0) == 0) {
        f0 = 0.0f;
        return f0;
    }
    if (*(s32 *)(p + 0xB8) == 0) {
        *(f32 *)(p + 0xA8) = 1.0f;
    }
    if (*(s32 *)(p + 0x3C) != 0) {
        f32 f1 = *(f32 *)(p + 0xA8);
        return f1 * 0.5f;
    }
    f0 = *(f32 *)(p + 0xA8);
    return f0;
}
