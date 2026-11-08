#include "context.h"

/* func_0016D178 - known nop issue */
void func_0016D178(void *arg0, f32 *arg1) {
    *arg1 = *(f32 *)((u8 *)arg0 + 0x30) * 2.5f;
}

/* func_001273C8 */
extern void *func_00127378(void *);
extern void func_001D4040(void *, void *);
extern void func_00126BC0(void *);
extern char D_00448A90[];
extern char D_00448748[];

void func_001273C8(void *arg0) {
    s32 r;
    if (((s32 *)func_00127378(D_00448A90))[0xC] != 0) { /* 0x30 / 4 = 0xC */
        s32 ctx = func_001E4280();
        char buf[0x20];
        func_001D4040(buf, D_00448748);
        r = func_001E3650(ctx, (s32)buf);
        if (r == 0) {
            func_00126BC0(arg0);
            ((s32 *)arg0)[0x15] = 1; /* 0x54 */
        } else {
            ((s32 *)arg0)[0xC] = 0;  /* 0x30 */
            ((s32 *)arg0)[0x15] = 1; /* 0x54 */
            ((s32 *)arg0)[0xF] = 0;  /* 0x3C */
        }
    }
}

/* func_00127378 */
extern s32 func_0021F4B0(void);
extern void *func_0021E9C0(s32, void *);

s32 func_00127378(s32 arg0) {
    s32 temp;
    char buf[0x20];
    temp = func_0021F4B0();
    func_001D4040(buf, (void *)arg0);
    return ((s32 *)func_0021E9C0(temp, buf))[2]; /* 0x8 */
}

/* func_00126C18 */
extern s32 func_002B4740(void);
extern s32 func_002B2688(s32, s32, s32);
extern void func_003F9698(void *, ...);
extern char D_00448870[];
extern char D_00448888[];

void func_00126C18(void *arg0) {
    s32 ret;
    func_003F9698(D_00448870);
    ret = func_002B2688(func_002B4740(), 0, 0);
    func_003F9698(D_00448888, ret);
    if (ret == 0) {
        ((s32 *)arg0)[5] = 0;  /* 0x14 */
    } else {
        ((s32 *)arg0)[5] = 2;  /* 0x14 */
    }
    ((s32 *)arg0)[8] = 1;      /* 0x20 */
}
