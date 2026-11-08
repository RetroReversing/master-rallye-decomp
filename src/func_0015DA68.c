#include "context.h"

extern s32 func_00191630(s32 arg0);
extern s32 func_00193B60(void);
extern void func_001D4040(void *arg0, const char *arg1);
extern s32 func_002A2458(void);
extern void func_002A1D30(s32 arg0, void *arg1, s32 arg2, s32 arg3);
extern void func_003F9698(const char *fmt, ...);

extern s32 D_0042D444;
extern char D_0044E918[];
extern char D_0044E920[];

void func_0015DA68(void) {
    s32 r;
    s32 t;
    s32 sp[4];

    D_0042D444 = 0;
    r = func_00193B60();
    r = func_00191630(r);
    func_003F9698(D_0044E918, r);
    func_001E4280();
    t = func_002A2458();
    func_001D4040(sp, D_0044E920);
    func_002A1D30(t, sp, 1, 1);
}
