#include "context.h"

void *func_0017E620(void);
void func_002060F8(void *);
void func_002062A8(void *, void *);
void func_002063A0(void *, void *);
s32 func_00206588(void *);
void func_002068C0(s32, void *, s32 *, s32 *);
void func_003FA310(void *, const char *, s32);

extern const char D_00444CC0[];
extern f32 D_00425E78[];

typedef struct {
    void *unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
} Unk1;

typedef struct {
    void *unk0[16];
} Unk2;

void func_0014E028(void *arg0, s32 arg1) {
    f32 sp[3];
    void *sp10;
    s32 sp20;
    s32 sp24;
    void **temp19;
    Unk1 *temp2;
    void *temp2_2;
    Unk2 *temp3;
    void *temp17;
    void *temp18;
    s32 t;
    
    temp19 = *(void ***)((u8 *)arg0 + 0x14);
    temp19 = *(void ***)((u8 *)temp19 + 0x4C);
    
    sp[0] = D_00425E78[0];
    sp[1] = D_00425E78[1];
    sp[2] = D_00425E78[2];
    
    func_002060F8(temp19);
    func_002063A0(temp19, sp);
    func_002062A8(temp19, (u8 *)arg0 + 0x18);
    func_003FA310(&sp10, D_00444CC0, arg1);
    func_002068C0(func_00206588(temp19), &sp10, &sp20, &sp24);
    
    temp2 = *temp19;
    ((void (*)(void *, void *))*(void **)((u8 *)temp2 + 0x14))((u8 *)temp19 + *(s16 *)((u8 *)temp2 + 0x10), &sp10);
    
    temp2_2 = func_0017E620();
    temp3 = *(Unk2 **)temp2_2;
    t = ((s32 (*)(void *, void *))temp3->unk0[0x10])((u8 *)temp2_2 + *(s16 *)((u8 *)temp3 + 0x40), (u8 *)temp2_2 + *(s16 *)((u8 *)temp3 + 0x40));
    
    if (t == 3 || t == 4 || t == 5) {
        sp[1] = sp[1] + 23.0f;
        sp[0] = sp[0] + ((f32)sp20 + 5.0f);
    } else {
        sp[1] = sp[1] + 3.0f;
        sp[0] = sp[0] + ((f32)sp20 - 5.0f);
    }
    
    func_002063A0(temp19, sp);
    func_002062A8(temp19, (u8 *)arg0 + 0x1C);
    
    temp17 = *temp19;
    temp18 = (u8 *)temp19 + *(s16 *)((u8 *)temp17 + 0x10);
    temp2_2 = func_0017E620();
    temp3 = *(Unk2 **)temp2_2;
    ((void (*)(void *, s32, s32))temp3->unk0[0xB])((u8 *)temp2_2 + *(s16 *)((u8 *)temp3 + 0x28), 0xB, (arg1 == 0) ? 0x1D : ((arg1 % 10) + 0x13));
}
