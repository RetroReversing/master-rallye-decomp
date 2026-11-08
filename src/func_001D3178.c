int func_001D3920(void *arg0) {
    int *v = *(int **)((char *)arg0 + 4);
    int ret = 0;
    if (v != arg0 && v != arg0) {
        ret = *v;
    }
    return ret;
}

int func_001D3208(char *p) {
    char *q = *(char **)p;
    if (q) {
        char *v = *(char **)q;
        return ((int (*)(void *))*(void **)(v + 0x24))(q + *(s16 *)(v + 0x20));
    }
}

typedef struct { u32 pad; u32 *begin; u32 *end; u32 *cap; } V3178;
extern void D_002AD390(void *);
extern void func_002B2028(void *);
extern u32 D_0040E618[];

void func_001D3178(V3178 *p, int f) {
    u32 *b = p->begin;
    int n = (int)((char *)p->cap - (char *)b) >> 2;
    if (n != 0) {
        if ((n << 2) != 0) {
            func_002B2028(b);
        } else {
            *b = D_0040E618[-1];
            D_0040E618[-1] = (u32)b;
        }
    }
    if (f & 1) D_002AD390(p);
}
