#include "context.h"

extern void func_001D4040(void *, const char *);
extern void *func_001E3820(s32, void *, void *);
extern s32 func_003F9698(const char *);
extern void func_0019B668(void *);
extern void func_003F7320(void (*)(void));
extern void func_0019AA60(void);
extern s32 D_00425D94;
extern char D_00471DA0[];
extern char D_00471DB8[];
extern u8 D_0048DDE8[];

void *func_0019ABA8(void *arg0) {
    s32 sp[4];
    s32 tmp;
    void *res;
    void *p200;

    tmp = func_001E4280();
    p200 = (u8 *)arg0 + 0x200;
    func_001D4040(sp, D_00471DA0);
    res = func_001E3820(tmp, p200, sp);
    if (res != 0) {
        return res;
    }
    if (*(s32 *)((u8 *)arg0 + 0x248) == 0) {
        func_003F9698(D_00471DB8);
        *(s32 *)((u8 *)arg0 + 0x248) = 1;
    }
    if (D_00425D94 == 0) {
        func_0019B668(D_0048DDE8);
        D_00425D94 = 1;
        func_003F7320(func_0019AA60);
    }
    return D_0048DDE8;
}
