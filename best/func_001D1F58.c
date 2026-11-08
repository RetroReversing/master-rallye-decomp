extern void *D_00476780;
extern void *func_001D21D8(void);
extern void func_001D78C0(void *, void *, void *);
extern void func_003F93CC(void *, void *, s32);
extern void D_002AD390(void *);

/* func_001D3920: sentinel-list front */
s32 func_001D3920(void *arg0) {
    s32 *v = *(s32 **)((char*)arg0 + 4);
    return (v != arg0) ? *v : 0;
}

/* func_001D1FD0: push this into singleton vector */
void *func_001D1FD0(void *arg0) {
    void *self = arg0;
    *(void **)arg0 = (void *)&D_00476780;
    void *p = func_001D21D8();
    void **end = *(void ***)((char*)p + 4);
    void **cap = *(void ***)((char*)p + 8);
    if (end == cap) {
        func_001D78C0(p, end, &self);
    } else {
        if (end)
            *end = self;
        *(void **)((char*)p + 4) = (void **)((char*)end + 4);
    }
    return arg0;
}

/* func_001D2040: remove this from singleton vector, optionally destroying */
void func_001D2040(void *arg0, s32 arg1) {
    *(void **)arg0 = (void *)&D_00476780;
    void *p = func_001D21D8();
    void **begin = *(void ***)p;
    void **end = *(void ***)((char*)p + 4);
    s32 flag = arg1 & 1;
    if (begin != end) {
        do {
            if (*begin == arg0) {
                void **next = begin + 1;
                if (next != end)
                    func_003F93CC(begin, next, (((s32)end - (s32)next) >> 2) << 2);
                *(void **)((char*)p + 4) = (void **)((char*)end - 4);
                break;
            }
            begin++;
        } while (begin != end);
        flag = arg1 & 1;
    }
    if (flag)
        D_002AD390(arg0);
}

/* func_001D1F58: scan string, count '\n' until a non-space char */
void func_001D1F58(void *arg0) {
    char *end = *(char **)((char*)arg0 + 8);
    if (!(*(char **)((char*)arg0 + 4) < end))
        return;
    if (!(*(char *)(*(char **)((char*)arg0 + 4)) < 0x21))
        return;
    do {
        if (*(char *)(*(char **)((char*)arg0 + 4)) == '\n')
            (*(s32 *)((char*)arg0 + 0xC))++;
        (*(char **)((char*)arg0 + 4))++;
        if (!(*(char **)((char*)arg0 + 4) < end))
            return;
    } while (*(char *)(*(char **)((char*)arg0 + 4)) < 0x21);
}
