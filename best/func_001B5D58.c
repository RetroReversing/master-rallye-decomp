#include "context.h"

extern char D_004730C0[];

void *func_001B5D58(void *arg0, s32 *arg1) {
    char *base = (char *)arg0;
    char *p8 = base + 8;
    char *p14 = base + 0x14;
    char *p20 = base + 0x20;
    f32 one = 1.0f;
    s32 one_i = 1;

    *(s32 *)(base + 4) = 0;
    *(s32 *)(base + 8) = 0;
    *(char **)base = D_004730C0;
    *(s32 *)(p8 + 8) = 0;
    *(s32 *)(p8 + 4) = 0;
    *(f32 *)(base + 0x14) = one;
    *(s32 *)(p14 + 8) = 0;
    *(s32 *)(p14 + 4) = 0;
    *(s32 *)(base + 0x20) = 0;
    *(s32 *)(p20 + 4) = 0;
    *(f32 *)(p20 + 8) = one;
    *(f32 *)(base + 0x2C) = one;
    *(f32 *)(base + 0x34) = 0.033333335f;
    *(s32 *)(base + 0x38) = one_i;
    *(s32 *)(base + 0x30) = 0;
    *(s32 *)(base + 4) = *arg1;
    return arg0;
}

extern char D_00473088[];
extern void func_001B6168(void *);

typedef struct {
    s64 q[2];
} Q128;

void *func_001B6098(void *arg0, s32 *arg1, f32 *arg2) {
    volatile Q128 save_s0;
    volatile Q128 save_ra;
    char *base = (char *)arg0;
    char *p8 = base + 8;
    char *p1C = base + 0x1C;
    s32 v;

    (void)save_s0; (void)save_ra;
    *(char **)base = D_00473088;
    *(s32 *)(base + 8) = 0;
    v = *arg1;
    *(s32 *)(base + 4) = v;
    *(s32 *)(p8 + 8) = 0;
    *(s32 *)(p8 + 4) = 0;
    *(s32 *)(base + 0x14) = 0;
    *(s32 *)(base + 0x18) = 0;
    *(f32 *)(base + 0x1C) = arg2[0];
    *(f32 *)(p1C + 4) = arg2[1];
    *(f32 *)(p1C + 8) = arg2[2];
    func_001B6168(p1C);
    return arg0;
}
