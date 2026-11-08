s32 func_002AD350(f32 a);
s32 func_002B2028(s32 a);
s32 func_002C3770(s32 a, void *b, void *c);
s32 func_003D7CB0(s32 a);
void func_003F9698(const char *fmt, ...);

extern const char D_004817D8[];
extern const char D_00481808[];
extern const char D_00481848[];

typedef struct Class {
    void *vtable;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    u8 pad10[0x14];
    s32 unk24;
    s32 unk28;
    s32 unk2C;
    u8 pad30[0x50];
    s32 unk80;
    f32 unk84;
} Class;

s32 func_002C33C8(Class *pThis, s32 arg1, s32 arg2, s32 arg3) {
    s32 var_19 = 0;
    if (pThis->unk24 != 0) {
        pThis->unk8 = arg2;
        pThis->unkC = arg3;
        if (pThis->unk28 != 0) {
            void *v0 = pThis->vtable;
            ((void (*)(void *))(*(u32 *)((u8 *)v0 + 0x2C)))((void *)((u8 *)pThis + *(s16 *)((u8 *)v0 + 0x28)));
        }
        pThis->unk84 = 0.0f;
        pThis->unk80 = 0;
        var_19 = func_002C3770(arg1, &pThis->unk80, &pThis->unk84);
        if (pThis->unk4 != 0) {
            func_002B2028(pThis->unk4);
        }
        if (var_19 != 0) {
            func_003F9698(D_004817D8, arg1, func_002AD350(pThis->unk84 * 0.0009765625f));
            pThis->unk4 = func_003D7CB0(arg1);
        } else {
            func_003F9698(D_00481808, arg1, func_002AD350(pThis->unk84 * 0.0009765625f));
            pThis->unk4 = 0;
        }
        pThis->unk28 = var_19;
        pThis->unk2C = 1;
        void *v1 = pThis->vtable;
        ((void (*)(void *))(*(u32 *)((u8 *)v1 + 0x44)))((void *)((u8 *)pThis + *(s16 *)((u8 *)v1 + 0x40)));
    } else {
        func_003F9698(D_00481848);
    }
    return var_19;
}
