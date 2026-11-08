#include "context.h"

void *func_003CD828(void *arg);

typedef struct {
    u32 unk0;
    u8 pad[0x16];
    u8 unk1A;
} S_func_003D7B00;

void func_003D7B00(S_func_003D7B00 *arg0, s32 arg1) {
    s32 v = arg0->unk0;
    if (v == 0) {
        arg1 |= 4;
    }
    arg0->unk1A = (u8)arg1;
}

typedef struct {
    u8 pad[0x8];
    s32 count;
    s32 unkC;
} S_func_003D0EA8;

void *func_003D0EA8(S_func_003D0EA8 *arg0) {
    if (arg0->unkC) {
        return func_003CD828(arg0);
    }
    arg0->count++;
    return (void *)((u8 *)arg0 + 0x10);
}

extern u8 D_00436208[0x10];
typedef struct {
    u8 pad[0x8];
    s32 count;
    s32 unkC;
} S_D_00436208;

void **func_003D0D88(void **arg0) {
    void *var;
    S_D_00436208 *p = (S_D_00436208 *)D_00436208;
    if (p->unkC) {
        var = func_003CD828(p);
    } else {
        p->count++;
        var = (void *)(D_00436208 + 0x10);
    }
    *arg0 = var;
    return arg0;
}

void **func_003D0D30(void **arg0, void **arg1) {
    void *var;
    void *temp;
    S_D_00436208 *p;
    var = *arg1;
    temp = (void *)((u8 *)var - 0x10);
    p = (S_D_00436208 *)temp;
    if (p->unkC) {
        var = func_003CD828(p);
    } else {
        p->count++;
        var = (void *)((u8 *)p + 0x10);
    }
    *arg0 = var;
    return arg0;
}
