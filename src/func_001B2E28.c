f32 func_001B2DF0(void *arg0) {
    f32 v94 = *(f32 *)((u8 *)arg0 + 0x94);
    f32 v28 = *(f32 *)((u8 *)arg0 + 0x28);
    f32 vC0 = *(f32 *)((u8 *)arg0 + 0xC0);
    return (vC0 + v94 * v28) / (v94 + 1.0f);
}

void func_001B2E28(void *arg0, s32 arg1, f32 arg2) {
    *(f32 *)((u8 *)arg0 + 0x98) = arg2;
    *(s32 *)((u8 *)arg0 + 0x9C) = arg1;
}

f32 func_001B2E38(void *arg0) {
    f32 vA0 = *(f32 *)((u8 *)arg0 + 0xA0);
    f32 v30 = *(f32 *)((u8 *)arg0 + 0x30);
    f32 vC4 = *(f32 *)((u8 *)arg0 + 0xC4);
    return (vC4 + vA0 * v30) / (vA0 + 1.0f);
}

extern void func_001B1E70(void *);

void func_001B2E60(void *arg0, void *arg1, s32 arg2) {
    func_001B1E70((u8 *)arg0 + 0xA4);
    if (arg2 != 0 || *(s32 *)((u8 *)arg0 + 0xCC) != 0) {
        *(s32 *)((u8 *)arg1 + 0xD0) = 1;
    }
}
