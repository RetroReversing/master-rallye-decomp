extern void func_0016E1D8(void *);

void func_00172D78(void *arg0, s32 arg1) {
    void *p18 = *(void **)((u8 *)arg0 + 0x18);
    void *p14 = *(void **)((u8 *)arg0 + 0x14);
    s32 count = ((s32)((u8 *)p18 - (u8 *)p14)) >> 2;
    s32 i;
    void **arr = (void **)p14;
    void *last = NULL;
    s32 val = 0;
    for (i = 0; i < count; i++) {
        last = arr[i];
        val = *(s32 *)((u8 *)arg0 + 0x10);
    }
    if (count > 0) {
        *(s32 *)((u8 *)last + 0x24) = val;
    }
    func_0016E1D8(arg0);
}
