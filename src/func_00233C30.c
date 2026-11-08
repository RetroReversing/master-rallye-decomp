/* identical to func_001D3250 (matched), with its names changed by decompdecomp */
typedef struct Node3920 { int data; struct Node3920 *next; } Node3920;
int func_001D3920(void *arg0) {
    Node3920 *v = *(Node3920 **)((char *)arg0 + 4);
    int ret = 0;
    if (v != arg0 && v != arg0) {
        ret = v->data;
    }
    return ret;
}

typedef struct VtAdj3250 {
    s16 adjust;
    s16 pad;
    void (*fn)(void *, int);
} VtAdj3250;

extern void D_002AD390(void *);

void func_00233C30(void **arg0, int arg1) {
    void *p = *arg0;
    if (p != NULL) {
        int ref = *(int *)p;
        ref--;
        *(int *)p = ref;
        if (ref == 0) {
            char *base = *(char **)((char *)p + 4);
            VtAdj3250 *e = (VtAdj3250 *)(base + 8);
            e->fn((char *)p + e->adjust, 3);
        }
        *arg0 = NULL;
    }
    if (arg1 & 1) {
        D_002AD390(arg0);
    }
}

int func_001D3208(char *p) {
    char *q = *(char **)p;
    if (q) {
        char *v = *(char **)q;
        return ((int (*)(void *))*(void **)(v + 0x24))(q + *(s16 *)(v + 0x20));
    }
    return 0;
}

typedef struct { u32 *begin; u32 *end; u32 *cap; } V3178;
extern void func_002B2028(void *);
extern u32 D_0040E618[];

void func_001D3178(V3178 *p, int f) {
    u32 *b = p->begin;
    int n = (int)(p->cap - b) >> 2;
    if (n != 0) {
        if (n * 4 != 0) {
            func_002B2028(b);
        } else {
            *b = D_0040E618[-1];
            D_0040E618[-1] = (u32)b;
        }
    }
    if (f & 1) D_002AD390(p);
}
