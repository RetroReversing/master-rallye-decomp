extern void *func_001A12E0(f32 *arg0, s32 arg1);
extern s32 D_002AD408(s32);
extern s32 func_0019CD28(s32);

s32 func_001CFBF8(void *arg0) {
    s32 temp5 = *(s32 *)((u8 *)arg0 + 0xE8);
    if (temp5 < 0) {
        return *(s32 *)((u8 *)arg0 + 0x174);
    }
    s32 *temp4 = (s32 *)((u8 *)arg0 + 0x174);
    s32 diff = *(s32 *)((u8 *)arg0 + 0x178) - *temp4;
    u32 val = ((u32)((s32)diff * 0xAAAAAAAB) >> 4) - 1;
    if (val >= (u32)temp5) {
        return *(s32 *)((u8 *)arg0 + 0x174);
    }
    void *ret = func_001A12E0((f32 *)temp4, temp5);
    if (temp5 == *(s32 *)((u8 *)ret + 0x24)) {
        return *(s32 *)((u8 *)arg0 + 0x174);
    }
    return *(s32 *)((u8 *)arg0 + 0x174) + temp5 * 0x30;
}

void func_001CFCB8(void *arg0) {
    s32 temp5 = *(s32 *)((u8 *)arg0 + 0xE8);
    f32 *var2;
    if (temp5 < 0) {
        var2 = (f32 *)((u8 *)arg0 + 0x174);
    } else {
        f32 *temp4 = (f32 *)((u8 *)arg0 + 0x174);
        s32 diff = *(s32 *)((u8 *)arg0 + 0x178) - *(s32 *)temp4;
        u32 val = ((u32)((s32)diff * 0xAAAAAAAB) >> 4) - 1;
        if (val >= (u32)temp5) {
            var2 = (f32 *)((u8 *)arg0 + 0x174);
        } else {
            void *ret = func_001A12E0(temp4, temp5);
            if (temp5 == *(s32 *)((u8 *)ret + 0x24)) {
                var2 = (f32 *)((u8 *)arg0 + 0x174);
            } else {
                var2 = (f32 *)((u8 *)((u8 *)arg0 + 0x174) + temp5 * 0x30);
            }
        }
    }
    *(f32 *)((u8 *)arg0 + 0x164) = *var2;
}

void func_001CFDE8(void) {
    func_0019CD28(D_002AD408(0x54));
}

f32 func_001CF9E8(void *arg0, f32 f12) {
    return *(f32 *)((u8 *)arg0 + 0xFC) / (f12 * (*(f32 *)((u8 *)arg0 + 0x28) + *(f32 *)((u8 *)arg0 + 0x2C)));
}
