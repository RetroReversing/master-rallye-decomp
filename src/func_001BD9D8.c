#include "context.h"

extern s32 func_001BDA18(void *, void *, s32);
extern void func_001BDBE0(void);
extern u8 D_00472F40[];

void func_0016D178(void *arg0, f32 *arg1) {
    *arg1 = *(f32 *)((u8 *)arg0 + 0x30) * 2.5f;
}

void func_001BD978(void *arg0) {
    void **p = *(void ***)((u8 *)arg0 + 4);
    if (p != *(void ***)((u8 *)arg0 + 8)) {
        do {
            void *obj = *p;
            p++;
            void *v = *(void **)((u8 *)obj + 0xDC);
            s16 off = *(s16 *)((u8 *)v + 0x20);
            void (*fn)(void *, void *) = *(void (**)(void *, void *))((u8 *)v + 0x24);
            fn((u8 *)obj + off, obj);
        } while (p != *(void ***)((u8 *)arg0 + 8));
    }
}

void func_001BD9D8(void *arg0, void *arg1) {
    if (*(s32 *)arg1 != *(s32 *)((u8 *)arg0 + 0x38)) {
        func_001BDA18(arg0, arg1, 0);
    } else {
        func_001BDBE0();
    }
}

void *func_001BDF68(void *arg0) {
    *(void **)((u8 *)arg0 + 0x00) = (void *)D_00472F40;
    *(s32 *)((u8 *)arg0 + 0x04) = 0;
    *(s32 *)((u8 *)arg0 + 0x08) = 0; /* via +4? */
    *(s32 *)((u8 *)arg0 + 0x0C) = 0;
    *(s32 *)((u8 *)arg0 + 0x10) = 0;
    *(s32 *)((u8 *)arg0 + 0x14) = 0;
    *(s32 *)((u8 *)arg0 + 0x18) = 0;
    *(s32 *)((u8 *)arg0 + 0x1C) = 0;
    *(s32 *)((u8 *)arg0 + 0x20) = 0;
    *(s32 *)((u8 *)arg0 + 0x24) = 0;
    *(s32 *)((u8 *)arg0 + 0x28) = 0;
    *(s32 *)((u8 *)arg0 + 0x34) = 0;
    *(s32 *)((u8 *)arg0 + 0x38) = 0;
    *(s32 *)((u8 *)arg0 + 0x3C) = 0;
    *(s32 *)((u8 *)arg0 + 0x40) = 0;
    *(s32 *)((u8 *)arg0 + 0x44) = 0;
    *(s32 *)((u8 *)arg0 + 0x48) = 0;
    *(s32 *)((u8 *)arg0 + 0x4C) = 0;
    *(s32 *)((u8 *)arg0 + 0x50) = 0;
    *(s32 *)((u8 *)arg0 + 0x54) = 0;
    *(s32 *)((u8 *)arg0 + 0x58) = 0;
    *(s32 *)((u8 *)arg0 + 0x5C) = 0;
    *(s32 *)((u8 *)arg0 + 0x60) = -0x64;
    *(s32 *)((u8 *)arg0 + 0x64) = 0;
    *(s32 *)((u8 *)arg0 + 0x68) = 0;
    *(s32 *)((u8 *)arg0 + 0x6C) = 0;
    *(s32 *)((u8 *)arg0 + 0x74) = 0x96;
    *(s32 *)((u8 *)arg0 + 0x78) = 0;
    return arg0;
}
