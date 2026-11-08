#include "context.h"

/* func_0016D178 - stuck, compiler scheduling artifact */
void func_0016D178(void *arg0, f32 *arg1) {
    *arg1 = *(f32 *)((u8 *)arg0 + 0x30) * 2.5f;
}

/* func_00196E58 */
extern void func_001D4040(void *arg0, const char *arg1);
extern char D_004719C0[];
extern void *D_00473A90;

void *func_00196E58(void *arg0) {
    s32 sp[4];

    func_001D4040(sp, D_004719C0);
    *(s32 *)((u8 *)arg0 + 4) = sp[0];
    *(s32 *)((u8 *)arg0 + 0) = -1;
    *(void **)((u8 *)arg0 + 8) = &D_00473A90;
    *(f32 *)((u8 *)arg0 + 0xC) = 0.08f;
    *(f32 *)((u8 *)arg0 + 0x14) = 6.2831855f;
    *(f32 *)((u8 *)arg0 + 0x18) = 0.033333335f;
    *(s32 *)((u8 *)arg0 + 0x10) = 0;
    return arg0;
}

/* func_00196F10 */
extern void *D_002AD408(s32 arg0);
extern void func_001E2460(void *arg0, void *arg1);
extern void func_001E2C08(void *arg0, const char *arg1, f32 arg2);
extern char D_0044DD18[];
extern char D_004719D8[];
extern char D_004719E8[];

void *func_00196F10(void *arg0) {
    s32 sp[4];
    void *obj;
    s32 *p14;

    obj = D_002AD408(0x24);
    *(s32 *)((u8 *)obj + 8) = 0;
    *(void **)((u8 *)obj + 0x10) = &D_0044DD18;
    p14 = (s32 *)((u8 *)obj + 0x14);
    *(s32 *)((u8 *)obj + 0xC) = 0;
    *(s32 *)((u8 *)obj + 4) = 0;
    *(s32 *)((u8 *)obj + 0) = 0;
    *p14 = 0;
    p14[2] = 0;
    p14[1] = 0;
    *(s32 *)((u8 *)obj + 0x20) = 0;
    func_001E2460(sp, obj);
    func_001E2C08(sp, D_004719D8, *(f32 *)((u8 *)arg0 + 0x10));
    func_001E2C08(sp, D_004719E8, *(f32 *)((u8 *)arg0 + 0xC));
    return obj;
}

/* func_00196FB8 */
extern void func_001E2510(void *arg0, const char *arg1, void *arg2);

void func_00196FB8(void *arg0, void *arg1, void *arg2) {
    s32 sp[4];

    func_001E2460(sp, arg2);
    func_001E2510(sp, D_004719D8, (u8 *)arg0 + 0x10);
    func_001E2510(sp, D_004719E8, (u8 *)arg0 + 0xC);
}
