/* identical to func_001F4A08 (matched), with its names changed by decompdecomp */
#include "context.h"

void *func_001F4570(void *arg0, s32 arg1) {
    if (arg1 != 0) {
        *(s32 *)((u8 *)arg0 + 0x0) = 0;
        *(s32 *)((u8 *)arg0 + 0x4) = 0;
        *(s32 *)((u8 *)arg0 + 0x8) = 0;
        *(s32 *)((u8 *)arg0 + 0x10) = 0;
        *(s32 *)((u8 *)arg0 + 0xC) = 0;
        *(s32 *)((u8 *)arg0 + 0x14) = 0;
    } else {
        *(s32 *)((u8 *)arg0 + 0x14) = 0;
        *(s32 *)((u8 *)arg0 + 0xC) = 1;
        *(s32 *)((u8 *)arg0 + 0x0) = 1;
        *(s32 *)((u8 *)arg0 + 0x4) = 1;
        *(s32 *)((u8 *)arg0 + 0x8) = 1;
        *(s32 *)((u8 *)arg0 + 0x10) = 1;
    }
    *(s32 *)((u8 *)arg0 + 0x18) = 0;
    return arg0;
}

extern void func_003F9698(const char *fmt, ...);
extern char D_00477968[];
extern char D_00477890[];
extern char D_00477898[];
extern char D_004778A0[];

void func_001F4C20(void *a0, void *a1) {
    const char *fmt = D_00477968;
    s32 flag = *(s32 *)((u8 *)a1 + 0x18);
    s32 name = *(s32 *)((u8 *)a1 + 0x14);
    const char *opt;
    if (flag) {
        opt = D_00477890;
    } else {
        opt = D_00477898;
    }
    func_003F9698(fmt, name, opt);
}

void func_001F4A50(void *a0, void *a1) {
    const char *fmt = D_004778A0;
    s32 flag = *(s32 *)((u8 *)a1 + 0x18);
    s32 name = *(s32 *)((u8 *)a1 + 0x14);
    const char *opt;
    s32 idx;
    s32 sz;
    if (flag) {
        opt = D_00477890;
    } else {
        opt = D_00477898;
    }
    idx = *(s32 *)((u8 *)a1 + 0x1C);
    sz = *(s32 *)((u8 *)a1 + 0x20);
    func_003F9698(fmt, name, idx, sz, opt);
}
