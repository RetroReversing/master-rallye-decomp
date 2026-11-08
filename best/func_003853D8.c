extern s32 func_003A3170(s32, s32);
extern s32 func_003A3D90(void *, void *);
extern void func_003F94D0(u32, s8);

s32 func_003973A0(s32 arg0) {
    return arg0;
}

void func_003D1290(u32 dummy, s8 *arg1) {
    func_003F94D0(dummy, *arg1);
}

s32 func_003853D8(void *arg0) {
    s32 *start = *(s32 **)arg0;
    s32 *end = *(s32 **)((u8 *)arg0 + 4);
    s32 count = (s32)(((s32)(end - start) * 0x38E38E39) >> 3);
    if (count > 0) {
        s32 min_val = start[0x20/4];
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
    void **slot = *(void ***)arg0;
    void *head = *slot;
    *slot = head;
    if (head == NULL) {
        void *table = *(void **)((u8 *)arg0 + 4);
        void *end = table + 4;
        s32 count = ((*(s32 *)end - *(s32 *)table) >> 2);
        u32 hash = ((u32)*(s32 *)((u8 *)head + 4) % (u32)count) + 1;
        if (hash < (u32)count) {
            do {
                void *entry = *(void **)((u8 *)table + hash * 4);
                *(void **)arg0 = entry;
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
