s32 func_003CB150(void *arg0) {
    u32 *var_5 = *(u32 **)arg0;
    u32 *temp_6 = *(u32 **)((u8 *)arg0 + 8);
    if ((u32)var_5 & 0xC) {
        do {
            *var_5 = 0;
            var_5 = (u32 *)((u8 *)var_5 + 4);
        } while ((u32)var_5 & 0xC);
    }
    if (temp_6 != NULL) {
        s32 diff = ((s32)((u8 *)var_5 - (u8 *)temp_6) >> 4) - 1;
        *temp_6 += diff;
    }
    *(u32 **)((u8 *)arg0 + 0) = var_5;
    *(u32 **)((u8 *)arg0 + 8) = NULL;
    return (s32)var_5;
}
