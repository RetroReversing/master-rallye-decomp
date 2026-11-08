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
        void *base = v->begin;
        int n = ((char *)v->end - (char *)base) >> 2;
        if (n != 0) {
            if ((n << 2) != 0) {
                func_002B2028(base);
            } else {
                *(void **)base = D_0040E618[-1];
                D_0040E618[-1] = (u32)base;
            }
        }
        D_002AD390(v);
    }
    D_002AD390(s->f8);
    if (arg1 & 1)
        D_002AD390(s);
}

extern void *func_001D3DD0(void *, int);
extern void *func_001D45A0(void *, void *);
extern void *func_001D4758(void *, const char *);
extern void func_001D47C0(void *, void *);
extern void func_003FA8A4(char *, const char *);
extern int func_003FA9B8(const char *);

typedef struct S4280 {
    void *f0;
    void *f4;
    void *f8;
} S4280;

void *func_001D4280(void *arg0, const char *arg1) {
    S4280 *s = (S4280 *)arg0;
    void *r;
    if (arg1 == 0)
        return 0;
    r = func_001D4758(s->f8, arg1);
    if (r == 0) {
        r = func_001D3DD0(s->f0, func_003FA9B8(arg1) + 9);
        func_003FA8A4((char *)r + 8, arg1);
        *(void **)r = func_001D45A0(s->f4, (char *)r + 8);
        func_001D47C0(s->f8, r);
    }
    return *(void **)r;
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
    int i = 0;
    func_003F9698(D_00475E90);
    if (((char *)v->cur - (char *)v->begin) >> 2 > 0) {
        do {
            void *val = func_001D4568(v, i);
            func_003F9698(D_00475EA8, i, val);
            i++;
        } while (i < (((char *)v->cur - (char *)v->begin) >> 2));
    }
}
