void func_003D7B00(void *arg0, s32 arg1) {
    if (*(s32 *)((u8 *)arg0) != 0) {
        arg1 = arg1 | 4;
    }
    *(u8 *)((u8 *)arg0 + 0x1A) = (u8)arg1;
}

s32 func_003B8868(void *arg0) {
    return 0;
}

s32 func_003B87D8(void *arg0) {
    return 0;
}

void func_003B7DA8(void *arg0, s32 arg1, s32 arg2) {
    u32 temp_2;
    u32 temp_3;
    temp_2 = *(u32 *)((u8 *)arg0 + 4);
    temp_3 = temp_2 + (arg1 * 4);
    if ((temp_3 >= temp_2) && (temp_3 < *(u32 *)((u8 *)arg0))) {
        *(s32 *)temp_3 = arg2;
    }
}
