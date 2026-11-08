#include "context.h"

extern void func_0021E620(void *, s32, s32);
extern s32 func_003FA310(void *, const char *, s32);
extern void func_001D4040(void *, void *);
extern void *func_0021F4B0(void);
extern void *func_0021E9C0(void *, void *);
extern void func_0019AEA8(void *, void *);
extern char D_0044F040[];
extern char D_0044F0A0[];

void func_0019B1B0(void *arg0, void *arg1) {
    char buf[32];
    s32 v;
    void *r;
    void *p20c;

    func_0021E620(arg1, 3, 0);
    v = *(s32 *)((u8 *)arg0 + 0x224) + 1;
    *(s32 *)((u8 *)arg0 + 0x224) = v;
    if (v >= *(s32 *)((u8 *)arg0 + 0x22C)) {
        *(s32 *)((u8 *)arg0 + 0x224) = 0;
    }
    func_003FA310(buf, D_0044F040, *(s32 *)((u8 *)arg0 + 0x224));
    p20c = (u8 *)arg0 + 0x20C;
    func_001D4040(p20c, buf);
    func_003FA310(buf, D_0044F0A0, *(s32 *)((u8 *)arg0 + 0x224));
    func_001D4040((u8 *)arg0 + 0x214, buf);
    r = func_0021E9C0(func_0021F4B0(), p20c);
    if (r != 0) {
        func_0019AEA8(arg0, r);
    }
}
