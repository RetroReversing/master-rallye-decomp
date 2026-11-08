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
    int i = 0;
    func_003F9698(D_00475E90);
    if (((char *)v->cur - (char *)v->begin) >> 2 > 0) {
        do {
            func_003F9698(D_00475EA8, i, func_001D4568(v, i));
            i++;
        } while (i < (((char *)v->cur - (char *)v->begin) >> 2));
    }
}

void *func_001D4568(void *arg0, int arg1) {
    typedef struct {
        char *begin;
        char *cur;
    } S;
    S *s = (S *)arg0;
    if (arg1 >= 0) {
        char *b = s->begin;
        if ((unsigned int)arg1 < (unsigned int)((s->cur - b) >> 2)) {
            return *(void **)(b + (arg1 << 2));
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
    if (s->cur != s->end) {
        if (s->cur != 0)
            *(void **)s->cur = val;
        s->cur += 4;
    } else {
        func_001D8358(s, s->cur, &val);
    }
    return ((s->cur - s->begin) >> 2) - 1;
}

extern void func_001DACA8(void *, int);

void *func_001D4610(void *arg0) {
    int *p;
    int i;
    func_001DACA8(arg0, 0xFA1);
    i = 0xFA0;
    p = (int *)((char *)arg0 + 0x3E84);
    do {
        *p = 0;
        i--;
        p--;
    } while (i >= 0);
    return arg0;
}
