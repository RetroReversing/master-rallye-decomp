typedef struct { u8 pad[8]; s32 f8; u8 pad2[0x10]; f32 f1C; s32 f20; } A1;
void func_00200250(A1 *p) {
    p->f20 = 0;
    p->f1C = 1.0f;
    p->f8 = 1;
}

typedef struct { void **begin, **end; void **cap; } Vec;
typedef struct { char _0[0x10]; s16 off; s16 _12; void (*fn)(void *); } Vtbl;

void func_00204868(Vec *p) {
    void **it = p->begin;
    if (it != p->end) {
        void *g;
        do {
            g = *it;
            if (g != NULL) {
                Vtbl *vt = *(Vtbl **)g;
                vt->fn((char *)g + vt->off);
            }
            it++;
        } while (it != p->end);
    }
}

extern char D_004783F8[];
extern void func_003F9698(void *, s32, s32);
extern void func_00204938(void *, s32);
extern void func_002188A8(void *, void *, void *);

void func_00204A80(Vec *p, void *g) {
    s32 count = p->end - p->begin;
    s32 capn = p->cap - p->begin;
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
        if (*it == g) {
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
