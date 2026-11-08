extern void func_00207140(void *, s32);

s32 func_001D3920(void *arg0) {
    s32 *p = *(s32 **)((char *)arg0 + 4);
    s32 ret = 0;
    if (p != arg0) {
        ret = *p;
    }
    return ret;
}

f32 func_002088B0(void *arg0) {
    s32 base = *(s32 *)arg0;
    s32 delta = *(s32 *)((char *)arg0 + 4) - base;
    s32 off = ((delta >> 2) - 1) << 2;
    return *(f32 *)((char *)base + off);
}

void func_00208938(void *arg0, s32 arg1, s32 arg2) {
    func_00207140(arg0, arg1 < arg2 ? arg1 : arg2);
}

void func_00208B18(void *arg0) {
    void *vt = *(void **)((char *)arg0 + 0x10);
    void (*fn)(void *) = *(void **)((char *)vt + 0x1C);
    fn((char *)arg0 + *(s16 *)((char *)vt + 0x18));
}
