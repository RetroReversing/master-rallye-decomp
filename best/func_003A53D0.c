extern s32 D_0043C3B0[];

void func_003F0B30(s32 arg0, s32 arg1, s32 arg2) {
    register s32 *p = D_0043C3B0;
    p[1] = arg1;
    p[2] = arg2;
    p[3] = arg0;
}

void *func_003A53D0(void *arg0, s16 arg1) {
    volatile int dummy;
    void *v0 = arg0;
    s16 v1 = arg1;
    *(s16 *)v0 = v1;
    dummy = 0;
    return v0;
}

u64 *func_003A5340(u64 *arg0) {
    volatile int dummy;
    u64 *v1 = arg0;
    u64 v0;
    *(s16 *)v1 = 0;
    v0 = *v1; v0 &= ((u64)0x80000000 << 4) | 0xFFFF; *v1 = v0;
    v0 = *v1; v0 &= ((u64)0xBFFFFFFF << 5) | 0x1F; *v1 = v0;
    v0 = *v1; v0 &= ((((((u64)0xFFF0 << 28) | 0xFFFF) << 16) | 0xFFFF) << 4) | 0xF; *v1 = v0;
    dummy = 0;
    return arg0;
}

void func_003ACC28(void *);
void func_003ACCE8(void *, s32);
void func_003ACCA8(void *, s32);

void *func_003A52D0(void *arg0) {
    volatile void *d;
    void *s0 = arg0;
    d = s0;
    func_003ACC28(arg0);
    func_003ACCE8(s0, -1);
    func_003ACCA8(s0, 0);
    return s0;
}
