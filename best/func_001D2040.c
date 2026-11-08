extern void D_002AD390(void *);
extern void *func_003F93CC(void *, void *, s32);
extern void *func_001D21D8(void);
extern void func_001D78C0(void *, void *, void *);
extern void *D_00476780;

/* func_001D3920: sentinel-list front */
s32 func_001D3920(void *arg0) {
    s32 *v = *(s32 **)((char*)arg0 + 4);
    return (v != arg0) ? *v : 0;
}

/* func_001D2040: remove this from singleton vector, optionally destroying */
void func_001D2040(void *arg0, s32 arg1) {
    void *p = func_001D21D8();
    *(void **)arg0 = &D_00476780;
    void **begin = *(void ***)p;
    s32 flag = arg1 & 1;
    if (begin != *(void ***)((char*)p + 4)) {
        do {
            if (*begin == arg0) {
                void **end = *(void ***)((char*)p + 4);
                void **next = begin + 1;
                if (next != end)
                    func_003F93CC(begin, next, (((s32)end - (s32)next) >> 2) << 2);
                *(void **)((char*)p + 4) = (void *)((char*)end - 4);
                break;
            }
            begin++;
        } while (begin != *(void ***)((char*)p + 4));
        flag = arg1 & 1;
    }
    if (flag)
        D_002AD390(arg0);
}

/* func_001D1FD0: push this into singleton vector */
void *func_001D1FD0(void *arg0) {
    void *p = func_001D21D8();
    *(void **)arg0 = &D_00476780;
    void **end = *(void ***)((char*)p + 4);
    void **cap = *(void ***)((char*)p + 8);
    void *self = arg0;
    if (end == cap) {
        func_001D78C0(p, end, &self);
    } else {
        if (end != NULL)
            *end = self;
        *(void **)((char*)p + 4) = (void *)((char*)end + 4);
    }
    return self;
}

/* func_001D1F58: scan string for newlines until a non-space char */
void func_001D1F58(void *arg0) {
    if (*(char **)((char*)arg0 + 4) >= *(char **)((char*)arg0 + 8))
        return;
    if (*(*(char **)((char*)arg0 + 4)) >= 0x21)
        return;
    do {
        if (*(*(char **)((char*)arg0 + 4)) == '\n')
            (*(s32 *)((char*)arg0 + 0xC))++;
        (*(char **)((char*)arg0 + 4))++;
        if (*(char **)((char*)arg0 + 4) >= *(char **)((char*)arg0 + 8))
            return;
    } while (*(*(char **)((char*)arg0 + 4)) < 0x21);
}
