#include "context.h"

void func_0016D178(void *arg0, f32 *arg1) {
    *arg1 = *(f32 *)((u8 *)arg0 + 0x30) * 2.5f;
}

extern void func_001DF368(void *, void *);
extern void D_002AD390(void *);
extern u32 D_004771E0[];

void func_001DF180(void *arg0, s32 arg1) {
    void *node;
    void *next;

    *(u32 *)((u8 *)arg0 + 0x10) = (u32)D_004771E0;
    if (*(void **)((u8 *)arg0 + 8) != NULL) {
        func_001DF368(*(void **)((u8 *)arg0 + 8), arg0);
    }
    node = *(void **)arg0;
    if (node != NULL) {
        do {
            next = *(void **)((u8 *)node + 4);
            if (node != NULL) {
                void *vt = *(void **)((u8 *)node + 0x10);
                void (*fn)(void *, s32) = *(void (**)(void *, s32))((u8 *)vt + 0xC);
                s16 off = *(s16 *)((u8 *)vt + 8);
                fn((void *)((u8 *)node + off), 3);
            }
            node = next;
        } while (node != NULL);
    }
    if (arg1 & 1) {
        D_002AD390(arg0);
    }
}

s32 func_001DF220(void *arg0) {
    void *node = *(void **)arg0;
    s32 count = 0;
    if (node != NULL) {
        do {
            node = *(void **)((u8 *)node + 4);
            count++;
        } while (node != NULL);
    }
    return count;
}

s32 func_001DF258(void *arg0) {
    void *node = *(void **)arg0;
    s32 count = 1;
    if (node != NULL) {
        do {
            s32 r = func_001DF258(node);
            node = *(void **)((u8 *)node + 4);
            count += r;
        } while (node != NULL);
    }
    return count;
}
