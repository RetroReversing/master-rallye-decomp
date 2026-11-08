/* func_001D3920 - known bnel idiom, best known */
s32 func_001D3920(void *arg0) {
    s32 *v = *(s32 **)((char *)arg0 + 4);
    s32 ret = 0;
    if ((v != (s32 *)arg0) && (v != (s32 *)arg0)) {
        ret = *v;
    }
    return ret;
}

/* func_001D13F8 - stores two floats in delay-slot order swapped in asm: swc1 f13,0x48; jr ra; swc1 f12,0x44 */
void func_001D13F8(char *arg0, f32 f0, f32 f1) {
    *(f32 *)(arg0 + 0x48) = f1;
    *(f32 *)(arg0 + 0x44) = f0;
}

/* func_001D5EB0 - random range: rand in [arg1,arg2) style, uses float->int conversion bit tricks */
extern f32 func_001D5DF0(s32 *arg0);

s32 func_001D5EB0(s32 *arg0, s32 arg1, s32 arg2) {
    f32 f = func_001D5DF0(arg0) * (f32)(arg2 - arg1);
    u32 bits = *(u32 *)&f;
    s32 sign = (s32)(bits >> 31);
    s32 exp = ((bits >> 23) & 0xFF) - 0x7F;
    u32 mant = bits & 0x7FFFFF;
    s32 res;
    s32 mask;
    s32 exp_clamped;
    s32 shift;
    u32 val;

    mask = ~(exp >> 31);
    exp_clamped = exp & mask;
    shift = 0x1F - exp;
    val = ((mant | 0x800000) << 8) >> shift;
    res = (s32)(val & mask) ^ sign;
    if (((mant << 8) & ((1 << (0x1F - exp_clamped)) - 1)) == 0) {
        res = res - sign;
    } else {
        /* keep res */
    }
    {
        s32 out = arg1 + res;
        if ((out ^ arg2) == 0) out = arg1;
        return out;
    }
}

/* func_001D5FB8 - constructor-like, allocates and sets vtable-like ptr */
extern void *D_002AD408(s32);
extern u32 D_004765B8;

void *func_001D5FB8(void *arg0) {
    void *p = D_002AD408(4);
    *(void **)arg0 = p;
    *(void **)p = &D_004765B8;
    *(void **)((char *)arg0 + 4) = p;
    return arg0;
}
