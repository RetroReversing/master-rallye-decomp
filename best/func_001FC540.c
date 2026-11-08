extern void func_003F93CC(void *, void *, int);

void func_001FC540(void *arg0) {
    void **it = *(void ***)arg0;
    void **end = *(void ***)((char *)arg0 + 4);

    if (it != end) {
        do {
            void *obj = *it;
            if (obj != 0) {
                void *vt = *(void **)((char *)obj + 8);
                void (*fn)(void *, int) = *(void (**)(void *, int))((char *)vt + 0xC);
                s16 off = *(s16 *)((char *)vt + 8);
                fn((char *)obj + off, 3);
            }
            it++;
            end = *(void ***)((char *)arg0 + 4);
        } while (it != end);
    }
    {
        void **begin = *(void ***)arg0;
        void **end2 = *(void ***)((char *)arg0 + 4);
        func_003F93CC(begin, end2, 0);
        *(void ***)((char *)arg0 + 4) = (void **)((char *)*(void ***)((char *)arg0 + 4) - ((char *)end2 - (char *)begin));
    }
}
