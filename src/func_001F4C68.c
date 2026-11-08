#include "context.h"

extern s32 func_002AD350(f32);
extern s32 func_003F9698(char *, ...);
extern char D_00477890[];
extern char D_00477898[];
extern char D_00477990[];

void func_001F4C68(void *arg0, void *arg1) {
    char *fmt;
    s32 v20;
    s32 v19;
    s32 v18;
    s32 v17;
    s32 v9;
    char *s;
    f32 *p;

    fmt = D_00477990;
    p = (f32 *)((u8 *)arg1 + 0x1C);
    v20 = *(s32 *)((u8 *)arg1 + 0x14);
    v19 = func_002AD350(*p);
    v18 = func_002AD350(p[1]);
    v17 = func_002AD350(p[2]);
    v9 = func_002AD350(*(f32 *)((u8 *)arg1 + 0x28));
    if (*(s32 *)((u8 *)arg1 + 0x18) != 0) {
        s = D_00477890;
    } else {
        s = D_00477898;
    }
    func_003F9698(fmt, v20, v19, v18, v17, v9, s);
}
