extern void func_002027E8(void *);
extern void func_002028B0(void *, int);
extern void func_002B2028(void *);
extern void D_002AD390(void *);
extern unsigned int D_0040E618[];

void *func_00204078(void *arg0) {
    func_002027E8(arg0);
    {
        int *p = (int *)((char *)arg0 + 0xC);
        p[0] = 0;
        p[2] = 0;
        p[1] = 0;
    }
    return arg0;
}

typedef struct V040B0 {
    unsigned int pad;
    unsigned int *begin;
    unsigned int *end;
    unsigned int *cap;
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

typedef struct Item04270 {
    int a;
    int b;
    int c;
} Item04270;

typedef struct Vec04270 {
    char *base;
    char *end;
} Vec04270;

int func_00204270(Vec04270 *arg0, int arg1) {
    char *base = arg0->base;
    int count = (arg0->end - base);
    count = (count * 0xAAAAAAAB) >> 2; /* /12 approximation? check asm uses mult+sra */
    int idx = arg1;
    if (arg1 < count) {
        int i = arg1;
        float maxv = 0.0f;
        char *p = base + i * 12;
        do {
            float v = *(float *)(*(int *)p + arg1 * 4);
            if (v < 0.0f) v = -v;
            if (maxv < v) {
                maxv = v;
                idx = i;
            }
            i++;
            p += 12;
        } while (i < count);
    }
    return idx;
}
