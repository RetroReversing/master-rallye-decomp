#include "context.h"

void func_0016D178(void *arg0, f32 *arg1) {
    *arg1 = *(f32 *)((u8 *)arg0 + 0x30) * 2.5f;
}

extern s32 func_001D4040(void *a, s32 b);
extern void func_001E3EC0(s32 a, void *b, s32 c);

void func_00191B60(void *arg0, s32 arg1) {
    s32 temp_17;
    s32 sp[4];

    temp_17 = func_001E4280();
    func_001D4040(sp, ((s32 *)arg0)[5]);
    func_001E3EC0(temp_17, sp, arg1);
}

extern s32 func_001D2458(void *a, s32 b);
extern void func_001E3FE0(s32 a, void *b, void *c);
extern void D_002AD390(s32 a);
extern void func_001E33C8(s32 a, void *b, s32 c);

void func_00191BB8(void *arg0, void *arg1) {
    s32 temp_17;
    s32 temp_16;
    s32 sp[4];

    temp_17 = func_001E4280();
    func_001D2458(sp, *(s32 *)arg1);
    func_001E3FE0(temp_17, (s32 *)arg0 + 6, sp);
    D_002AD390(sp[0]);
    temp_16 = func_001E4280();
    func_001D4040(sp, ((s32 *)arg0)[6]);
    func_001E33C8(temp_16, sp, 0);
}

void func_00191C50(void *arg0, s32 arg1) {
    s32 temp_17;
    s32 sp[4];

    temp_17 = func_001E4280();
    func_001D4040(sp, ((s32 *)arg0)[7]);
    func_001E3EC0(temp_17, sp, arg1);
}
