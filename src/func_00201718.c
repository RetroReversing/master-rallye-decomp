extern u32 D_0040E618[];
extern void D_002AD390(void *);
extern void func_002028B0(void *, s32);
extern void func_00217CB0(void *);
extern void func_002B2028(void *);

typedef struct {
    void **begin;
    void **end;
    void **cap;
} Vec;

typedef struct {
    Vec v0;
    Vec v1;
    Vec v2;
    Vec v3;
    Vec v4;
    Vec v5;
    Vec v6;
    Vec v7;
    Vec v8;
    void **list1;
    void **list2;
} Obj;

static __inline__ void free_vec(Vec *v) {
    void **cap = v->cap;
    void **begin = v->begin;
    s32 n = cap - begin;
    if (n != 0) {
        s32 size = n << 2;
        if (size != 0) {
            func_002B2028(begin);
        } else {
            *(void **)begin = (void *)D_0040E618[-1];
            D_0040E618[-1] = (u32)begin;
        }
    }
}

void func_00201718(Obj *a, s32 flags) {
    func_00217CB0(&a->list2);
    func_002B2028(a->list2);
    func_00217CB0(&a->list1);
    func_002B2028(a->list1);
    free_vec(&a->v8);
    free_vec(&a->v7);
    func_002028B0(&a->v6, 2);
    free_vec(&a->v5);
    free_vec(&a->v4);
    free_vec(&a->v3);
    free_vec(&a->v2);
    func_002028B0(&a->v1, 2);
    free_vec(&a->v0);
    if (flags & 1)
        D_002AD390(a);
}
