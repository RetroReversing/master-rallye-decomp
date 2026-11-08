#include "context.h"

extern void func_001D4040(void *, void *);
extern void func_001E3598(s32, void *);
extern s32 func_001E3650(s32, void *);
extern s32 func_001E4280(void);

void func_0016D178(void *arg0, f32 *arg1) {
    *arg1 = *(f32 *)((u8 *)arg0 + 0x30) * 2.5f;
}

void func_00191950(void *arg0) {
    s32 tmp;
    char buf[16];
    tmp = func_001E4280();
    func_001D4040(buf, *(void **)((u8 *)arg0 + 0x40));
    func_001E3650(tmp, buf);
}

void func_001919E8(void *arg0) {
    s32 tmp;
    char buf[16];
    tmp = func_001E4280();
    func_001D4040(buf, *(void **)((u8 *)arg0 + 0x48));
    func_001E3650(tmp, buf);
}

void func_00191A30(void *arg0) {
    s32 tmp;
    char buf[16];
    tmp = func_001E4280();
    func_001D4040(buf, *(void **)((u8 *)arg0 + 0x50));
    func_001E3650(tmp, buf);
}
