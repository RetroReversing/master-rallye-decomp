extern void func_001CF448(void *);

void *func_00235D68(void *arg0, void *arg1, void *arg2) {
    f32 sp[4];
    f32 *a = (f32 *)((u8 *)arg1 + 8);
    f32 *b = (f32 *)((u8 *)arg2 + 8);
    f32 a0 = a[0], a1 = a[1], a2 = a[2];
    f32 b0 = b[0], b1 = b[1], b2 = b[2];

    sp[0] = a1 * b2 - a2 * b1;
    sp[1] = a2 * b0 - a0 * b2;
    sp[2] = a0 * b1 - a1 * b0;

    func_001CF448(sp);

    ((f32 *)arg0)[0] = sp[0];
    ((f32 *)arg0)[1] = sp[1];
    ((f32 *)arg0)[2] = sp[2];
    return arg0;
}

s32 func_00238F48(void *arg0) {
    s32 *end = *(s32 **)((u8 *)arg0 + 8);
    s32 *cur = *(s32 **)((u8 *)arg0 + 4);
    s32 *e;
    s32 val;

    if (cur == end) {
        return 0;
    }
    e = end;
    val = *cur;
    for (;;) {
        cur++;
        if (val != 0) {
            return val;
        }
        if (cur == e) {
            return 0;
        }
        val = *cur;
    }
}
