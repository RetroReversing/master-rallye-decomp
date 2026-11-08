extern s32 func_00201350(void);

void func_002898D0(void *arg0) {
    if (*(s32 *)((u8 *)arg0 + 0x10) != 0) {
        s32 base = func_00201350();
        void *obj = *(void **)(base + (*(s32 *)((u8 *)arg0 + 0xC) << 2));
        u8 *c0 = (u8 *)obj + 0xC0;
        u8 *b0 = (u8 *)obj + 0xB0;
        u8 *dst1 = (u8 *)arg0 + 0x18;
        u8 *dst2 = (u8 *)arg0 + 0x24;

        *(f32 *)(dst1 + 0) = *(f32 *)(c0 + 0);
        *(f32 *)(dst1 + 4) = *(f32 *)(c0 + 4);
        *(f32 *)(dst1 + 8) = *(f32 *)(c0 + 8);
        *(f32 *)(dst2 + 0) = *(f32 *)(b0 + 0);
        *(f32 *)(dst2 + 4) = *(f32 *)(b0 + 4);
        *(f32 *)(dst2 + 8) = *(f32 *)(b0 + 8);
    }
}
