int func_003A34D0(void *, int);
void func_003B0EE0(void *);
void func_003B1340(void *, void *);
int func_003B13A0(void *, void *);

typedef struct {
    int _pad[4];
    int ret;
    char buf[0x4c];
} S_ABDC0;

int func_003ABDC0(void *arg0, void *arg1) {
    S_ABDC0 s;
    func_003B0EE0(&s);
    func_003B1340(&s, arg1);
    s.ret = func_003B13A0(arg0, &s);
    func_003A34D0(&s, 2);
    return s.ret;
}

void *func_003A3268(void *);
void func_003A3390(void *);
int func_003AB660(void *);

void *func_003ABCC8(void *arg0, void *arg1) {
    void *a0 = arg0;
    void *a1 = arg1;
    if (a1 != a0) {
        func_003A3390(func_003A3268(a0));
        *(int *)a0 = func_003AB660(func_003A3268(a1));
    }
    return a0;
}

int func_003AB828(int *arg0) {
    arg0[1] = arg0[1] - 1;
    return arg0[1];
}
