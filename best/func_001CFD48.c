void func_00265E80(void *arg0);
void func_001CFD48(void *arg0, void *arg1) {
    s32 temp = *(s32 *)((u8 *)arg1 + 0x5C);
    *(s32 *)((u8 *)arg0 + 0x188) = temp;
    func_00265E80(arg0 - 0x30);
    *(s32 *)((u8 *)arg0 + 0x184) = *(s32 *)((u8 *)arg0 - 0x30);
}
