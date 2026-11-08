#include "context.h"

/* func_0016D178 - known nop scheduling issue */
void func_0016D178(void *arg0, f32 *arg1) {
    *arg1 = *(f32 *)((u8 *)arg0 + 0x30) * 2.5f;
}

/* func_00125128 */
extern void func_0011DF88(s32, s32);
extern void D_002AD390(void *);
extern char D_0044D368[];
extern char D_0044DCD8[];

void func_00125128(void *arg0, s32 arg1) {
    s32 temp;
    ((s32 *)arg0)[2] = (s32)D_0044D368;
    temp = ((s32 *)arg0)[3];
    if (temp != 0) {
        func_0011DF88(temp, 3);
    }
    D_002AD390((void *)((s32 *)arg0)[4]);
    ((s32 *)arg0)[2] = (s32)D_0044DCD8;
    if (arg1 & 1) {
        D_002AD390(arg0);
    }
}

/* func_001250C8 */
extern void func_001D4040(void *, const char *);
extern char D_00448410[];

void *func_001250C8(void *arg0) {
    s32 k;
    func_001D4040(&k, D_00448410);
    ((s32 *)arg0)[1] = k;
    ((s32 *)arg0)[2] = (s32)D_0044D368;
    ((s32 *)arg0)[5] = -1;
    ((s32 *)arg0)[0] = -1;
    ((s32 *)arg0)[4] = 0;
    ((s32 *)arg0)[3] = 0;
    return arg0;
}

/* func_00124730 */
extern char D_004482E8[];
extern char D_0044D3A8[];

void *func_00124730(void *arg0) {
    s32 k;
    func_001D4040(&k, D_004482E8);
    ((s32 *)arg0)[2] = (s32)D_0044D3A8;
    ((s32 *)arg0)[1] = k;
    ((s32 *)arg0)[3] = 1;
    ((s32 *)arg0)[5] = -1;
    ((s32 *)arg0)[0] = -1;
    ((s32 *)arg0)[4] = 0;
    return arg0;
}
