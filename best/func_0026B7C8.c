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

void func_0026B160(s32 arg0, s32 arg1)
{
    *(s32*)(arg0 + 4) = (s32)&D_00474288;
    if (arg1 & 1) {
        D_002AD390(arg1 & 1);
    }
}

void* func_0026B070(s32 arg0)
{
    s32 sp;
    s32 i = 7;
    s32* p = (s32*)arg0 + 9;
    func_001D4040(&sp, "ControllerMap");
    *(s32*)(arg0 + 0) = sp;
    *(s32*)(arg0 + 4) = (s32)&D_0047A140;
    do {
        *p-- = 0;
        i--;
    } while (i >= 0);
    return (void*)arg0;
}

void func_0026B600(s32 arg0)
{
    s32* src = (s32*)arg0;
    s32* dst = (s32*)func_0026B218((s32)D_002AD408(0x44));
    dst[0] = src[0];
    dst[2] = src[2];
    dst[3] = src[3];
    dst[4] = src[4];
    dst[5] = src[5];
    dst[6] = src[6];
    dst[7] = src[7];
    dst[8] = src[8];
    dst[9] = src[9];
    dst[10] = src[10];
    dst[11] = src[11];
    dst[12] = src[12];
    dst[13] = src[13];
    dst[14] = src[14];
    *(f32*)(dst + 15) = *(f32*)(src + 15);
    *(f32*)(dst + 16) = *(f32*)(src + 16);
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
