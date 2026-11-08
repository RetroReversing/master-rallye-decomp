/* identical to func_003ECE50 (matched), with its names changed by decompdecomp */
void func_003D7B38(void *arg0, u64 arg1) {
    u64 old = *(u64*)((u8*)arg0 + 0x10);
    *(u64*)((u8*)arg0 + 0x10) = old & ~arg1;
}

s32 func_003ED4B8(s32 *);
s32 func_003ED9E0(s32);
s32 func_003F9698(char *, ...);
extern char D_0048A4A8[];
extern char D_0048A4C0[];

s32 func_003EB958(s32 *arg0) {
    if (func_003ED4B8(arg0) == 0) {
        func_003F9698(D_0048A4C0);
        return 0;
    }
    func_003F9698(D_0048A4A8);
    func_003ED9E0(*arg0);
    return 0;
}

void func_003ECE88(const char *fmt, ...) {}

s32 func_001D5900(void);
s32 D_002AD408(s32);

f32 func_003ECF68(void *arg0) {
    f32 f0, f1, f2, f3;
    f1 = (f32)(s32)(*(f32*)((u8*)(*(s32*)func_001D5900()) + 0x10)) / 30.0f;
    f3 = *(f32*)(*(s32*)((u8*)arg0 + 4));
    f2 = 0.033333335f;
    f0 = f1 - f2;
    if (f3 <= f0) {
        return 0.0f;
    }
    if (f1 <= f3) {
        return 1.0f;
    }
    return (f3 - f0) / (f1 - f0);
}
