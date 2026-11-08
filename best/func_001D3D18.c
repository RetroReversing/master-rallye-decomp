typedef struct Node3920 {
    int data;
    struct Node3920 *next;
} Node3920;

int func_001D3920(void *arg0) {
    Node3920 *v;
    int ret;

    v = *(Node3920 **)((char *)arg0 + 4);
    ret = 0;
    if (v == (Node3920 *)arg0)
        return 0;
    if (v != (Node3920 *)arg0)
        return *(int *)v;
    return 0;
}

extern void *D_002AD408(int);
extern void *func_001D3AF8(void *, int);
extern void func_001D7EC0(void *, void *, void *);

typedef struct Vec3D18 {
    char *begin;
    char *cur;
    char *end;
} Vec3D18;

void func_001D3D18(void *arg0, int arg1) {
    Vec3D18 *v = (Vec3D18 *)arg0;
    int a1 = arg1 + 0x7FFF;
    int cap = a1 + 0x7FFF;
    int count;

    if (-1 < a1)
        cap = a1;
    count = cap >> 15;

    while ((unsigned int)((v->cur - v->begin) >> 2) < (unsigned int)count) {
        void *slot = func_001D3AF8(D_002AD408(0xC), 0x8000);
        if (v->cur != v->end) {
            if (v->cur != 0)
                *(void **)v->cur = slot;
            v->cur += 4;
        } else {
            func_001D7EC0(v, v->cur, &slot);
        }
    }
}
