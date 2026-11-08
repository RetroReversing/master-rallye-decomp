typedef struct { void **begin, **end; void **cap; } Vec;

extern char D_004783F8[];
extern void func_003F9698(void *, s32, s32);
extern void func_00204938(void *, s32);
extern void func_002188A8(void *, void *, void *);

void func_00204A80(Vec *p, void *g) {
    u32 count = p->end - p->begin;
    u32 capn = p->cap - p->begin;
    if (count >= capn) {
        func_003F9698(&D_004783F8, capn, count + 0x40);
        func_00204938(p, (p->cap - p->begin) + 0x40);
    }
    if (p->end != p->cap) {
        if (p->end != NULL)
            *p->end = g;
        p->end += 1;
    } else {
        func_002188A8(p, p->end, &g);
    }
}

extern void func_003F93CC(void *, void *, s32);

void func_00204B30(Vec *p, void *g) {
    void **it = p->begin;
    while (it != p->end) {
        if (g == *it) {
            void **next = it + 1;
            if (next != p->end) {
                s32 n = p->end - next;
                func_003F93CC(it, next, n * 4);
            }
            p->end -= 1;
            return;
        }
        it++;
    }
}
