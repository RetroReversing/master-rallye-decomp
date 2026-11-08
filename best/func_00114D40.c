#include "context.h"

extern s32 func_00114678(void *, s32);
extern void *func_00115328(void *, s32);
extern void func_00151A28(void **, s32, u32, void *, s32);
extern void func_001525D8(void *, void *, f32);
extern void func_001537E8(void **, void *, s32);
extern void func_001539A0(void **, s32, u32, void **, s32, void *);
extern s32 func_001E3598(s32, void *);
extern void *func_001E37E8(s32, void *);
extern void func_001E3D10(s32, void *, s32);
extern void func_002060F8(void *, s32);
extern void func_002062A8(void *, void *);
extern void func_00206338(void *, void *);
extern void func_002063A0(void *, void *);
extern void func_002B2028(void *, void *);
extern s32 func_003FA9B8(s32);

typedef struct {
    s64 unk78;
} UnkInner;

typedef struct {
    UnkInner *unk4C;
} UnkMid;

typedef struct {
    UnkMid *unk74;
    UnkMid *unk7C;
    UnkMid *unk80;
    void *unk34;
    s32 unk2C;
    f32 unk3C[4];
    f32 unk40[4];
    f32 unk64[4];
    void *unk0;
    s16 unk10;
    void (*unk4)(void *, void *, void *);
} UnkArg0;

typedef struct {
    s32 unk0;
    void *unk4;
    s32 unk8;
    s32 unkC;
} UnkD0;

extern UnkD0 D_0040E618;
extern UnkD0 D_0040E658;
extern u8 D_00444870[8];
extern u8 D_0048D8D0[16];

void func_00114D40(UnkArg0 *arg0) {
    f32 sp[0x110/4];
    UnkMid *p;
    void *s4;
    void *v0;
    void *s7;
    void *s3;
    f32 f20 = 0.0f;
    f32 f2 = 1.0f;
    f32 *t;
    
    arg0->unk7C->unk4C->unk78 &= ~1LL;
    arg0->unk80->unk4C->unk78 &= ~1LL;
    s4 = arg0->unk74->unk4C;
    if (s4 == 0) {
        return;
    }
    func_002060F8(s4, -2);
    if (arg0->unk34 == 0) {
        return;
    }
    v0 = (void *)func_001E4280();
    s7 = func_001E37E8((s32)v0, &arg0->unk3C);
    if (s7 == 0) {
        return;
    }
    func_002062A8(s4, &arg0->unk40);
    s3 = (void *)((u8 *)s4 + 0x20);
    func_001E3650(func_001E4280(), (s32)&arg0->unk64);
    
    sp[17] = 0.0f; /* 0x44 */
    sp[19] = 0.0f; /* 0x4C */
    sp[16] = 0.0f;
    sp[17] = 1.0f;
    sp[18] = 0.0f;
    sp[19] = 0.0f;
    sp[18] = 0.0f;
    sp[17] = 1.0f;
    sp[19] = 0.0f;
    t = &sp[0];
    sp[0] = t[0]; sp[1] = t[1]; sp[2] = t[2]; sp[3] = t[3];
    
    sp[16] = 0.0f;
    sp[17] = 0.0f;
    sp[18] = 1.0f;
    sp[19] = 0.0f;
    t = &sp[16];
    sp[4] = t[0]; sp[5] = t[1]; sp[6] = t[2]; sp[7] = t[3];
    
    sp[16] = 0.0f;
    sp[17] = 0.0f;
    sp[18] = 0.0f;
    sp[19] = 1.0f;
    t = &sp[16];
    sp[8] = t[0]; sp[9] = t[1]; sp[10] = t[2]; sp[11] = t[3];
    
    sp[16] = 0.0f;
    sp[17] = 1.0f;
    sp[18] = 0.0f;
    sp[19] = 0.0f;
    t = &sp[16];
    sp[12] = t[0]; sp[13] = t[1]; sp[14] = t[2]; sp[15] = t[3];
    
    func_001525D8(sp, sp, 1.0f);
}
