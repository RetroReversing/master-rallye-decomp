extern char D_00475D78[];
extern char D_00475DB0[];
extern char D_00475DB8[];
extern int func_001D4010(void *);
extern int func_003F9698(const char *, ...);

typedef struct {
    void *vt;
} TDAE;

void func_001DAE40(TDAE *arg0) {
    void *base;
    unsigned char *p = 0;
    int n = 0;
    base = *(void **)((char *)arg0 + 0);
    if (base != 0) {
        p = *(unsigned char **)((char *)base + 8);
        n = *(int *)((char *)base + 12);
    }
    func_003F9698(D_00475D78, func_001D4010((char *)arg0 + 16), p, n);
    if (n > 0) {
        int i = n;
        do {
            unsigned char c = *p;
            p++;
            func_003F9698(D_00475DB0, c);
            i--;
        } while (i != 0);
    }
    func_003F9698(D_00475DB8);
}
