extern s32 func_001E99E8(void *, void *, void *);
extern void *func_002B1FC0(s32);
extern void *func_003D2910(s32);
extern void func_001C6938(void *);
extern void func_002B2028(void *);
extern void D_002AD390(void *);
extern u8 D_00477140[];

s32 func_001E9508(void *arg0, s32 arg1) {
    s32 *base = *(s32 **)((u8 *)arg0 + 0x3C);
    if (arg1 < 0) {
        return (s32)base;
    }
    return (s32)(base + arg1);
}

s32 func_001E9368(void *arg0, void *arg1) {
    s32 i;
    s32 count = *(s32 *)((u8 *)arg0 + 8);
    if (count > 0) {
        void *base = *(void **)((u8 *)arg0 + 0xC);
        for (i = 0; i < count; i++) {
            if (func_001E99E8(arg0, arg1, (void *)((u8 *)base + i * 4)) != 0) {
                return i;
            }
            count = *(s32 *)((u8 *)arg0 + 8);
            base = *(void **)((u8 *)arg0 + 0xC);
        }
    }
    return -1;
}

void *func_001E9B10(void *arg0) {
    void *node;

    *(void **)arg0 = 0;
    *(void **)((u8 *)arg0 + 0xC) = D_00477140;
    node = func_002B1FC0(0x18);
    if (node == 0) {
        node = func_003D2910(0x18);
    }
    *(void **)arg0 = node;
    *(s32 *)((u8 *)arg0 + 4) = 0;
    *(u8 *)((u8 *)arg0 + 8) = 0;
    *(s32 *)node = 0;
    *(s32 *)((u8 *)*(void **)arg0 + 4) = 0;
    *(void **)((u8 *)*(void **)arg0 + 8) = *(void **)arg0;
    *(void **)((u8 *)*(void **)arg0 + 0xC) = *(void **)arg0;
    return arg0;
}

void func_001E9B90(void *arg0, s32 arg1) {
    *(void **)((u8 *)arg0 + 0xC) = D_00477140;
    if (*(s32 *)((u8 *)arg0 + 4) != 0) {
        func_001C6938(*(void **)((u8 *)*(void **)arg0 + 4));
        *(void **)((u8 *)*(void **)arg0 + 8) = *(void **)arg0;
        *(s32 *)((u8 *)*(void **)arg0 + 4) = 0;
        *(void **)((u8 *)*(void **)arg0 + 0xC) = *(void **)arg0;
        *(s32 *)((u8 *)arg0 + 4) = 0;
    }
    func_002B2028(*(void **)arg0);
    if (arg1 & 1) {
        D_002AD390(arg0);
    }
}
