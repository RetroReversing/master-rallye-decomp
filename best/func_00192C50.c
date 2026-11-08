#include "context.h"

extern void func_00192130(void);
extern void func_001D2900(void *, s32);
extern void func_001D4040(void *, s32);
extern void func_001E3EC0(s32, void *, s32);
extern void func_001E3D10(s32, void *, s32);
extern void func_001E33C8(s32, void *, s32);
extern void func_001E40D0(s32, void *, void *);

typedef struct {
    u8 pad[0xC];
    s32 unkC;
    u8 pad2[0x80 - 0x10];
    s32 unk80;
    s32 unk84;
    u8 pad3[0x8C - 0x88];
    s32 unk8C;
} S_00192C50;

typedef struct {
    f32 x, y, z, w;
} Vec4f;

void func_0016D178(void *arg0, f32 *arg1) {
    *arg1 = *(f32 *)((u8 *)arg0 + 0x30) * 2.5f;
}

void func_00192C50(S_00192C50 *arg0, s32 arg1, s32 arg2) {
    u8 sp[0x10];
    (void)arg1;
    func_00192130();
    func_001D2900(&arg0->unkC, arg0->unk80);
    func_001D4040(sp, arg0->unkC);
    func_001E3D10(func_001E4280(), sp, arg2);
    func_001E33C8(func_001E4280(), sp, 0);
}

void func_00192CC8(S_00192C50 *arg0, s32 arg1, s32 arg2) {
    u8 sp[0x10];
    s32 tmp;
    (void)arg1;
    func_00192130();
    func_001D2900(&arg0->unkC, arg0->unk84);
    tmp = func_001E4280();
    func_001D4040(sp, arg0->unkC);
    func_001E3EC0(tmp, sp, arg2);
}

void func_00192D38(S_00192C50 *arg0, s32 arg1, Vec4f *arg2) {
    Vec4f spv;
    u8 sp[0x10];
    s32 tmp;
    (void)arg1;
    func_00192130();
    func_001D2900(&arg0->unkC, arg0->unk8C);
    tmp = func_001E4280();
    func_001D4040(sp, arg0->unkC);
    spv = *arg2;
    func_001E40D0(tmp, sp, &spv);
}
