/* func_001D3920 */
typedef struct Node3920 {
    int data;
    struct Node3920 *next;
} Node3920;

int func_001D3920(void *arg0) {
    Node3920 *v;
    int ret;

    v = *(Node3920 **)((char *)arg0 + 4);
    ret = 0;
    if (v != (Node3920 *)arg0) {
        if (v != (Node3920 *)arg0)
            ret = *(int *)v;
    }
    return ret;
}

/* func_001D35B0 */
extern void *func_002C7190(void);
extern void func_001DAD18(void *, void *);
typedef void (*VFunc)(void *);

void func_001D35B0(void *arg0) {
    void *ctx;
    void *vobj;
    VFunc fn;

    ctx = func_002C7190();
    func_001DAD18(*(void **)((char *)ctx + 0x14), (char *)arg0 + 4);
    vobj = *(void **)((char *)arg0 + 0x14);
    fn = *(VFunc *)((char *)vobj + 0x14);
    fn((char *)arg0 + *(short *)((char *)vobj + 0x10));
}

/* func_001D3568 */
void func_001D3568(void *arg0) {
    void *ctx;
    void *vobj;
    VFunc fn;

    ctx = func_002C7190();
    func_001DAD18(*(void **)((char *)ctx + 8), (char *)arg0 + 4);
    vobj = *(void **)((char *)arg0 + 0x14);
    fn = *(VFunc *)((char *)vobj + 0xC);
    fn((char *)arg0 + *(short *)((char *)vobj + 8));
}

/* func_001D3D18 */
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
    int need = arg1 + 0x7FFF;
    int cap = 0x7FFF;
    int count;

    if (need > -1)
        cap = need;
    count = cap >> 15;

    while ((unsigned int)((v->cur - v->begin) >> 2) < (unsigned int)count) {
        void *tmp = func_001D3AF8(D_002AD408(0xC), 0x8000);
        void *slot;
        slot = (void *)tmp;
        if (v->cur != v->end) {
            if (v->cur != 0)
                *(void **)v->cur = slot;
            v->cur += 4;
        } else {
            func_001D7EC0(v, v->cur, &slot);
        }
    }
}
