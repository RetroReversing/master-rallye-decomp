extern void D_002AD390(s32);
extern void *D_0044DCD8;

void func_001CFE10(void *arg0, s32 arg1) {
    *(void **)((u8 *)arg0 + 0x8) = &D_0044DCD8;
    if (arg1 & 1) {
        D_002AD390(1);
    }
}

void func_001CF848(void *arg0, void *arg1) {
    void *p = (void *)((u8 *)arg0 + 0xD8);
    *(f32 *)((u8 *)arg0 + 0xD8) = *(f32 *)((u8 *)arg1 + 0x0);
    *(f32 *)((u8 *)p + 0x4) = *(f32 *)((u8 *)arg1 + 0x4);
    *(f32 *)((u8 *)p + 0x8) = *(f32 *)((u8 *)arg1 + 0x8);
}

void func_001CF828(void *arg0, void *arg1) {
    void *p = (void *)((u8 *)arg0 + 0xC0);
    *(f32 *)((u8 *)arg0 + 0xC0) = *(f32 *)((u8 *)arg1 + 0x0);
    *(f32 *)((u8 *)p + 0x4) = *(f32 *)((u8 *)arg1 + 0x4);
    *(f32 *)((u8 *)p + 0x8) = *(f32 *)((u8 *)arg1 + 0x8);
}

void func_001CF790(void *arg0, s32 arg1) {
    void *p0 = (void *)((u8 *)arg0 + 0xC0);
    void *p1 = (void *)((u8 *)arg0 + 0xCC);
    void *p2 = (void *)((u8 *)arg0 + 0xD8);
    *(s32 *)((u8 *)arg0 + 0xBC) = arg1;
    *(f32 *)((u8 *)arg0 + 0xCC) = *(f32 *)((u8 *)arg0 + 0xC0);
    *(f32 *)((u8 *)p1 + 0x4) = *(f32 *)((u8 *)p0 + 0x4);
    *(f32 *)((u8 *)p1 + 0x8) = *(f32 *)((u8 *)p0 + 0x8);
    void *src1 = (void *)((u8 *)(*(s32 *)((u8 *)arg0 + 0xB0)) + arg1 * 0xC);
    *(f32 *)((u8 *)arg0 + 0xC0) = *(f32 *)((u8 *)src1 + 0x0);
    *(f32 *)((u8 *)p0 + 0x4) = *(f32 *)((u8 *)src1 + 0x4);
    *(f32 *)((u8 *)p0 + 0x8) = *(f32 *)((u8 *)src1 + 0x8);
    void *src2 = (void *)((u8 *)(*(s32 *)((u8 *)arg0 + 0xB4)) + arg1 * 0xC);
    *(f32 *)((u8 *)arg0 + 0xD8) = *(f32 *)((u8 *)src2 + 0x0);
    *(f32 *)((u8 *)p2 + 0x4) = *(f32 *)((u8 *)src2 + 0x4);
    *(f32 *)((u8 *)p2 + 0x8) = *(f32 *)((u8 *)src2 + 0x8);
    *(s32 *)((u8 *)arg0 + 0xE4) = *(s32 *)((u8 *)(*(s32 *)((u8 *)arg0 + 0xB8)) + arg1 * 4);
}
