#include "context.h"

extern void func_00206BB8(void *, s32);
extern void func_002B2028(void *);
extern void D_002AD390(void *);
extern u32 D_0040E618[];
extern char D_00478550[];

void func_00207290(void *arg0, s32 arg1) {
    u32 *b;
    s32 n;

    *(u32 *)((u8 *)arg0 + 0x24) = (u32)D_00478550;
    func_00206BB8((u8 *)arg0 + 0x18, 2);
    b = *(u32 **)((u8 *)arg0 + 0x0C);
    n = ((s32)*(u32 *)((u8 *)arg0 + 0x14) - (s32)b) >> 2;
    if (n != 0) {
        if ((n * 4) != 0) {
            func_002B2028(b);
        } else {
            *b = D_0040E618[-1];
            D_0040E618[-1] = (u32)b;
        }
    }
    if (arg1 & 1) {
        D_002AD390(arg0);
    }
}
