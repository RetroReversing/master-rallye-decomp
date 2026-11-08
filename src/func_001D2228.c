extern char D_00475C60[];
extern void *D_00426290;
extern void *D_002AD408(int);
extern void func_001D4040(s32, s32 *);

void func_001D2228(s32 a0, s32 a1, s32 a2) {
    func_001D4040(a2, (s32 *)&D_00475C60);
}

void *func_001D21D8(void) {
    void *p = D_00426290;
    if (p == NULL) {
        p = D_002AD408(0x10);
        D_00426290 = p;
        ((s32 *)p)[0] = 0;
        ((s32 *)p)[1] = 0;
        ((s32 *)p)[2] = 0;
        ((s32 *)p)[3] = 0;
    }
    return D_00426290;
}

void func_001D2160(void *arg0, s32 *arg1) {
    void **begin = *(void ***)((char *)arg0 + 0);
    void **end = *(void ***)((char *)arg0 + 4);
    *(s32 *)((char *)arg0 + 0xC) = *arg1;
    if (begin != end) {
        void **p = begin;
        void *elem = *p;
        do {
            void *vtab = *(void **)elem;
            void (*fn)(void *, void **) = *(void (**)(void *, void **))((char *)vtab + 0x14);
            p = (void **)((char *)p + 4);
            fn((char *)elem + *(u16 *)((char *)vtab + 0x10), elem);
            elem = *p;
        } while (p != end);
    }
}

s32 func_001D3920(void *arg0) {
    s32 *v = *(s32**)((char*)arg0 + 4);
    return (v != arg0) ? *v : 0;
}
