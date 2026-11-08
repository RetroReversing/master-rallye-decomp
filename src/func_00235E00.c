extern f32 D_004264A0;
extern void func_001CF448(void *);

void func_0016D178(void *arg0, f32 *arg1) {
    *arg1 = *(f32 *)((u8 *)arg0 + 0x30) * 2.5f;
}

void *func_00235D68(void *arg0, void *arg1, void *arg2) {
    f32 sp[4];
    f32 *a = (f32 *)((u8 *)arg1 + 8);
    f32 *b = (f32 *)((u8 *)arg2 + 8);
    f32 ax = a[0], ay = a[1], az = a[2];
    f32 bx = b[0], by = b[1], bz = b[2];

    sp[2] = az * by - ay * bz;
    sp[1] = az * bx - ax * bz;
    sp[0] = ay * bx - ax * by;

    func_001CF448(sp);

    ((f32 *)arg0)[0] = sp[0];
    ((f32 *)arg0)[1] = sp[1];
    ((f32 *)arg0)[2] = sp[2];
    return arg0;
}

s32 func_00235E00(void *arg0, void *arg1) {
    f32 *pa = (f32 *)((u8 *)arg0 + 8);
    f32 *pb = (f32 *)((u8 *)arg1 + 8);
    f32 dot = pa[0] * pb[0] + pa[1] * pb[1] + pa[2] * pb[2];
    f32 ad = __builtin_fabsf(dot);
    f32 diff = 1.0f - ad;
    diff = __builtin_fabsf(diff);
    if (diff < D_004264A0) return 1;
    return 0;
}

s32 func_00238F48(void *arg0) {
    s32 *cur = *(s32 **)((u8 *)arg0 + 4);
    s32 *end = *(s32 **)((u8 *)arg0 + 8);
    s32 val;

    if (cur == end) return 0;
    val = *cur;
    while (1) {
        cur++;
        if (val != 0) return val;
        if (cur == end) return 0;
        val = *cur;
    }
}
