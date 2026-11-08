#include "context.h"

extern f32 func_001E3610(s32, s32);
extern s32 func_001E4280(void);

f32 func_0014F630(void *arg0, s32 arg1) {
    if (arg1 >= 0) {
        return func_001E3610(func_001E4280(), *(s32 *)((u8 *)arg0 + 0x44) + (arg1 * 4));
    }
    return 0.0f;
}

f32 func_0014F688(void *arg0, s32 arg1) {
    if (arg1 >= 0) {
        return func_001E3610(func_001E4280(), *(s32 *)((u8 *)arg0 + 0x50) + (arg1 * 4));
    }
    return 0.0f;
}
