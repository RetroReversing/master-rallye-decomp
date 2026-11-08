s32 func_0034D858(void *arg0, void *arg1) {
    void *p;
    void *end;
    f32 best;
    f32 f2;
    f32 f0;
    if (arg1 == NULL) return 0;
    p = *(void **)arg1;
    end = *(void **)((char *)arg1 + 0x4);
    best = 0.0f;
    f2 = *(f32 *)((char *)arg0 + 0x18);
    if (p != end) {
        f0 = *(f32 *)((char *)p + 0x18);
        for (;;) {
            if (best < f0) best = f0;
            p = (char *)p + 0x24;
            if (p == end) break;
            f0 = *(f32 *)((char *)p + 0x18);
        }
    }
    if (f2 < best) return 1;
    return 0;
}
