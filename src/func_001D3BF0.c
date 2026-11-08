typedef struct Node3920 {
    struct Node3920 *data;
    struct Node3920 *next;
} Node3920;

int func_001D3920(void *arg0) {
    Node3920 *v = *(Node3920 **)((char *)arg0 + 4);
    int ret;
    ret = 0;
    if (v == (Node3920 *)arg0) {
        return 0;
    }
    ret = *(int *)v;
    if (v == (Node3920 *)arg0) {
        ret = 0;
    }
    return ret;
}

typedef struct {
    char *base;
    char *cur;
    char *end;
} Alloc3BB8;

void *func_001D3BB8(Alloc3BB8 *arg0, int arg1) {
    char *cur = arg0->cur;
    char *next = cur + ((arg1 + 3) & -4);
    if ((unsigned int)next < (unsigned int)arg0->end) {
        arg0->cur = next;
        return cur;
    }
    return 0;
}

extern void func_001D3D18(void *arg0, int arg1);

void *func_001D3BF0(void *arg0) {
    volatile int dummy[4];
    (void)dummy;
    *(int *)((char *)arg0 + 0x0) = 0;
    *(int *)((char *)arg0 + 0x4) = 0;
    *(int *)((char *)arg0 + 0x8) = 0;
    *(int *)((char *)arg0 + 0xC) = 0;
    func_001D3D18(arg0, 0x8000);
    return arg0;
}
