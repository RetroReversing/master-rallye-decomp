/* identical to func_00151500 (matched), with its names changed by decompdecomp */
s32 func_003C7170(s8 *s1, s8 *e1, s8 *s2, s8 *e2) {
    s8 c1, c2;
    while (s1 != e1 && s2 != e2) {
        c1 = *s1;
        c2 = *s2;
        if (c1 < c2) return 1;
        if (c2 < c1) return 0;
        s1++;
        s2++;
    }
    return s1 == e1 && s2 != e2;
}

extern void func_001D2488(s32 *, s32 *);

s32 *func_00153568(s32 *start, s32 *end, s32 *other) {
    s32 *q = other;
    s32 *p = start;
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
