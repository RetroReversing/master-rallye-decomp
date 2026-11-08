#include "context.h"

extern void func_00118BE0(void *arg0);
extern u32 D_0044DB88;
extern u32 D_0044DBA0;

void *func_00118A98(void *arg0) {
    u8 *p = (u8 *)arg0;
    volatile u32 pad[4];
    *(u32 *)(p + 0x24) = (u32)&D_0044DB88;
    *(u32 *)(p + 0x20) = (u32)&D_0044DBA0;
    *(u32 *)(p + 0x00) = 0;
    *(u32 *)(p + 0x04) = 0;
    *(u32 *)(p + 0x08) = 0;
    *(u32 *)(p + 0x0C) = 0;
    *(u32 *)(p + 0x14) = 0;
    *(u32 *)(p + 0x10) = 0;
    *(u32 *)(p + 0x1C) = 1;
    func_00118BE0(arg0);
    return arg0;
}

extern void *D_002AD408(s32 arg0);
extern void *func_00118908(void *arg0);
extern void *D_0040DCBC;

void *func_00118A08(void) {
    if (D_0040DCBC == 0) {
        D_0040DCBC = func_00118908(D_002AD408(0x2C));
    }
    return D_0040DCBC;
}

extern void *func_00116ED0(void *arg0);
extern void *D_0040DCB8;

void *func_001189C0(void) {
    if (D_0040DCB8 == 0) {
        D_0040DCB8 = func_00116ED0(D_002AD408(0xC9C));
    }
    return D_0040DCB8;
}

void func_0016D178(void *arg0, f32 *arg1) {
    *arg1 = *(f32 *)((u8 *)arg0 + 0x30) * 2.5f;
}
