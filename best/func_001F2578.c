#include "context.h"

void func_0016D178(void *arg0, f32 *arg1) {
    volatile f32 v = *(f32 *)((u8 *)arg0 + 0x30);
    *arg1 = v * 2.5f;
}

typedef struct {
    s32 begin;
    s32 end;
} S_001F2480;

extern s32 func_001F2358(s32);

s32 func_001F2480(S_001F2480 *arg0, s32 arg1) {
    s32 begin;
    s32 end;
    s32 diff;
    s32 count;

    if (arg1 < 0) {
        return 0;
    }
    begin = arg0->begin;
    end = arg0->end;
    diff = end - begin;
    count = (s32)(diff * 0xBA2E8BA3) >> 3;
    if ((u32)arg1 < (u32)count) {
        return func_001F2358(begin + arg1 * 0x58);
    }
    return 0;
}

s32 func_001F2530(S_001F2480 *arg0, s32 arg1) {
    s32 begin;
    s32 diff;
    s32 count;

    if (arg1 < 0) return 0;
    begin = arg0->begin;
    diff = arg0->end - begin;
    count = (s32)(diff * 0xBA2E8BA3) >> 3;
    if ((u32)arg1 >= (u32)count) return 0;
    return *(s32 *)(begin + arg1 * 0x58 + 0x48);
}

s32 func_001F2578(S_001F2480 *arg0, s32 arg1, s32 arg2) {
    s32 begin;
    s32 diff;
    s32 count;

    if (arg1 < 0) return 0;
    begin = arg0->begin;
    diff = arg0->end - begin;
    count = (s32)(diff * 0xBA2E8BA3) >> 3;
    if ((u32)arg1 >= (u32)count) return 0;
    if (*(s32 *)(begin + arg1 * 0x58 + 0x4C) == 0) return 0;
    return arg2 != 0;
}
