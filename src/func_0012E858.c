#include "context.h"

extern void func_001D4040(void *a, void *b);
extern void *func_001D6DF8(s32, s32);
extern s32 func_001D6E40(void);
extern void func_002C8308(void *, s32);
extern void func_002C8360(void *, s32, s32);
extern void func_002C8460(s32);

extern char D_00449728[];
extern u32 D_0044D0E8;
extern s32 D_0040E4F4;

void *func_0012E908(void *arg0) {
    s32 sp[4];
    func_001D4040(sp, D_00449728);
    ((s32 *)arg0)[1] = sp[0];
    ((s32 *)arg0)[0] = -1;
    ((u32 *)arg0)[2] = (u32)&D_0044D0E8;
    ((s32 *)arg0)[10] = 0;
    D_0040E4F4 = 0;
    return arg0;
}

void func_0012E858(void) {
    void *obj;
    u64 v;

    obj = func_001D6DF8(func_001D6E40(), 0);
    v = *(u64 *)((u8 *)obj + 0x30);
    if ((u32)(v >> 35) & 1) {
        func_002C8360(obj, 0, 0);
        func_002C8308(obj, 0);
    }

    obj = func_001D6DF8(func_001D6E40(), 1);
    v = *(u64 *)((u8 *)obj + 0x30);
    if ((u32)(v >> 35) & 1) {
        func_002C8360(obj, 0, 0);
        func_002C8308(obj, 0);
    }

    func_002C8460(0);
}

void func_0012E7E8(s32 arg0) {
    void *obj;
    u64 v;

    func_002C8460(1);
    obj = func_001D6DF8(func_001D6E40(), arg0);
    v = *(u64 *)((u8 *)obj + 0x30);
    if ((u32)(v >> 35) & 1) {
        func_002C8308(obj, 1);
        func_002C8360(obj, 100, 1);
    }
}
