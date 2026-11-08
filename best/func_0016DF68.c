extern void *func_002015D8(void);
extern void func_0016E1D8(void *);
extern void func_0016F2F0(void *, s32);
extern void func_001C6B58(void *, s32 *, void *);
extern void *D_00473530;
extern void D_002AD390(void);

void func_0016D178(void *arg0, f32 *arg1) {
    *arg1 = *(f32 *)((char *)arg0 + 0x30) * 2.5f;
}

void func_0016DF68(void *arg0, s32 arg1) {
    s32 sp0 = arg1;
    void *t = (char *)arg0 + 0x2C;
    s32 *a = *(s32 **)((char *)t + 4);
    s32 *b = *(s32 **)((char *)t + 8);
    if (a == b) {
        func_001C6B58(t, a, &sp0);
    } else {
        if (a != NULL) {
            *a = arg1;
        }
        *(s32 **)((char *)t + 4) = (s32 *)((char *)a + 4);
    }
    func_0016E1D8(arg0);
    func_0016F2F0(arg0, sp0);
}

void func_0016DFD8(void) {
    void *r = func_002015D8();
    void *q = *(void **)((char *)r + 8);
    void *v = *(void **)q;
    s16 off = *(s16 *)((char *)v + 0x80);
    s32 (*fn)(void *) = *(s32 (**)(void *))((char *)v + 0x84);
    fn((char *)q + off);
}

void func_0016BD40(void *arg0, s32 arg1) {
    *(void **)((char *)arg0 + 0x14) = &D_00473530;
    if (arg1 & 1) {
        D_002AD390();
    }
}
