#include "context.h"

extern s32 D_002AD390(s32);
extern void func_001D1900(void*);
extern void* D_0047A0F0;

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
    if (unk) {
        void* vtbl = *(void**)unk;
        void (*fn)(void*, s32, void*) = *(void (**)(void*, s32, void*))((s8*)vtbl + 0xC);
        s16 off = *(s16*)((s8*)vtbl + 8);
        fn((s8*)unk + off, 3, unk);
    }
    func_001D1900(arg0);
    if (arg1 & 1) {
        D_002AD390((s32)arg0);
    }
}
