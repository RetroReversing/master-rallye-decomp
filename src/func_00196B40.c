#include "context.h"

extern void func_00196358(void);
extern void func_001D2900(void *arg0, s32 arg1);
extern void func_001D4040(void *arg0, void *arg1);
extern void func_001E3650(s32 arg0, void *arg1);
extern s32 func_001E4280(void);

void func_00196B40(void *arg0) {
    s32 tmp;
    char buf[16];

    do { } while (0);
    func_00196358();
    func_001D2900((char *)arg0 + 0xC, *(s32 *)((char *)arg0 + 0x28));
    tmp = func_001E4280();
    func_001D4040(buf, *(void **)((char *)arg0 + 0xC));
    func_001E3650(tmp, buf);
}

void func_00196C10(void *arg0) {
    s32 tmp;
    char buf[16];

    do { } while (0);
    func_00196358();
    func_001D2900((char *)arg0 + 0xC, *(s32 *)((char *)arg0 + 0x2C));
    tmp = func_001E4280();
    func_001D4040(buf, *(void **)((char *)arg0 + 0xC));
    func_001E3650(tmp, buf);
}
