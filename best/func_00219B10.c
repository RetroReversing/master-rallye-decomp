void func_002B2028(void *);

struct Vec {
    char pad0[4];
    void **begin;
    void **end;
    void **cap;
};

void func_00219B10(struct Vec *v) {
    u32 count = (u32)(v->end - v->begin) >> 2;
    if (count != 0) {
        u32 i = 0;
        do {
            void *p = v->begin[i];
            if (p != NULL) {
                void *cur = p;
                do {
                    void *next = *(void **)cur;
                    func_002B2028(cur);
                    cur = next;
                } while (cur != NULL);
            }
            v->begin[i] = NULL;
            i++;
        } while (i < count);
    }
    v->cap = (void **)0; // write to offset 0x10? struct is pad0[4] (4) + begin(4) + end(4) + cap(4) = 16, so cap would be at +12, but target writes to +0x10
}
