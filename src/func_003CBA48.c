void func_003D7B00(void *arg0, s32 arg1) {
    if (!*(s32*)((u8*)arg0 + 0)) {
        arg1 |= 4;
    }
    *(u8*)((u8*)arg0 + 0x1A) = arg1;
}

void func_003CB550(void *, void *);

void func_003CBA48(void *arg0, void *arg1, void *arg2, void *arg3, void *arg4) {
    func_003CB550(arg0, arg1);
    func_003CB550((void*)((u8*)arg0 + 0x10), arg2);
    func_003CB550((void*)((u8*)arg0 + 0x20), arg3);
    func_003CB550((void*)((u8*)arg0 + 0x30), arg4);
}
