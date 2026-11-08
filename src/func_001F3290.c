#include "context.h"

extern void func_001FA460(void *);
extern void func_001FA478(void *, s32);
extern void func_001FA4A0(void *, void *);

void func_001F3290(void *arg0, void *arg1) {
    f32 sp[4];
    func_001FA460((void *)sp);
    sp[0] = *(f32 *)((u8 *)arg0 + 8);
    func_001FA4A0((void *)sp, arg1);
    func_001FA478((void *)sp, 2);
}
