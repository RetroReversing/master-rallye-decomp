#include "context.h"

extern void *func_003D6E50(void *arg0, void *arg1, void *arg2, s32 arg3);
extern void func_003D7F00(void *arg0);

typedef struct {
    s32 unk00;
    u32 unk04;
    u32 unk08;
    u32 unk0C;
    u32 unk10;
    u32 unk14;
    u32 unk18;
    u8 pad1C[0x34];
    void *vtable;
} ClassD_00489090;

void *func_003D6D20(ClassD_00489090 *p, void *arg1, s32 arg2) {
    void *vtable = p->vtable;
    s16 off = *(s16 *)((u8 *)vtable + 0x58);
    void *(*fn)(void *) = *(void *(**)(void *))((u8 *)vtable + 0x5C);
    void *ret = fn((u8 *)p + off);
    if ((s32)ret == -1) {
        return NULL;
    }
    if (arg1 == 0 || arg2 == 0) {
        p->unk00 |= 2;
        func_003D6E50(p, (u8 *)p + 0x4B, (u8 *)p + 0x4C, 0);
    } else {
        p->unk00 &= ~2;
        func_003D6E50(p, arg1, (u8 *)arg1 + arg2, 0);
    }
    p->unk14 = 0;
    p->unk10 = 0;
    p->unk18 = 0;
    if (p->unk00 & 0x100) {
        func_003D7F00(p);
    }
    p->unk0C = 0;
    p->unk04 = 0;
    p->unk08 = 0;
    return p;
}
