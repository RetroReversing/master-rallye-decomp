extern s32 func_003E7440(void *ctx, s32, s32, s32);
s32 func_003E7478(void *ctx, s32 sz);
extern void func_003E0250(void *ctx, void *out);
extern void func_003E0410(void *tbl, void *ctx, void *out);
extern s32 func_003E7620(void *ctx, s32, s32);

s32 func_003DFE40(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    u8 frame[0xB0];
    void *ctx = frame;
    void *out = frame + 0x30;
    s32 var_21 = 1;
    s32 i = 0;
    u32 var_22;
    void *tbl = *(void **)((char *)arg0 + 0x40);
    void *entries = *(void **)((char *)tbl + 0x44);
    s32 count;
    s32 r;

    func_003E7440(ctx, arg1, arg3, arg4);
    *(void **)(frame + 0xA8) = entries;
    *(s32 *)(frame + 0xA4) = 0;
    count = *(s32 *)((char *)tbl + 0x48);
    *(s32 *)(frame + 0xAC) = 0;
    if (count > 0) {
        var_22 = (u32)arg2 * 8;
    loop1:
        {
            u64 tag = *(u64 *)(entries + i * 0x18);
            if (tag == 0xBDFF00000000ull) {
                *(s32 *)(frame + 0xA4) = *(s32 *)(entries + i * 0x18 + 0x14);
                *(void **)(frame + 0xA0) = *(void **)(entries + i * 0x18 + 0x10);
            }
            i++;
            if (*(void **)(frame + 0xA0) == NULL && i < count) goto loop1;
        }
    } else {
        var_22 = (u32)arg2 * 8;
    }
 loop9:
    if (func_003E7478(ctx, 0x20) == 0x1BA) {
        func_003E0250(ctx, out);
    }
 loop26:
    if (func_003E7478(ctx, 0x18) == 1 &&
        func_003E7478(ctx, 0x20) != 0x1BA &&
        func_003E7478(ctx, 0x20) != 0x1B9) {
        u64 t3 = *(u64 *)((char *)out + 0x18);
        if (!(var_22 < t3)) {
            if (t3 < var_22) {
                if (var_21 != 0) {
                    func_003E0410(tbl, ctx, (char *)out + 0x18);
                    if (var_22 >= (u64)*(u64 *)((char *)out + 0x18)) {
                        count = *(s32 *)((char *)tbl + 0x48);
                        i = 0;
                        if (count > 0) {
                        loop16:
                            {
                                u64 tag = *(u64 *)(entries + i * 0x18);
                                u64 mask = *(u64 *)(entries + i * 0x18 + 0x8);
                                if (tag == (*(u64 *)((char *)out + 0x18) & mask)) {
                                    *(s32 *)(frame + 0x80) = 6;
                                    *(s32 *)(frame + 0x84) = func_003E7620(ctx, *(s32 *)((char *)out + 0x40), count);
                                    *(s32 *)(frame + 0x88) = func_003E7620(ctx, *(s32 *)((char *)out + 0x38), count);
                                    *(s32 *)(frame + 0x8C) = *(s32 *)((char *)out + 0x3C);
                                    *(u64 *)(frame + 0x90) = *(u64 *)((char *)out + 0x28);
                                    *(u64 *)(frame + 0x98) = *(u64 *)((char *)out + 0x30);
                                    var_21 = ((s32 (*)(void *, s32 *, s32)) * (void **)(entries + i * 0x18 + 0x10))(arg0, (s32 *)(frame + 0x80), *(s32 *)(entries + i * 0x18 + 0x14));
                                } else {
                                    i++;
                                    if (i < count) goto loop16;
                                }
                            }
                        }
                        if (i == count && *(void **)(frame + 0xA0) != NULL) {
                            *(s32 *)(frame + 0x80) = 6;
                            *(s32 *)(frame + 0x84) = func_003E7620(ctx, *(s32 *)((char *)out + 0x40), count);
                            *(s32 *)(frame + 0x88) = func_003E7620(ctx, *(s32 *)((char *)out + 0x38), count);
                            *(s32 *)(frame + 0x8C) = *(s32 *)((char *)out + 0x3C);
                            *(u64 *)(frame + 0x90) = *(u64 *)((char *)out + 0x28);
                            *(u64 *)(frame + 0x98) = *(u64 *)((char *)out + 0x30);
                            var_21 = ((s32 (*)(void *, s32 *, s32)) * (void **)(frame + 0xA0))(arg0, (s32 *)(frame + 0x80), *(s32 *)(frame + 0xA4));
                        }
                        if (var_21 != 0) {
                            *(s32 *)(frame + 0xAC) = (s32)((s64)(*(u64 *)((char *)out + 0x18) << 0x1D) >> 0x20);
                        }
                    }
                }
            }
        }
    } else {
        if (!(var_22 < *(u64 *)((char *)out + 0x18))) {
            if (func_003E7478(ctx, 0x20) == 0x1BA) goto loop9;
        }
    }
    if (func_003E7478(ctx, 0x20) == 0x1BA) {
        goto loop9;
    }
    return *(s32 *)(frame + 0xAC);
}
