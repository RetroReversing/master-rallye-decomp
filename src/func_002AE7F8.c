s32 func_002B2028(u32);

s32 func_002AE820(u32 arg0) {
    return func_002B2028(arg0);
}

typedef struct {
    u8 pad0[8];
    s32 f8;
    void *fC;
    u8 pad10[0x18];
    s32 f28;
} S840;

s32 func_002B0648(s32, void *, s32);

s32 func_002AE840(S840 *arg0, s32 (*arg1)(), u8 *arg2) {
    s32 ret;
    if (arg2 != NULL && *(s16 *)(arg2 + 4) != 4)
        return 0;
    if ((u32)arg1 == 0xFFFFFFFFU)
        return arg0->f8;
    ret = func_002B0648(arg1(), arg0->fC, arg0->f28);
    if (ret)
        arg0->f8 = ret;
    return ret;
}

void *func_002B1FC0(u32);
void *func_002AE718(void) __attribute__((noreturn));

void *func_002AE7F8(u32 arg0) {
    void *p = func_002B1FC0(arg0);
    if (p == 0)
        func_002AE718();
    return p;
}

typedef struct {
    u8 pad0[0x14];
    s32 f14;
    u8 pad18[8];
    s64 f20;
} S7C0;

S7C0 **func_002AD838();

S7C0 *func_002AE7C0(void) {
    S7C0 *p = *func_002AD838();
    p->f14 = 1;
    p->f20++;
    return p;
}
