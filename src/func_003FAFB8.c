void func_003E0FA0(void *arg0, s64 arg1) {
    void *t = *(void **)((char *)arg0 + 0x40);
    *(s32 *)((char *)t + 0xF8) = 1;
    *(s64 *)((char *)t + 0xF0) = arg1;
}

extern s32 D_004404DC;
extern s32 func_003FAFE0(s32, s32, s32);

s32 func_003FAFB8(s32 a0, s32 a1) {
    return func_003FAFE0(a0, a1, D_004404DC + 0x5C);
}
