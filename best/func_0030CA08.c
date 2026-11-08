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
    if (idx >= 0x40) {
        s32 sub = idx - 0x40;
        s32 r = func_0030DC88(sub);
        if (r <= 0) {
            return -1;
        }
        D_0042D630[sub] = 0xFF;
        D_004A2AE8[r] = 3;
        idx = r;
    } else {
        D_004A2AE8[idx] = 3;
    }
    func_0030C350(5);
    func_0030C508((u32)idx);
    func_0030C3C0();
    return 0;
}

extern s32 func_00406080(void *);
extern void func_0030CB08(s32, s32);
extern void func_0030C300(s32, void *, s32);
extern u8 D_004A2B78[];
extern s8 D_0042D5F8;
extern s16 D_004A33C0;
extern s32 D_0042D5A0;

s32 func_0030D4D0(s32 arg0) {
    s32 ret;

    if (func_00406080(D_004A2B78) != 0) {
        return -1;
    }
    if (D_0042D5F8 == 0) {
        func_0030CB08(-1, 0);
    }
    D_0042D5F8 = 0;
    func_0030C300(0, &D_004A33C0, arg0);
    ret = D_0042D5A0;
    D_0042D5A0 = 0;
    D_004A33C0 = 0;
    return ret;
}

extern s32 func_003F9698(void *, ...);
extern s32 D_0042D5F4;
extern u8 D_00484AF0[];
extern u8 D_00484B08[];

s32 func_0030C7F0(void) {
    s32 n = D_0042D5F4;
    s32 i;

    if (n > 0) {
        for (i = 0; i < n; i++) {
            s8 v = D_004A2AE8[i];
            if (v == 0) {
                return i;
            }
            if (v == 3) {
                return i;
            }
        }
    }

    func_003F9698(D_00484AF0);
    func_003F9698(D_00484B08);
    return -1;
}
