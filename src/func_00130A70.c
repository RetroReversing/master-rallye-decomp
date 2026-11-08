#include "context.h"

extern void func_001D4040(void *arg0, const char *arg1);
extern char D_0044A890[];
extern char D_0044CF68[];

void *func_00136A48(void *arg0) {
    s32 sp[4];
    func_001D4040(sp, D_0044A890);
    ((s32 *)arg0)[0] = -1;
    ((s32 *)arg0)[1] = sp[0];
    ((s32 *)arg0)[2] = (s32)D_0044CF68;
    ((s32 *)arg0)[0x68 / 4] = 1;
    ((s32 *)arg0)[0x6C / 4] = 10;
    ((s32 *)arg0)[0x70 / 4] = 3;
    ((s32 *)arg0)[0x0C / 4] = 0;
    ((s32 *)arg0)[0x10 / 4] = 0;
    ((s32 *)arg0)[0x14 / 4] = 0;
    ((s32 *)arg0)[0x18 / 4] = 0;
    ((s32 *)arg0)[0x1C / 4] = 0;
    ((s32 *)arg0)[0x20 / 4] = 0;
    ((s32 *)arg0)[0x24 / 4] = 0;
    ((s32 *)arg0)[0x28 / 4] = 0;
    ((s32 *)arg0)[0x2C / 4] = 0;
    ((s32 *)arg0)[0x30 / 4] = 0;
    ((s32 *)arg0)[0x54 / 4] = 3;
    ((s32 *)arg0)[0x58 / 4] = 3;
    ((s32 *)arg0)[0x5C / 4] = 3;
    ((s32 *)arg0)[0x60 / 4] = 3;
    ((s32 *)arg0)[0x64 / 4] = 3;
    return arg0;
}

extern void *func_001E3820(s32, s32, void *);

void func_001A5618(void *arg0, s32 arg1) {
    s32 idx = arg1 * 4;
    void *res = func_001E3820(func_001E4280(), *(s32 *)((u8 *)arg0 + 0x20) + idx, (u8 *)arg0 + 0x70);
    if (res != NULL) {
        u8 *obj = *(u8 **)((u8 *)res + 8);
        *(s32 *)(obj + 0x48) = 0;
        if (*(s32 *)(idx + *(s32 *)((u8 *)arg0 + 0x60)) != 0) {
            *(s32 *)(obj + 0x1C) = 0;
            *(f32 *)(obj + 0x28) = 1.0f;
            *(s32 *)(obj + 0x20) = 0;
            *(f32 *)(obj + 0x24) = 1.0f;
        }
    }
}

extern char D_00449E38[];
extern char D_0044D0A8[];

void *func_00130A70(void *arg0) {
    s32 k[4];
    func_001D4040(k, D_00449E38);
    ((s32 *)arg0)[1] = k[0];
    ((s32 *)arg0)[0] = -1;
    ((s32 *)arg0)[2] = (s32)D_0044D0A8;
    ((s32 *)arg0)[0x14 / 4] = 1;
    ((s32 *)arg0)[0x0C / 4] = 0;
    ((s32 *)arg0)[0x10 / 4] = 0;
    ((s32 *)arg0)[0x18 / 4] = 0;
    return arg0;
}
