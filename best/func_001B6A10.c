#include "context.h"

/* func_0016D178 - known nop scheduling issue under project compiler */
void func_0016D178(void *arg0, f32 *arg1) {
    *arg1 = *(f32 *)((u8 *)arg0 + 0x30) * 2.5f;
}

/* func_001B6108 */
extern char D_00473088[];
extern void func_001B6168(s32);

void *func_001B6108(void *arg0, s32 *arg1, s32 *arg2) {
    char *base = (char *)arg0;
    char *p8 = base + 8;
    s32 v2;

    *(char **)base = D_00473088;
    *(s32 *)(base + 8) = 0;
    *(s32 *)(base + 4) = *arg1;
    *(s32 *)(p8 + 8) = 0;
    *(s32 *)(p8 + 4) = 0;
    v2 = *arg2;
    *(s32 *)(base + 0x18) = 1;
    *(s32 *)(base + 0x14) = v2;
    func_001B6168(1);
    return arg0;
}

/* func_00123AB0 */
extern void func_0011DFB8(s32);
extern s32 func_0011E528(s32);
extern s32 func_0011E2B8(s32, s32);
extern void func_001D4040(void *, void *);
extern void func_001E3D10(s32, void *, s32);
extern char D_00448040[];

typedef struct {
    u8 pad[0xC];
    s32 unkC;
    u8 pad10[4];
    s32 unk14;
} Func00123AB0Arg0;

void func_00123AB0(Func00123AB0Arg0 *arg0) {
    char buf[0x10];

    func_0011DFB8(arg0->unkC);
    if (func_0011E528(arg0->unkC) != 0) {
        return;
    }
    {
        s32 v = func_0011E2B8(arg0->unkC, 1);
        if ((u32)(v + 3) < 2U) {
            arg0->unk14 = 1;
        }
    }
    if (arg0->unk14 != 0) {
        s32 temp = func_001E4280();
        func_001D4040(buf, D_00448040);
        func_001E3D10(temp, buf, 1);
    }
}

/* func_001B6A10 */
void func_001B6A10(void *arg0, f32 fparg0) {
    f32 f3;
    f32 *p;
    f32 sp[4];

    f3 = (50.0f - fparg0) / 5.0f;
    if (f3 > 10.0f) {
        f3 = 10.0f;
    }
    if (f3 < 0.0f) {
        f3 = 0.0f;
    }

    p = (f32 *)((u8 *)arg0 + 0x7C);
    sp[2] = 0.0f;
    sp[0] = 0.0f;
    sp[1] = f3;
    p[0] = p[0] + 0.0f;
    p[1] = p[1] + f3;
    p[2] = p[2] + sp[2];
}
