extern s32 D_0043C3B0[];

void func_003F0B30(s32 arg0, s32 arg1, s32 arg2) {
    s32 *p = D_0043C3B0;
    p[3] = arg0;
    p[1] = arg1;
    p[2] = arg2;
}

extern char D_00484BA8[];
extern char D_00484BC8[];

extern s32 func_0030D878(s32, s32, void *);
extern void func_003F9698(char *, ...);

s32 func_0030DCC0(u32 arg0, s32 arg1, void *arg2, s32 arg3) {
    u32 count = *(u32 *)((u8 *)arg2 + 8);
    if (arg0 < count) {
        u8 *entry = (u8 *)arg2 + 0xC + (arg0 * 0x10);
        func_0030D878(arg1, arg3 + *(s32 *)(entry + 8), entry);
        return 0;
    }
    func_003F9698(D_00484BA8);
    func_003F9698(D_00484BC8, count);
    return -1;
}

extern u8 D_0042D630[];

s32 func_0030DC88(u32 arg0) {
    if (arg0 < 0x30) {
        u8 v = D_0042D630[arg0];
        if ((u8)(v ^ 0xFF) == 0)
            return -1;
        return v;
    }
    return -2;
}

extern void func_0030C350(s32);
extern void func_0030C508(s32);
extern void func_0030C3C0(void);

void func_0030DBB8(u16 arg0) {
    func_0030C350(0x28);
    func_0030C508((s32)arg0);
    func_0030C3C0();
}
