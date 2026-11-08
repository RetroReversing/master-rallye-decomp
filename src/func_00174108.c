extern void func_0016E498(void *, s32);

void func_001740B8(void *arg0, s32 arg1) {
    void **arr = *(void **)((u8 *)arg0 + 0x14);
    void *end = *(void **)((u8 *)arg0 + 0x18);
    s32 count = ((s32)((u8 *)end - (u8 *)arr)) >> 2;
    s32 i;
    for (i = 0; i < count; i++) {
        void *p = arr[i];
        void *pc = *(void **)((u8 *)p + 0xC);
        if (*(s32 *)((u8 *)pc + 0x4) == arg1) {
            return p;
        }
    }
    return NULL;
}

s32 func_00174108(void *arg0, s32 arg1) {
    void **arr = *(void **)((u8 *)arg0 + 0x20);
    void *end = *(void **)((u8 *)arg0 + 0x24);
    s32 count = ((s32)((u8 *)end - (u8 *)arr)) >> 2;
    s32 i;
    for (i = 0; i < count; i++) {
        void *p = arr[i];
        if (p == (void *)(u32)arg1) {
            return arg1;
        }
    }
    return 0;
}
