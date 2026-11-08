void func_002924A0(void *);
void *func_002932A8(int);
int func_00293668(void);
void func_002A5790(void *, void *, void *);

void *func_002921B8(void *arg0) {
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

    tmp = func_002932A8(func_00293668());
    sp_arg = arg0;
    end = *(void ***)((char *)tmp + 4);
    cap = *(void ***)((char *)tmp + 8);
    if (end != cap) {
        if (end != 0) {
            *end = arg0;
        }
        *(void **)((char *)tmp + 4) = (char *)*(void **)((char *)tmp + 4) + 4;
    } else {
        func_002A5790(tmp, end, &sp_arg);
    }

    return arg0;
}

extern s32 func_0028F600(s32);
extern s32 func_0028F658(void *, s32, void *);

void func_0028F2E0(void *arg0, void *arg1) {
    void *p;
    s32 a2;

    *(void **)((char *)arg0 + 0x1C) = arg1;
    p = *(void **)((char *)arg1 + 0x4C);
    if (p != 0) {
        a2 = *(s32 *)((char *)p + 8);
        if (*(s32 *)((char *)arg0 + 0x14) == 0) {
            func_0028F600(a2 - 0x28);
        } else {
            func_0028F658(arg0, a2 - 0x28, (char *)arg0 + 0x18);
        }
        *(s32 *)((char *)arg0 + 0xC) = 1;
    }
}
