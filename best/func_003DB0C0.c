#include "context.h"

extern void *func_003D6EB0(s32);
extern void *func_003DE2F0(void *);
extern void *func_003DE5D0(void *, s32);
extern void *func_003DAB38(void *, s32, s32);
extern void func_003D6EE8(void *, s32);
extern void func_002AE2F0(void);
extern void func_002AE718(void);
extern void *func_002B1FC0(s32);
extern void *D_00489000;

void *func_003DA7E0(void *arg0, s32 arg1) {
    void *p = arg0;
    func_003D6EB0(0);
    *(void **)((u8 *)p + 0x50) = &D_00489000;
    func_003DE2F0(p);
    func_003DE5D0(p, arg1);
    func_002AE2F0();
    func_003D6EE8(p, 0);
    func_002AE718();
    return p;
}

void *func_003DA868(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    void *p = arg0;
    func_003D6EB0(0);
    *(void **)((u8 *)p + 0x50) = &D_00489000;
    func_003DE2F0(p);
    func_003DE5D0(p, arg1);
    func_003DAB38(p, arg2, arg3);
    func_002AE2F0();
    func_003D6EE8(p, 0);
    func_002AE718();
    return p;
}

void *func_003DAD78(void *arg0, void **arg1) {
    void *t2;
    s32 t3;
    
    if (arg1 == arg0) {
        return arg0;
    }
    
    t3 = **(s32 **)arg1;
    t2 = *(void **)arg0;
    
    if (t3 == 0) {
        *(u8 *)((u8 *)t2 + 0x1A) = 4;
    } else {
        *(u8 *)((u8 *)t2 + 0x1A) = 0;
    }
    
    *(s32 *)t2 = t3;
    *(u16 *)((u8 *)t2 + 0x18) = 0x20;
    *(s64 *)((u8 *)t2 + 0x10) = 0x11;
    *(s32 *)((u8 *)t2 + 0x1C) = 6;
    *(s32 *)((u8 *)t2 + 0x20) = 0;
    *(u8 *)((u8 *)t2 + 0x1B) = 0;
    *(s32 *)((u8 *)t2 + 0x4) = 0;
    *(s32 *)((u8 *)t2 + 0x8) = 0;
    
    return arg0;
}

void *func_003DB0C0(s32 arg0) {
    s32 temp_16;
    s32 temp_17;
    void *temp_2;

    if (2 < arg0) {
        temp_16 = arg0;
    } else {
        temp_16 = 3;
    }
    temp_17 = 1 << temp_16;
    temp_2 = func_002B1FC0((temp_17 * 4) + 0x14);
    *(s32 *)((u8 *)temp_2 + 4) = temp_16;
    *(s32 *)((u8 *)temp_2 + 8) = temp_17;
    *(s32 *)((u8 *)temp_2 + 0x10) = 0;
    *(u16 *)((u8 *)temp_2 + 0xE) = 0;
    *(u16 *)((u8 *)temp_2 + 0xC) = 0;
    return temp_2;
}
