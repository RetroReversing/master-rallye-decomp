s32 func_002660C8(void *arg0) {
    (*(s32 *)((s8 *)arg0 + 0x1C)) = 0;
    (*(s32 *)((s8 *)arg0 + 0x00)) = 1;
    (*(s32 *)((s8 *)arg0 + 0x24)) = 0;
    (*(s32 *)((s8 *)arg0 + 0x28)) = 0;
    (*(s32 *)((s8 *)arg0 + 0x30)) = 0;
    return 1;
}

void *func_002644E0(void *arg0) {
    (*(s32 *)((s8 *)arg0 + 0x00)) = 0;
    (*(s32 *)((s8 *)arg0 + 0x04)) = 0;
    (*(s32 *)((s8 *)arg0 + 0x08)) = 0;
    (*(s32 *)((s8 *)arg0 + 0x10)) = 0;
    (*(f32 *)((s8 *)arg0 + 0x0C)) = 100.0f;
    (*(s32 *)((s8 *)arg0 + 0x14)) = 0;
    (*(s32 *)((s8 *)arg0 + 0x18)) = 0;
    (*(f32 *)((s8 *)arg0 + 0x1C)) = 1.5f;
    (*(f32 *)((s8 *)arg0 + 0x20)) = 0.6f;
    (*(s32 *)((s8 *)arg0 + 0x24)) = 0;
    return arg0;
}

void func_00268180(void *arg0) {
    (*(u32 *)((s8 *)arg0 + 0x10)) = 0;
    (*(u32 *)((s8 *)arg0 + 0x00)) = 0;
    (*(u32 *)((s8 *)arg0 + 0x0C)) = 0;
}

void func_00268190(void *arg0, s32 arg1, s32 arg2) {
    void *pp;
    (*(void (**)(s32, void *))((s8 *)arg0 + 4))(*(s32 *)((s8 *)arg0 + 8), arg0);
    pp = (*(void **)((s8 *)arg0 + 0x14));
    (*(void (**)(void *, s32))((s8 *)pp + 0x14))((void *)((s8 *)arg0 + (s32)(*(s16 *)((s8 *)pp + 0x10))), arg2);
}
