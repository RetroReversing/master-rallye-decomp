extern void func_0030C350(s32);
extern void func_0030C508(u32);
extern void func_0030C3C0(void);
extern s32 func_0030DC88(s32);
extern u8 D_004A2AE8[];
extern u8 D_0042D630[];

s32 func_0030CA08(s32 arg0) {
    s32 idx = arg0;
    if (idx < 0) {
        return -1;
    }
    if (idx < 0x40) {
        u8 *p = D_004A2AE8;
        p[idx] = 3;
        goto tail;
    } else {
        s32 sub = idx - 0x40;
        s32 r = func_0030DC88(sub);
        if (r > 0) {
            D_0042D630[sub] = 0xFF;
            D_004A2AE8[r] = 3;
            idx = r;
            goto tail;
        }
        return -1;
    }
tail:
    func_0030C350(5);
    func_0030C508((u32)idx);
    func_0030C3C0();
    return 0;
}

extern s32 func_003F9698(void *, ...);
extern s32 D_0042D5F4;
extern u8 D_00484AF0[];
extern u8 D_00484B08[];

s32 func_0030C7F0(void) {
    s32 i;
    s32 n;
    u8 *base;
    s32 val3;

    n = D_0042D5F4;
    i = 0;
    if (n > 0) {
        val3 = 3;
        base = D_004A2AE8;
        do {
            u8 v = base[i];
            if (v == 0) return i;
            if (v == val3) return i;
            i++;
        } while (i < n);
    }
    func_003F9698(D_00484AF0);
    func_003F9698(D_00484B08);
    return -1;
}
