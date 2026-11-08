extern void *D_00476780;
extern void *func_001D21D8(void);
extern void func_001D78C0(void *, void *, void *);

void *func_001D1FD0(void *arg0) {
    void *p = func_001D21D8();
    *(void **)arg0 = (void *)&D_00476780;
    void *self = arg0;
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
