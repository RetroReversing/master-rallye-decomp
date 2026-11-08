extern void *func_002063F0(s32, s32, s32 *);

void func_002062F0(s32 arg0, s32 arg1) {
    s32 local;
    void *temp_2 = func_002063F0(arg0, 1, &local);

    *(s16 *)((u8 *)temp_2 + 0x2C) = (s16)(arg1 & 0xFFFF);
    if (local != 0) {
        *(s32 *)((u8 *)temp_2 + 0x30) = 1;
    }
}
