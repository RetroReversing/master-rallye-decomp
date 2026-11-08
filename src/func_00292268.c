void func_002924A0(void *);
void *func_002932A8(int);
int func_00293668(void);
void func_002A5790(void *, void *, void *);

void *func_00292268(void *arg0, int arg1) {
    int i;
    int *p;
    void *tmp;
    void **end;
    void **cap;
    void *sp_arg;

    p = (int *)arg0;
    for (i = 3; i != -1; i--) {
        p[0] = 0;
        p[1] = 0;
        p += 2;
    }

    ((int *)arg0)[8] = 0;
    ((int *)arg0)[11] = 0;
    ((int *)arg0)[12] = 0;
    ((int *)arg0)[9] = 0;

    func_002924A0(arg0);

    if (arg1 == 1) {
        tmp = func_002932A8(func_00293668());
        sp_arg = arg0;
        end = *(void ***)((char *)tmp + 4);
        cap = *(void ***)((char *)tmp + 8);
        if (end != cap) {
            if (end != 0) {
                *end = arg0;
            }
            *(void ***)((char *)tmp + 4) = *(void ***)((char *)tmp + 4) + 1;
        } else {
            func_002A5790(tmp, end, &sp_arg);
        }
    }

    return arg0;
}
