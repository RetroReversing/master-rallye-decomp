extern void *func_001E6A70(void *arg0, void *arg1);
void *func_001E6A30(void *arg0) {
    void *v0 = func_001E6A70(arg0, 0);
    if (v0 != 0) {
        void *t = *(void **)((char *)v0 + 4);
        void *(*fn)(void *, void *) = *(void *(**)(void *, void *))((char *)t + 0x14);
        short off = *(short *)((char *)t + 0x10);
        return fn((char *)v0 + off, v0);
    }
    return 0;
}

void *func_001E6A70(void *arg0, void *arg1) {
    void **p = *(void ***)arg0;
    void **end = *(void ***)((char *)arg0 + 4);
    if (p == end) return 0;
    do {
        void *cur = *p;
        p++;
        if (*(void **)cur == arg1) return cur;
    } while (p != end);
    return 0;
}

extern void func_003F93CC(void **, s32, s32);
void func_001E6BE8(void *arg0) {
    void **p = *(void ***)arg0;
    void **endp = *(void ***)((char *)arg0 + 4);
    if (p != endp) {
        do {
            void *v = *p;
            if (v != 0) {
                void *vt = *(void **)((char *)v + 4);
                void (*fn)(void *, s32, void *) = *(void (**)(void *, s32, void *))((char *)vt + 0xC);
                fn((char *)v + *(short *)((char *)vt + 8), 3, v);
            }
            p++;
        } while (p != endp);
    }
    p = *(void ***)arg0;
    endp = *(void ***)((char *)arg0 + 4);
    func_003F93CC(p, (s32)endp - (s32)p, 0);
    *(void ***)((char *)arg0 + 4) = p;
}

extern s32 D_00426398;
extern s32 D_004922B0;
void *func_001E5DA8(void *arg0) {
    if (D_00426398 == 0) {
        D_00426398 = 1;
        D_004922B0 = 0;
    }
    if (*(s32 *)((char *)arg0 + 8) == 0xB) {
        return *(void **)((char *)arg0 + 4);
    }
    return &D_004922B0;
}
