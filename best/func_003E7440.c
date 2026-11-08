static void func_003E7498(void *arg0, int arg1);

void func_003E7440(void *arg0, int arg1, int arg2, int arg3) {
    *(s32 *)((char *)arg0 + 0x08) = arg1;
    *(s32 *)((char *)arg0 + 0x0C) = arg1;
    *(s32 *)((char *)arg0 + 0x24) = arg2 + arg3;
    *(s32 *)((char *)arg0 + 0x28) = arg3;
    *(u64 *)arg0 = 0;
    *(s32 *)((char *)arg0 + 0x10) = 0;
    *(u64 *)((char *)arg0 + 0x18) = 0;
    *(s32 *)((char *)arg0 + 0x20) = arg2;
    func_003E7498(arg0, 0);
}
