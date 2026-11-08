extern s32 func_0024C4B8(void *, void *, void *);

void *func_00233450(void *arg0, void *arg1, void *arg2) {
    s32 n = (*(s32 *)((u8 *)arg0 + 0x10) - *(s32 *)((u8 *)arg0 + 0x0C)) >> 2;
    s32 i = 0;
    if (n > 0) {
        do {
            s32 *base = *(s32 **)((u8 *)arg0 + 0x0C);
            void *elem = *(void **)((u8 *)base + (i << 2));
            if (func_0024C4B8(elem, arg1, arg2) != 0) return elem;
            i++;
        } while (i < n);
    }
    return 0;
}
