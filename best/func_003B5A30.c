void func_003B5A30(void *arg0, void *arg1, void *arg2, void *arg3) {
    void *temp_3;
    f32 f0;
    temp_3 = *(void **)((u8 *)arg3 + 8);
    f0 = (*(f32 (*)(void *))((u8 *)temp_3 + 0x84))((u8 *)arg3 + *(s16 *)((u8 *)temp_3 + 0x80));
    *(f32 *)((u8 *)arg2 + 0x28) = f0;
}
