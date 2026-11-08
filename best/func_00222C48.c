void *func_00222C48(void *arg0, void *arg1) {
    s32 *t0;
    s32 a3_count;
    s32 i;
    s32 key;
    s32 *v1;

    t0 = *(s32 **)arg0;
    a3_count = (s32)((*(s32 *)((u8 *)arg0 + 4) - (s32)t0) * 0xE9BD37A7) >> 4;
    i = 0;
    if (a3_count != 0) {
        key = *(s32 *)arg1;
        v1 = t0;
        do {
            if (key == *v1) {
                return v1;
            }
            i++;
            v1 = (s32 *)((u8 *)v1 + 0x170);
        } while ((u32)i < (u32)a3_count);
    }
    return *(s32 **)arg0;
}

s32 func_00222CA0(void *arg0, void *arg1) {
    s32 *begin;
    s32 count;
    s32 i;
    s32 key;
    s32 *p;

    begin = *(s32 **)arg0;
    count = (s32)((*(s32 *)((u8 *)arg0 + 4) - (s32)begin) * 0xE9BD37A7) >> 4;
    i = 0;
    if (count != 0) {
        key = *(s32 *)arg1;
        p = begin;
        do {
            if (key != *p) {
                i++;
                p = (s32 *)((u8 *)p + 0x170);
            } else {
                return i;
            }
        } while ((u32)i < (u32)count);
    }
    return -1;
}
