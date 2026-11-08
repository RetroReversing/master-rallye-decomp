typedef struct Node {
    struct Node *data;
    struct Node *next;
} Node;

int func_001D3920(void *arg0) {
    Node *v;
    int ret;

    v = *(Node **)((char *)arg0 + 4);
    ret = 0;
    if (v != arg0) {
        if (v != arg0) {
            ret = *(int *)v;
        }
    }
    return ret;
}

extern void func_001D1900(void *);
extern void func_001D3250(void *, int);
extern void D_002AD390(void *);

void func_001D39A0(void *arg0) {
    Node *list;
    Node *n;
    Node *node;

    list = (Node *)((char *)arg0 + 0xC);
    n = list->next;
    if (n != list) {
        do {
            node = 0;
            if (n != list) {
                node = n->data;
            }
            if (node != 0) {
                func_001D1900((char *)node + 4);
                func_001D3250(node, 2);
                D_002AD390(node);
            }
            n = list->next;
        } while (n != list);
    }
}

extern int func_002B1FC0(int);
extern void func_003F9698(const char *, int);
extern int D_00426298;
extern const char D_00475E38[];

typedef struct Bucket {
    char *cur;
    char *base;
    char *end;
} Bucket;

void *func_001D3AF8(Bucket *arg0, int arg1) {
    char *p;

    p = (char *)func_002B1FC0(arg1);
    arg0->end = p + arg1;
    arg0->cur = p;
    arg0->base = p;
    D_00426298++;
    func_003F9698(D_00475E38, arg1);
    return arg0;
}

extern void *func_002C7190(void);
extern void func_001DAD18(void *, void *);

typedef void (*VFunc)(void *);

void func_001D3740(void *arg0) {
    void *ctx;
    void *vobj;
    VFunc fn;

    ctx = func_002C7190();
    func_001DAD18(*(void **)((char *)ctx + 0x14), (char *)arg0 + 4);
    vobj = *(void **)((char *)arg0 + 0x14);
    fn = *(VFunc *)((char *)vobj + 0x34);
    fn((char *)arg0 + *(short *)((char *)vobj + 0x30));
}
