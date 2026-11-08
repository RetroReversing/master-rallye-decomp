#include "context.h"

extern void *D_002AD408(s32 arg0);
extern void func_001E2460(void *arg0, void *arg1);
extern void func_001E2C08(void *arg0, const char *arg1, f32 arg2);
extern char D_0044DD18[];
extern char D_004719D8[];
extern char D_004719E8[];

void *func_00196F10(void *arg0) {
    s32 sp[8];
    s32 sp2[4];
    void *obj;
    void *p14;

    obj = D_002AD408(0x24);
    *(s32 *)((u8 *)obj + 8) = 0;
    *(void **)((u8 *)obj + 0x10) = &D_0044DD18;
    p14 = (u8 *)obj + 0x14;
    *(s32 *)((u8 *)obj + 0xC) = 0;
    *(s32 *)((u8 *)obj + 4) = 0;
    *(s32 *)((u8 *)obj + 0) = 0;
    *(s32 *)p14 = 0;
    *(s32 *)((u8 *)p14 + 8) = 0;
    *(s32 *)((u8 *)p14 + 4) = 0;
    *(s32 *)((u8 *)obj + 0x20) = 0;
    func_001E2460(sp2, obj);
    func_001E2C08(sp2, D_004719D8, *(f32 *)((u8 *)arg0 + 0x10));
    func_001E2C08(sp2, D_004719E8, *(f32 *)((u8 *)arg0 + 0xC));
    return obj;
}
