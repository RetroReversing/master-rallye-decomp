#include "context.h"

extern void func_00208590(void *, s32);
extern void func_00208888(void *, s32, void *, void *);
extern char D_00478578[];

void *func_002069F0(void *arg0) {
    f32 sp[8]; /* ensure 0x20 stack */
    u8 *p = (u8 *)arg0;
    u8 *a = p + 0x1C;
    u8 *b = p + 0x10;
    f32 *s = &sp[4]; /* sp+0x10 */

    *(s32 *)(p + 0x0C) = 0;
    *(s32 *)(p + 0x04) = 0;
    *(s32 *)(p + 0x08) = 0;
    *(s32 *)(p + 0x00) = 0;

    *(f32 *)(a + 8) = 1.0f;
    *(f32 *)(a + 4) = 1.0f;
    *(f32 *)(p + 0x1C) = 1.0f;
    *(f32 *)(a + 0xC) = 1.0f;

    *(s32 *)(p + 0x10) = 0;
    *(s32 *)(b + 8) = 0;
    *(s32 *)(b + 4) = 0;

    s[0] = 1.0f;
    s[3] = 1.0f;
    s[1] = 1.0f;
    s[2] = 1.0f;

    *(s32 *)(p + 0x0C) = 0;
    *(f32 *)(p + 0x1C) = s[0];
    *(f32 *)(a + 4) = s[1];
    *(f32 *)(a + 8) = s[2];
    *(f32 *)(a + 0xC) = s[3];

    *(s16 *)(p + 0x2C) = 0;
    *(s32 *)(p + 0x30) = 0;
    return arg0;
}

void *func_00206E70(s32 *p) {
    s32 *a;
    p[0] = 0;
    p[4] = (s32)D_00478578;
    a = p + 1;
    p[1] = 0;
    a[2] = 0;
    a[1] = 0;
    return p;
}

void func_002070C0(void *arg0) {
    u8 *p = (u8 *)arg0;
    u8 *base = p + 4;
    u8 *end = *(u8 **)(base + 4);
    u8 *cur = *(u8 **)(p + 4);
    s32 diff = (s32)(end - cur);

    if (cur < end) {
        do {
            func_00208590(cur, 2);
            cur += 0x18;
        } while (cur < end);
    }
    *(u8 **)(base + 4) = *(u8 **)(base + 4) - diff;
}

s32 func_00207198(void *arg0, s32 arg1) {
    s32 sp[4];
    u8 *p = (u8 *)arg0;
    u8 *base = *(u8 **)(p + 4);
    u8 *blk = base + arg1 * 0x18;
    s32 count = (*(s32 *)(blk + 4) - *(s32 *)blk) >> 2;
    s32 i;

    for (i = 0; i < count; i++) {
        func_00208888(blk, i, sp, &sp[1]);
        if (sp[0] == arg1) return 0;
    }
    return 1;
}
