extern void func_001D2488(s32 *, s32 *);

s32 *func_00153568(s32 *p, s32 *end, s32 *q) {
    if (p != end) {
        do {
            if (q != 0)
                func_001D2488(q, p);
            p++;
            q++;
        } while (p != end);
    }
    return q;
}
