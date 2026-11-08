#include "context.h"

extern s32 D_00428CC0;
extern void func_002B2028(void *);
extern void *func_002B1FC0(s32);
extern void func_003F94D0(void *, void *, s32);
extern void func_002BC838(void *, void *);

void func_002BCDD8(void *arg0) {
    D_00428CC0 -= 1;
    func_002B2028(*(void **)((u8 *)arg0 - 8));
}

void *func_002BCE08(void) {
    void *v0 = func_002B1FC0(0xC0);
    func_003F94D0(v0, (void *)0, 0xC0);
    return v0;
}

void func_002BCE48(void *arg0) {
    void *v1 = *(void **)((u8 *)arg0 + 0x60);
    if (v1 != 0) {
        func_002BC838((void *)((u8 *)arg0 + 0x70), (void *)((u8 *)v1 + 0xC));
    }
    func_002B2028(arg0);
}

void *func_002BCE88(void) {
    void *v0 = func_002B1FC0(0x14);
    func_003F94D0(v0, (void *)0, 0x14);
    return v0;
}
