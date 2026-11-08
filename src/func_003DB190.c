#include "context.h"

extern void *func_003DB0C0(s32);
extern void func_003DB120(void *);
extern void func_003DB148(void *, void *);

void *func_003DB190(void *arg0, s32 arg1) {
    void *new_ptr;

    if (arg0 == 0) {
        return func_003DB0C0(arg1);
    }
    if (*(s32 *)((u8 *)arg0 + 4) >= arg1) {
        return arg0;
    }
    new_ptr = func_003DB0C0(arg1);
    func_003DB148(new_ptr, arg0);
    func_003DB120(arg0);
    return new_ptr;
}
