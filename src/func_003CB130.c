void func_003CB130(void *arg0, u32 arg1) {
    *(u32 *)((u8 *)arg0 + 4) = arg1;
    *(u32 *)((u8 *)arg0 + 0) = arg1;
    *(u32 *)((u8 *)arg0 + 8) = 0;
}
