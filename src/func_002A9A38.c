/* identical to func_00159A30 (matched), with its names changed by decompdecomp */

/* func_00152F00 - binary search on u64 array */
u64 *func_00152F00(u64 *start, u64 *end, u64 *value) {
    s32 n = ((s32)end - (s32)start) >> 3;
    s32 i = n;
    u64 key = *value;

    while (i > 0) {
        s32 half = i >> 1;
        u64 *mid = start + half;

        if (*mid < key) {
            start = mid + 1;
            n = n - half - 1;
        } else {
            n = half;
        }
        i = n;
    }
    return start;
}

/* func_002A9A38 */
extern s32 func_00296710(s32);
extern void func_002966C0(s32, s32, s32);

void func_002A9A38(s32 arg0, s32 arg1, s32 arg2) {
    func_002966C0(func_00296710(arg0), arg1, arg2);
}

/* func_0015A1F8 - vtable dispatch */
void func_0015A1F8(void *arg0) {
    void *vt = *(void **)arg0;
    void (*fn)(void *) = *(void (**)(void *))((char *)vt + 0x14);
    fn((char *)arg0 + *(s16 *)((char *)vt + 0x10));
}

/* func_0015A220 - config registration */
extern void func_001D4040(void *, const char *);
extern void func_001E3D10(s32, void *, s32);
extern void func_001E3EC0(s32, void *, s32);
extern const char D_0044AC50[];
extern const char D_0044AC68[];

void func_0015A220(void) {
    s32 val;
    s32 val2;
    s32 cnt;

    val = func_001E4280();
    func_001D4040(&val, D_0044AC50);
    cnt = func_001E3650(val, (s32)&val) + 1;
    val2 = func_001E4280();
    func_001D4040(&val2, D_0044AC50);
    func_001E3EC0(val2, &val2, cnt);
    if (cnt == 3) {
        val = func_001E4280();
        func_001D4040(&val, D_0044AC68);
        func_001E3D10(val, &val, 1);
    }
}
