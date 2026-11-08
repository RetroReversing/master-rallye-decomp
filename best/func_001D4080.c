extern void func_003F9698(const char *, ...);
extern const char D_00475E50[];
extern const char D_00475E60[];

typedef struct BucketEA0 {
    char *base;
    char *cur;
} BucketEA0;

typedef struct VecEA0 {
    BucketEA0 **begin;
    BucketEA0 **cur;
} VecEA0;

void func_001D3EA0(void *arg0) {
    VecEA0 *v = (VecEA0 *)arg0;
    BucketEA0 **it;

    func_003F9698(D_00475E50);
    it = v->begin;
    if (it != v->cur) {
        do {
            BucketEA0 *b = *it;
            int idx = (int)((char *)it - (char *)v->begin) >> 2;
            int size = (int)(b->cur - b->base);
            it++;
            func_003F9698(D_00475E60, idx, size);
        } while (it != v->cur);
    }
}

int func_001D4080(void *arg0, void *arg1) {
    typedef struct {
        void **begin;
        void **end;
        int unk8;
    } S;
    S *s = (S *)arg0;
    void **it = s->begin;
    void **end = s->end;
    void *key = *(void **)arg1;

    if (it != end) {
        do {
            void *v = *it;
            it++;
            if (v == key)
                return 1;
        } while (it != end);
    }
    return 0;
}

extern void *D_002AD408(int);
extern void *func_001D3BF0(void *);
extern void func_001D3D18(void *, int);
extern void func_001D4280(void *, const char *);
extern void *func_001D4420(void *, int);
extern void *func_001D4610(void *);
extern const char D_00475E78[];

void *func_001D40C0(void *arg0) {
    typedef struct {
        void *f0;
        void *f4;
        void *f8;
    } S;
    S *s = (S *)arg0;
    void *p;
    void *q;

    s->f0 = func_001D3BF0(D_002AD408(0x10));
    p = D_002AD408(0xC);
    s->f4 = p;
    ((int *)p)[1] = 0;
    ((int *)p)[0] = 0;
    ((int *)p)[2] = 0;
    q = D_002AD408(0x3E88);
    s->f8 = func_001D4610(q);
    func_001D4420(s->f4, 0x1000);
    func_001D3D18(s->f0, 0x28000);
    func_001D4280(s, D_00475E78);
    return s;
}
