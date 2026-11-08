extern void func_0016E1D8(void *);
extern void func_0016DFD8(void *);

void func_00172D78(void *arg0, s32 arg1) {
    void *p14 = *(void **)((u8 *)arg0 + 0x14);
    void *p18 = *(void **)((u8 *)arg0 + 0x18);
    s32 count = ((s32)((u8 *)p18 - (u8 *)p14)) >> 2;
    s32 i;
    void **arr = (void **)p14;
    void *last = NULL;
    for (i = 0; i < count; i++) {
        last = arr[i];
    }
    if (count > 0) {
        *(s32 *)((u8 *)last + 0x24) = *(s32 *)((u8 *)arg0 + 0x10);
    }
    func_0016E1D8(arg0);
}

void func_00173438(void *arg0) {
    void *p14 = *(void **)((u8 *)arg0 + 0x14);
    void *p18 = *(void **)((u8 *)arg0 + 0x18);
    s32 count = ((s32)((u8 *)p18 - (u8 *)p14)) >> 2;
    s32 i;
    void **arr = (void **)p14;
    void *last = NULL;
    void *lastc = NULL;
    for (i = 0; i < count; i++) {
        void *p = arr[i];
        *(s32 *)((u8 *)p + 0x28) = 0;
        *(s32 *)((u8 *)p + 0x20) = 0;
        last = p;
        lastc = *(void **)((u8 *)p + 0xC);
    }
    if (count > 0) {
        *(s32 *)((u8 *)lastc + 0x4 + 0x1D4) = 0;
    }
    {
        void *p20 = *(void **)((u8 *)arg0 + 0x20);
        void *p24 = *(void **)((u8 *)arg0 + 0x24);
        s32 count2 = ((s32)((u8 *)p24 - (u8 *)p20)) >> 2;
        s32 i2;
        void **arr2 = (void **)p20;
        void *last2 = NULL;
        for (i2 = 0; i2 < count2; i2++) {
            last2 = arr2[i2];
        }
        if (count2 > 0) {
            *(s32 *)((u8 *)last2 + 0x1D4) = 0;
        }
    }
    func_0016DFD8(arg0);
}
