/* identical to func_00151C90 (matched), with its names changed by decompdecomp */
extern s32 func_001E4280(void);
extern s32 func_001E3650(s32, s32);
extern void func_0015ACE0(f32, f32, f32);
extern s32 func_00151930(void *);

s32 func_00151500(s8 *arg0, s8 *arg1, s8 *arg2, s8 *arg3) {
    s8 c1;
    s8 c2;
    s32 r;

    if (arg0 == arg1 || arg2 == arg3)
        goto end;
    c1 = *arg0;
loop:
    c2 = *arg2;
    if (c1 < c2)
        return 1;
    arg0++;
    if (c2 < c1)
        return 0;
    arg2++;
    if (arg0 == arg1)
        goto end;
    if (arg2 != arg3) {
        c1 = *arg0;
        goto loop;
    }
end:
    r = 0;
    if (arg0 == arg1)
        r = (arg2 != arg3);
    return r;
}

void func_00150FD8(u8 *arg0, f32 fparg0) {
    s32 i;

    for (i = 0; i < *(s32 *)(arg0 + 0xB0); i++) {
        s32 off = i * 12;
        s32 idx = func_001E3650(func_001E4280(), *(s32 *)(arg0 + 0x64) + i * 4);
        f32 *p = (f32 *)(*(s32 *)(*(s32 *)(arg0 + 0xA4) + off)) + idx;
        if (*p == 0.0f)
            *p = fparg0;
    }
}

f32 func_00150F40(u8 *arg0, s32 arg1, f32 fparg0) {
    s32 off = arg1 * 4;
    u32 base = *(u32 *)(arg0 + 0x70);
    s32 idx = *(s32 *)(arg0 + 0x18) * 4;

    func_0015ACE0(1.0f - ((*(f32 *)(base + idx) - *(f32 *)(base + off)) * 120.0f), 0.0f, 1.0f);
    *(f32 *)(*(u32 *)(arg0 + 0x7C) + off) = *(f32 *)(*(u32 *)(arg0 + 0x70) + off);
    return fparg0;
}

s32 *func_001C4260(s32 *arg0, s32 *arg1, s32 *arg2) {
    s32 *out = arg2;
    s32 v;
    u8 *p;

    for (; arg0 != arg1; arg0++, out++) {
        if (out == NULL)
            continue;
        v = *arg0;
        p = (u8 *)(v - 0x10);
        if (*(s32 *)(p + 0xC) != 0) {
            v = func_00151930(p);
        } else {
            *(s32 *)(p + 0x8) += 1;
        }
        *out = v;
    }
    return out;
}
