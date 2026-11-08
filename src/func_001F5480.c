#include "context.h"

extern s32 func_002AD350(f32);
extern s32 func_003F9698(char *, ...);
extern char D_00477890[];
extern char D_00477898[];
extern char D_00477990[];
extern s32 func_001DF220(void *);
extern s32 func_001F5100(void **, s32, s32, s32);

/* func_0016D178 */
void func_0016D178(void *arg0, f32 *arg1) {
    *arg1 = *(f32 *)((u8 *)arg0 + 0x30) * 2.5f;
}

/* func_001F4C68 */
void func_001F4C68(void *arg0, void *arg1) {
    s32 v20;
    s32 v19;
    s32 v18;
    s32 v17;
    s32 v9;
    char *s;
    void *p;

    p = (u8 *)arg1 + 0x1C;
    v20 = *(s32 *)((u8 *)arg1 + 0x14);
    v19 = func_002AD350(*(f32 *)((u8 *)arg1 + 0x1C));
    v18 = func_002AD350(*(f32 *)((u8 *)p + 4));
    v17 = func_002AD350(*(f32 *)((u8 *)p + 8));
    v9 = func_002AD350(*(f32 *)((u8 *)arg1 + 0x28));
    if (*(s32 *)((u8 *)arg1 + 0x18) != 0) {
        s = D_00477890;
    } else {
        s = D_00477898;
    }
    func_003F9698(D_00477990, v20, v19, v18, v17, v9, s);
}

/* func_001F5100 */
s32 func_001F5100(void **arg0, s8 arg1, s8 arg2, s16 arg3) {
    struct {
        s8 b0;
        s8 b1;
        s16 h2;
    } tmp;
    void *obj;
    void *vt;

    obj = *arg0;
    vt = *(void **)((u8 *)obj + 8);
    tmp.b0 = arg1;
    tmp.b1 = arg2;
    tmp.h2 = arg3;
    return ((s32 (*)(void *, void *, s32)) *(void **)((u8 *)vt + 0x74))((u8 *)obj + *(s16 *)((u8 *)vt + 0x70), &tmp, 4);
}

/* func_001F5480 */
s32 func_001F5480(void **arg0, void *arg1) {
    s32 r;
    struct {
        s32 a;
        s32 b;
    } tmp;
    void *obj;
    void *vt;

    r = func_001F5100(arg0, 1, 1, func_001DF220(arg1));
    if (r == 0) {
        return 0;
    }
    tmp.a = *(s32 *)((u8 *)arg1 + 0x1C);
    tmp.b = *(s32 *)((u8 *)arg1 + 0x20);
    obj = *arg0;
    vt = *(void **)((u8 *)obj + 8);
    return ((s32 (*)(void *, void *, s32)) *(void **)((u8 *)vt + 0x74))((u8 *)obj + *(s16 *)((u8 *)vt + 0x70), &tmp, 8);
}
