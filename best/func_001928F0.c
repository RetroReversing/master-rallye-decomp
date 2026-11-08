#include "context.h"

/* --- prototypes used by this batch --- */
extern void func_00192130(void);
extern void func_001D2900(void *, s32);
extern void func_001D4040(void *, s32);
extern s32  func_001D4010(void *);
extern void func_001D2458(void *, s32);
extern void func_001E3610(s32, void *);
extern void func_001E3EC0(s32, void *, s32);
extern void func_001E3FE0(s32, void *, s32);
extern void func_001E33C8(s32, void *, s32);
extern void D_002AD390(s32);

static inline __attribute__((always_inline)) void *init_d4040(void *p, s32 s) {
    func_001D4040(p, s);
    return p;
}

typedef struct { u8 d[16]; } Tmp16;

void func_0016D178(void *arg0, f32 *arg1) {
    *arg1 = *(f32 *)((u8 *)arg0 + 0x30) * 2.5f;
}

typedef struct {
    u8 pad[0xC];
    s32 unkC;
    u8 pad2[0x50];
    s32 unk60;
    s32 unk64;
    u8 pad3[0x20];
    s32 unk88;
} S_1926;

void func_001926B0(S_1926 *arg0) {
    Tmp16 buf;
    s32 r;

    func_00192130();
    func_001D2900(&arg0->unkC, arg0->unk88);
    r = func_001E4280();
    func_001E3610(r, init_d4040(&buf, arg0->unkC));
}

void func_00192710(S_1926 *arg0, s32 arg1, s32 arg2) {
    Tmp16 buf;
    s32 r;

    (void)arg1;
    func_00192130();
    func_001D2900(&arg0->unkC, arg0->unk60);
    r = func_001E4280();
    func_001E3EC0(r, init_d4040(&buf, arg0->unkC), arg2);
}

void func_001928F0(S_1926 *arg0, s32 arg1, s32 arg2) {
    Tmp16 buf;
    s32 sp10;
    s32 r;

    (void)arg1;
    func_00192130();
    func_001D2900(&arg0->unkC, arg0->unk64);
    init_d4040(&buf, arg0->unkC);
    r = func_001E4280();
    func_001D2458(&sp10, func_001D4010(&buf));
    func_001E3FE0(r, &sp10, arg2);
    D_002AD390(sp10);
    func_001E33C8(func_001E4280(), &buf, 0);
}
