#include "context.h"

/* ---- func_00200250 ---- */
void func_00200250(void *arg0) {
    s32 *p = (s32 *)arg0;
    p[8] = 0;      /* 0x20 */
    *(f32 *)((u8 *)arg0 + 0x1C) = 1.0f;
    p[2] = 1;      /* 0x08 */
}

/* ---- func_001FE3A8 ---- */
typedef struct S_FE3A8 {
    u8 *begin;
    u8 *end;
} S_FE3A8;

s32 func_001FE3A8(void *arg0) {
    S_FE3A8 *p = *(S_FE3A8 **)arg0;
    s32 n;
    if (p == 0) return -1;
    n = (s32)((u32)((u32)((p->end - p->begin) >> 2) * 0xCCCCCCCDu) >> 4);
    if (n < 4) return -1;
    return (s32)((f32)n * 0.25f);
}

/* ---- func_001FE080 ---- */
extern s32 func_001FE0F0(void *, void *, s32);

s32 func_001FE080(void *arg0, void *arg1) {
    s32 i = 0;
    while (i < func_001FE3A8(arg0)) {
        if (func_001FE0F0(arg0, arg1, i) != 0) return 1;
        i++;
    }
    return 0;
}

/* ---- func_001FDCD8 ---- */
extern void *D_002AD408(s32);
extern void func_001FDD38(void *, void *, void *);

void *func_001FDCD8(void *arg0, void *arg1) {
    void *r = D_002AD408(0xC);
    *(s32 *)((u8 *)r + 0) = 0;
    *(s32 *)((u8 *)r + 4) = 0;
    *(s32 *)((u8 *)r + 8) = 0;
    func_001FDD38(arg0, arg1, r);
    return r;
}
