extern void func_0016D330();
extern void func_0016D358();
extern f32 func_0016D0A8(void);

void func_0016D178(void *arg0, f32 *arg1) {
    *arg1 = *(f32 *)((char *)arg0 + 0x30) * 2.5f;
}

void func_0016D1B8(void *arg0, f32 fparg0) {
    if (*(s32 *)((char *)arg0 + 0x18) != 0) {
        if (fparg0 <= *(f32 *)((char *)arg0 + 0x1C)) {
            *(s32 *)((char *)arg0 + 0x18) = 0;
            func_0016D330();
        }
    } else if (*(f32 *)((char *)arg0 + 0x20) <= fparg0) {
        *(s32 *)((char *)arg0 + 0x18) = 1;
        func_0016D358(arg0);
    }
}

void func_0016D220(void *arg0, f32 fparg0) {
    if (*(s32 *)((char *)arg0 + 0x14) != 0) {
        if (-*(f32 *)((char *)arg0 + 0x24) <= fparg0) {
            *(s32 *)((char *)arg0 + 0x14) = 0;
            func_0016D358();
        }
    } else if (fparg0 <= -*(f32 *)((char *)arg0 + 0x28)) {
        *(s32 *)((char *)arg0 + 0x14) = 1;
        func_0016D330(arg0);
    }
}

f32 func_0016D078(void *arg0) {
    if (*(s32 *)((char *)arg0 + 0x10) == 0) {
        return 0.0f;
    }
    return func_0016D0A8();
}
