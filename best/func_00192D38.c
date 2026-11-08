#include "context.h"

extern void func_00192130(void);
extern void func_001D2900(void *, s32);
extern void func_001D4040(void *, s32);
extern void func_001E40D0(s32, void *, void *);

typedef struct {
    u8 pad[0xC];
    s32 unkC;
    u8 pad2[0x8C - 0x10];
    s32 unk8C;
} S_00192C50;

typedef struct {
    f32 x;
    f32 y;
    f32 z;
    f32 w;
} Vec4f;

void func_00192D38(S_00192C50 *arg0, s32 arg1, Vec4f *arg2) {
    u8 sp[0x10];
    Vec4f v;
    S_00192C50 *s0 = arg0;
    Vec4f *s1 = arg2;
    s32 s2;
    (void)arg1;
    func_00192130();
    func_001D2900(&s0->unkC, s0->unk8C);
    s2 = func_001E4280();
    func_001D4040(sp, s0->unkC);
    v.w = s1->w;
    v.x = s1->x;
    v.y = s1->y;
    v.z = s1->z;
    func_001E40D0(s2, sp, &v);
}
