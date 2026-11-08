#include "context.h"

extern void func_0011E650(s32, s32, s32);
extern void func_001D4040(void *, void *);
extern s32 func_001E3598(s32, void *);
extern char D_00446670[];

typedef struct {
    u8 pad[0xC];
    s32 unkC;
} Func001246B8Arg0;

void func_001246B8(Func001246B8Arg0 *arg0) {
    s32 temp;
    char buf[0x10];

    temp = func_001E4280();
    func_001D4040(buf, D_00446670);
    if (func_001E3598(temp, buf) != 0) {
        func_0011E650(arg0->unkC, 5, 0);
    } else {
        func_0011E650(arg0->unkC, 3, 0);
    }
}

extern char D_004730C0[];

void *func_001B5D58(void *arg0, s32 *arg1) {
    *(s32 *)((u8 *)arg0 + 0x04) = 0;
    *(s32 *)((u8 *)arg0 + 0x08) = 0;
    *(void **)((u8 *)arg0 + 0x00) = D_004730C0;
    *(s32 *)((u8 *)arg0 + 0x10) = 0;
    *(s32 *)((u8 *)arg0 + 0x0C) = 0;
    *(f32 *)((u8 *)arg0 + 0x14) = 1.0f;
    *(s32 *)((u8 *)arg0 + 0x1C) = 0;
    *(s32 *)((u8 *)arg0 + 0x18) = 0;
    *(s32 *)((u8 *)arg0 + 0x20) = 0;
    *(f32 *)((u8 *)arg0 + 0x28) = 1.0f;
    *(s32 *)((u8 *)arg0 + 0x24) = 0;
    *(f32 *)((u8 *)arg0 + 0x2C) = 1.0f;
    *(f32 *)((u8 *)arg0 + 0x34) = 0.033333335f;
    *(s32 *)((u8 *)arg0 + 0x38) = 1;
    *(s32 *)((u8 *)arg0 + 0x30) = 0;
    *(s32 *)((u8 *)arg0 + 0x04) = *arg1;
    return arg0;
}

extern char D_00473088[];
extern void func_001B6168(void *);

void *func_001B6098(void *arg0, s32 *arg1, f32 *arg2) {
    *(void **)((u8 *)arg0 + 0x00) = D_00473088;
    *(s32 *)((u8 *)arg0 + 0x08) = 0;
    *(s32 *)((u8 *)arg0 + 0x04) = *arg1;
    *(s32 *)((u8 *)arg0 + 0x10) = 0;
    *(s32 *)((u8 *)arg0 + 0x0C) = 0;
    *(s32 *)((u8 *)arg0 + 0x14) = 0;
    *(s32 *)((u8 *)arg0 + 0x18) = 0;
    *(f32 *)((u8 *)arg0 + 0x1C) = arg2[0];
    *(f32 *)((u8 *)arg0 + 0x20) = arg2[1];
    *(f32 *)((u8 *)arg0 + 0x24) = arg2[2];
    func_001B6168((u8 *)arg0 + 0x1C);
    return arg0;
}
