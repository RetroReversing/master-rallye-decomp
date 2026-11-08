extern void *func_001A12E0(s32 arg0, s32 arg1);
extern void *D_002AD408(s32 arg0);
extern void func_001A4138(void *arg0);
extern s32 func_001E4280(void *arg0);
extern void func_001E3820(s32 arg0, s32 arg1, void *arg2);
extern s32 func_00155CF8(void *arg0);

void *func_001CFBF8(void *arg0) {
    s32 temp5;
    s32 *base;
    s32 count;
    s32 idx;
    void *ret;
    
    temp5 = *(s32 *)((u8 *)arg0 + 0xE8);
    if (temp5 < 0) {
        return *(s32 **)((u8 *)arg0 + 0x174);
    }
    base = *(s32 **)((u8 *)arg0 + 0x174);
    count = (*(s32 *)((u8 *)arg0 + 0x178) - (s32)base);
    count = ((s32)(count * 0xAAAAAAAB) >> 4) - 1;
    if ((u32)count >= (u32)temp5) {
        return base;
    }
    ret = func_001A12E0((s32)base, temp5);
    if (temp5 == *(s32 *)((u8 *)ret + 0x24)) {
        return base;
    }
    return (void *)((u8 *)base + temp5 * 0x30);
}

void func_001CFCB8(void *arg0) {
    s32 temp5;
    s32 *base;
    s32 count;
    void *ret;
    f32 *var;
    
    temp5 = *(s32 *)((u8 *)arg0 + 0xE8);
    if (temp5 < 0) {
        var = (f32 *)((u8 *)arg0 + 0x174);
    } else {
        base = *(s32 **)((u8 *)arg0 + 0x174);
        count = (*(s32 *)((u8 *)arg0 + 0x178) - (s32)base);
        count = ((s32)(count * 0xAAAAAAAB) >> 4) - 1;
        if ((u32)count >= (u32)temp5) {
            var = (f32 *)base;
        } else {
            ret = func_001A12E0((s32)base, temp5);
            if (temp5 == *(s32 *)((u8 *)ret + 0x24)) {
                var = (f32 *)base;
            } else {
                var = (f32 *)((u8 *)base + temp5 * 0x30);
            }
        }
    }
    *(f32 *)((u8 *)arg0 + 0x164) = *var;
}

void func_001CFEE8(void) {
    func_001A4138(D_002AD408(0x80));
}

void func_001CFF10(void *arg0, s32 arg1) {
    func_001E3820(func_001E4280(arg0), *(s32 *)((u8 *)arg0 + 0x1C) + (arg1 * 4), (u8 *)arg0 + 0x6C);
}
