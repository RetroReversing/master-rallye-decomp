void *func_003CA3B0(s32, s32);
extern u32 D_0049B9D0[60];

s32 func_003CA590(s32 arg0, s32 arg1, s8 arg2) {
    s32 idx = arg0 * 0x70 + arg1 * 0x1C;
    u32 *p = (u32 *)((u8 *)D_0049B9D0 + idx);
    if (p[4] == 0) {
        return 0;
    }
    *(u8 *)(func_003CA3B0(arg0, arg0) + 0x71) = arg2;
    return 1;
}

void func_003FA8A4(void *);
extern u8 D_00488C08;
extern u32 D_00436158[8];

void func_003CA558(u32 arg0, u8 *arg1) {
    if (arg0 < 8) {
        func_003FA8A4(arg1);
        return;
    }
    *arg1 = D_00488C08;
}

u8 func_003CA4E0(s32 arg0, s32 arg1) {
    s32 idx = arg0 * 0x70 + arg1 * 0x1C;
    u32 *p = (u32 *)((u8 *)D_0049B9D0 + idx);
    u8 ret = 0x63;
    if (p[4] != 0) {
        void *t = func_003CA3B0(arg0, arg0);
        ret = *(u8 *)((u8 *)t + 0x70);
        if (ret == 6) {
            if (*(u8 *)((u8 *)t + 0x71) != 2) {
                return *(u8 *)((u8 *)t + 0x70);
            }
            return 5;
        }
        return ret;
    }
    return ret;
}
