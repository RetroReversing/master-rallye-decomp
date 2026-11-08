extern void func_003B3728(void *);

void func_003B2260(void *arg0, void *arg1, s32 arg2) {
    while ((u32)arg0 < (u32)arg1) {
        func_003B3728(arg0);
        arg0 = (u8 *)arg0 + 0x30;
    }
}
