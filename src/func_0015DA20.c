#include "context.h"

extern s32 func_00191630(s32 arg0);
extern s32 func_00193B60(void);
extern void func_001D4040(void *arg0, const char *arg1);
extern s32 func_002A2458(void);
extern void func_002A1D30(s32 arg0, void *arg1, s32 arg2, s32 arg3);
extern s32 func_002A1700(void);
extern void func_002A10A0(s32 arg0, void *arg1, s32 arg2, s32 arg3);
extern void func_003F9698(const char *fmt, ...);
extern void *func_0017E500(void *arg0, s32 arg1, s32 arg2);

extern s32 D_0042D444;
extern char D_0044E918[];
extern char D_0044E920[];
extern char D_0044E910[];
extern char D_0046F6D0[];
extern char D_0046F6E0[];

void func_0016D178(void *arg0, f32 *arg1) {
    f32 v = *(f32 *)((u8 *)arg0 + 0x30);
    f32 c = 2.5f;
    *arg1 = v * c;
}

void func_0015DA68(void) {
    s32 v;
    s32 t;
    s32 sp[4];

    D_0042D444 = 0;
    func_00193B60();
    v = func_00191630(0); /* placeholder */
    func_003F9698(D_0044E918, v);
    func_001E4280();
    t = func_002A2458();
    func_001D4040(sp, D_0044E920);
    func_002A1D30(t, sp, 1, 1);
}

void func_0015DA20(void) {
    s32 sp[4];
    s32 t;

    t = func_002A1700();
    func_001D4040(sp, D_0044E910);
    func_002A10A0(t, sp, 1, 1);
}

void func_0017E358(void *arg0, s32 arg1, s32 arg2, void *arg3) {
    void *p;

    p = func_0017E500(arg0, arg1, arg2);
    if (p != 0) {
        func_001D4040(arg3, *(char **)((u8 *)p + 8));
        return;
    }
    func_001D4040(arg3, D_0046F6D0);
    func_003F9698(D_0046F6E0, arg1);
}
