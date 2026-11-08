/* identical to func_0013E6B0 (matched), with its names changed by decompdecomp */
#include "context.h"

extern void *func_00194C40(void);
extern s32 func_00193FD8(void *);
extern s32 func_00194738(void *);
extern void func_0011E278(s32, s32);

void func_0013F4C8(void *arg0) {
    if (func_00193FD8(func_00194C40()) != 0) {
        if (func_00194738(func_00194C40()) != 0) {
            func_0011E278(*(s32 *)((u8 *)arg0 + 0xC), 0x17);
        } else {
            func_0011E278(*(s32 *)((u8 *)arg0 + 0xC), 0x1B);
        }
    } else {
        if (func_00194738(func_00194C40()) != 0) {
            func_0011E278(*(s32 *)((u8 *)arg0 + 0xC), 0x35);
        } else {
            func_0011E278(*(s32 *)((u8 *)arg0 + 0xC), 0x24);
        }
    }
}
