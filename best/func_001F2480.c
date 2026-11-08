#include "context.h"

void func_0016D178(void *arg0, f32 *arg1) {
    *arg1 = *(f32 *)((u8 *)arg0 + 0x30) * 2.5f;
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
        return *(s32 *)(begin + arg1 * 0x58 + 0x48);
    }
    return 0;
}

s32 func_001F2578(S_001F2480 *arg0, s32 arg1, s32 arg2) {
    s32 begin;
    s32 end;
    s32 diff;
    s32 count;
    s32 ret;

    if (arg1 < 0) {
        return 0;
    }
    begin = arg0->begin;
    end = arg0->end;
    diff = end - begin;
    count = (s32)(diff * 0xBA2E8BA3) >> 3;
    if ((u32)arg1 < (u32)count) {
        ret = 0;
        if (*(s32 *)(begin + arg1 * 0x58 + 0x4C) != 0) {
            ret = (u32)arg2 != 0;
        }
        return ret;
    }
    return 0;
}
