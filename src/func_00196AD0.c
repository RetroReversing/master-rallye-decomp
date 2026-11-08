#include "context.h"

extern void func_00196358(void *arg0, void *arg1);
extern void func_001D2900(void *arg0, void *arg1);
extern void func_001D4040(void *arg0, void *arg1);
extern void func_001E3610(s32 arg0, void *arg1);
extern void func_001E3E90(s32 arg0, void *arg1, float arg2);
extern void func_001E3EC0(s32 arg0, void *arg1, void *arg2);
extern s32 func_001E4280(void);

void func_0016D178(void *arg0, f32 *arg1) {
    *arg1 = *(f32 *)((u8 *)arg0 + 0x30) * 2.5f;
}

void func_00196A00(void *arg0, float arg2) {
    s32 tmp;
    char buf[16];

    func_00196358(arg0, 0);
    func_001D2900((u8 *)arg0 + 0xC, *(void **)((u8 *)arg0 + 0x24));
    tmp = func_001E4280();
    func_001D4040(buf, *(void **)((u8 *)arg0 + 0xC));
    func_001E3E90(tmp, buf, arg2);
}

void func_00196A70(void *arg0) {
    s32 tmp;
    char buf[16];

    func_00196358(arg0, 0);
    func_001D2900((u8 *)arg0 + 0xC, *(void **)((u8 *)arg0 + 0x24));
    tmp = func_001E4280();
    func_001D4040(buf, *(void **)((u8 *)arg0 + 0xC));
    func_001E3610(tmp, buf);
}

void func_00196AD0(void *arg0, void *arg1, void *arg2) {
    s32 tmp;
    char buf[16];

    func_00196358(arg0, arg1);
    func_001D2900((u8 *)arg0 + 0xC, *(void **)((u8 *)arg0 + 0x28));
    tmp = func_001E4280();
    func_001D4040(buf, *(void **)((u8 *)arg0 + 0xC));
    func_001E3EC0(tmp, buf, arg2);
}
