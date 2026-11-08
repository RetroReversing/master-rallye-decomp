extern s32 func_003B3068(u32);
extern void D_002AD390(void*);
extern s32 func_003A36D0(void*, s32, s32);
extern s32 func_003A35D0(u32);
extern s32 func_003B2FE0(s32);

void func_003D7B00(void *arg0, s32 arg1) {
    if (!*(s32*)((u8*)arg0 + 0)) {
        arg1 |= 4;
    }
    *(u8*)((u8*)arg0 + 0x1A) = arg1;
}

void func_003B11B0(u32 arg0, u32 arg1, s32 arg2) {
    u32 var_18 = arg0;
    while (var_18 < arg1) {
        func_003B3068(var_18);
        var_18 += 8;
    }
}

void func_003B1098(void *arg0, s32 arg1) {
    s32 n = (*(s32*)((u8*)arg0 + 8) - *(s32*)arg0) >> 2;
    func_003A36D0(arg0, *(s32*)arg0, n);
    if (arg1 & 1) {
        D_002AD390(arg0);
    }
}

void func_003B1010(u32 arg0, u32 arg1, s32 arg2) {
    u32 var_18 = arg0;
    while (var_18 < arg1) {
        func_003B2FE0(func_003A35D0(var_18));
        var_18 += 4;
    }
}
