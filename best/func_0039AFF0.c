extern void func_003A6BE0(void *);
extern void func_003A6C08(void *, void *);

void func_0039AFF0(void *arg0) {
    void *sp[2];
    void **s0;
    void *v0;
    void *v1;

    s0 = (void **)arg0;
    v0 = s0[0];
    v1 = *(void **)v0;
    sp[0] = v1;
    while (sp[0] != s0) {
        sp[1] = sp[0];
        v0 = sp[0];
        v1 = *(void **)v0;
        sp[0] = v1;
        func_003A6BE0((char *)sp[1] + 8);
        func_003A6C08(s0, sp[1]);
    }
    v0 = s0[0];
    v1 = s0[0];
    *(void **)v0 = v1;
    v0 = s0[0];
    v1 = s0[0];
    ((void **)v0)[1] = v1;
}
