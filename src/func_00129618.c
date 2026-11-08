#include "context.h"

extern void func_001D4040(void *a0, const char *a1);

extern char D_00448D00[];
extern char D_0044D228[];
extern char D_00448BD8[];
extern char D_0044D268[];

void *func_00129618(void *arg0)
{
    u32 sp[4];
    s32 *p;
    s32 i;
    u32 val;

    func_001D4040(sp, D_00448D00);
    val = sp[0];
    *(u32 *)((u8 *)arg0 + 4) = val;
    *(s32 *)arg0 = -1;
    *(char **)((u8 *)arg0 + 8) = D_0044D228;
    *(s32 *)((u8 *)arg0 + 0xC) = 0;
    *(s32 *)((u8 *)arg0 + 0x7C) = 0;
    *(s32 *)((u8 *)arg0 + 0x80) = 0;

    p = (s32 *)((u8 *)arg0 + 0x44);
    i = 0xC;
    do {
        p[-13] = 0;
        p[0] = 0;
        i--;
        p++;
    } while (i >= 0);

    return arg0;
}

void *func_00128D48(void *arg0)
{
    u32 sp[4];
    s32 *p;
    s32 i;
    u32 val;

    func_001D4040(sp, D_00448BD8);
    val = sp[0];
    *(u32 *)((u8 *)arg0 + 4) = val;
    *(s32 *)arg0 = -1;
    *(char **)((u8 *)arg0 + 8) = D_0044D268;
    *(s32 *)((u8 *)arg0 + 0xC) = 0;
    *(s32 *)((u8 *)arg0 + 0x10) = 0;
    *(s32 *)((u8 *)arg0 + 0x14) = 0;
    *(s32 *)((u8 *)arg0 + 0x1C) = 0;
    *(s32 *)((u8 *)arg0 + 0x20) = 0;
    *(s32 *)((u8 *)arg0 + 0x18) = 0;
    *(s32 *)((u8 *)arg0 + 0x24) = 0;

    p = (s32 *)((u8 *)arg0 + 0x5C);
    i = 0xC;
    do {
        p[-13] = 0;
        p[0] = 0;
        i--;
        p++;
    } while (i >= 0);

    return arg0;
}
