void func_003E0FA0(void *arg0, s64 arg1) {
    void *ptr = *(void **)((s8 *)arg0 + 0x40);
    *(s64 *)((s8 *)ptr + 0xF0) = arg1;
    *(s32 *)((s8 *)ptr + 0xF8) = 1;
}
