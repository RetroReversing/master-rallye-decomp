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
    reg = (void *)&sp[4];
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

/* func_001983F8 */
void *func_001983F8(void *arg0, void *arg1) {
    void **base;
    void **end;
    s32 count;
    s32 i;
    void **p;

    base = *(void ***)arg0;
    end = *(void ***)((u8 *)arg0 + 4);
    count = (s32)(end - base);
    if (count <= 0) {
        return 0;
    }
    p = base;
    i = 0;
    while (i < count) {
        void *entry = *p;
        i++;
        if (entry != 0) {
            if (*(void **)entry == arg1) {
                return entry;
            }
        }
        p++;
    }
    return 0;
}

/* func_00198450 */
void *func_00198450(void *arg0) {
    void *p3;
    void *p5;

    *(s32 *)arg0 = 0;
    p3 = (u8 *)arg0 + 4;
    *(s32 *)((u8 *)arg0 + 4) = 0;
    p5 = (u8 *)arg0 + 0x20;
    *(s32 *)((u8 *)p3 + 0x18) = 0;
    *(s32 *)((u8 *)p3 + 4) = 0;
    *(s32 *)((u8 *)p3 + 8) = 0;
    *(s32 *)((u8 *)p3 + 0xC) = 0;
    *(s32 *)((u8 *)p3 + 0x10) = 0;
    *(s32 *)((u8 *)p3 + 0x14) = 0;
    *(s32 *)((u8 *)arg0 + 0x20) = 0;
    *(s32 *)((u8 *)p5 + 0x18) = 0;
    *(s32 *)((u8 *)p5 + 4) = 0;
    *(s32 *)((u8 *)p5 + 8) = 0;
    *(s32 *)((u8 *)p5 + 0xC) = 0;
    *(s32 *)((u8 *)p5 + 0x10) = 0;
    *(s32 *)((u8 *)p5 + 0x14) = 0;
    return arg0;
}

/* func_001984C8 */
void func_001984C8(void *arg0, void *arg1) {
    void *src;

    *(void **)arg0 = arg1;
    src = *(void **)((u8 *)arg1 + 0x180);
    *(f32 *)((u8 *)arg0 + 0x20) = *(f32 *)((u8 *)src + 0x1D4);
    *(f32 *)((u8 *)arg0 + 0x24) = *(f32 *)((u8 *)src + 0x1D8);
    *(f32 *)((u8 *)arg0 + 0x28) = *(f32 *)((u8 *)src + 0x1DC);
    *(f32 *)((u8 *)arg0 + 0x2C) = *(f32 *)((u8 *)src + 0x1E0);
    *(f32 *)((u8 *)arg0 + 0x30) = *(f32 *)((u8 *)src + 0x1E4);
    *(s32 *)((u8 *)arg0 + 0x34) = 0;
    *(f32 *)((u8 *)arg0 + 0x04) = *(f32 *)((u8 *)src + 0x1E8);
    *(f32 *)((u8 *)arg0 + 0x08) = *(f32 *)((u8 *)src + 0x1EC);
    *(f32 *)((u8 *)arg0 + 0x0C) = *(f32 *)((u8 *)src + 0x1F0);
    *(f32 *)((u8 *)arg0 + 0x10) = *(f32 *)((u8 *)src + 0x1F4);
    *(f32 *)((u8 *)arg0 + 0x14) = *(f32 *)((u8 *)src + 0x1F8);
    *(s32 *)((u8 *)arg0 + 0x18) = 0;
}
