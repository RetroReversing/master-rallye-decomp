void func_002698B8(void *arg0) {
    s32 var_16 = 0;
    s32 var_19 = 0;
    if (*(s32*)arg0 <= 0) return;
    do {
        u32 *p10 = *(u32**)((u8*)arg0 + 0x10);
        void *v7 = *(void**)(p10 + var_16);
        if (*(s32*)v7 == 0) {
            void *v2 = *(void**)((u8*)v7 + 0x14);
            s16 off = *(s16*)((u8*)v2 + 0x20);
            void (*fn)(s32, void *, s32) = *(void**)((u8*)v2 + 0x24);
            void *p74 = *(void***)((u8*)arg0 + 0x74);
            fn((s32)v7 + off, (void*)((u8*)p74 + (var_19 << 2)), var_19 << 2);
            var_19 += *(s32*)((u8*)v2 + 0x10);
        } else {
            var_19 += *(s32*)((u8*)(*(void**)((u8*)v7 + 0x14)) + 0x10);
        }
        var_16++;
    } while (var_16 < *(s32*)arg0);
}
