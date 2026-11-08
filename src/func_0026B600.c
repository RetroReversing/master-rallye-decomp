#include "context.h"

extern s32 D_002AD390(s32);
extern void* D_00474288;
extern s32 func_001D4040(s32*, const char*);
extern void* D_0047A140;
extern s32 D_002AD408(s32);
extern void* func_0026B218(s32);
extern void* D_0047A0F0;
extern void* D_0047A0D8;
extern void** D_004267BC;
extern s32 func_001DAD18(void*, void*);
extern void* func_0026BC18(s32);
extern void func_001D1900(void*);

void* func_0026B600(void* arg0)
{
    void* s0 = arg0;
    void* v0 = func_0026B218(D_002AD408(0x44));
    void* v1 = v0;
    *(s32*)v1 = *(s32*)((s8*)s0 + 0);
    *(s32*)((s8*)v1 + 8) = *(s32*)((s8*)s0 + 8);
    *(s32*)((s8*)v1 + 12) = *(s32*)((s8*)s0 + 12);
    *(s32*)((s8*)v1 + 16) = *(s32*)((s8*)s0 + 16);
    *(s32*)((s8*)v1 + 20) = *(s32*)((s8*)s0 + 20);
    *(s32*)((s8*)v1 + 24) = *(s32*)((s8*)s0 + 24);
    *(s32*)((s8*)v1 + 28) = *(s32*)((s8*)s0 + 28);
    *(s32*)((s8*)v1 + 32) = *(s32*)((s8*)s0 + 32);
    *(s32*)((s8*)v1 + 36) = *(s32*)((s8*)s0 + 36);
    *(s32*)((s8*)v1 + 40) = *(s32*)((s8*)s0 + 40);
    *(s32*)((s8*)v1 + 44) = *(s32*)((s8*)s0 + 44);
    *(s32*)((s8*)v1 + 48) = *(s32*)((s8*)s0 + 48);
    *(s32*)((s8*)v1 + 52) = *(s32*)((s8*)s0 + 52);
    *(s32*)((s8*)v1 + 56) = *(s32*)((s8*)s0 + 56);
    *(f32*)((s8*)v1 + 60) = *(f32*)((s8*)s0 + 60);
    *(f32*)((s8*)v1 + 64) = *(f32*)((s8*)s0 + 64);
    return v0;
}

void* func_0026B6B8(void* arg0, s32 arg1, s32 arg2)
{
    void** self = (void**)arg0;
    self[6] = &D_0047A0F0;
    self[3] = (void*)arg1;
    self[4] = (void*)arg2;
    self[2] = arg0;
    self[1] = arg0;
    self[5] = NULL;
    self[0] = arg0;
    if (D_004267BC == NULL) {
        D_004267BC = (void**)func_0026BC18((s32)D_002AD408(0xC));
    }
    func_001DAD18(D_004267BC[2], arg0);
    return arg0;
}

void func_0026B738(void* arg0, s32 arg1)
{
    void** p = (void**)arg0;
    p[6] = &D_0047A0F0;
    void* next = p[1];
    void* prev = p[2];
    ((void**)next)[2] = prev;
    ((void**)prev)[1] = next;
    p[1] = arg0;
    p[2] = arg0;
    void* unk = p[5];
    if (unk != NULL) {
        void** vtable = *(void***)unk;
        void* func = vtable[3];
        s16 offset = *(s16*)((s8*)*vtable + 8);
        ((void (*)(void*, s32, void*))func)((s8*)unk + offset, 3, unk);
    }
    func_001D1900(arg0);
    if (arg1 & 1) {
        D_002AD390((s32)arg0);
    }
}

void* func_0026B7C8(void* arg0)
{
    func_0026B6B8(arg0, (s32)arg0, 2);
    *(s32*)((s8*)arg0 + 0x1C) = 0;
    ((void**)arg0)[6] = &D_0047A0D8;
    *(s32*)((s8*)arg0 + 0x20) = 0;
    *(s32*)((s8*)arg0 + 0x24) = 0;
    *(s32*)((s8*)arg0 + 0x28) = 0;
    *(s32*)((s8*)arg0 + 0x2C) = 0;
    *(s32*)((s8*)arg0 + 0x30) = 0;
    return arg0;
}
