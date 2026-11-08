extern void func_003F9698(const char *, ...);
extern void *func_001D4568(void *, int);
extern const char D_00475E90[];
extern const char D_00475EA8[];

typedef struct Vec4388 {
    void *begin;
    void *cur;
} Vec4388;

void func_001D4388(void *arg0) {
    Vec4388 *v = (Vec4388 *)arg0;
    int i;
    int count;

    func_003F9698(D_00475E90);
    count = ((char *)v->cur - (char *)v->begin) >> 2;
    if (count > 0) {
        i = 0;
        do {
            void *val = func_001D4568(arg0, i);
            func_003F9698(D_00475EA8, i, val);
            i++;
        } while (i < (((char *)v->cur - (char *)v->begin) >> 2));
    }
}

void *func_001D4568(void *arg0, int arg1) {
    typedef struct {
        void **begin;
        void **cur;
    } S;
    S *s = (S *)arg0;
    if (arg1 >= 0) {
        if ((unsigned int)arg1 < (unsigned int)((s->cur - s->begin))) {
            return s->begin[arg1];
        }
    }
    return 0;
}

extern void func_001D8358(void *, void *, void *);

int func_001D45A0(void *arg0, void *arg1) {
    typedef struct {
        char *begin;
        char *cur;
        char *end;
    } S;
    S *s = (S *)arg0;
    void *val = arg1;
    if (s->cur == s->end) {
        func_001D8358(s, s->cur, &val);
    } else {
        if (s->cur != 0)
            *(void **)s->cur = val;
        s->cur += 4;
    }
    return ((s->cur - s->begin) >> 2) - 1;
}

extern void func_001DACA8(void *, int);

void *func_001D4610(void *arg0) {
    int i;
    func_001DACA8(arg0, 0xFA1);
    i = 0xFA0;
    do {
        *(int *)((char *)arg0 + i * 4) = 0;
        i--;
    } while (i >= 0);
    return arg0;
}
