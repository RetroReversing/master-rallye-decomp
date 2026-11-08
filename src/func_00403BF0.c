s32 func_00403BF0(u32 *arg0, u32 *arg1, u32 arg2) {
    u32 count = arg2 >> 2;
    u32 i = 0;
    if (count != 0) {
        do {
            arg0[i] = arg1[i];
            i = i + 1;
        } while (i < count);
    }
    return 0;
}
