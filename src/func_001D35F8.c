typedef struct Node3920 {
    struct Node3920 *data;
    struct Node3920 *next;
} Node3920;

int func_001D3920(void *arg0) {
    Node3920 *v;
    int ret;

    v = *(Node3920 **)((char *)arg0 + 4);
    ret = 0;
    if (v != arg0) {
        if (v != arg0) {
            ret = *(int *)v;
        }
    }
    return ret;
}

typedef struct {
    char *cur;
    char *base;
    char *end;
} Alloc3BB8;

void *func_001D3BB8(Alloc3BB8 *arg0, int arg1) {
    unsigned int size;
    char *cur;
    char *next;

    cur = arg0->cur;
    size = (arg1 + 3) & ~3;
    next = cur + size;
    if (next < arg0->end) {
        arg0->cur = next;
        return cur;
    }
    return 0;
}

extern void func_001D3D18(void *, int);

void *func_001D3BF0(void *arg0) {
    *(int *)((char *)arg0 + 0) = 0;
    *(int *)((char *)arg0 + 4) = 0;
    *(int *)((char *)arg0 + 8) = 0;
    *(int *)((char *)arg0 + 12) = 0;
    func_001D3D18(arg0, 0x8000);
    return arg0;
}

extern void *func_002C7190(void);
extern void func_001DAD18(void *, void *);

typedef void (*VFunc35F8)(void *);

void func_001D35F8(void *arg0) {
    void *ctx;
    void *vobj;
    VFunc35F8 fn;

    ctx = func_002C7190();
    func_001DAD18(*(void **)((char *)ctx + 0x14), (char *)arg0 + 4);
    vobj = *(void **)((char *)arg0 + 0x14);
    fn = *(VFunc35F8 *)((char *)vobj + 0x1C);
    fn((char *)arg0 + *(short *)((char *)vobj + 0x18));
}
