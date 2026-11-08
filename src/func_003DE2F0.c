extern void func_003D7D68(void *);

void func_003DE2F0(void *arg0) {
    s32 *p = (s32 *)arg0;
    *((s64 *)((u8 *)p + 0x40)) = -1;
    p[0] |= 0x240C;
    func_003D7D68(arg0);
    p[0x38 / 4] = -1;
}
