extern s32 func_001D30E8(void *, void *);

void func_001D47C0(void *arg0, void *arg1) {
    s32 idx;
    void **slot;
    u8 *a1 = (u8 *)arg1;

    idx = func_001D30E8(arg0, a1 + 8);
    slot = (void **)((u8 *)arg0 + 4);
    slot = (void **)((u8 *)slot + (idx << 2));
    *(void **) (a1 + 4) = *slot;
    *slot = arg1;
}
