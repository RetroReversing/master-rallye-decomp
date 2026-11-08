#include "context.h"

extern s32 D_0043C3B0[];

void func_003F0B30(s32 arg0, s32 arg1, s32 arg2) {
    s32 *p = D_0043C3B0;
    p[3] = arg0;
    p[1] = arg1;
    p[2] = arg2;
}

/* func_002C1C58 */
void func_002C1C58(void *arg0) {
    s32 v0 = *(s32 *)((u8 *)arg0 + 0xC);
    s32 v1 = *(s32 *)((u8 *)arg0 + 0x10);
    s32 v5 = v0 + 0x10;
    *(s32 *)((u8 *)arg0 + 0x2C) = v0;
    *(s32 *)((u8 *)arg0 + 0x30) = v1;
    *(s32 *)((u8 *)arg0 + 0x34) = v5;
    *(s32 *)((u8 *)arg0 + 0x38) = v0;
    *(s32 *)((u8 *)arg0 + 0x3C) = v5;
    *(s32 *)((u8 *)arg0 + 0x40) = 0;
}

/* func_002C1C48 */
s32 func_002C1C48(void *arg0) {
    return *(s32 *)((u8 *)arg0 + 0x14);
}

/* func_002C1C00 */
extern void func_002C14B0(void *);
extern u8 D_004810C8[];

void *func_002C1C00(void *arg0, s32 arg1) {
    func_002C14B0(arg0);
    *(s32 *)((u8 *)arg0 + 0x10) = arg1;
    *(u8 **)((u8 *)arg0 + 0xC) = D_004810C8;
    return arg0;
}
