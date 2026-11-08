extern void *func_003A80D0(void *arg0);
extern void *func_003A8118(void *arg0);
extern void *func_003AEF40(void *arg0, void *arg1, void *arg2);

void func_003A81C0(void *arg0) {
    void *s0;
    void *s1;
    void *s2;
    s2 = arg0;
    s0 = func_003A80D0(s2);
    s1 = func_003A8118(s2);
    func_003AEF40(s2, s0, s1);
}

int func_003A8088(void *arg0) {
    volatile int *v1;
    volatile int *p;
    int a;
    int v0;
    v1 = (volatile int *)arg0;
    p = v1;
    a = p[1];
    v0 = a;
    if (0) goto L;
    if (0) goto L;
    if (0) goto L;
L:
    return v0;
}

int func_003A8040(void *arg0) {
    volatile int *v1;
    volatile int *p;
    int a;
    int v0;
    v1 = (volatile int *)arg0;
    p = v1;
    a = p[0];
    v0 = a;
    if (0) goto L;
    if (0) goto L;
    if (0) goto L;
L:
    return v0;
}
