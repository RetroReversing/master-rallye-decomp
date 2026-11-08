extern void *func_001A12E0(s32 arg0, s32 arg1);
extern void func_001E3820(s32, s32, void *);
extern s32 func_001E4280(void);

s32 func_001CFBF8(void *arg0) {
    s32 temp5;
    s32 *base;
    s32 count;
    void *ret;
    temp5 = *(s32 *)((u8 *)arg0 + 0xE8);
    if (temp5 < 0) {
        return *(s32 *)((u8 *)arg0 + 0x174);
    }
    base = *(s32 **)((u8 *)arg0 + 0x174);
    count = (*(s32 *)((u8 *)arg0 + 0x178) - (s32)base);
    count = ((s32)(count * 0xAAAAAAAB) >> 4) - 1;
    if ((u32)count >= (u32)temp5) {
        return (s32)base;
    }
    ret = func_001A12E0((s32)base, temp5);
    if (temp5 == *(s32 *)((u8 *)ret + 0x24)) {
        return (s32)base;
    }
    return (s32)base + temp5 * 0x30;
}

void func_001CFCB8(void *arg0) {
    s32 temp5;
    s32 *base;
    s32 count;
    void *ret;
    temp5 = *(s32 *)((u8 *)arg0 + 0xE8);
    if (temp5 < 0) {
        *(f32 *)((u8 *)arg0 + 0x164) = *(f32 *)((u8 *)arg0 + 0x174);
        return;
    }
    base = *(s32 **)((u8 *)arg0 + 0x174);
    count = (*(s32 *)((u8 *)arg0 + 0x178) - (s32)base);
    count = ((s32)(count * 0xAAAAAAAB) >> 4) - 1;
    if ((u32)count >= (u32)temp5) {
        *(f32 *)((u8 *)arg0 + 0x164) = *(f32 *)base;
        return;
    }
    ret = func_001A12E0((s32)base, temp5);
    if (temp5 == *(s32 *)((u8 *)ret + 0x24)) {
        *(f32 *)((u8 *)arg0 + 0x164) = *(f32 *)base;
        return;
    }
    *(f32 *)((u8 *)arg0 + 0x164) = *(f32 *)((u8 *)base + temp5 * 0x30);
}

void func_001CFF58(void *arg0, s32 arg1) {
    func_001E3820(func_001E4280(), *(s32 *)((u8 *)arg0 + 0x20) + arg1 * 4, (void *)((u8 *)arg0 + 0x70));
}

s32 func_001CF880(void *arg0, s32 arg1) {
    return *(s32 *)((u8 *)arg0 + 0xB0) + arg1 * 0xC;
}
