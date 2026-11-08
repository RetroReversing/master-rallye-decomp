s32 func_001D3920(void *arg0) {
    s32 *v = *(s32 **)((u8 *)arg0 + 4);
    s32 r = 0;
    if (v != arg0 && v != arg0) {
        r = *v;
    }
    return r;
}

s32 func_00238F88(void *arg0) {
    s32 *end = *(s32 **)((u8 *)arg0 + 8);
    s32 *p = *(s32 **)((u8 *)arg0 + 4);
    s32 val;

    if (p == end) {
        return 0;
    }
    val = *p;
    while (1) {
        p++;
        if (val != 0) {
            return 1;
        }
        if (p == end) {
            return 0;
        }
        val = *p;
    }
}

extern float fabsf(float);

s32 func_0023BEA8(void *arg0, void *arg1) {
    s32 *begin = *(s32 **)((u8 *)arg1 + 0);
    s32 *endp = *(s32 **)((u8 *)arg1 + 4);
    s32 n = ((s32)((u8 *)endp - (u8 *)begin) >> 2) - 1;
    s32 i = 0;

    if (n > 0) {
        s32 j = 1;
        do {
            s32 *a = *(s32 **)((u8 *)begin + (i << 2));
            s32 *b = *(s32 **)((u8 *)begin + (j << 2));
            f32 fa = fabsf(*(f32 *)((u8 *)a + 0xD4));
            f32 fb = fabsf(*(f32 *)((u8 *)b + 0xD4));
            if (fa < fb) {
                return 0;
            }
            i = j;
            j = i + 1;
        } while (i < n);
    }
    return 1;
}

s32 func_0023BFF0(void *arg0, void *arg1, void *arg2) {
    s32 a1_4c = *(s32 *)((u8 *)arg1 + 0x4C);
    s32 a2_4c = *(s32 *)((u8 *)arg2 + 0x4C);
    s32 a2_50 = *(s32 *)((u8 *)arg2 + 0x50);
    s32 a1_50;

    if (a1_4c != a2_4c) {
        s32 r = 0;
        if (a1_4c == a2_50) {
            a1_50 = *(s32 *)((u8 *)arg1 + 0x50);
            r = 1;
            if (a1_50 != a2_4c) {
                r = 0;
            }
        }
        return r;
    }
    a1_50 = *(s32 *)((u8 *)arg1 + 0x50);
    if (a1_50 != a2_50) {
        return 0;
    }
    return 1;
}
