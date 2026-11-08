#include "context.h"

typedef struct { s32 x, y, z, w; } Vec4;

extern s32 func_001DF4C8(s32);
extern void func_00292928(void *);
extern void func_00292970(void *arg0, void *arg1);
extern void func_002929C8(s32, s32);
extern void func_001D4810(void *, s32);
extern void func_002924A0(void *);
extern void func_002A5790(void *, void **, void *);
extern void *func_002932A8(s32);
extern s32 func_00293668(void);

extern void func_001E2460(void *, s32);
extern void func_001E2470(void *, const char *, s32);
extern void func_001E2A48(void *, const char *, s32);
extern void func_001E2C78(void *, const char *, s32);

extern char D_0047ADC0[];
extern char D_0047B218[];
extern char D_0047B228[];
extern char D_0047B238[];
extern char D_0047B248[];

void *func_002928F8(void *arg0, void *arg1) {
    *(s32 *)arg0 = 0;
    *(s32 *)((u8 *)arg0 + 4) = 0;
    func_00292970(arg0, arg1);
    return arg0;
}

void *func_00292330(void *arg0, void *arg1) {
    s32 i;
    s32 *p;
    void **slot;

    i = 3;
    p = (s32 *)arg0;
    do {
        p[0] = 0;
        i--;
        p[1] = 0;
        p += 2;
    } while (i != -1);

    *(s32 *)((u8 *)arg0 + 0x20) = 0;
    *(s32 *)((u8 *)arg0 + 0x2C) = 0;
    *(s32 *)((u8 *)arg0 + 0x30) = 0;
    *(s32 *)((u8 *)arg0 + 0x24) = 0;
    func_002924A0(arg0);

    slot = *(void ***)((u8 *)arg1 + 4);
    if (slot != *(void ***)((u8 *)arg1 + 8)) {
        if (slot != 0) {
            *slot = arg0;
        }
        *(void ***)((u8 *)arg1 + 4) = slot + 1;
    } else {
        func_002A5790(arg1, slot, &slot);
    }
    return arg0;
}

void *func_002921B8(void *arg0) {
    s32 i;
    s32 *p;
    void *container;
    void **slot;
    void *sp;

    i = 3;
    p = (s32 *)arg0;
    do {
        p[0] = 0;
        i--;
        p[1] = 0;
        p += 2;
    } while (i != -1);

    *(s32 *)((u8 *)arg0 + 0x20) = 0;
    *(s32 *)((u8 *)arg0 + 0x2C) = 0;
    *(s32 *)((u8 *)arg0 + 0x30) = 0;
    *(s32 *)((u8 *)arg0 + 0x24) = 0;
    func_002924A0(arg0);

    container = func_002932A8(func_00293668());
    slot = *(void ***)((u8 *)container + 4);
    if (slot != *(void ***)((u8 *)container + 8)) {
        if (slot != 0) {
            *slot = arg0;
        }
        *(void ***)((u8 *)container + 4) = slot + 1;
    } else {
        func_002A5790(container, slot, &sp);
    }
    return arg0;
}

void func_002913F8(void *arg0, s32 arg1, s32 arg2) {
    s32 ctx[4];
    func_001E2460(ctx, arg2);
    func_001E2A48(ctx, D_0047B218, (s32)((u8 *)arg0 + 0x1C));
    func_001E2A48(ctx, D_0047B228, (s32)((u8 *)arg0 + 0x34));
    func_001E2A48(ctx, D_0047B238, (s32)((u8 *)arg0 + 0x28));
    func_001E2470(ctx, D_0047B248, (s32)((u8 *)arg0 + 0x18));
    func_001E2C78(ctx, D_0047ADC0, *(s32 *)((u8 *)arg0 + 0xC));
}
