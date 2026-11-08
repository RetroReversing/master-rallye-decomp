#include "context.h"

s32 func_001F5100(void **arg0, s32 arg1, s32 arg2, s32 arg3) {
    struct {
        char b0;
        char b1;
        short h2;
    } tmp;
    void *obj;

    tmp.b0 = (char)arg1;
    tmp.b1 = (char)arg2;
    tmp.h2 = (short)arg3;
    obj = *arg0;
    return ((s32 (*)(void *, void *, s32)) *(void **)((char *)*(void **)((char *)obj + 8) + 0x74))(
        (char *)obj + *(s16 *)((char *)*(void **)((char *)obj + 8) + 0x70), &tmp, 4);
}
