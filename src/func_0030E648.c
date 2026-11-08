#include "context.h"

extern void func_0030C350(s32);
extern void func_0030C3C0(void);
extern void func_0030C508(s32);
extern void func_0030C570(s32);

void func_0030E6F8(void) {
    func_0030C350(0x35);
    func_0030C3C0();
}

void func_0030E698(s32 arg0, s32 arg1, s32 arg2) {
    func_0030C350(0x34);
    func_0030C570(arg0);
    func_0030C570(arg1);
    func_0030C570(arg2);
    func_0030C3C0();
}

void func_0030E648(s32 arg0, s32 arg1) {
    s32 a = arg0 & 0xFFFF;
    s32 b = arg1 & 0xFFFF;
    func_0030C350(0x33);
    func_0030C508(a);
    func_0030C508(b);
    func_0030C3C0();
}

extern const char D_00484F60[];
extern void *func_002BF428(const char *);
extern void *func_0030EF88(void *);

void *func_0030E8D0(void *arg0) {
    func_002BF428(D_00484F60);
    *(void **)((u8 *)arg0 + 0xC) = (void *)0x00484F80;
    func_0030EF88(arg0);
    return arg0;
}
