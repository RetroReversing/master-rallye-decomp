#include "context.h"

void *D_002AD408(s32);
void func_001D4040(void *, const char *);
void func_001E2460(void *, void *);
void func_001E2C78(void *, const char *, s32);
void func_001E25B0(void *, const char *, void *);

extern const char D_0044BC38[];
extern const char D_0044C4C8[];
extern const char D_0044C598[];
extern const char D_0044DD18[];

typedef struct {
    f32 unk0;
    u8 unk4;
} unk_4FA50;

void func_0014FA50(void *arg0, s32 arg1, s32 arg2, u8 arg3, f32 arg4) {
    s32 i;
    unk_4FA50 **temp;
    
    if (arg1 < arg2) {
        temp = *(unk_4FA50 ***)((u8 *)arg0 + 0x2C);
        i = arg2;
        do {
            i--;
            temp[i]->unk0 = arg4;
            temp[i]->unk4 = arg3;
        } while (arg1 < i);
    }
}

typedef struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
    s32 unk18;
    s32 unk1C;
    s32 unk20;
} HudStruct;

void *func_00150108(void *arg0) {
    HudStruct *temp;
    s32 sp20[8];
    
    temp = D_002AD408(0x24);
    func_001D4040(sp20, D_0044C598);
    temp->unk0 = 0;
    temp->unk4 = 0;
    temp->unk8 = 0;
    temp->unkC = 0;
    temp->unk10 = (s32)D_0044DD18;
    temp->unk14 = 0;
    ((HudStruct *)((u8 *)temp + 0x14))->unk4 = 0;
    ((HudStruct *)((u8 *)temp + 0x14))->unk8 = 0;
    temp->unk20 = sp20[0];
    func_001E2460(sp20, temp);
    func_001E2C78(sp20, D_0044BC38, *(s32 *)((u8 *)arg0 + 0xB8));
    return temp;
}

void *func_0014D850(void *arg0) {
    HudStruct *temp;
    s32 sp20[8];
    
    temp = D_002AD408(0x24);
    func_001D4040(sp20, D_0044C4C8);
    temp->unk0 = 0;
    temp->unk4 = 0;
    temp->unk8 = 0;
    temp->unkC = 0;
    temp->unk10 = (s32)D_0044DD18;
    temp->unk14 = 0;
    ((HudStruct *)((u8 *)temp + 0x14))->unk4 = 0;
    ((HudStruct *)((u8 *)temp + 0x14))->unk8 = 0;
    temp->unk20 = sp20[0];
    func_001E2460(sp20, temp);
    func_001E2C78(sp20, D_0044BC38, *(s32 *)((u8 *)arg0 + 0x10));
    return temp;
}

void func_0014D8F8(void *arg0, s32 arg1) {
    s32 sp[8];
    func_001E2460(sp, arg1);
    func_001E25B0(sp, D_0044BC38, (void *)((u8 *)arg0 + 0x10));
}
