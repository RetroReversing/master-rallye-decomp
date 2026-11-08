#include "context.h"

extern void func_001D4040(void *a0, const char *a1);
extern void *func_001E3820(s32 a0, void *a1, void *a2);
extern void func_001D77A0(s32 a0, void *a1, void *a2);
extern char *func_001D4010(char *a0);
extern void func_003FA310(char *a0, const char *fmt, char *a2, s32 a3);

extern char D_004724C8[];
extern void *D_004732E8;
extern char D_00472030[];

void func_0016D178(void *arg0, f32 *arg1) {
    *arg1 = *(f32 *)((u8 *)arg0 + 0x30) * 2.5f;
}

void func_001A08C0(void *arg0) {
    s32 tmp;
    s32 sp[2];
    void *res;

    if (*(s32 *)((u8 *)arg0 + 0x14) != -1) {
        tmp = func_001E4280();
        res = func_001E3820(tmp, (u8 *)arg0 + 0xC, (u8 *)arg0 + 0x10);
        if (*(f32 *)((u8 *)*(void **)((u8 *)res + 8) + 0x24) > 0.1f) {
            sp[0] = 2;
            func_001D77A0(*(s32 *)((u8 *)arg0 + 0x18), (u8 *)arg0 + 0x14, sp);
        } else {
            sp[1] = 1;
            func_001D77A0(*(s32 *)((u8 *)arg0 + 0x18), (u8 *)arg0 + 0x14, &sp[1]);
        }
    }
}

void *func_001A0960(void *arg0) {
    u32 sp[4];
    s32 *p;
    s32 i;

    func_001D4040(sp, D_004724C8);
    *(s32 *)((u8 *)arg0 + 0x0) = -1;
    *(void **)((u8 *)arg0 + 0x8) = D_004732E8;
    *(u32 *)((u8 *)arg0 + 0x4) = sp[0];
    p = (s32 *)((u8 *)arg0 + 0xC);
    i = 3;
    do {
        *p = 0;
        i--;
        p++;
    } while (i != -1);
    return arg0;
}

void func_001A0A08(void *arg0, void *arg1) {
    char buf[128];
    s32 i;
    char *base;
    char *out;

    if (arg1 != 0) {
        base = (char *)arg1 + 0x5C;
        out = (char *)arg0 + 0xC;
        for (i = 0; i < 4; i++) {
            func_003FA310(buf, D_00472030, func_001D4010(base), i);
            func_001D4040(out, buf);
            out += 4;
        }
    }
}
