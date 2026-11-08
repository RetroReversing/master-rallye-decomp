extern s32 func_003DF4B0(void*);
extern void func_003DFE40(void *a0, void *a1, s32 a2, s32 a3);
extern u64 D_0043ADC0[24];

void func_003D7B00(void *arg0, u32 arg1) {
    if (*(s32 *)arg0 == 0) {
        arg1 |= 4;
    }
    *(u8 *)(arg0 + 0x1A) = (u8)arg1;
}

void func_003DF518(void *arg0) {
    func_003DF4B0(arg0 + 8);
}

u32 func_003DFBB8(u32 arg0, u64 arg1) {
    u64 ret = 0;
    if (arg0 < 10) {
        u64 *p = (u64 *)((u8 *)D_0043ADC0 + arg0 * 16);
        u64 v = p[1];
        u64 shift = 0;
        u64 m1 = (u64)0xFFFFULL << 24;
        u64 m2 = (u64)0xFF00ULL << 24;
        if (v == m1) {
            shift = 0x18;
        } else if (v == m2) {
            shift = 0x20;
        } else {
            shift = 0;
        }
        ret = p[0] | (arg1 << shift);
    }
    return (u32)ret;
}

void func_003E0138(void *a0, void *a1) {
    func_003DFE40(a0, a1, -1, 0);
}
