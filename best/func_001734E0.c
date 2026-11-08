#include "context.h"

void func_00188F20(void *);
void func_00188F28(void *, s32);
void func_00189060(void *, void *, void *);

void func_001734E0(void *arg0) {
    u8 sp[0x30];
    s32 i;
    s32 count;
    void **base;

    i = 0;
    func_00188F20(sp);
    count = (*(s32 *)((u8 *)arg0 + 0x18) - *(s32 *)((u8 *)arg0 + 0x14)) >> 2;
    if (count > 0) {
        do {
            base = *(void ***)((u8 *)arg0 + 0x14);
            func_00189060(sp, base[i], *(void **)((u8 *)arg0 + 0x50));
            i++;
        } while (i < count);
    }
    func_00188F28(sp, 2);
}
