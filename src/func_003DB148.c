#include "context.h"

extern void *func_002B1FC0(s32);
extern void *func_003DB0C0(s32);
extern void func_003DB120(void *);
extern void func_003DB148(void *, void *);

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

    temp_16 = 3;
    if (2 < arg0) {
        temp_16 = arg0;
    }
    temp_17 = 1 << temp_16;
    temp_2 = (void *)func_002B1FC0((temp_17 * 4) + 0x14);
    *(s32 *)((u8 *)temp_2 + 4) = temp_16;
    *(s32 *)((u8 *)temp_2 + 8) = temp_17;
    *(s32 *)((u8 *)temp_2 + 0x10) = 0;
    *(u16 *)((u8 *)temp_2 + 0xE) = 0;
    *(u16 *)((u8 *)temp_2 + 0xC) = 0;
    return temp_2;
}

void func_003DB148(void *arg0, void *arg1) {
    s32 count;
    u8 *src;
    u8 *dst;

    count = *(s32 *)((u8 *)arg1 + 0x10);
    dst = (u8 *)arg0 + 0x14;
    *(s32 *)((u8 *)arg0 + 0x10) = count;
    src = (u8 *)arg1 + 0x14;
    count = count - 1;
    *(u16 *)((u8 *)arg0 + 0xE) = *(u16 *)((u8 *)arg1 + 0xE);
    if (count < 0) {
        return;
    }
    do {
        *(s32 *)dst = *(s32 *)src;
        count--;
        src += 4;
        dst += 4;
    } while (count >= 0);
}

void *func_003DB190(void *arg0, s32 arg1) {
    void *ret;
    void *new_ptr;

    if (arg0 == 0) {
        return func_003DB0C0(arg1);
    }
    if (*(s32 *)((u8 *)arg0 + 4) < arg1) {
        new_ptr = func_003DB0C0(arg1);
        func_003DB148(new_ptr, arg0);
        func_003DB120(arg0);
        ret = new_ptr;
    } else {
        ret = arg0;
    }
    return ret;
}
