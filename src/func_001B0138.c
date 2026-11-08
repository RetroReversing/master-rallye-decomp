#include "context.h"

extern void *func_001B0950(void *);
extern void func_001B0410(void *, s32, s32);
extern void func_0021E620(s32, s32, void *);
extern void func_001577C8(void *, void *, void *);
extern void *D_002AD408(s32);

void func_001B0138(void *arg0, s32 arg1, void *arg2) {
    s32 sp0;
    void *temp;
    f32 f0;
    void *v;
    void *vec;

    sp0 = arg1;
    temp = func_001B0950(D_002AD408(0x30));
    f0 = *(f32 *)arg2;
    v = (u8 *)temp + 0xC;
    arg1 = sp0; /* encourage lw $a1 early */
    *(f32 *)((u8 *)temp + 0xC) = f0;
    *(f32 *)((u8 *)v + 4) = *(f32 *)((u8 *)arg2 + 4);
    *(f32 *)((u8 *)v + 8) = *(f32 *)((u8 *)arg2 + 8);
    func_001B0410(arg0, arg1, 0);
    func_0021E620(sp0, 0, temp);
    vec = (u8 *)arg0 + 0x50;
    if (*(void **)((u8 *)vec + 4) != *(void **)((u8 *)vec + 8)) {
        void *end = *(void **)((u8 *)vec + 4);
        if (end != NULL) {
            *(s32 *)end = sp0;
        }
        *(u32 *)((u8 *)vec + 4) += 4;
        return;
    }
    func_001577C8(vec, *(void **)((u8 *)vec + 4), &sp0);
}
