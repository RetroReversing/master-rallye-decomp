#include "context.h"

extern void func_001D4040(void *, const char *);
extern char D_00471BA0[];
extern char D_00471BB0[];
extern char D_00473958[];

void *func_001991E0(void *arg0) {
    s32 sp0[4];
    s32 sp10[4];
    s32 *p = (s32 *)arg0;
    s32 one = 1;

    func_001D4040(sp0, D_00471BA0);
    p[3] = one;
    p[6] = one;
    p[8] = 0;
    p[0] = 0;
    p[4] = 0;
    p[5] = 0;
    p[1] = sp0[0];
    p[2] = (s32)D_00473958;
    p[7] = 2;
    func_001D4040(sp10, D_00471BB0);
    p[11] = one;
    p[9] = one;
    p[8] = sp10[0];
    p[10] = 0;
    p[12] = 0;
    p[13] = 0;
    return arg0;
}

extern void *D_002AD408(u32);
extern void func_001E2460(void *, void *, s32);
extern void func_001E2C78(void *, const char *, s32);
extern char D_00471D48[];
extern char D_00471D58[];
extern char D_00471D68[];
extern char D_0044DD18[];

void *func_0019A688(void *arg0) {
    s32 *in = (s32 *)arg0;
    s32 *obj;
    s32 sp0;
    s32 sp20[8];

    obj = (s32 *)D_002AD408(0x24);
    func_001D4040(&sp0, D_00471D48);
    obj[2] = 0;
    obj[4] = (s32)D_0044DD18;
    obj[3] = 0;
    obj[1] = 0;
    obj[0] = 0;
    obj[5] = 0;
    obj[7] = 0;
    obj[6] = 0;
    obj[8] = sp0;
    func_001E2460(sp20, obj, sp0);
    func_001E2C78(sp20, D_00471D58, in[0x228 / 4]);
    func_001E2C78(sp20, D_00471D68, in[0x224 / 4]);
    return obj;
}
