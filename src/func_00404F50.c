extern s32 D_0049E680[];

s32 func_00404F38(s32 i) {
    return D_0049E680[i];
}

s32 func_00404F50(s32 i, s32 val) {
    D_0049E680[i] = val;
    return val;
}

void func_00404F08(void *arg0, void *arg1) {
    /* arg0: +0x10 index, +0x14 value; arg1: +0x1C base ptr */
    ((s32 *)((u8 *)arg1 + 0x1C ? *(s32 **)((u8 *)arg1 + 0x1C) : 0))[*(s32 *)((u8 *)arg0 + 0x10)] = *(s32 *)((u8 *)arg0 + 0x14);
}

typedef s64 va_space[8];
extern void func_004048A8(s64 *);
extern void *D_00441118;
extern void func_004045C8(void);

void func_00404EA8(s32 arg0, s64 arg1, s64 arg2, s64 arg3, s64 arg4, s64 arg5, s64 arg6, s64 arg7) {
    s64 sp[8];
    void *saved = D_00441118;
    sp[0] = arg1; sp[1] = arg2; sp[2] = arg3; sp[3] = arg4;
    sp[4] = arg5; sp[5] = arg6; sp[6] = arg7;
    D_00441118 = func_004045C8;
    func_004048A8(sp);
    D_00441118 = saved;
}
