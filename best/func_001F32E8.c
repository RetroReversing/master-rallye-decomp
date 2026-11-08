#include "context.h"

extern void func_001FA460(void *);
extern void func_001FA478(void *, s32);
extern void func_001FA4A0(void *, void *, f32);
extern void func_001F7EC8(void);
extern void func_0021D5B0(void *, void *, f32);
extern char D_004789A0[];

s32 func_001D3920(void *arg0) {
    s32 *v = *(s32 **)((u8 *)arg0 + 4);
    s32 ret = 0;
    if (v != (s32 *)arg0) {
        if (v != (s32 *)arg0) {
            ret = *v;
        }
    }
    return ret;
}

void *func_001F2E00(void *arg0) {
    u8 *p = (u8 *)arg0;
    u8 *a = p + 0xC;
    u8 *b = p + 0x18;

    *(s32 *)(p + 0x00) = 0;
    *(s32 *)(p + 0x04) = 0;
    *(s32 *)(p + 0x08) = 0;
    *(s32 *)(p + 0x0C) = 0;
    *(s32 *)(a + 0x08) = 0; /* 0x14 */
    *(s32 *)(a + 0x04) = 0; /* 0x10 */
    *(s32 *)(p + 0x18) = 0;
    *(s32 *)(b + 0x0C) = 0; /* 0x24 */
    *(s32 *)(b + 0x04) = 0; /* 0x1C */
    *(s32 *)(b + 0x08) = 0; /* 0x20 */
    *(s32 *)(b + 0x10) = 0; /* 0x28 */
    return arg0;
}

void func_001F3290(void *arg0, void *arg1) {
    char sp[0x10];
    f32 v = *(f32 *)((u8 *)arg0 + 8);
    func_001FA460(sp);
    *(f32 *)sp = v;
    func_001FA4A0(sp, arg1, v);
    func_001FA478(sp, 2);
}

void *func_001F32E8(void *arg0) {
    s32 sp[3];
    func_001F7EC8();
    *(char **)((u8 *)arg0 + 0x10) = D_004789A0;
    sp[0] = 0;
    sp[1] = 0;
    sp[2] = 0;
    func_0021D5B0((u8 *)arg0 + 0x1C, sp, -1.0f);
    *(s32 *)((u8 *)arg0 + 0x30) = 0;
    return arg0;
}
