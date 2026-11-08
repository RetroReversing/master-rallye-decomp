extern void D_002AD390(void *);
extern void *func_001D56B0(void);
extern void *func_001D5900(void);
extern unsigned char D_00476648[];

int func_001D3920(void *arg0) {
    int *v = *(int **)((char *)arg0 + 4);
    int ret = 0;
    if (v != (int *)arg0 && v != (int *)arg0) {
        ret = *v;
    }
    return ret;
}

void func_001D5498(void *arg0, int arg1) {
    *(void **)((char *)arg0 + 4) = &D_00476648;
    if (*(int *)arg0 != 0) {
        *(char *)0 = 0;
    }
    if (arg1 & 1) {
        D_002AD390(arg0);
    }
}

void *func_001D54D8(void *arg0) {
    void **self = (void **)arg0;
    void **node = self + 1;
    void **other;
    void **tmp;
    void **tmp2;

    self[1] = 0;
    node[2] = node;
    node[1] = node;
    func_001D56B0();
    self[1] = arg0;
    tmp = node[2];
    tmp2 = node[1];
    other = (void **)func_001D5900() + 2;
    ((void **)tmp2)[2] = tmp;
    ((void **)tmp)[1] = tmp2;
    node[2] = other;
    node[1] = other[1];
    ((void **)other[1])[2] = node;
    other[1] = node;
    return arg0;
}

void *func_001D5550(void *arg0, void *arg1) {
    void **self = arg0;
    void **node = (void **)((char *)arg0 + 4);
    void **other = arg1;
    void **t1;
    void **t2;

    self[1] = 0;
    node[2] = node;
    node[1] = node;
    func_001D56B0();
    self[1] = arg0;
    t2 = (void **)node[2];
    t1 = (void **)node[1];
    ((void **)t1)[2] = t2;
    ((void **)t2)[1] = t1;
    node[1] = other[1];
    node[2] = other;
    ((void **)other[1])[2] = node;
    other[1] = node;
    return arg0;
}
