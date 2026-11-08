#include "context.h"

/* func_0016D178 */
void func_0016D178(void *arg0, f32 *arg1) {
    *arg1 = *(f32 *)((u8 *)arg0 + 0x30) * 2.5f;
}

/* func_001991E0 */
extern void func_001D4040(void *, const char *);
extern char D_00471BA0[];
extern char D_00471BB0[];
extern char D_00473958[];

void *func_001991E0(void *arg0) {
    s32 k;
    s32 k2;
    func_001D4040(&k, D_00471BA0);
    ((s32 *)arg0)[3] = 1;
    ((s32 *)arg0)[6] = 1;
    ((s32 *)arg0)[8] = 0;
    ((s32 *)arg0)[0] = 0;
    ((s32 *)arg0)[4] = 0;
    ((s32 *)arg0)[5] = 0;
    ((s32 *)arg0)[1] = k;
    ((s32 *)arg0)[2] = (s32)D_00473958;
    ((s32 *)arg0)[7] = 2;
    func_001D4040(&k2, D_00471BB0);
    ((s32 *)arg0)[11] = 1;
    ((s32 *)arg0)[9] = 1;
    ((s32 *)arg0)[8] = k2;
    ((s32 *)arg0)[10] = 0;
    ((s32 *)arg0)[12] = 0;
    ((s32 *)arg0)[13] = 0;
    return arg0;
}

/* func_00140DD8 */
extern void *func_00140D88(const char *);
extern void func_00140C78(s32);
extern char D_00448AA0[];
extern char D_0044BAD0[];

void func_00140DD8(s32 arg0) {
    if (*(s32 *)((unsigned)func_00140D88(D_00448AA0) + 0x30) != 0) {
        s32 handle = func_001E4280();
        s32 k;
        func_001D4040(&k, D_0044BAD0);
        if (func_001E3650(handle, (s32)&k) == 0)
            func_00140C78(arg0);
    }
}

/* func_0019A688 */
extern void *D_002AD408(u32);
extern void func_001E2460(void *, void *, s32);
extern void func_001E2C78(void *, const char *, s32);
extern char D_00471D48[];
extern char D_00471D58[];
extern char D_00471D68[];
extern char D_0044DD18[];

void *func_0019A688(void *arg0) {
    void *obj;
    s32 k;
    s32 tmp[8];

    obj = D_002AD408(0x24);
    func_001D4040(&k, D_00471D48);
    ((s32 *)obj)[2] = 0;
    ((s32 *)obj)[4] = (s32)D_0044DD18;
    ((s32 *)obj)[3] = 0;
    ((s32 *)obj)[1] = 0;
    ((s32 *)obj)[0] = 0;
    ((s32 *)obj)[5] = 0;
    ((s32 *)obj)[7] = 0;
    ((s32 *)obj)[6] = 0;
    ((s32 *)obj)[8] = k;
    func_001E2460(tmp, obj, k);
    func_001E2C78(tmp, D_00471D58, ((s32 *)arg0)[0x228 / 4]);
    func_001E2C78(tmp, D_00471D68, ((s32 *)arg0)[0x224 / 4]);
    return obj;
}
