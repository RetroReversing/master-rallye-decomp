typedef f32 (*vfn_c1c0)(void *, s32, s16);
typedef f32 (*vfn_c160)(void *, s32, s16, s32);

s32 func_002D2E00(s32 arg0, s32 arg1, s32 arg2) {
    s32 m = (arg0 >= arg1) ? arg0 : arg1;
    return (arg2 < m) ? arg2 : m;
}

s32 func_002C81C0(void **arg0, s32 arg1) {
    void *t = *arg0;
    vfn_c1c0 fn = (vfn_c1c0)*(void **)((u8 *)t + 0x3C);
    f32 f = fn(arg0, (arg1 != 0) ? 2 : 0, (s16)*(s16 *)((u8 *)t + 0x38));
    return f < -0.3f ? 1 : 0;
}

s32 func_002C8160(void **arg0, s32 arg1) {
    void *t = *arg0;
    vfn_c160 fn = (vfn_c160)*(void **)((u8 *)t + 0x3C);
    f32 f = fn(arg0, (arg1 != 0) ? 3 : 1, (s16)*(s16 *)((u8 *)t + 0x38), 3);
    return 0.3f < f ? 1 : 0;
}

f32 func_002C8128(void *arg0, s32 arg1) {
    if (*(s32 *)((u8 *)arg0 + 8) != 0 && arg1 < (s32)*(u16 *)((u8 *)arg0 + 0x1A)) {
        return *(f32 *)((u8 *)arg0 + (u32)arg1 * 4 + 0x38);
    }
    return 0.0f;
}
