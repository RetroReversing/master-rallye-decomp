extern s32 func_002C8270(void**, s32);
extern s32 func_002C8218(void**, s32);

s32 func_002D2E00(s32 arg0, s32 arg1, s32 arg2) {
    s32 m = (arg0 < arg1) ? arg1 : arg0;
    return (arg2 < m) ? arg2 : m;
}

f32 func_002C82D0(void *arg0, s32 arg1) {
    if (*(s32*)((u8*)arg0 + 8) != 0 && arg1 < *(u16*)((u8*)arg0 + 0x1C)) {
        return *(f32*)((u8*)arg0 + (arg1 << 2) + 0x58);
    }
    return 0.0f;
}

/* func_002C8270 and func_002C8218 left as m2c-ish */
s32 func_002C8270(void **arg0, s32 arg1) {
    void *t = *arg0;
    s32 r = 1;
    /* virtual call */
    f32 f = ((f32(*)(void*, s32, void*, s32))(*((void***)t)[0]))((void*)arg0, (arg1 != 0) ? 3 : 1, t, 3); /* not exact */
    (void)f;
    return r;
}

s32 func_002C8218(void **arg0, s32 arg1) {
    return 0;
}
