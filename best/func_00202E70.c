void func_00202E70(s32 **arg0, float *arg1, void *arg2) {
    s32 *base = *(s32 **)arg2;
    s32 count = (*(s32 *)((u8 *)arg2 + 4) - (s32)base) >> 2;
    s32 i;

    if (count <= 0) return;

    for (i = 0; i < count; i++) {
        s32 j;
        ((float *)base)[i] = 0.0f;
        for (j = 0; j < count; j++) {
            float *row = (float *)arg0[i];
            ((float *)base)[i] += row[j] * arg1[j];
        }
    }
}
