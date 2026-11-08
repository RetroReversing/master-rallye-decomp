#include "context.h"

extern void func_00192130(void);
extern void func_001D2900(void *, s32);
extern void func_001D4040(void *, s32);
extern void func_001D2458(void *, s32);
extern void func_001E3EC0(s32, void *, s32);
extern void func_001E3FE0(s32, void *, s32);
extern void func_001E3F50(s32, void *, s32);
extern void D_002AD390(s32);

static inline __attribute__((always_inline)) void *init_d4040(void *p, s32 s) {
    func_001D4040(p, s);
    return p;
}

typedef struct { u8 d[16]; } Tmp16;

typedef struct {
    u8 pad[0xC];
    s32 unkC;
    u8 pad2[0x58];
    s32 unk68;
    s32 unk6C;
    s32 unk70;
} S_1929;

void func_00192998(S_1929 *arg0, s32 arg1, s32 arg2) {
    Tmp16 buf;
    S_1929 *self;
    s32 a2;
    s32 r;

    self = arg0;
    a2 = arg2;
    (void)arg1;
    func_00192130();
    func_001D2900(&self->unkC, self->unk68);
    r = func_001E4280();
    func_001E3EC0(r, init_d4040(&buf, self->unkC), a2);
}

void func_00192A08(S_1929 *arg0, s32 arg1, s32 arg2) {
    Tmp16 buf;
    S_1929 *self;
    s32 a2;
    s32 r;

    self = arg0;
    a2 = arg2;
    (void)arg1;
    func_00192130();
    func_001D2900(&self->unkC, self->unk6C);
    r = func_001E4280();
    func_001D2458(&buf, self->unkC);
    func_001E3FE0(r, &buf, a2);
    D_002AD390(*(s32 *)&buf);
}

void func_00192A80(S_1929 *arg0, s32 arg1, s32 arg2) {
    Tmp16 buf;
    S_1929 *self;
    s32 a2;
    s32 r;

    self = arg0;
    a2 = arg2;
    (void)arg1;
    func_00192130();
    func_001D2900(&self->unkC, self->unk70);
    r = func_001E4280();
    func_001E3F50(r, init_d4040(&buf, self->unkC), a2);
}
