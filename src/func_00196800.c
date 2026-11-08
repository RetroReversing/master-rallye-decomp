#include "context.h"

extern void func_00196358(void *arg0, void *arg1);
extern void func_001D2900(void *arg0, void *arg1);
extern void func_001D4040(void *arg0, void *arg1);
extern void func_001E3EC0(s32 arg0, void *arg1, void *arg2);
extern void func_001E3650(s32 arg0, void *arg1);

void func_0016D178(void *arg0, f32 *arg1) {
    *arg1 = *(f32 *)((u8 *)arg0 + 0x30) * 2.5f;
}

void func_00196790(void *arg0, void *arg1, void *arg2) {
    void *tmp;
    char sp[16];

    func_00196358(arg0, arg1);
    func_001D2900((u8 *)arg0 + 0xC, *(void **)((u8 *)arg0 + 0x18));
    tmp = (void *)func_001E4280();
    func_001D4040(sp, *(void **)((u8 *)arg0 + 0xC));
    func_001E3EC0((s32)tmp, sp, arg2);
}

void func_00196800(void *arg0, void *arg1) {
    void *tmp;
    char sp[16];

    func_00196358(arg0, arg1);
    func_001D2900((u8 *)arg0 + 0xC, *(void **)((u8 *)arg0 + 0x18));
    tmp = (void *)func_001E4280();
    func_001D4040(sp, *(void **)((u8 *)arg0 + 0xC));
    func_001E3650((s32)tmp, sp);
}

void func_00196860(void *arg0, void *arg1, void *arg2) {
    void *tmp;
    char sp[16];

    func_00196358(arg0, arg1);
    func_001D2900((u8 *)arg0 + 0xC, *(void **)((u8 *)arg0 + 0x1C));
    tmp = (void *)func_001E4280();
    func_001D4040(sp, *(void **)((u8 *)arg0 + 0xC));
    func_001E3EC0((s32)tmp, sp, arg2);
}
