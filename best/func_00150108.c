#include "context.h"

extern f32 func_001E3610(s32, s32);
extern s32 func_001E4280(void);

f32 func_0014F630(void *arg0, s32 arg1) {
    if (arg1 < 0) {
        return 0.0f;
    }
    return func_001E3610(func_001E4280(), *(s32 *)((u8 *)arg0 + 0x44) + (arg1 * 4));
}

f32 func_0014F688(void *arg0, s32 arg1) {
    if (arg1 < 0) {
        return 0.0f;
    }
    return func_001E3610(func_001E4280(), *(s32 *)((u8 *)arg0 + 0x50) + (arg1 * 4));
}

void func_0014FA50(void *arg0, s32 arg1, s32 arg2, s8 arg3, f32 arg4) {
    s32 i;
    if (arg1 < arg2) {
        for (i = arg2; i > arg1; i--) {
            s32 *ptr = (s32 *)(*(s32 *)((u8 *)arg0 + 0x2C) + (i * 8));
            *(f32 *)(ptr) = arg4;
            *(s8 *)(ptr + 1) = arg3; // ptr+1 is at offset +4 if ptr is s32*
            // or better write as (u8*)ptr + 4
        }
    }
}

void *D_002AD408(s32);
void *func_001D4040(void *, const char *);
void func_001E2460(void *, void *);
void func_001E2C78(void *, const char *, s32);

extern char D_0044BC38[];
extern char D_0044C598[];
extern char D_0044DD18[];

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
} unk_struct_t;

void *func_00150108(void *arg0) {
    void *temp;
    unk_struct_t sp20;
    unk_struct_t *unk;
    
    temp = D_002AD408(0x24);
    unk = (unk_struct_t *)temp;
    func_001D4040(&sp20, D_0044C598);
    unk->unk0 = 0;
    unk->unk4 = 0;
    unk->unk8 = 0;
    unk->unkC = 0;
    unk->unk10 = (s32)D_0044DD18;
    unk->unk14 = 0;
    ((unk_struct_t *)((u8 *)unk + 0x14))->unk4 = 0;
    ((unk_struct_t *)((u8 *)unk + 0x14))->unk8 = 0;
    unk->unk20 = *(s32 *)&sp20;
    func_001E2460(&sp20, unk);
    func_001E2C78(&sp20, D_0044BC38, *(s32 *)((u8 *)arg0 + 0xB8));
    return temp;
}
