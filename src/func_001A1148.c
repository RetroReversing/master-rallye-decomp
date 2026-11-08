#include "context.h"

/* func_0016D178: try to influence scheduling (unlikely to add nop) */
void func_0016D178(void *arg0, f32 *arg1) {
    f32 v = *(f32 *)((u8 *)arg0 + 0x30);
    *arg1 = v * 2.5f;
}

/* func_001A0D68 */
extern void *D_00473290;
extern void *D_0044DCD8;
extern void D_002AD390(void *);

void *func_001A0D68(void *arg0, int arg1) {
    *(void **)((u8 *)arg0 + 0xC) = &D_00473290;
    *(void **)((u8 *)arg0 + 8) = &D_0044DCD8;
    if (arg1 & 1) {
        D_002AD390(arg0);
    }
    return arg0;
}

/* func_001A0DA8 */
extern int func_001D4010(void *);
extern void func_001D4040(void *, void *);
extern void func_003FA310(void *, char *, int, int);
extern char D_00472030[];

void func_001A0DA8(void *arg0, void *arg1) {
    char sp[0x70];
    if (arg1) {
        void *base = (u8 *)arg1 + 0x5C;
        void *out = (u8 *)arg0 + 0x10;
        int i = 0;
        do {
            func_003FA310(sp, D_00472030, func_001D4010(base), i);
            func_001D4040(out, sp);
            i++;
            out = (u8 *)out + 4;
        } while (i < 4);
    }
}

/* func_001A1148 */
extern void *func_002C3C48(void);
extern void *func_001E9E18(void *, void *);
extern void *func_001EA098(void *);
extern void *func_001E9508(void *, void *);

void *func_001A1148(void *arg0, void *arg1, void *arg2) {
    void *tmp = func_001E9E18(func_002C3C48(), arg2);
    *(int *)arg0 = *(int *)func_001E9508(func_001EA098(func_002C3C48()), tmp);
    return arg0;
}
