extern void D_002AD390(void *);
extern void *func_001D56B0(void);
extern void *func_001D5900(void);
extern unsigned char D_00476648[];

int func_001D3920(void *arg0) {
    int *v = *(int **)((char *)arg0 + 4);
    if (v != (int *)arg0) {
        return *v;
    }
    return 0;
}

void *func_001D5498(void *arg0, int arg1) {
    int *a = (int *)arg0;
    a[1] = (int)&D_00476648;
    if (a[0] != 0) {
        *(volatile char *)0 = 0;
    }
    if (arg1 & 1) {
        D_002AD390(arg0);
    }
    return arg0;
}

void *func_001D54D8(void *arg0) {
    void **self = (void **)arg0;
    void **node = self + 1;
    void **other;
    void **tmp;

    self[1] = 0;
    node[2] = node;
    node[1] = node;
    func_001D56B0();
    self[1] = arg0;
    other = (void **)func_001D5900() + 2;
    tmp = node[2];
    ((void **)node[1])[2] = tmp;
    ((void **)tmp)[1] = node[1];
    node[2] = other;
    node[1] = other[1];
    ((void **)other[1])[2] = node;
    other[1] = node;
    return arg0;
}

void *func_001D5550(void *arg0, void *arg1) {
    void **self = (void **)arg0;
    void **node = self + 1;
    void **other = (void **)arg1;
    void **tmp;
    void **tmp2;

    self[1] = 0;
    node[2] = node;
    node[1] = node;
    func_001D56B0();
    self[1] = arg0;
    tmp = node[2];
    tmp2 = node[1];
    ((void **)tmp2)[2] = tmp;
    ((void **)tmp)[1] = tmp2;
    node[1] = other[1];
    node[2] = other;
    ((void **)other[1])[2] = node;
    other[1] = node;
    return arg0;
}
