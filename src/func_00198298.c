/* identical to func_001981E8 (matched), with its names changed by decompdecomp */
#include "context.h"

/* func_00196F10 */
extern void *D_002AD408(s32 arg0);
extern void func_001E2460(void *arg0, void *arg1);
extern void func_001E2C08(void *arg0, const char *arg1, f32 arg2);
extern char D_0044DD18[];
extern char D_004719D8[];
extern char D_004719E8[];

void *func_00196F10(void *arg0) {
    s32 sp[16];
    void *obj;
    s32 *p14;
    void *reg;

    obj = D_002AD408(0x24);
    *(s32 *)((u8 *)obj + 8) = 0;
    *(void **)((u8 *)obj + 0x10) = &D_0044DD18;
    p14 = (s32 *)((u8 *)obj + 0x14);
    *(s32 *)((u8 *)obj + 0xC) = 0;
    reg = (void *)sp;
    *(s32 *)((u8 *)obj + 4) = 0;
    *(s32 *)((u8 *)obj + 0) = 0;
    *p14 = 0;
    p14[2] = 0;
    p14[1] = 0;
    *(s32 *)((u8 *)obj + 0x20) = 0;
    func_001E2460(reg, obj);
    func_001E2C08(reg, D_004719D8, *(f32 *)((u8 *)arg0 + 0x10));
    func_001E2C08(reg, D_004719E8, *(f32 *)((u8 *)arg0 + 0xC));
    return obj;
}

/* func_001971B0 */
extern void func_001D4040(void *arg0, const char *arg1);
extern void *func_00196E58(void *arg0);
extern char D_00471A08[];
extern void *D_00473A50;

void *func_001971B0(void *arg0) {
    s32 sp[4];

    func_001D4040(sp, D_00471A08);
    *(s32 *)((u8 *)arg0 + 4) = sp[0];
    *(s32 *)((u8 *)arg0 + 0) = -1;
    *(void **)((u8 *)arg0 + 8) = &D_00473A50;
    func_00196E58((u8 *)arg0 + 0x24);
    *(f32 *)((u8 *)arg0 + 0x1C) = 0.08f;
    *(f32 *)((u8 *)arg0 + 0x20) = -100.0f;
    *(s32 *)((u8 *)arg0 + 0xC) = 0;
    *(s32 *)((u8 *)arg0 + 0x10) = 0;
    *(s32 *)((u8 *)arg0 + 0x14) = 0;
    *(s32 *)((u8 *)arg0 + 0x18) = 0;
    return arg0;
}

/* func_00197330 */
extern void func_001E25B0(void *arg0, const char *arg1, void *arg2);
extern void func_001E2510(void *arg0, const char *arg1, void *arg2);
extern void func_001E2A48(void *arg0, const char *arg1, void *arg2);
extern char D_00471A18[];
extern char D_00471A28[];
extern char D_00471A40[];
extern char D_00471A58[];
extern char D_00471A70[];
extern char D_00471A88[];

void func_00197330(void *arg0, void *arg1, void *arg2) {
    s32 sp[4];

    func_001E2460(sp, arg2);
    func_001E25B0(sp, D_00471A18, (u8 *)arg0 + 0xC);
    func_001E25B0(sp, D_00471A28, (u8 *)arg0 + 0x10);
    func_001E25B0(sp, D_00471A40, (u8 *)arg0 + 0x14);
    func_001E2510(sp, D_00471A58, (u8 *)arg0 + 0x1C);
    func_001E2510(sp, D_00471A70, (u8 *)arg0 + 0x20);
    func_001E2A48(sp, D_00471A88, (u8 *)arg0 + 0x40);
}

/* func_00198298 */
extern s32 func_00193B60(void);
extern s32 func_00192190(s32 arg0, s32 arg1);
extern void *func_001983F8(void *arg0, void *arg1);
extern void *func_00197C10(void *arg0, void *arg1);
extern void func_00197E88(void *arg0);
extern void func_001C97F0(void *arg0, void *arg1, void *arg2);

void func_00198298(void *arg0, void *arg1) {
    void *sp;
    void **p4;

    if (func_00192190(func_00193B60(), *(s32 *)((u8 *)arg1 + 4)) == 1) {
        sp = func_001983F8(arg0, arg1);
        if (sp == 0) {
            sp = func_00197C10(D_002AD408(0xC), arg1);
            p4 = (void **)((u8 *)arg0 + 4);
            if (*p4 != *(void **)((u8 *)arg0 + 8)) {
                if (*p4 != 0) {
                    **(void ***)p4 = sp;
                }
                *p4 = (void *)((u8 *)*p4 + 4);
            } else {
                func_001C97F0(arg0, *p4, &sp);
            }
        }
        func_00197E88(sp);
    }
}
