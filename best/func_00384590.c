s32 func_003853D8(void *arg0) {
    s32 *start = *(s32 **)arg0;
    s32 *end = *(s32 **)((u8 *)arg0 + 4);
    s32 diff = (s32)((u8 *)end - (u8 *)start);
    s32 count = (s32)(((u32)((u32)diff * 0x38E38E39u)) >> 3);
    if (count > 0) {
        s32 min_val = start[8];
        s32 max_val = min_val;
        void *p = start;
        while (p != end) {
            s32 *q = (s32 *)((u8 *)p + 0x20);
            s32 i = 2;
            do {
                s32 v = *q;
                if (max_val < v) max_val = v;
                if (v < min_val) min_val = v;
                i -= 1;
                q += 2;
            } while (i >= 0);
            p = (u8 *)p + 0x48;
        }
        return max_val - min_val;
    }
    return 0;
}

void *func_00384590(void *arg0) {
    void **slot = (void **)arg0;
    void *head = *slot;
    if (*(void **)head == NULL) {
        *slot = NULL;
        void *table = *(void **)((u8 *)arg0 + 4);
        s32 *start = *(s32 **)((u8 *)table + 4);
        s32 *end = *(s32 **)((u8 *)table + 8);
        s32 count = ((s32)((u8 *)end - (u8 *)start)) >> 2;
        u32 hash = ((u32)*(s16 *)((u8 *)head + 4) % (u32)count) + 1;
        if (hash < (u32)count) {
            do {
                void *entry = *(void **)((u8 *)table + hash * 4);
                *slot = entry;
                if (entry == NULL) {
                    hash += 1;
                    if (hash < (u32)count) continue;
                }
                break;
            } while (1);
        }
    }
    return arg0;
}
