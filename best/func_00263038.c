#include "context.h"

typedef struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
    s32 unk18;
    s32 pad1C;
    f32 unk20[4];
    f32 unk30[4];
    f32 unk40[4];
    f32 unk50[4];
    s32 unk60;
    s32 unk64;
    s32 unk68;
    s32 unk6C;
    s64 unk70;
    s32 unk78;
} UnkStruct;

void func_00263038(UnkStruct *arg0) {
    f32 sp[4];
    f32 t;
    UnkStruct *v2 = (UnkStruct *)((u8 *)arg0 + 0x20);
    UnkStruct *v3 = (UnkStruct *)((u8 *)arg0 + 0x30);
    UnkStruct *a1 = (UnkStruct *)((u8 *)arg0 + 0x40);
    UnkStruct *a2 = (UnkStruct *)((u8 *)arg0 + 0x50);
    
    t = 0.0f;
    sp[0] = 1.0f;
    sp[1] = t;
    sp[2] = t;
    sp[3] = t;
    
    v2->unk20[0] = sp[0];
    v2->unk20[1] = sp[1];
    v2->unk20[2] = sp[2];
    v2->unk20[3] = sp[3];
    
    sp[1] = t;
    sp[2] = t;
    sp[0] = t;
    sp[3] = 1.0f;
    
    arg0->unk30[0] = t;
    v3->unk20[0] = sp[3];
    v3->unk20[1] = sp[1];
    v3->unk20[2] = sp[2];
    v3->unk20[3] = sp[3];
    
    sp[0] = t;
    sp[1] = t;
    sp[2] = 1.0f;
    sp[3] = t;
    
    arg0->unk40[0] = t;
    a1->unk20[0] = t;
    a1->unk20[1] = t;
    a1->unk20[2] = sp[2];
    a1->unk20[3] = sp[3];
    
    sp[0] = t;
    sp[1] = t;
    sp[2] = t;
    sp[3] = 1.0f;
    
    arg0->unk50[0] = t;
    a2->unk20[0] = t;
    a2->unk20[1] = t;
    a2->unk20[2] = t;
    a2->unk20[3] = sp[3];
    
    arg0->unk70 = 0;
    arg0->unk68 = 4;
    {
        s64 v0 = arg0->unk70;
        arg0->unk18 = 0;
        v0 |= (s64)0x8000 << 19;
        arg0->unk60 = 0;
        v0 |= (s64)0x8000 << 17;
        arg0->unk64 = 0;
        v0 |= (s64)0x8000 << 18;
        arg0->unk6C = 0;
        v0 |= (s64)0x8000 << 20;
        arg0->unk0 = 0;
        arg0->unk70 = v0;
    }
    arg0->unk78 = 0;
    arg0->unk4 = 0;
    arg0->unk10 = 0;
    arg0->unk14 = 0;
}
