extern void func_002028B0(void *, int);
extern void func_002B2028(void *);
extern void D_002AD390(void *);
extern unsigned int D_0040E618[];

typedef struct V040B0 {
    unsigned int pad[3];
    unsigned int *begin; /* +0xC */
    unsigned int pad2;
    unsigned int *cap;   /* +0x14 */
} V040B0;

void func_002040B0(V040B0 *p, int f) {
    unsigned int *b = p->begin;
    int n = (int)((char *)p->cap - (char *)b) >> 2;
    if (n != 0) {
        if ((n << 2) != 0) {
            func_002B2028(b);
        } else {
            *b = D_0040E618[-1];
            D_0040E618[-1] = (unsigned int)b;
        }
    }
    func_002028B0(p, 2);
    if (f & 1) D_002AD390(p);
}
