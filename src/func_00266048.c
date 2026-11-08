extern u32 D_0047A1B0;
extern u32 D_0044DCD8;
extern u32 D_0047A1E8;
extern s32 D_00493B08;

extern void func_00268180(void *);
extern void func_00268150(void *);

void func_002660C8(void *arg0) {
    *(s32 *)((u8 *)arg0 + 0x1C) = 0;
    *(s32 *)(arg0) = 1;
    *(s32 *)((u8 *)arg0 + 0x24) = 0;
    *(s32 *)((u8 *)arg0 + 0x28) = 0;
    *(s32 *)((u8 *)arg0 + 0x30) = 0;
}

void func_00266070(void *arg0) {
    func_00268180(arg0);
    *(s32 *)((u8 *)arg0 + 0x10) = 2;
    *(s32 *)((u8 *)arg0 + 0x30) = 1;
    *(f32 *)((u8 *)arg0 + 0x1C) = 1.0f;
    *(f32 *)((u8 *)arg0 + 0x18) = 1.0f;
    *(s32 *)((u8 *)arg0 + 0x20) = 0;
    *(s32 *)((u8 *)arg0 + 0x24) = 0;
    *(s32 *)((u8 *)arg0 + 0x28) = 0;
    *(s32 *)((u8 *)arg0 + 0x2C) = 0;
}

void func_00266048(void *arg0) {
    *(u32 *)((u8 *)arg0 + 0x14) = (u32)&D_0047A1B0;
    func_00268150(arg0);
}

void *func_00265AE8(void *arg0) {
    *(s32 *)((u8 *)arg0 + 0x4) = 0;
    *(void **)((u8 *)arg0 + 0x8) = &D_0044DCD8;
    *(s32 *)(arg0) = -1;
    *(s32 *)((u8 *)arg0 + 0x4) = D_00493B08;
    *(void **)((u8 *)arg0 + 0x8) = &D_0047A1E8;
    *(s32 *)((u8 *)arg0 + 0xC) = 0;
    *(s32 *)((u8 *)arg0 + 0x10) = 0;
    return arg0;
}
