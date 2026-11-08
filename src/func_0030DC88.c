extern char D_00484BA8[];
extern char D_00484BC8[];

extern s32 func_0030D878(s32, s32, void *);
extern void func_003F9698(char *, ...);

s32 func_0030DCC0(u32 arg0, s32 arg1, void *arg2, s32 arg3) {
    u32 count = *(u32 *)((u8 *)arg2 + 8);
    void *base = (u8 *)arg2 + 0xC;
    if (arg0 < count) {
        void *entry = (u8 *)base + (arg0 << 4);
        func_0030D878(arg1, arg3 + *(s32 *)((u8 *)entry + 8), entry);
        return 0;
    }
    func_003F9698(D_00484BA8);
    func_003F9698(D_00484BC8, count);
    return 0xFFFFFFFFu;
}

extern u8 D_0042D630[];

s32 func_0030DC88(u32 arg0) {
    if (arg0 >= 0x30U) {
        return -2;
    } else {
        int v = D_0042D630[arg0];
        int x = v ^ 0xFF;
        if (x == 0)
            return -1;
        return v;
    }
}
