extern void D_002AD390(void *);
extern void func_001D3C30(void *, int);
extern void func_002B2028(void *);
extern u32 D_0040E618[];

typedef struct Vec4150 {
    void *begin;
    void *cur;
    void *end;
} Vec4150;

typedef struct S4150 {
    void *f0;
    Vec4150 *f4;
    void *f8;
} S4150;

void func_001D4150(void *arg0, int arg1) {
    S4150 *s = (S4150 *)arg0;
    if (s->f0 != 0)
        func_001D3C30(s->f0, 3);
    if (s->f4 != 0) {
        Vec4150 *v = s->f4;
        void *end = v->end;
        void *base = v->begin;
        int n = ((char *)end - (char *)base) >> 2;
        if (n != 0) {
            if ((n << 2) != 0) {
                func_002B2028(base);
            } else {
                *(u32 *)base = D_0040E618[-1];
                D_0040E618[-1] = (u32)(unsigned int)base;
            }
        }
        D_002AD390(v);
    }
    D_002AD390(s->f8);
    if (arg1 & 1)
        D_002AD390(s);
}

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
    func_003F9698(D_00475E90);
    i = 0;
    if ((((char *)v->cur - (char *)v->begin) >> 2) > 0) {
        do {
            void *val = func_001D4568(v, i);
            func_003F9698(D_00475EA8, i, val);
            i++;
        } while (i < (((char *)v->cur - (char *)v->begin) >> 2));
    }
}
